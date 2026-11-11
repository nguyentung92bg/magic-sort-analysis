public class OpenStrikeShowJoinPopupCommand : ICommand // TypeDefIndex: 2529
{
	// Fields
	private readonly StrikeShowService _strikeShowService; // 0x10
	private readonly IPopUpService _popUpService; // 0x18
	private readonly bool _forced; // 0x20

	// Methods

	// RVA: 0x2B02388 Offset: 0x2B02388 VA: 0x2B02388
	public void .ctor(bool forced) { }

	[AsyncStateMachine(typeof(OpenStrikeShowJoinPopupCommand.<ExecuteAsync>d__4))]
	// RVA: 0x2B02474 Offset: 0x2B02474 VA: 0x2B02474 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x2B02560 Offset: 0x2B02560 VA: 0x2B02560 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]