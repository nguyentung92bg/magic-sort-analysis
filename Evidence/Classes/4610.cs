public class CollectionThemeCompletedPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4610
{
	// Fields
	[SerializeField]
	private Transform _themeViewParent; // 0x18
	[SerializeField]
	private TextMeshPro _themeNameText; // 0x20
	[SerializeField]
	private SpriteRenderer _themeIcon; // 0x28
	[SerializeField]
	private CollectionProgressView _themeProgressView; // 0x30
	[SerializeField]
	private SpriteRenderer _background; // 0x38
	[SerializeField]
	private TextMeshPro _bottomText; // 0x40
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x48
	[SerializeField]
	private Button _continueButton; // 0x50
	[SerializeField]
	private BulkRewardAnimationConfig _animationConfig; // 0x58
	[SerializeField]
	private float _progressBarFillDuration; // 0x60
	[SerializeField]
	private CollectionThemeDatabase _collectionThemeDatabase; // 0x68
	private CollectionThemeData _themeData; // 0x70
	private RewardModel _themeReward; // 0x78
	private CurrencyView _rewardCurrencyView; // 0x80
	private Sequence _sequence; // 0x88
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x90

	// Methods

	// RVA: 0x3A6CF8C Offset: 0x3A6CF8C VA: 0x3A6CF8C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A6D190 Offset: 0x3A6D190 VA: 0x3A6D190
	private void UpdateProgressBar() { }

	// RVA: 0x3A6D1FC Offset: 0x3A6D1FC VA: 0x3A6D1FC
	private void PlayThemeCompletedAnimations() { }

	// RVA: 0x3A6D708 Offset: 0x3A6D708 VA: 0x3A6D708
	private void OnContinueButtonDown() { }

	// RVA: 0x3A6D5B4 Offset: 0x3A6D5B4 VA: 0x3A6D5B4
	private Tween PlayUpdateProgressBarAnimation() { }

	// RVA: 0x3A6D4A0 Offset: 0x3A6D4A0 VA: 0x3A6D4A0
	private Tween SetTextAndPlayTextSequence() { }

	// RVA: 0x3A6D5D4 Offset: 0x3A6D5D4 VA: 0x3A6D5D4
	private Tween BottomTextScaleIn() { }

	// RVA: 0x3A6DB64 Offset: 0x3A6DB64 VA: 0x3A6DB64
	private Tween BottomTextScaleOut() { }

	// RVA: 0x3A6D508 Offset: 0x3A6D508 VA: 0x3A6D508
	private Tween FadeInBackground() { }

	// RVA: 0x3A6D954 Offset: 0x3A6D954 VA: 0x3A6D954
	private Tween FadeOutBackground() { }

	// RVA: 0x3A6DA40 Offset: 0x3A6DA40 VA: 0x3A6DA40
	private Tween ThemeViewScaleOut() { }

	// RVA: 0x3A6DC98 Offset: 0x3A6DC98 VA: 0x3A6DC98 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A6DD74 Offset: 0x3A6DD74 VA: 0x3A6DD74 Slot: 6
	public Task Hide() { }

	// RVA: 0x3A6DE3C Offset: 0x3A6DE3C VA: 0x3A6DE3C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A6DE44 Offset: 0x3A6DE44 VA: 0x3A6DE44
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A6DE54 Offset: 0x3A6DE54 VA: 0x3A6DE54
	private void <PlayThemeCompletedAnimations>b__18_1() { }

	[CompilerGenerated]
	// RVA: 0x3A6DEEC Offset: 0x3A6DEEC VA: 0x3A6DEEC
	private void <BottomTextScaleOut>b__23_0() { }

	[CompilerGenerated]
	// RVA: 0x3A6DF18 Offset: 0x3A6DF18 VA: 0x3A6DF18
	private void <FadeOutBackground>b__25_0() { }

	[CompilerGenerated]
	// RVA: 0x3A6DF44 Offset: 0x3A6DF44 VA: 0x3A6DF44
	private void <ThemeViewScaleOut>b__26_0() { }
}

// Namespace: 
[Serializable]