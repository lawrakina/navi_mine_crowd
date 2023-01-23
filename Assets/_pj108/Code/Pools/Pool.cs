using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.Pool;


namespace _pj108.Code.Pools
{
    public class Pool<T> where T : MonoBehaviour, IPoolable<T>
    {
        private readonly T _prefab;
        private readonly IObjectPool<T> _objectPool;
        private readonly Transform _rootTransform;

        public Pool(T prefab, Transform rootTransform, int capacity = 10)
        {
            _rootTransform = rootTransform;
            _prefab = prefab;
            _objectPool = new ObjectPool<T>(InstantiateObject, OnGet, OnReleased);
            
            var units = new List<T>();
            for (var i = 0; i < capacity; i++)
            {
                var unit = Get(Vector3.zero, quaternion.identity);
                units.Add(unit);
            }
            foreach (var unit in units)
            {
                _objectPool.Release(unit);
            }
        }

        public T Get(Vector3 position, Quaternion rotation)
        {
            return Get(position, rotation, _rootTransform);
        }

        public T Get(Transform parent)
        {
            return Get(Vector3.zero, Quaternion.identity, parent);
        }

        public T Get(Vector3 position, Transform parent)
        {
            return Get(position, Quaternion.identity, parent);
        }

        public T Get(Vector3 position, Quaternion rotation, Transform parent)
        {
            var obj = _objectPool.Get();
            obj.transform.position = position;
            obj.transform.rotation = rotation;
            obj.transform.SetParent(parent);
            return obj;
        }

        public void Clear()
        {
            _objectPool.Clear();
        }

        private T InstantiateObject()
        {
            var obj = Object.Instantiate(_prefab);
            obj.Pool = _objectPool;
            return obj;
        }

        private void OnGet(T obj)
        {
            obj.gameObject.SetActive(true);
        }

        private void OnReleased(T obj)
        {
            obj.gameObject.SetActive(false);
            obj.transform.SetParent(_rootTransform);
        }

        public void Release(T obj)
        {
            _objectPool.Release(obj);
        }
    }
}