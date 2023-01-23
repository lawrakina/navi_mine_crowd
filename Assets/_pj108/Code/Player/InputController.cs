using _pj108.Code.BaseLogic;
using _pj108.Code.Input;
using UnityEngine;


namespace _pj108.Code.Player {
    public class InputController : BaseLogic.BaseController, IExecute {
        private CaptainModel _model;
        private Vector2 _oldInput;
        private LeaderSettings _settings;

        public InputController(CaptainModel captainModel, LeaderSettings playerSettings) {
            _model = captainModel;
            _settings = playerSettings;

            JoystickInput.SetEnable(false);
            Controllers.Add(this);
        }

        public override void Init() {
            base.Init();
            
            JoystickInput.SetEnable(true);
        }

        public void Execute(float deltaTime) {
            var inputDirection = JoystickInput.Direction;
            var haveInput = !inputDirection.Equals(Vector2.zero);

            if (haveInput)
            {
                _model.Input.Execute(new Vector3(inputDirection.x, 0, inputDirection.y));
            }

            if (!haveInput && inputDirection != _oldInput)
            {
                _model.CaptainStay.Execute();
            }

            _oldInput = inputDirection;
        }
    }
}