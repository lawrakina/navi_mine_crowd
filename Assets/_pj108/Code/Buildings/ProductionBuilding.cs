using _pj108.Code.Player;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProductionBuilding : MonoBehaviour
{
    [SerializeField] private float _frequency = 0.5f;
    [SerializeField] private Transform _createPoint;

    private InventoryController _inventory;
    private float _time;

    private void Awake()
    {
        _time = _frequency;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent(out InventoryView inventory))
        {
            _inventory = inventory.Owner.Inventory;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.TryGetComponent(out InventoryView inventory))
        {
            _inventory = inventory.Owner.Inventory;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.TryGetComponent(out InventoryView inventory))
        {
            if (_inventory == inventory.Owner.Inventory)
                _inventory = null;
        }
    }

    private void Update()
    {
        if (_inventory == null) return;

        _time -= Time.deltaTime;

        if (_time <= 0 )
        {
            _inventory.TryRemoveItem(_createPoint);
            _time = _frequency;
        }
    }
}
