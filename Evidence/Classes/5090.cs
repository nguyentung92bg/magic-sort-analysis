public class RewardPopup : MonoBehaviour, IPopUp // TypeDefIndex: 5090
{
	// Fields
	[SerializeField]
	private RewardPopupAnimationConfig _streakTournamentRewardAnimationConfig; // 0x18
	[SerializeField]
	private Transform _streakTournamentRewardsPath; // 0x20
	[SerializeField]
	private RewardPopupAnimationConfig _levelWinCauldronRewardAnimationConfig; // 0x28
	[SerializeField]
	private Transform _levelWinCauldronRewardsPaths; // 0x30
	[SerializeField]
	private Transform _rewardContainer; // 0x38
	[SerializeField]
	private CurrencyViewFactory _rewardFactory; // 0x40
	[SerializeField]
	private SpriteRenderer _backgroundSpriteRenderer; // 0x48
	[SerializeField]
	private Color _backgroundInitialColor; // 0x50
	[SerializeField]
	private Button _tapToClaimButton; // 0x60
	[SerializeField]
	private TextMeshPro _tapToClaimText; // 0x68
	[SerializeField]
	private ParticleSystem _coinDisappearParticle; // 0x70
	private Sequence _sequence; // 0x78
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x80
	private Vector3[] _pathPoints; // 0x88
	private RewardPopupAnimationConfig _rewardPopupAnimationConfig; // 0x90
	private RewardPopupArguments _rewardPopupArguments; // 0x98

	// Methods

	// RVA: 0x3CE6CD0 Offset: 0x3CE6CD0 VA: 0x3CE6CD0
	public void ShowWithAnimation() { }

	// RVA: 0x3CE7298 Offset: 0x3CE7298 VA: 0x3CE7298
	private void SetConfigsAccordingToEarnReason(EarnReason earnReason) { }

	// RVA: 0x3CE7420 Offset: 0x3CE7420 VA: 0x3CE7420
	private void SetPathPoints(List<Transform> path) { }

	// RVA: 0x3CE7548 Offset: 0x3CE7548 VA: 0x3CE7548
	private void OnButtonClick() { }

	// RVA: 0x3CE7858 Offset: 0x3CE7858 VA: 0x3CE7858 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3CE78E8 Offset: 0x3CE78E8 VA: 0x3CE78E8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3CE79C4 Offset: 0x3CE79C4 VA: 0x3CE79C4 Slot: 6
	public Task Hide() { }

	// RVA: 0x3CE7A78 Offset: 0x3CE7A78 VA: 0x3CE7A78 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3CE7A80 Offset: 0x3CE7A80 VA: 0x3CE7A80
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3CE7A88 Offset: 0x3CE7A88 VA: 0x3CE7A88
	private void <ShowWithAnimation>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x3CE7AC8 Offset: 0x3CE7AC8 VA: 0x3CE7AC8
	private void <ShowWithAnimation>b__16_1() { }

	[CompilerGenerated]
	// RVA: 0x3CE7BA8 Offset: 0x3CE7BA8 VA: 0x3CE7BA8
	private bool <SetConfigsAccordingToEarnReason>b__17_0(Transform go) { }

	[CompilerGenerated]
	// RVA: 0x3CE7C3C Offset: 0x3CE7C3C VA: 0x3CE7C3C
	private bool <SetConfigsAccordingToEarnReason>b__17_1(Transform go) { }
}

// Namespace: Modules.Contexts.Application.Reward.Scripts
[CreateAssetMenu(fileName = "RewardPopupAnimationConfig", menuName = "Configs/RewardPopupAnimationConfig", order = 1)]