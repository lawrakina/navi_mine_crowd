using _pj108.Code.Miner;
using System.Collections;
using System.Collections.Generic;
using UniRx.Triggers;
using UnityEngine;

public class Structure : MonoBehaviour
{
    [SerializeField] private Transform _blocksParent;
    [SerializeField] private HPBar _hpBar;

    private List<ResourceMining> _resources = new List<ResourceMining>();

    private void Awake()
    {
        for (int i = 0; i < _blocksParent.childCount; i++)
        {
            if (_blocksParent.GetChild(i).TryGetComponent(out ResourceMining resource))
            {
                _resources.Add(resource);
                resource.OnMine += () => Remove(resource);
            }
        }
        _hpBar.Init(_resources.Count);
    }

    private void Remove(ResourceMining resource)
    {
        _hpBar.Toggle();
        _resources.Remove(resource);
        _hpBar.SetHealth(_resources.Count);
    }
}
