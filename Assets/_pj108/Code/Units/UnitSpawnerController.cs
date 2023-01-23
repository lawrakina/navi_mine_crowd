using System;
using _pj108.Code.BaseLogic;
using _pj108.Code.Extension;
using _pj108.Code.Player;
using UnityEngine;
using Object = UnityEngine.Object;


namespace _pj108.Code.Units {
    public class UnitSpawnerController : BaseController, IExecute{
        private NeutralModel _model;
        private SpawnUnitsData _data;

        #region PrivateData

        private static float _leftTime;
        private bool _isOn;
        private static bool _needSpawn;
        private static int _count;
        private static Action<UnitController> _callback;

        #endregion 
        
        public UnitSpawnerController(NeutralModel neutralModel, SpawnUnitsData spawnUnitsData) {
            _model = neutralModel;
            _data = spawnUnitsData;
            Controllers.Add(this);
        }

        public override void Init() {
            base.Init();
            for (var i = 0; i < _data.PrespawnUnitCount; i++)
            {
                CreateUnit();
            }
        }

        public void Execute(float deltaTime) {
            _leftTime -= Time.deltaTime;

            if (_leftTime > 0) return;

            _leftTime = _data.SpawnPeriod;


            if (_needSpawn)
            {
                _needSpawn = false;
                var angle = 360 * Mathf.Deg2Rad;
                for (int i = 0; i < _count; i++)
                {
                    CreateUnit();//.AddForce(angle / _count * i);
                }
                _callback = null;
            }
            else
            {
                CreateUnit();
                _callback = null;
            }
        }

        private void CreateUnit() {
            var view = Object.Instantiate(_data.NeutralUnit, LevelExtensions.GetFreePosition(), Quaternion.identity);
            view.transform.SetParent(_data.NeutralPlace);
            var unitModel = new UnitModel();
            var controller = new UnitController(view, unitModel);
            _callback?.Invoke(controller);
        }

        public static void SpawnUnit(Action<UnitController> addToSquad) {
            _callback = addToSquad;
            _leftTime = 0;
        }

        public static void ForceSpawnUnit(Action<UnitController> addToSquad, int count)
        {

            _callback = addToSquad;
            _needSpawn = true;
            _count = count;
            _leftTime = 0;
        }


    }
}