public class OpenTeamQuestPopUpCommand : ICommand // TypeDefIndex: 2333
{
	// Fields
	private readonly TeamQuestPopUpImpressionSource _source; // 0x10
	private bool _showedJoinPopup; // 0x14

	// Methods

	// RVA: 0x2DDF56C Offset: 0x2DDF56C VA: 0x2DDF56C
	public void .ctor(TeamQuestPopUpImpressionSource source) { }

	[AsyncStateMachine(typeof(OpenTeamQuestPopUpCommand.<ExecuteAsync>d__3))]
	// RVA: 0x2DDF594 Offset: 0x2DDF594 VA: 0x2DDF594 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x2DE1928 Offset: 0x2DE1928 VA: 0x2DE1928 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]