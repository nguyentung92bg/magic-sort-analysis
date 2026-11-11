public class HomeIdleDetectionManager : MonoBehaviour // TypeDefIndex: 4516
{
	// Fields
	private List<IHomeIdleInterrupter> _playerInterrupts; // 0x18
	private SwipePageManager _swipePageManager; // 0x20
	private ReturnToHomeSequenceService _returnToHomeSequenceService; // 0x28
	private bool _isInitialized; // 0x30

	// Methods

	// RVA: 0x38DA588 Offset: 0x38DA588 VA: 0x38DA588
	private void InitializeInternal() { }

	// RVA: 0x38DAA18 Offset: 0x38DAA18 VA: 0x38DAA18
	private PlayerIdleState GetPlayerIdleState() { }

	// RVA: 0x38DAC7C Offset: 0x38DAC7C VA: 0x38DAC7C
	public void SetSwipePageManager(SwipePageManager swipePageManager) { }

	// RVA: 0x38DAD18 Offset: 0x38DAD18 VA: 0x38DAD18
	public void SetReturnToHomeSequenceService(ReturnToHomeSequenceService returnToHomeSequenceService) { }

	// RVA: 0x38DAC98 Offset: 0x38DAC98 VA: 0x38DAC98
	private void CheckInitializationComplete() { }

	[AsyncStateMachine(typeof(HomeIdleDetectionManager.<WaitForPlayerToBeIdle>d__9))]
	// RVA: 0x38DAD34 Offset: 0x38DAD34 VA: 0x38DAD34
	public Task WaitForPlayerToBeIdle() { }

	// RVA: 0x38DAE20 Offset: 0x38DAE20 VA: 0x38DAE20
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Common.Scripts