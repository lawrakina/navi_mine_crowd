using System;
using _pj108.Code.Units;
using UnityEngine;


namespace _pj108.Code.Player {
    [RequireComponent(typeof(CharacterController))]
    internal class PlayerMoveBehaviour : UnitMovement {
        [SerializeField]
        private CharacterController _characterController;
        [field: System.NonSerialized]
        public Animator Animator { get; set; }

        private static readonly int Speed = Animator.StringToHash("Speed");
        private Vector3 _moveVector;
        private LeaderSettings _settings;

        public void Move(Vector3 direction) {
            direction = Camera.main.transform.TransformDirection(direction);
            direction.y = 0f;
            if (direction != Vector3.zero)
                transform.rotation = Quaternion.LookRotation(direction, Vector3.up);

            _characterController.SimpleMove(direction * _settings.CaptainSettings.Speed);
            _moveVector = _characterController.velocity;
        }

        public void Stop() {
            _moveVector = Vector3.zero;
        }

        public void Execute(float deltaTime) {
            Animator.SetFloat(Speed, _moveVector.magnitude / _settings.CaptainSettings.Speed);
        }

        public void Init(LeaderSettings settings) {
            _settings = settings;
        }
    }
}