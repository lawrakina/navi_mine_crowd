using UnityEngine;
using UnityEngine.Pool;


namespace _pj108.Code.Pools
{
    public interface IPoolable<T> where T : MonoBehaviour
    {
        public IObjectPool<T> Pool { get; set; }
    }
}