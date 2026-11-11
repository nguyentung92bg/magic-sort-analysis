public class Rewarded2xButton : MonoBehaviour // TypeDefIndex: 1074
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private float _showDuration; // 0x20
	[SerializeField]
	private AnimationCurve _showAnimationCurve; // 0x28
	private Tween _showTween; // 0x30
	private bool _isInitialized; // 0x38
	[SerializeField]
	private LoadingbarView _loadingbarView; // 0x40
	private AdService _adService; // 0x48
	private RewardService _rewardService; // 0x50
	private IPlayerService _playerService; // 0x58
	private ILevelModelService _levelModelService; // 0x60
	private int _earnedCoinsFromWin; // 0x68
	[SerializeField]
	private TextMeshPro _coinsToEarnText; // 0x70

	// Methods

	// RVA: 0x16F0B30 Offset: 0x16F0B30 VA: 0x16F0B30
	public void Awake() { }

	// RVA: 0x16F0BC4 Offset: 0x16F0BC4 VA: 0x16F0BC4
	private void Initialize() { }

	[Button]
	// RVA: 0x16F074C Offset: 0x16F074C VA: 0x16F074C
	public void ShowWithAnimation(float delay, int earnedCoinsFromWin) { }

	// RVA: 0x16F0DCC Offset: 0x16F0DCC VA: 0x16F0DCC
	private void ShowLoadingBarIfRewardedNotReady() { }

	// RVA: 0x16F0AB0 Offset: 0x16F0AB0 VA: 0x16F0AB0
	public void Hide() { }

	[AsyncStateMachine(typeof(Rewarded2xButton.<ShowRewardedToEarn2XCoin>d__17))]
	// RVA: 0x16F0E0C Offset: 0x16F0E0C VA: 0x16F0E0C
	private void ShowRewardedToEarn2XCoin() { }

	// RVA: 0x16F0EC4 Offset: 0x16F0EC4 VA: 0x16F0EC4
	public void OnDestroy() { }

	// RVA: 0x16F0FF0 Offset: 0x16F0FF0 VA: 0x16F0FF0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x16F0FF8 Offset: 0x16F0FF8 VA: 0x16F0FF8
	private void <ShowWithAnimation>b__14_0() { }

	[CompilerGenerated]
	// RVA: 0x16F1018 Offset: 0x16F1018 VA: 0x16F1018
	private void <ShowWithAnimation>b__14_1() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]