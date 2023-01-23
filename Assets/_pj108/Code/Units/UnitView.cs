using System;
using _pj108.Code.Captain;
using _pj108.Code.Miner;
using UnityEngine;


namespace _pj108.Code.Units {
    public class UnitView : MonoBehaviour {
        [Serializable] public class UnitViewConfig {
            [field: SerializeField] public float AnimationSpeedLeftTime { get; set; }
        }
        [SerializeField] private Transform _root;
        [SerializeField] private Animator _animator;
        [SerializeField] private GameObject[] _legs;
        [SerializeField] private GameObject[] _body;
        [SerializeField] private GameObject[] _hands;
        [SerializeField] private Rigidbody _rigidbody;
        [SerializeField] private MeshRenderer[] _renderers;
        [field: SerializeField]public MinerView MinerView { get; set; }
        [field: SerializeField] public Attractor Attactor { get; set; }
        [field: SerializeField] public BattleModule BattleModule { get; set; }
        [field: SerializeField] public UnitViewConfig Config { get; set; }

        public bool WasAttached { get; set; }
        public UnitController Controller { get; set; }
        public Rigidbody RibidBody => _rigidbody;
        public MeshRenderer[] Renderer => _renderers;
        public Animator Animator => _animator;
        public Transform Root => _root;

        public void SwitchPartsOfBody(UnitState legs) {
            switch (legs)
            {
                case UnitState.Dead:
                    break;
                case UnitState.Legs:
                    foreach (var leg in _legs) leg.SetActive(true);
                    foreach (var bod in _body) bod.SetActive(false);
                    foreach (var hand in _hands) hand.SetActive(false);
                    break;
                case UnitState.Body:
                    foreach (var leg in _legs) leg.SetActive(true);
                    foreach (var bod in _body) bod.SetActive(true);
                    foreach (var hand in _hands) hand.SetActive(false);
                    break;
                case UnitState.Full:
                    foreach (var leg in _legs) leg.SetActive(true);
                    foreach (var bod in _body) bod.SetActive(true);
                    foreach (var hand in _hands) hand.SetActive(true);
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(legs), legs, null);
            }
        }
    }
}