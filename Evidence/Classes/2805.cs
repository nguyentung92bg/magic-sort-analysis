public class SkyJumpSearchPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2805
{
	// Fields
	[SerializeField]
	private Button _continueButton; // 0x18
	[SerializeField]
	private RevealAnimation _continueButtonRevealAnimation; // 0x20
	[SerializeField]
	private SkyJumpSearchAnimationView _animationView; // 0x28
	[SerializeField]
	private List<RevealAnimation> _revealAnimations; // 0x30
	[SerializeField]
	private SkyJumpUserView _skyJumpUserView; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40
	private Sequence _sequence; // 0x48

	// Methods

	// RVA: 0x2F229E0 Offset: 0x2F229E0 VA: 0x2F229E0
	private void SubscribeButton() { }

	// RVA: 0x2F22A6C Offset: 0x2F22A6C VA: 0x2F22A6C
	private void UnsubscribeButton() { }

	// RVA: 0x2F22AF8 Offset: 0x2F22AF8 VA: 0x2F22AF8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2F22B9C Offset: 0x2F22B9C VA: 0x2F22B9C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2F22BE0 Offset: 0x2F22BE0 VA: 0x2F22BE0
	private void SetActiveAll(bool active) { }

	// RVA: 0x2F22D50 Offset: 0x2F22D50 VA: 0x2F22D50
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2F2302C Offset: 0x2F2302C VA: 0x2F2302C
	private void OnContinueButtonDown() { }

	// RVA: 0x2F230AC Offset: 0x2F230AC VA: 0x2F230AC Slot: 6
	public Task Hide() { }

	// RVA: 0x2F23190 Offset: 0x2F23190 VA: 0x2F23190 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2F23198 Offset: 0x2F23198 VA: 0x2F23198
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F231A0 Offset: 0x2F231A0 VA: 0x2F231A0
	private void <PlayAnimationsWithInterval>b__12_0() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI