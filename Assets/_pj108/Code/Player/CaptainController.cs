using _pj108.Code.BaseLogic;
using _pj108.Code.Captain;
using _pj108.Code.Levels;
using _pj108.Code.Miner;
using NavySpade.Modules.Extensions.UnityTypes;
using System;
using UnityEngine;
using Object = UnityEngine.Object;

namespace _pj108.Code.Player
{
    public abstract class CaptainController : BaseController {
        public Transform Transform => _view.transform;
        public Vector3 SpawnPosition => Transform.position + Transform.backward();

        public bool IsAlive { get; private set; } = true;

        #region PrivateData

        protected CaptainModel _model;
        protected LeaderSettings _settings;

        protected CaptainView _view;
        private Attractor _attractor;
        private SquadCounter _counterView;
        private Animator _animator;
        protected SquadController _squad;
        protected MinerController _miner;
        protected BattleModule _battle;

        #endregion

        public CaptainView View => _view;
        public int UnitsCount => _model.UnitsController.Count;
        public Action OnDied;

        protected CaptainController(SceneData sceneData, CaptainModel captainModel, LeaderSettings playerSettings,
                                    Vector3 captainPosition) {
            _model = captainModel;
            _settings = playerSettings;

            _view = Object.Instantiate(_settings.CaptainSettings.CaptainPrefab, sceneData.Actors);

            _attractor = _view.Attractor;
            _attractor.On();

            _counterView = _view.CounterView;

            _battle = _view.GetComponentInChildren<BattleModule>();
            _battle.Init(this, playerSettings, _model);

            _squad = new SquadController(_model, this, _attractor, _counterView, _settings, _battle);
            SetMaterial(playerSettings.SquadSettings.OwnerMaterialColor);
            var minerView = _view.GetComponentInChildren<MinerView>();
            _miner = new MinerController(minerView, _model, _settings);


            _animator = _miner.Animator = _view.Animator;
            
            Transform.position = captainPosition;
        }

        public void SetMaterial(Material squadMaterial)
        {
            for (int i = 0; i < _view.Renderers.Count; i++)
            {
                var renderer = _view.Renderers[i];
                var material = new Material(squadMaterial);
                renderer.material = material;
            }
        }

        public virtual void Die()
        {
            IsAlive = false;
            OnDied?.Invoke();
            Object.Destroy(_view.gameObject);
            Dispose();
        }

        public override void Dispose() {
            base.Dispose();
            _squad.Dispose();
            _miner.Dispose();
        }
    }
}