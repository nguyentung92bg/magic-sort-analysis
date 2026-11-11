public class OpenMergeMiniGamePopUpCommand : ICommand // TypeDefIndex: 3664
{
	// Fields
	private readonly MergeMiniGamePopUpImpressionSource _source; // 0x10
	private readonly RewardService _rewardService; // 0x18
	private bool _showedJoinPopup; // 0x20

	// Methods

	// RVA: 0x41081A4 Offset: 0x41081A4 VA: 0x41081A4
	public void .ctor(MergeMiniGamePopUpImpressionSource source) { }

	[AsyncStateMachine(typeof(OpenMergeMiniGamePopUpCommand.<ExecuteAsync>d__4))]
	// RVA: 0x4108244 Offset: 0x4108244 VA: 0x4108244 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x4108330 Offset: 0x4108330 VA: 0x4108330 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]