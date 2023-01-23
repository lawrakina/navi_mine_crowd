using System.Linq;
using _pj108.Code.BaseLogic;
using _pj108.Code.FX;
using _pj108.Code.GameSettings;
using _pj108.Code.Miner;
using _pj108.Code.Player;
using _pj108.Code.Units;
using DG.Tweening;
using UniRx;
using UnityEngine;


namespace _pj108.Code.Captain {
    public class SquadController : BaseController, IExecute {
        private CaptainModel _model;
        private CaptainController _owner;
        private Attractor _attractor;
        private SquadCounter _uiView;
        private BattleModule _battleMoule;
        private LeaderSettings _settings;

        public SquadController(CaptainModel model, CaptainController owner, Attractor attractor, SquadCounter uiView,
                               LeaderSettings settings, BattleModule battleModule) {
            _model = model;
            _settings = settings;
            _owner = owner;
            _attractor = attractor;
            _uiView = uiView;

            _uiView.SetColor(_settings.SquadSettings.Color);
            _attractor.OnAttracted.Subscribe(Attractor_Attracted).AddTo(_subscriptions);
            _model.UnitsController.ObserveCountChanged().Subscribe(count => { _uiView.UpdateCount(count); })
                  .AddTo(_subscriptions);
            Controllers.Add(this);
        }

        public void AddUnit(CollectionAddEvent<PartOfUnit> resource) {
            var resourceTrans = resource.Value.Resource.transform;
            var endPosition = _owner.SpawnPosition;
            resourceTrans.gameObject.isStatic = false;
            if (resourceTrans.TryGetComponent(out Collider col))
            {
                col.enabled = false;
            }
            //resourceTrans.localScale = resourceTrans.localScale / 1.5f;


            var probabilityNewUnit = Settings.Get<GlobalSquadSettings>().LuckForInstancingUnit;
            var createNewUnit = Random.Range(0f, 1f) < probabilityNewUnit;

            var midUnit = _model.UnitsController.FirstOrDefault(x => x.Level == 1);
            var fullUnit = _model.UnitsController.FirstOrDefault(x => x.Level == 2);
            if (midUnit != null)
            {
                endPosition = midUnit.Transform.position;
            }
            else if (fullUnit != null)
            {
                endPosition = fullUnit.Transform.position;
            }

            var flyResource = resourceTrans.DOJump(endPosition, 2, 0, 0.5f);
            
            flyResource.onComplete += () => {
                if (createNewUnit)
                    CreateNewUnit(endPosition);
                else if (midUnit != null)
                    midUnit.Level = 2;
                else if (fullUnit != null)
                {
                    fullUnit.Level = 3;
                    _model.PartsOfUnits.Clear();
                }
                else
                {
                    CreateNewUnit(endPosition);
                }
                FxEmitterSpawnUnit.Instance.SpawnUnitFx(endPosition/*resourceTrans.position*/, null);
                resourceTrans.DOKill();
                var probabilityNewUnit = Settings.Get<GlobalSquadSettings>().LuckForInstancingUnit;

                //UpgradeUnit(Random.Range(0f, 1f) < probabilityNewUnit, endPosition);
                Object.Destroy(resourceTrans.gameObject);
            };
        }

        private void Attractor_Attracted(UnitController unit) {
            unit.Init(_owner, _settings, _model);
            _model.UnitsController.Add(unit);
        }

        private void UpgradeUnit(bool value, Vector3 endPosition) {
            if (value)
            {
                CreateNewUnit(endPosition);
                return;
            }

            var midUnit = _model.UnitsController.FirstOrDefault(x => x.Level == 1);
            if (midUnit != null) midUnit.Level = 2;
            else
            {
                var fullUnit = _model.UnitsController.FirstOrDefault(x => x.Level == 2);
                if (fullUnit != null)
                {
                    fullUnit.Level = 3;
                    _model.PartsOfUnits.Clear();
                } else
                {
                    CreateNewUnit(endPosition);
                }
            }
        }

        public void Execute(float deltaTime) {
            foreach (var unit in _model.UnitsController)
            {
                unit.Move();
            }
        }

        public void CreateNewUnit(Vector3 endPosition) {
            UnitSpawnerController.SpawnUnit(AddToSquad);

            void AddToSquad(UnitController unit) {
                unit.Init(_owner, _settings, _model, level:1);
                _model.UnitsController.Add(unit);
                unit.Transform.position = endPosition;
            }
        }

        public void CreateNewUnitForce(Vector3 endPosition, int count)
        {
            UnitSpawnerController.ForceSpawnUnit(AddToSquad, count);

            void AddToSquad(UnitController unit)
            {
                unit.Init(_owner, _settings, _model, level: 3);
                _model.UnitsController.Add(unit);
                unit.Transform.position = endPosition;
            }
        }

        public override void Dispose() {
            base.Dispose();
            Controllers.Remove(this);
        }
    }
}