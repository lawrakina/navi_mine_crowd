using _pj108.Code.Miner;
using _pj108.Code.Player;
using NaughtyAttributes;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TNTResource : ResourceMining
{
    [field: SerializeField, Layer] public int ExplosionLayer { get; private set; }
    [field: SerializeField] public float ExplosionRadius { get; private set; } = 5f;


    public void Boom(CaptainModel model)
    {
        var cols = Physics.OverlapSphere(transform.position, ExplosionRadius, 1 << ExplosionLayer);
        for (int i = 0; i < cols.Length; i++)
        {
            if (cols[i].TryGetComponent(out ResourceMining resource))
            {
                var tnt = resource as TNTResource;
                if (tnt != this && tnt != null)
                {
                    tnt.Boom(model);
                    continue;
                }
                else
                {
                    resource.ForceMining();
                    for (int j = 0; j < resource.HasParts; j++)
                    {
                        model.PartsOfUnits.Add(new PartOfUnit(resource)); //ToDo maybe need insert ResourceType
                    }
                }
            }
        }
        Destroy(gameObject);
    }
}
