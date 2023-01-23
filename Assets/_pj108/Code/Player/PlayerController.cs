using _pj108.Code.BaseLogic;
using _pj108.Code.Levels;
using Cinemachine;
using UniRx;
using UnityEngine;


namespace _pj108.Code.Player {
    public class PlayerController : CaptainController, IExecute {
        private PlayerMoveBehaviour _mover;
        private InventoryController _inventory;

        public InventoryController Inventory => _inventory;

        public PlayerController
        (
            SceneData sceneData,
            CaptainModel captainModel,
            LeaderSettings playerSettings,
            Vector3 captainPosition)
            : base(sceneData, captainModel, playerSettings, captainPosition) {
            _mover = _view.GetComponent<PlayerMoveBehaviour>();
            _mover.Init(_settings);
            _mover.Animator = _view.Animator;
            var inventoryView = _view.GetComponentInChildren<InventoryView>();
            inventoryView.Init(this);
            _inventory = new InventoryController(this, inventoryView, captainModel, playerSettings);
            _model.UnitsController.ObserveCountChanged().Subscribe(ChangeCount)
                  .AddTo(_subscriptions);
            Controllers.Add(this);
        }

        public override void Init() {
            base.Init();

            _model.Input.Subscribe(_mover.Move).AddTo(_subscriptions);
            _model.CaptainStay.Subscribe(_ => { _mover.Stop(); }).AddTo(_subscriptions);
        }

        private void ChangeCount(int countUnit) {
            // if (countUnit >= _settings.CameraSettings.UnitCountForChange)
            // {
            //     var camera = CameraManager.Instance.GetActiveCamera();
            //     var transposer = camera.GetCinemachineComponent<CinemachineFramingTransposer>();
            //     transposer.m_CameraDistance = _settings.CameraSettings.CameraDistance;
            // } else
            // {
            //     var camera = CameraManager.Instance.GetActiveCamera();
            //     var transposer = camera.GetCinemachineComponent<CinemachineFramingTransposer>();
            //     transposer.m_CameraDistance = _settings.CameraSettings.CameraDistanceDefault;
            // }
        }

        public void Execute(float deltaTime) {
            _mover.Execute(deltaTime);
        }
    }
}