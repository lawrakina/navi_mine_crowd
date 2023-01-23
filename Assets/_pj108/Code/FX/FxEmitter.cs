using _pj108.Code.Pools;
using UnityEngine;


namespace _pj108.Code.FX {
    public abstract class FxEmitter<T,TV> : MonoBehaviour where T: FxEmitter<T, TV> where TV: MonoBehaviour, IPoolable<TV> {
        [SerializeField] private TV _spawnEffectPrefab;
        [SerializeField] private int _spawnEffectCount;

        public static T Instance { get; set; }
        
        private Pool<TV> _spawnUnitEffectPool;

        protected void Awake() {
            Instance = (T) this;
            _spawnUnitEffectPool =
                new Pool<TV>(_spawnEffectPrefab, transform, _spawnEffectCount);
        }

        public void SpawnUnitFx(Vector3 position, Transform parent) {
            _spawnUnitEffectPool.Get(position, _spawnEffectPrefab.transform.rotation, parent);
        }
    }
}