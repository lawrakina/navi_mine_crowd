using _pj108.Code.BaseLogic;
using _pj108.Code.Player;
using Mono.Cecil;
using System;
using System.Collections;
using System.Threading.Tasks;
using UnityEngine;

namespace _pj108.Code.Miner
{
    public class MinerController : BaseController, IExecute {
        public Animator Animator { get; set; }


        #region PrivateData

        private static readonly int MINE_HASH = Animator.StringToHash("Mine");

        private CaptainModel _model;
        private LeaderSettings _settings;
        private MinerView _view;
        private float _leftTime;
        private float _mineLeftTime;
        private Collider _target;
        private bool _isTarget;
        private bool _doMine;
        private bool _startMine = false;
        private bool _canMine = true;
        private ResourceMining _resource;
        #endregion


        public event Action<ResourceMining> OnStartMine = delegate { };
        public event Action<ResourceMining> OnMine = delegate {  };
        public event Action OnCompleteMine = delegate { };

        public MinerController(MinerView minerView, CaptainModel model, LeaderSettings settings) {
            _model = model;
            _settings = settings;
            _view = minerView;

            _leftTime = 0f;

            _view.OnStartMine += StartMining;
            _view.OnMine += DoMining;
            
            Controllers.Add(this);
        }

        public void ToogleMine(bool value)
        {
            _canMine = value;
        }

        private void StartMining(Collider mineObject)
        {
            if (_doMine) return;
            if (mineObject.TryGetComponent(out ResourceMining resource))
            {
                if (_target == null)
                {
                    _target = mineObject;
                }
                OnStartMine?.Invoke(resource);

                _doMine = true;
            }
        }

        private void DoMining(Collider mineObject) {
            if (_doMine) return;
            if (mineObject.TryGetComponent(out ResourceMining resource))
            {
                if (_target == null)
                {
                    _target = mineObject;
                }

                _doMine = true;
            }
        }

        public void Execute(float deltaTime) 
        {
            TryMining(deltaTime);
        }

        private bool IsMineCooldown(float deltaTime)
        {
            _leftTime -= deltaTime;
            if (!(_leftTime < 0)) return false;

            return true;
        }

        private void TryMining(float deltaTime)
        {
            if (!_doMine)
            {
                CheckMineComplete(deltaTime);
                return;
            }

            if (_target == null)
            {
                _doMine = false;
                return;
            }

            if (!IsMineCooldown(deltaTime)) return;

            if (!_target.TryGetComponent(out ResourceMining resource)) return;

            MiningAsync(resource);
        }

        private void CheckMineComplete(float deltaTime)
        {
            if (_startMine)
            {
                _mineLeftTime -= deltaTime;
                if (_mineLeftTime < 0)
                {
                    OnCompleteMine?.Invoke();
                    _startMine = false;
                }
            }
        }

        private void MiningAsync(ResourceMining resource)
        {
            if (!_canMine) return;
            Animator.SetTrigger(MINE_HASH);
            _mineLeftTime = _settings.MinerSettings.MineEndChecker;
            OnMine?.Invoke(resource);

            _startMine = true;
            var tnt = resource as TNTResource;
            if (tnt != null)
            {
                tnt.Boom(_model);
            }
            else
            {
                if (!resource.Mining()) return;
            }

            _leftTime = _settings.MinerSettings.MineDelay;

            for (int i = 0; i < resource.HasParts; i++)
            {
                _model.PartsOfUnits.Add(new PartOfUnit(resource)); //ToDo maybe need insert ResourceType
            }
            _doMine = false;
        }

        public override void Dispose() {
            base.Dispose();
            Controllers.Remove(this); 
        }
    }
}