public class DuckFestivalLobbyButton : MonoBehaviour // TypeDefIndex: 4432
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private Timer _timer; // 0x20
	[SerializeField]
	private DuckFestivalCircleProgressBar _circleProgressBar; // 0x28
	[SerializeField]
	private DuckFestivalLobbyIconCollectibleAnimation[] _lobbyIconCollectibleAnimations; // 0x30
	[SerializeField]
	private DuckFestivalLobbyButtonAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private GameObject _root; // 0x40
	[SerializeField]
	private TextMeshPro _unclaimedText; // 0x48
	[SerializeField]
	private GameObject _unclaimedTextRoot; // 0x50
	[SerializeField]
	private GameObject _playerRankParent; // 0x58
	[SerializeField]
	private TextMeshPro _playerRankText; // 0x60
	[SerializeField]
	private ParticleSystem _collectCompleteParticle; // 0x68
	[SerializeField]
	private TextMeshPro _collectAmountText; // 0x70
	[SerializeField]
	private DuckMultiplierCurrencyDisplayerController _currencyDisplayerController; // 0x78
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x80
	private DuckFestivalService _service; // 0x88
	private bool _isVisible; // 0x90
	private bool _shouldShowRewardText; // 0x91

	// Methods

	// RVA: 0x38C6FE4 Offset: 0x38C6FE4 VA: 0x38C6FE4
	private void Awake() { }

	// RVA: 0x38C730C Offset: 0x38C730C VA: 0x38C730C
	private void OnEnable() { }

	// RVA: 0x38C7430 Offset: 0x38C7430 VA: 0x38C7430
	private void OnDuckFestivalStateChanged() { }

	// RVA: 0x38C744C Offset: 0x38C744C VA: 0x38C744C
	private void OnDestroy() { }

	// RVA: 0x38C7570 Offset: 0x38C7570 VA: 0x38C7570
	private void OnButtonClick() { }

	// RVA: 0x38C7194 Offset: 0x38C7194 VA: 0x38C7194
	public void UpdateState() { }

	// RVA: 0x38C7314 Offset: 0x38C7314 VA: 0x38C7314
	public void UpdateProgress(bool isDelayed) { }

	// RVA: 0x38C776C Offset: 0x38C776C VA: 0x38C776C
	private void UpdatePlayerRank(bool isDelayed) { }

	// RVA: 0x38C7838 Offset: 0x38C7838 VA: 0x38C7838
	private void UpdateClaimCountText(int unclaimCount) { }

	// RVA: 0x38C78B4 Offset: 0x38C78B4 VA: 0x38C78B4
	public Tween PlayCollectibleAndProgressAnimation() { }

	[Button]
	// RVA: 0x38C821C Offset: 0x38C821C VA: 0x38C821C
	private Tween PlayCollectedKeyCountTextAnimation(int keyCount) { }

	// RVA: 0x38C8504 Offset: 0x38C8504 VA: 0x38C8504
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x38C850C Offset: 0x38C850C VA: 0x38C850C
	private void <PlayCollectedKeyCountTextAnimation>b__27_0() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI.Lobby