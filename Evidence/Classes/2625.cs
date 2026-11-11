public class SnitchJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2625
{
	// Fields
	private SnitchService _snitchService; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	[SerializeField]
	private SnitchProgressView _progressView; // 0x28

	// Methods

	// RVA: 0x246F4C8 Offset: 0x246F4C8 VA: 0x246F4C8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x246F7C0 Offset: 0x246F7C0 VA: 0x246F7C0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(SnitchJoinPopUp.<PlayFirstShowEverAnimations>d__5))]
	// RVA: 0x246F618 Offset: 0x246F618 VA: 0x246F618
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(SnitchJoinPopUp.<OpenAutomaticallyInfoPopUp>d__6))]
	// RVA: 0x246F8F4 Offset: 0x246F8F4 VA: 0x246F8F4
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x246F9C4 Offset: 0x246F9C4 VA: 0x246F9C4 Slot: 6
	public Task Hide() { }

	// RVA: 0x246FB1C Offset: 0x246FB1C VA: 0x246FB1C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x246FB24 Offset: 0x246FB24 VA: 0x246FB24
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]