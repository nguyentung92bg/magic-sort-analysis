public class ShowSkyJumpPopupSequenceCommand : ICommand // TypeDefIndex: 2776
{
	// Fields
	private readonly SkyJumpImpressionSource _impressionSource; // 0x10

	// Methods

	// RVA: 0x2F1C3F4 Offset: 0x2F1C3F4 VA: 0x2F1C3F4
	public void .ctor(SkyJumpImpressionSource impressionSource) { }

	[AsyncStateMachine(typeof(ShowSkyJumpPopupSequenceCommand.<ExecuteAsync>d__2))]
	// RVA: 0x2F1C41C Offset: 0x2F1C41C VA: 0x2F1C41C Slot: 4
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(ShowSkyJumpPopupSequenceCommand.<Open>d__3))]
	// RVA: 0x2F1C508 Offset: 0x2F1C508 VA: 0x2F1C508
	private Task Open() { }

	// RVA: 0x2F1C600 Offset: 0x2F1C600 VA: 0x2F1C600 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI
[CreateAssetMenu(fileName = "SkyJumpAnimationConfig", menuName = "Configs/SkyJumpAnimationConfig")]