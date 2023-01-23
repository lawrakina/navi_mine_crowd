using _pj108.Code.Player;
using NaughtyAttributes;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryView : MonoBehaviour
{
    [field: SerializeField] public Transform ItemsStartPosition { get; private set; }
    [field: SerializeField] public bool IsInfiniteSize;
    [field: SerializeField] public int MaxSize { get; private set; } = 10;

    public PlayerController Owner { get; private set; }

    public void Init(PlayerController owner)
    {
        Owner = owner;
    }

}
