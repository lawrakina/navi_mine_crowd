using System.Collections.Generic;
using _pj108.Code.FX;
using _pj108.Code.Player;


namespace _pj108.Code {
    public class FightModel {
        private List<CaptainController> _listOfEnemies;
        private PlayerController _player;

        public FightModel() {
            _listOfEnemies = new List<CaptainController>();
        }
        public void AddPlayer(PlayerController player) {
            _player = player;
        }

        public void Add(CaptainController enemy) {
            _listOfEnemies.Add(enemy);
        }

        public void Remove(CaptainController enemy)
        {
            _listOfEnemies.Remove(enemy);
        }

        public bool IsPlayerWin()
        {
            if (!_player.IsAlive) return false;
            if (_listOfEnemies == null || _listOfEnemies.Count == 0) return true;

            var playerUnits = _player.UnitsCount;
            for (int i = 0; i < _listOfEnemies.Count; i++)
            {
                var enemyCount = _listOfEnemies[i].UnitsCount;
                if (enemyCount > playerUnits) return false;
            }

            return true;
        }

        public bool CheckEnemies()
        {
            return _listOfEnemies.Count > 0;
        }
    }
}