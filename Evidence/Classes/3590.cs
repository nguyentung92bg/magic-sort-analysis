public class MergeMiniGameShowEventFailedCommand : ICommand // TypeDefIndex: 3590
{
	// Fields
	private readonly MergeMiniGameService _service; // 0x10
	private readonly MergeMiniGameController _controller; // 0x18
	private readonly MergeMiniGameAnimationConfig _config; // 0x20
	private readonly IPopUpService _popUpService; // 0x28

	// Methods

	// RVA: 0x3FA6600 Offset: 0x3FA6600 VA: 0x3FA6600
	public void .ctor(MergeMiniGameController controller, MergeMiniGameAnimationConfig config) { }

	[AsyncStateMachine(typeof(MergeMiniGameShowEventFailedCommand.<ExecuteAsync>d__5))]
	// RVA: 0x3FA6704 Offset: 0x3FA6704 VA: 0x3FA6704 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x3FA67F0 Offset: 0x3FA67F0 VA: 0x3FA67F0 Slot: 5
	public void Dispose() { }

	// RVA: 0x3FA67F4 Offset: 0x3FA67F4 VA: 0x3FA67F4
	private void CollectCollectiblesFromScatterQueue() { }

	[AsyncStateMachine(typeof(MergeMiniGameShowEventFailedCommand.<CollectCollectibles>d__8))]
	// RVA: 0x3FA6A28 Offset: 0x3FA6A28 VA: 0x3FA6A28
	private Task CollectCollectibles() { }
}

// Namespace: 
[CompilerGenerated]