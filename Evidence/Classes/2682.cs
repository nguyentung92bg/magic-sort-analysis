public class ShowSkyJumpWithStagePopupSequenceCommand : ICommand // TypeDefIndex: 2682
{
	// Fields
	private readonly SkyJumpWithStageImpressionSource _impressionSource; // 0x10

	// Methods

	// RVA: 0x23384EC Offset: 0x23384EC VA: 0x23384EC
	public void .ctor(SkyJumpWithStageImpressionSource impressionSource) { }

	[AsyncStateMachine(typeof(ShowSkyJumpWithStagePopupSequenceCommand.<ExecuteAsync>d__2))]
	// RVA: 0x2338514 Offset: 0x2338514 VA: 0x2338514 Slot: 4
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(ShowSkyJumpWithStagePopupSequenceCommand.<Open>d__3))]
	// RVA: 0x2338600 Offset: 0x2338600 VA: 0x2338600
	private Task Open() { }

	// RVA: 0x23386F8 Offset: 0x23386F8 VA: 0x23386F8 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI
[CreateAssetMenu(fileName = "SkyJumpWithStageAnimationConfig", menuName = "Configs/SkyJumpWithStageAnimationConfig")]