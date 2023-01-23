using _pj108.Code.Miner;
using Cysharp.Threading.Tasks;
using Mono.CSharp;
using NavySpade.Modules.FOV;
using System;
using System.Collections;
using System.Collections.Generic;
using UniRx;
using UniRx.Triggers;
using UnityEngine;

public class EnemyMinerView : MinerView
{
    [field: SerializeField] public FieldOfView FOV { get; set; }

    private List<Collider> _targets = new List<Collider>();

    private void Awake()
    {
        FOV.OnFind += Mine;
    }

    private void Mine(Collider collider)
    {
        if (!_targets.Contains(collider))
        {
            _targets.Clear();
            _targets.Add(collider);
            OnStartMine?.Invoke(collider);
        }
        else
        {
            OnMine?.Invoke(collider);
        }
    }

    private void OnDestroy()
    {
        FOV.OnFind -= Mine;
    }
}
