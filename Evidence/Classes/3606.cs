public class MergeMiniGameGrandPrizeController : MonoBehaviour // TypeDefIndex: 3606
{
	// Fields
	[SerializeField]
	private MergeMiniGameAnimationConfig _config; // 0x18
	[SerializeField]
	private MergeMiniGameController _controller; // 0x20
	[SerializeField]
	private SpriteRenderer _renderer; // 0x28
	[SerializeField]
	private Animation _chestAnimation; // 0x30
	[SerializeField]
	private GameObject _chestGameObject; // 0x38
	[SerializeField]
	private CurrencyViewFactory _factory; // 0x40
	[SerializeField]
	private Transform _rewardHolder; // 0x48
	[SerializeField]
	private Transform _rewardAnimationParent; // 0x50
	[SerializeField]
	private Button _chestOpenButton; // 0x58
	[SerializeField]
	private Button _tapToContinueButton; // 0x60
	[SerializeField]
	private Transform _titleTransform; // 0x68
	[SerializeField]
	private Transform _tapToOpenTransform; // 0x70
	[SerializeField]
	private Transform _tapToContinueTransform; // 0x78
	[SerializeField]
	private Transform _leftMostItemRef; // 0x80
	[SerializeField]
	private Transform _rightMostItemRef; // 0x88

	// Methods

	[Button]
	// RVA: 0x3FAB474 Offset: 0x3FAB474 VA: 0x3FAB474
	public Tween PlayGrandPrizeIntroAnimation() { }

	// RVA: 0x3FAB86C Offset: 0x3FAB86C VA: 0x3FAB86C
	private void Awake() { }

	// RVA: 0x3FAB94C Offset: 0x3FAB94C VA: 0x3FAB94C
	private void OnDestroy() { }

	// RVA: 0x3FABA60 Offset: 0x3FABA60 VA: 0x3FABA60
	private void OnChestOpenButtonSelected() { }

	[AsyncStateMachine(typeof(MergeMiniGameGrandPrizeController.<OnTapToContinueButtonSelected>d__19))]
	// RVA: 0x3FABC1C Offset: 0x3FABC1C VA: 0x3FABC1C
	private void OnTapToContinueButtonSelected() { }

	// RVA: 0x3FAB610 Offset: 0x3FAB610 VA: 0x3FAB610
	private Tween PlayGrandPrizeIntro() { }

	// RVA: 0x3FAB830 Offset: 0x3FAB830 VA: 0x3FAB830
	private Tween FadeInBackground() { }

	// RVA: 0x3FABB00 Offset: 0x3FABB00 VA: 0x3FABB00
	private Tween PlayChestOpenAnimation() { }

	// RVA: 0x3FAC2E4 Offset: 0x3FAC2E4 VA: 0x3FAC2E4
	private Tween ActivateTapToContinue() { }

	// RVA: 0x3FABCD4 Offset: 0x3FABCD4 VA: 0x3FABCD4
	private Tween RevelRewards() { }

	// RVA: 0x3FAC51C Offset: 0x3FAC51C VA: 0x3FAC51C
	private void CollectCollectiblesFromScatterQueue() { }

	[AsyncStateMachine(typeof(MergeMiniGameGrandPrizeController.<CollectCollectibles>d__26))]
	// RVA: 0x3FAC750 Offset: 0x3FAC750 VA: 0x3FAC750
	private Task CollectCollectibles() { }

	// RVA: 0x3FAC83C Offset: 0x3FAC83C VA: 0x3FAC83C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FAC844 Offset: 0x3FAC844 VA: 0x3FAC844
	private void <PlayGrandPrizeIntroAnimation>b__15_0() { }

	[CompilerGenerated]
	// RVA: 0x3FAC898 Offset: 0x3FAC898 VA: 0x3FAC898
	private void <PlayGrandPrizeIntroAnimation>b__15_1() { }

	[CompilerGenerated]
	// RVA: 0x3FAC93C Offset: 0x3FAC93C VA: 0x3FAC93C
	private void <PlayChestOpenAnimation>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x3FAC97C Offset: 0x3FAC97C VA: 0x3FAC97C
	private void <ActivateTapToContinue>b__23_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI