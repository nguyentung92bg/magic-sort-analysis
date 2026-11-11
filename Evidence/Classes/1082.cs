public abstract class EndGameOfferButtonController : MonoBehaviour // TypeDefIndex: 1082
{
	// Fields
	private TaskCompletionSource<bool> _completionSource; // 0x18

	// Methods

	[AsyncStateMachine(typeof(EndGameOfferButtonController.<WaitForButtonResponse>d__1))]
	// RVA: 0x16F2534 Offset: 0x16F2534 VA: 0x16F2534
	public Task<bool> WaitForButtonResponse() { }

	// RVA: 0x16F2FA0 Offset: 0x16F2FA0 VA: 0x16F2FA0
	protected void SetCancellationToken(bool result) { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract void RegisterButtons();

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void UnregisterButtons();

	// RVA: 0x16F3008 Offset: 0x16F3008 VA: 0x16F3008
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts
[CreateAssetMenu(fileName = "HeartBeatAnimationConfig", menuName = "Configs/HeartBeatAnimationConfig")]