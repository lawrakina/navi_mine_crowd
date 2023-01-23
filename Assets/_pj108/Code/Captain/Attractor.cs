using _pj108.Code.Units;
using UniRx;
using UnityEngine;


namespace _pj108.Code.Captain {
    [RequireComponent(typeof(SphereCollider))]
    public class Attractor : MonoBehaviour {
        public ReactiveCommand<UnitController> OnAttracted = new ReactiveCommand<UnitController>();
        private bool _isOn = false;

        private void OnTriggerEnter(Collider other) {
            if (!_isOn) return;
            var unit = other.GetComponent<UnitView>();
            if (unit.WasAttached)
            {
                return;
            }

            OnAttracted.Execute(unit.Controller);
        }

        public void On() {
            _isOn = true;
        }
    }
}