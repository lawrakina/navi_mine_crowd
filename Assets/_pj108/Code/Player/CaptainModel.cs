using _pj108.Code.Miner;
using _pj108.Code.Units;
using UniRx;
using UnityEngine;


namespace _pj108.Code.Player {
    public class CaptainModel {
        public ReactiveCommand<Vector3> Input = new ReactiveCommand<Vector3>();
        public ReactiveCommand CaptainStay = new ReactiveCommand();
        public ReactiveCommand SquadAttack = new ReactiveCommand();
        public ReactiveCollection<UnitController> UnitsController = new ReactiveCollection<UnitController>();
        public ReactiveCollection<PartOfUnit> PartsOfUnits = new ReactiveCollection<PartOfUnit>();

        public ReactiveCommand<Vector3> UnitStartMine = new ReactiveCommand<Vector3>();
        public ReactiveCommand<bool> UnitIsAttacking = new ReactiveCommand<bool>();
    }

    public class UnitModel
    {
        public ReactiveCommand<Vector3> UnitStartMine = new ReactiveCommand<Vector3>();
        public ReactiveCommand<bool> UnitIsAttacking = new ReactiveCommand<bool>();
        public ReactiveProperty<UnitState> State = new ReactiveProperty<UnitState>();
        public ReactiveProperty<UnitWorkState> WorkState = new ReactiveProperty<UnitWorkState>();
    }
}