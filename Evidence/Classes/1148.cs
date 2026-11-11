public class GameplayInputSystem : IInputSystem, ITouchable // TypeDefIndex: 1148
{
	// Fields
	private readonly BottleCollections _bottleCollections; // 0x10
	private readonly SelectionSystem _selectionSystem; // 0x18
	private bool _isActive; // 0x20
	private InputMode _inputMode; // 0x24
	private TaskCompletionSource<BottleItem> _bottleSelectionTaskCompletionSource; // 0x28
	private GamePlayInputHistory _gamePlayInputHistory; // 0x30

	// Methods

	// RVA: 0x16117C4 Offset: 0x16117C4 VA: 0x16117C4
	public void .ctor(BottleCollections bottleCollections, SelectionSystem selectionSystem) { }

	// RVA: 0x1611984 Offset: 0x1611984 VA: 0x1611984 Slot: 6
	public void OnTouchDown(Vector2 worldPosition) { }

	// RVA: 0x1611DE0 Offset: 0x1611DE0 VA: 0x1611DE0
	private void OnClickedToUIOnBottleSelection() { }

	// RVA: 0x1611E70 Offset: 0x1611E70 VA: 0x1611E70
	private void OnLevelStuck() { }

	[AsyncStateMachine(typeof(GameplayInputSystem.<WaitForSelection>d__10))]
	// RVA: 0x1611EE0 Offset: 0x1611EE0 VA: 0x1611EE0
	public Task<BottleItem> WaitForSelection(InputMode inputMode) { }

	// RVA: 0x1612000 Offset: 0x1612000 VA: 0x1612000 Slot: 7
	public void OnTouchUp(Vector2 worldPosition) { }

	// RVA: 0x1612004 Offset: 0x1612004 VA: 0x1612004 Slot: 8
	public void OnTouchCancel(Vector2 position) { }

	// RVA: 0x1612008 Offset: 0x1612008 VA: 0x1612008 Slot: 4
	public void Activate() { }

	// RVA: 0x1612014 Offset: 0x1612014 VA: 0x1612014 Slot: 5
	public void Deactivate() { }

	// RVA: 0x1612108 Offset: 0x1612108 VA: 0x1612108
	public void Deinitialize() { }

	// RVA: 0x161224C Offset: 0x161224C VA: 0x161224C
	public string GetInputHistory() { }
}

// Namespace: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS