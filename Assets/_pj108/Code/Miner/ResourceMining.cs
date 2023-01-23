using _pj108.Code.FX;
using _pj108.Code.Pools;
using Mono.Cecil;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


namespace _pj108.Code.Miner
{
    public class ResourceMining : MonoBehaviour {
        [field: SerializeField] public int HealthPoint { get; set; } = 3;
        [field: SerializeField] public int HasParts { get; set; } = 1;
        [field: SerializeField] public ParticleSystem FX { get; set; }

        private List<ResourceMining> _upperBlocks = new List<ResourceMining>();
        private static float CellSize { get; set; } = 0.5f;

        public Action OnMine;
        
        private void Awake() {
            var hits = new RaycastHit[5];
            var up = Physics.RaycastNonAlloc(transform.position, Vector3.up, hits, 50f);

            for (var i = 0; i < up; i++)
            {
                var hit = hits[i];
                if (hit.transform == transform) continue;
                if(hit.transform.TryGetComponent(out ResourceMining upperBlock))
                    _upperBlocks.Add(upperBlock);
            }
            _upperBlocks = _upperBlocks.OrderBy((block) => block.transform.position.y).ToList();
        }

        public void LowerUpperBlocks() {
            foreach (var block in _upperBlocks)
            {
                if (!block) continue;
                var tr = block.transform.position;

                var hits = new RaycastHit[5];
                var down = Physics.RaycastNonAlloc(tr, Vector3.down, hits, 50f);
                var downBlocks = new List<ResourceMining>();
                for (var i = 0; i < down; i++)
                {
                    var hit = hits[i];
                    if (hit.transform == transform) continue;
                    if (hit.transform.TryGetComponent(out ResourceMining downBlock))
                        downBlocks.Add(downBlock);
                }
                downBlocks = downBlocks.OrderByDescending((block) => block.transform.position.y).ToList();
                if (downBlocks.Count > 0)
                    block.transform.position = new Vector3(tr.x, Mathf.Max(0.25f, downBlocks[0].transform.position.y + CellSize), tr.z);
                else
                    block.transform.position = new Vector3(tr.x, 0.25f, tr.z);
            }
        }

        public virtual bool Mining()
        {
            HealthPoint--;
            if (FX != null && transform != null)
                Instantiate(FX, transform.position, Quaternion.identity);
            //FxEmitterMine.Instance.SpawnUnitFx(transform.position, null);
            if (HealthPoint > 0) return false;
            LowerUpperBlocks();
            OnMine?.Invoke();
            return true;
        }

        public bool ForceMining()
        {
            HealthPoint-= HealthPoint;
            if (FX != null)
                Instantiate(FX, transform.position, Quaternion.identity);
            //FxEmitterMine.Instance.SpawnUnitFx(transform.position, null);
            LowerUpperBlocks();
            OnMine?.Invoke();
            return true;
        }
    }
}