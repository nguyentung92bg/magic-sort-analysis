public class SkyJumpWithStageSearchPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2711
{
	// Fields
	[SerializeField]
	private Button _continueButton; // 0x18
	[SerializeField]
	private RevealAnimation _continueButtonRevealAnimation; // 0x20
	[SerializeField]
	private SkyJumpWithStageSearchAnimationView _animationView; // 0x28
	[SerializeField]
	private List<RevealAnimation> _revealAnimations; // 0x30
	[SerializeField]
	private SkyJumpWithStageUserView _SkyJumpWithStageUserView; // 0x38
	[SerializeField]
	private Transform[] _stagedChestTransforms; // 0x40
	[SerializeField]
	private TextMeshPro[] _stagedChestRewardTexts; // 0x48
	private SkyJumpWithStageService _service; // 0x50
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x58
	private Sequence _sequence; // 0x60

	// Methods

	// RVA: 0x233F730 Offset: 0x233F730 VA: 0x233F730
	private void SubscribeButton() { }

	// RVA: 0x233F7BC Offset: 0x233F7BC VA: 0x233F7BC
	private void UnsubscribeButton() { }

	// RVA: 0x233F848 Offset: 0x233F848 VA: 0x233F848 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x233F8EC Offset: 0x233F8EC VA: 0x233F8EC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x233FA84 Offset: 0x233FA84 VA: 0x233FA84
	private void SetActiveAll(bool active) { }

	// RVA: 0x233FBF4 Offset: 0x233FBF4 VA: 0x233FBF4
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x233FF00 Offset: 0x233FF00 VA: 0x233FF00
	private void OnContinueButtonDown() { }

	// RVA: 0x233FF80 Offset: 0x233FF80 VA: 0x233FF80 Slot: 6
	public Task Hide() { }

	// RVA: 0x2340064 Offset: 0x2340064 VA: 0x2340064 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x234006C Offset: 0x234006C VA: 0x234006C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2340074 Offset: 0x2340074 VA: 0x2340074
	private void <PlayAnimationsWithInterval>b__15_0() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI