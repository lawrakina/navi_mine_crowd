using System;
using UnityEngine;


namespace _pj108.Code.Units {
    public class AnimationCommands: MonoBehaviour {
        public event Action OnAttack = () => { };
        public event Action OnHit = () => { };

        public void Attack() {
            OnAttack.Invoke();
        }

        public void Hit() {
            OnHit.Invoke();
        }
    }
}