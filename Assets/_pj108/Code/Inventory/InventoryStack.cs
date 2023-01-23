using _pj108.Code.FX;
using _pj108.Code.Miner;
using _pj108.Code.Player;
using _pj108.Code.Units;
using DG.Tweening;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

public class InventoryStack : MonoBehaviour
{
    [field: SerializeField] public float ItemScale { get; private set; } = 0.2f;

    public List<GameObject> Items { get; private set; } = new List<GameObject>();

    public int ItemsCount => Items.Count;

    public bool IsFull => _count == 3;

    private CaptainController _owner;
    private LeaderSettings _settings;
    private CaptainModel _model;
    private int _count;
    private Transform _endPoint;

    public void Init(CaptainController owner, LeaderSettings settings, CaptainModel model)
    {
        _owner = owner;
        _settings = settings;
        _model = model;
    }

    public void AddItem(ResourceMining resource, float time)
    {
        var item = Instantiate(resource, transform,true);
        var go = item.gameObject;
        FxEmitterFly.Instance.SpawnUnitFx(go.transform.position, go.transform);
        Destroy(item);
        resource.gameObject.SetActive(false);
        go.transform.SetParent(transform);
        var endPosition = transform.position;
        go.isStatic = false;
        if (go.TryGetComponent(out Collider col))
        {
            col.enabled = false;
        }

        go.transform.DOScale(0.2f, time - .05f);
        var flyResource = go.transform.DOJump(endPosition, 2, 0, time);
        flyResource.onComplete += () => {
            Items.Add(go);
            go.transform.localPosition = new Vector3(-ItemScale + (ItemsCount - 1) * ItemScale, 0, 0);
            go.transform.localRotation = Quaternion.identity;
            go.transform.localScale = Vector3.one * ItemScale;
            Object.Destroy(resource.gameObject);
            //Object.Destroy(resourceTrans.gameObject);
        };
        _count++;
    }

    public void RemoveItem(Vector3 dropPosition, float time, int count = 3)
    {
        //var endPosition = dropPosition;
        //resource.gameObject.SetActive(false);
        //flyResource.onComplete += () => {

        //    item.transform.localPosition = new Vector3(-0.2f + (ItemsCount - 1) * 0.2f, 0, 0);
        //    item.transform.localRotation = Quaternion.identity;
        //    item.transform.localScale = Vector3.one * 0.2f;
        //    FxEmitterSpawnUnit.Instance.SpawnUnitFx(endPosition, null);
        //    Object.Destroy(resource.gameObject);
        //    //Object.Destroy(resourceTrans.gameObject);
        //};
        //Items.Add(item);
    }

    public void DropStack(Transform endPoint, float time)
    {
        FxEmitterFly.Instance.SpawnUnitFx(transform.position, transform);
        _endPoint = endPoint;
        var flyResource = transform.DOJump(endPoint.position, 2, 0, time);
        flyResource.onComplete += () =>
        {
            FxEmitterCreateUnit.Instance.SpawnUnitFx(endPoint.position, null);
            UnitSpawnerController.SpawnUnit(AddToSquad);
            
            //Object.Destroy(resourceTrans.gameObject);
        };
    }

    void AddToSquad(UnitController unit)
    {
        unit.Init(_owner, _settings, _model);
        _model.UnitsController.Add(unit);
        var position = _endPoint.position;
        unit.Transform.position = position;
        Object.Destroy(gameObject);
    }

    public void RemoveItems(Transform endPoint, float time)
    {
        int i = 0;
        Items.ForEach(item =>
        {
            var flyResource = item.transform.DOJump(endPoint.position, 2, 0, time);
            if (i == 0)
            {
                flyResource.onComplete += () =>
                {
                    FxEmitterSpawnUnit.Instance.SpawnUnitFx(endPoint.position, null);
                    Object.Destroy(item);
                    UnitSpawnerController.SpawnUnit(AddToSquad);


                    void AddToSquad(UnitController unit)
                    {
                        unit.Init(_owner, _settings, _model);
                        _model.UnitsController.Add(unit);
                        unit.Transform.position = endPoint.position;
                    }
                    //Object.Destroy(resourceTrans.gameObject);
                };
            }
            else
            {
                flyResource.onComplete += () =>
                {
                    FxEmitterSpawnUnit.Instance.SpawnUnitFx(endPoint.position, null);
                    Object.Destroy(item);
                    //Object.Destroy(resourceTrans.gameObject);
                };
            }
            i++;


        });
        Items.Clear();
        _count = 0;
    }
}
