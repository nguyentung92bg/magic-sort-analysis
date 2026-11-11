public class LevelCongratsPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1061
{
	// Fields
	private Tween _autoCloseTween; // 0x18
	private Tween _openInputTween; // 0x20
	private Tween _showAdsTween; // 0x28
	[SerializeField]
	private Animator _animator; // 0x30
	[SerializeField]
	private Button _tapButton; // 0x38
	private bool _isAdsReady; // 0x40
	[SerializeField]
	private float _animationsDuration; // 0x44
	[SerializeField]
	private float _openInputsAt; // 0x48
	[SerializeField]
	private string _animationWithAdsAnimationKey; // 0x50
	[SerializeField]
	private string _animationWithoutAdsAnimationKey; // 0x58
	[FormerlySerializedAs("_animationDurationWithoutAds")]
	[SerializeField]
	private float _animationDurationWithAds; // 0x60
	private LevelCongratsPopUpArguments _levelCongratsPopUpArguments; // 0x68

	// Methods

	// RVA: 0x16EC838 Offset: 0x16EC838 VA: 0x16EC838 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x16ECB80 Offset: 0x16ECB80 VA: 0x16ECB80
	private void PlayAnimationWithoutAds() { }

	// RVA: 0x16ECEF0 Offset: 0x16ECEF0 VA: 0x16ECEF0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x16ECF94 Offset: 0x16ECF94 VA: 0x16ECF94
	private void OnTap() { }

	// RVA: 0x16ED11C Offset: 0x16ED11C VA: 0x16ED11C
	private void OpenInputs() { }

	// RVA: 0x16ECFD0 Offset: 0x16ECFD0 VA: 0x16ECFD0
	private void OnAnimationsDoneWithoutAds() { }

	// RVA: 0x16EC968 Offset: 0x16EC968 VA: 0x16EC968
	private void PlayAnimationWithAds() { }

	[AsyncStateMachine(typeof(LevelCongratsPopUp.<TryShowInterAndOpenLevelWinPopUp>d__19))]
	// RVA: 0x16ED198 Offset: 0x16ED198 VA: 0x16ED198
	private void TryShowInterAndOpenLevelWinPopUp() { }

	// RVA: 0x16ED250 Offset: 0x16ED250 VA: 0x16ED250 Slot: 6
	public Task Hide() { }

	// RVA: 0x16ED3A0 Offset: 0x16ED3A0 VA: 0x16ED3A0 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x16ED3A8 Offset: 0x16ED3A8 VA: 0x16ED3A8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]