public class TryAgainFlowService : IService, IInitializable, IDisposable // TypeDefIndex: 1031
{
	// Fields
	private CancellationTokenSource _cancellationTokenSource; // 0x10
	private List<ITryAgainCommand> _preTryAgainCommands; // 0x18
	private TryAgainPopupOpenPlace _tryAgainPopupOpenPlace; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28

	// Methods

	// RVA: 0x40EEDFC Offset: 0x40EEDFC VA: 0x40EEDFC
	public void .ctor(RemoteConfigs remoteConfigs) { }

	// RVA: 0x40EEE2C Offset: 0x40EEE2C VA: 0x40EEE2C Slot: 4
	public void Initialize() { }

	// RVA: 0x40EEEA8 Offset: 0x40EEEA8 VA: 0x40EEEA8
	public void SkyJumpFallDown() { }

	// RVA: 0x40EEF80 Offset: 0x40EEF80 VA: 0x40EEF80
	public void SkyJumpWithStageFallDown() { }

	// RVA: 0x40EF058 Offset: 0x40EF058 VA: 0x40EF058
	public void TowerFallDown(int lastScoreBeforeFail) { }

	// RVA: 0x40EF16C Offset: 0x40EF16C VA: 0x40EF16C
	public void BroomFallDown(int lastBroomScore) { }

	// RVA: 0x40EF280 Offset: 0x40EF280 VA: 0x40EF280
	public void JetpackFallDown() { }

	// RVA: 0x40EF38C Offset: 0x40EF38C VA: 0x40EF38C
	public void JetpackWithStageFallDown() { }

	// RVA: 0x40EF498 Offset: 0x40EF498 VA: 0x40EF498
	public void SetTryAgainOpenPlace(TryAgainPopupOpenPlace tryAgainPopupOpenPlace) { }

	[AsyncStateMachine(typeof(TryAgainFlowService.<Execute>d__13))]
	// RVA: 0x40EF4A0 Offset: 0x40EF4A0 VA: 0x40EF4A0
	public void Execute() { }

	[AsyncStateMachine(typeof(TryAgainFlowService.<ExecuteAsync>d__14))]
	// RVA: 0x40EF558 Offset: 0x40EF558 VA: 0x40EF558
	private Task ExecuteAsync(List<ITryAgainCommand> commands) { }

	// RVA: 0x40EF65C Offset: 0x40EF65C VA: 0x40EF65C
	public void Clear() { }

	// RVA: 0x40EF6CC Offset: 0x40EF6CC VA: 0x40EF6CC Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.TryAgainPopUpNs.Scripts