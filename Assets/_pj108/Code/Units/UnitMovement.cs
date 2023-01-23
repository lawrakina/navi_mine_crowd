using NaughtyAttributes;
using UnityEngine;


namespace _pj108.Code.Units {
    public abstract class UnitMovement : MonoBehaviour {
        [field: SerializeField, ReadOnly] public Animator Animator { get; set; }
    }
}