using _pj108.Code.Levels;
using _pj108.Code.Units;
using ThirdParty.DebugDrawingExtension;
using UnityEngine;


namespace _pj108.Code.Extension {
    internal static class LevelExtensions {
        private static SceneData _sceneData;
        private static SpawnUnitsData _spawnUnitsData;

        public static void Init(SceneData sceneData, SpawnUnitsData spawnUnitsData) {
            _sceneData = sceneData;
            _spawnUnitsData = spawnUnitsData;
        }

        public static Vector3 GetFreePosition() {
            var position = Vector3.up;
            while (true)
            {
                var borders = _sceneData.GetBorders;
                position = new Vector3(
                    Random.Range((float) borders.x, borders.z),
                    position.y += 0.1f,
                    Random.Range((float) borders.y, borders.w));
                var hits = new Collider[2];
                var counts = Physics.OverlapSphereNonAlloc(position, 1f, hits);
                DebugExtension.DebugWireSphere(position, Color.red, 1f, 5f);
                if (counts == 0)
                    break;
            }

            position.y = 0.1f;
            return position;
        }
    }
}