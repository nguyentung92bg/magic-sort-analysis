public class CollectionCompletedPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4588
{
	// Fields
	[SerializeField]
	private ProfileSpriteConfig _profileSpriteConfig; // 0x18
	[SerializeField]
	private TextMeshPro _titleText; // 0x20
	[SerializeField]
	private ChestView _chestView; // 0x28
	[SerializeField]
	private CollectionAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private SpriteRenderer _background; // 0x38
	[SerializeField]
	private TextMeshPro _bottomText; // 0x40
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x48
	[SerializeField]
	private Button _continueButton; // 0x50
	[SerializeField]
	private Button _tapToOpenButton; // 0x58
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x60
	[SerializeField]
	private Transform[] _rewardCurrencyMovePoints; // 0x68
	[SerializeField]
	private Transform _tokenRewardMovePoint; // 0x70
	[SerializeField]
	private Transform _rewardCurrencySpawnPoint; // 0x78
	[SerializeField]
	private Transform _tokenEffect; // 0x80
	[SerializeField]
	private Transform _tokenUIParent; // 0x88
	[SerializeField]
	private Button _tokenEquipButton; // 0x90
	[SerializeField]
	private Transform _tokenRotatorParent; // 0x98
	[SerializeField]
	private ParticleSystem _chestParticle; // 0xA0
	[SerializeField]
	private TextMeshPro _playerLevelText; // 0xA8
	[SerializeField]
	private ProfileImageView _profileImageView; // 0xB0
	[SerializeField]
	private TextMeshPro _tokenInfoText; // 0xB8
	[SerializeField]
	private GameObject _tokenSpotLight; // 0xC0
	[SerializeField]
	private ProfileFrameView _frameView; // 0xC8
	[SerializeField]
	private ProfileNameStyleView _nameStyleView; // 0xD0
	[SerializeField]
	private SpriteRenderer _tokenSpriteRenderer; // 0xD8
	[SerializeField]
	private Transform _rewardInChestSpawnPoint; // 0xE0
	private RewardModel _collectionReward; // 0xE8
	private bool _hasToken; // 0xF0
	private List<CurrencyView> _chestCurrencies; // 0xF8
	private CurrencyView _tokenCurrencyView; // 0x100
	private GameObject _tokenModel; // 0x108
	private GameObject _tokenStaticModel; // 0x110
	private string _tokenId; // 0x118
	private Tween _tokenRotateSequence; // 0x120
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x128
	private const string completed_localization_term = "CollectionCompleted";
	private const string token_name_localization_term = "CollectionYouGotToken";
	private const string tap_to_continue_localization_term = "TapToContinue";
	private const string tap_to_open_localization_term = "TaptoOpen";

	// Methods

	// RVA: 0x377AD78 Offset: 0x377AD78 VA: 0x377AD78 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x377B09C Offset: 0x377B09C VA: 0x377B09C
	private void PlayCollectionCompletedSequence() { }

	// RVA: 0x377B5A8 Offset: 0x377B5A8 VA: 0x377B5A8
	private void OnTapToOpenButtonDown() { }

	// RVA: 0x377C37C Offset: 0x377C37C VA: 0x377C37C
	private void OnContinueButtonDown() { }

	// RVA: 0x377C71C Offset: 0x377C71C VA: 0x377C71C
	private void PlayTokenEquipScreenIntro() { }

	// RVA: 0x377C3C8 Offset: 0x377C3C8 VA: 0x377C3C8
	private void PlayRewardPayoutAndClose() { }

	// RVA: 0x377D284 Offset: 0x377D284 VA: 0x377D284
	private void OnTokenEquipButtonDown() { }

	// RVA: 0x377BCE8 Offset: 0x377BCE8 VA: 0x377BCE8
	private void CreateChestRewardCurrencies() { }

	// RVA: 0x377D03C Offset: 0x377D03C VA: 0x377D03C
	private void UpdatePlayerView() { }

	// RVA: 0x377D910 Offset: 0x377D910 VA: 0x377D910
	private void PlayTokenRotateLoopAnimation() { }

	// RVA: 0x377B368 Offset: 0x377B368 VA: 0x377B368
	private Tween SetTextAndPlayTextSequence() { }

	// RVA: 0x377B474 Offset: 0x377B474 VA: 0x377B474
	private Tween BottomTextScaleIn() { }

	// RVA: 0x377C248 Offset: 0x377C248 VA: 0x377C248
	private Tween BottomTextScaleOut() { }

	// RVA: 0x377B3C4 Offset: 0x377B3C4 VA: 0x377B3C4
	private Tween FadeInBackground() { }

	// RVA: 0x377D198 Offset: 0x377D198 VA: 0x377D198
	private Tween FadeOutBackground() { }

	// RVA: 0x377DA0C Offset: 0x377DA0C VA: 0x377DA0C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x377DAE0 Offset: 0x377DAE0 VA: 0x377DAE0 Slot: 6
	public Task Hide() { }

	// RVA: 0x377DB94 Offset: 0x377DB94 VA: 0x377DB94 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x377DB9C Offset: 0x377DB9C VA: 0x377DB9C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x377DBA4 Offset: 0x377DBA4 VA: 0x377DBA4
	private void <PlayCollectionCompletedSequence>b__40_1() { }

	[CompilerGenerated]
	// RVA: 0x377DBE4 Offset: 0x377DBE4 VA: 0x377DBE4
	private void <PlayCollectionCompletedSequence>b__40_2() { }

	[CompilerGenerated]
	// RVA: 0x377DC7C Offset: 0x377DC7C VA: 0x377DC7C
	private void <OnTapToOpenButtonDown>b__41_2() { }

	[CompilerGenerated]
	// RVA: 0x377DD54 Offset: 0x377DD54 VA: 0x377DD54
	private void <OnTapToOpenButtonDown>b__41_1() { }

	[CompilerGenerated]
	// RVA: 0x377DE68 Offset: 0x377DE68 VA: 0x377DE68
	private void <PlayTokenEquipScreenIntro>b__43_0() { }

	[CompilerGenerated]
	// RVA: 0x377DE8C Offset: 0x377DE8C VA: 0x377DE8C
	private void <PlayTokenEquipScreenIntro>b__43_1() { }

	[CompilerGenerated]
	// RVA: 0x377DF1C Offset: 0x377DF1C VA: 0x377DF1C
	private void <PlayRewardPayoutAndClose>b__44_0() { }

	[CompilerGenerated]
	// RVA: 0x377DF40 Offset: 0x377DF40 VA: 0x377DF40
	private void <OnTokenEquipButtonDown>b__45_0() { }

	[CompilerGenerated]
	// RVA: 0x377DF58 Offset: 0x377DF58 VA: 0x377DF58
	private void <BottomTextScaleOut>b__51_0() { }

	[CompilerGenerated]
	// RVA: 0x377DF84 Offset: 0x377DF84 VA: 0x377DF84
	private void <FadeOutBackground>b__53_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]