using System.Collections;
using UnityEngine;
using UnityEngine.Pool;


namespace _pj108.Code.Pools
{
    public class AutoReturnToPool : MonoBehaviour, IPoolable<AutoReturnToPool>
    {
        [SerializeField] private float _delaySec;

        private WaitForSeconds _delay;

        public IObjectPool<AutoReturnToPool> Pool { get; set; }

        private void Awake()
        {
            _delay = new WaitForSeconds(_delaySec);
        }

        private void OnEnable()
        {
            StartCoroutine(Hide());
        }

        private IEnumerator Hide()
        {
            yield return _delay;

            Pool.Release(this);
        }
    }
}