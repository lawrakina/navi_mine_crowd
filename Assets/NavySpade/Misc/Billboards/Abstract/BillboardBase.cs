using UnityEngine;


namespace NavySpade.Misc.Billboards.Abstract
{
    public abstract class BillboardBase : MonoBehaviour
    {
        protected Transform Target { get; private set; }

        public void Init(Transform target)
        {
            Target = target;
        }

        public void LateUpdate()
        {
            LookAtTarget();
        }

        protected abstract void LookAtTarget();
    }
}