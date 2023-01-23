using _pj108.Code.Captain;
using System.Collections.Generic;
using UnityEngine;


namespace _pj108.Code.Player {
    public class CaptainView : MonoBehaviour {
        [field: SerializeField] public Attractor Attractor { get; set; }
        [field: SerializeField] public BattleModule BattleModule { get; set; }
        [field: SerializeField] public SquadCounter CounterView { get; set; }
        [field: SerializeField] public Animator Animator { get; set; }
        [field: SerializeField] public List<Renderer> Renderers { get; set; }
    }
}