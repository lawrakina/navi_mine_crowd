using System;
using UnityEngine;


namespace _pj108.Code.Miner {
    public class MinerView : MonoBehaviour {
        public Action<Collider> OnMine = delegate {  };
        public Action<Collider> OnStartMine = delegate { };

        private void OnTriggerEnter(Collider other)
        {
            OnStartMine?.Invoke(other);
        }

        private void OnTriggerStay(Collider other) {
            OnMine.Invoke(other);
        }

        private void OnDestroy() {
            OnMine = null;
        }
    }
}