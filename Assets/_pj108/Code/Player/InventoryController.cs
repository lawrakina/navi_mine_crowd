using _pj108.Code.BaseLogic;
using _pj108.Code.Miner;
using _pj108.Code.Player;
using NaughtyAttributes;
using NavySpade.Modules.Extensions.CsharpTypes;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UniRx;
using UnityEngine;
using UnityEngine.UIElements;

public class InventoryController : BaseController, IExecute
{

    [field: SerializeField] public List<InventoryStack> Stacks { get; private set; } = new List<InventoryStack>();

    [SerializeField] private bool _isInfiniteSize;
    [SerializeField, HideIf("_isInfiniteSize")] private int _maxSize = 10;

    public bool IsFull => _maxSize > Stacks.Count;

    private CaptainModel _model;
    private CaptainController _owner;
    private LeaderSettings _settings;
    private InventoryView _view;
    private int _size => Stacks.Count;
    private InventoryStack _stack;

    public InventoryController(CaptainController owner, InventoryView inventoryView, CaptainModel model, LeaderSettings settings)
    {
        _owner = owner;
        _model = model;
        _settings = settings;
        _view = inventoryView;
        _stack = _settings.InventorySettings.Stack;
        _model.PartsOfUnits.ObserveAdd().Subscribe(TryAddItem).AddTo(_subscriptions);
        _isInfiniteSize = inventoryView.IsInfiniteSize;
        _maxSize = inventoryView.MaxSize;
        Controllers.Add(this);
    }

    public void TryAddItem(CollectionAddEvent<PartOfUnit> resource)
    {
        TryAddItem(resource.Value.Resource);
    }

    public void TryAddItem(ResourceMining item)
    {
        InventoryStack currentStack;
        if (_size >= _maxSize && !_isInfiniteSize)
        {
            if (_size == _maxSize)
            {
                currentStack = Stacks.LastOrDefault();
                if (currentStack.IsFull) return;

                currentStack.AddItem(item, _settings.MinerSettings.MineDelay);
            }
            return;
        }

        if (_size == 0)
        {
            currentStack = Object.Instantiate(_stack, _view.ItemsStartPosition);
            currentStack.Init(_owner, _settings, _model);
            Stacks.Add(currentStack);
        }
        else
        {
            currentStack = Stacks.LastOrDefault();

            if (currentStack.IsFull)
            {
                currentStack = Object.Instantiate(_stack, _view.ItemsStartPosition);
                currentStack.Init(_owner, _settings, _model);
                var position = currentStack.transform.localPosition;
                position.y = _size * currentStack.ItemScale;
                currentStack.transform.localPosition = position;
                Stacks.Add(currentStack);
            }
        }
        
        currentStack.AddItem(item, _settings.MinerSettings.MineDelay);
    }

    public bool TryRemoveItem(Transform point)
    {
        if (_size <= 0) return false;
        var stack = Stacks.FirstOrDefault(st => st.IsFull);
        if (stack == null) return false;
        stack.DropStack(point, _settings.InventorySettings.DropTime);
        Stacks.Remove(stack);
        UpdateInventory();
        return true;
    }

    private void UpdateInventory()
    {
        for (int i = 0; i < Stacks.Count; i++)
        {
            var stack = Stacks[i];
            var position = stack.transform.localPosition;
            position.y = i * 0.2f;
            stack.transform.localPosition = position;
        }
    }

    public void Execute(float deltaTime)
    {
    }
}
