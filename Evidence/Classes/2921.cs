public class ChestView : MonoBehaviour // TypeDefIndex: 2921
{
	// Fields
	[SerializeField]
	private SpriteRenderer _greenTickSprite; // 0x18
	[SerializeField]
	private SpriteRenderer _chestSpriteRenderer; // 0x20
	[SerializeField]
	private ToolbarButton _chestToolbarButton; // 0x28
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x30
	[SerializeField]
	private ParticleSystem _chestRevealParticle; // 0x38
	[SerializeField]
	private ChestSpriteConfig _chestSpriteConfig; // 0x40
	[SerializeField]
	private RevealAnimationView _revealAnimationView; // 0x48
	[SerializeField]
	private Animation _chestAnimator; // 0x50
	[SerializeField]
	private SpriteLibrary _chestSpriteLibrary; // 0x58
	private RewardModel _rewardModel; // 0x60
	private Tween _tween; // 0x68

	// Methods

	// RVA: 0x2984F64 Offset: 0x2984F64 VA: 0x2984F64
	private void Awake() { }

	// RVA: 0x2984FEC Offset: 0x2984FEC VA: 0x2984FEC
	public void SetChestSprite(int chestId) { }

	[Button]
	// RVA: 0x2985020 Offset: 0x2985020 VA: 0x2985020
	public Sequence PlayRevealAnimations(bool shouldParent = False) { }

	// RVA: 0x2985384 Offset: 0x2985384 VA: 0x2985384
	public void SetRewardModel(RewardModel rewardModel) { }

	// RVA: 0x298538C Offset: 0x298538C VA: 0x298538C
	public void SetChestToolbarModel(RewardModel rewardModel, string text) { }

	// RVA: 0x29853B4 Offset: 0x29853B4 VA: 0x29853B4
	public void SetChestToolbarAssetColor(ToolbarAssetColor color) { }

	// RVA: 0x29853D0 Offset: 0x29853D0 VA: 0x29853D0
	public void SetChestToolbarModelOnClaimed(string text) { }

	// RVA: 0x2985408 Offset: 0x2985408 VA: 0x2985408
	public void OpenToolbar() { }

	// RVA: 0x2985424 Offset: 0x2985424 VA: 0x2985424
	public void ToggleGreenTick(bool value) { }

	// RVA: 0x29854C0 Offset: 0x29854C0 VA: 0x29854C0
	public void PlayGreenTick(Vector3 startScale, Vector3 endScale, float duration, AnimationCurve curve) { }

	// RVA: 0x29855C0 Offset: 0x29855C0 VA: 0x29855C0
	public void PlayParticle() { }

	// RVA: 0x29855DC Offset: 0x29855DC VA: 0x29855DC
	public void PlayChestAnimation(string animationName) { }

	// RVA: 0x2985674 Offset: 0x2985674 VA: 0x2985674
	public void PlayChestUnlockAnimation() { }

	// RVA: 0x2985710 Offset: 0x2985710 VA: 0x2985710
	public void PlayChestOpenAnimation() { }

	// RVA: 0x29857AC Offset: 0x29857AC VA: 0x29857AC
	public void Dispose() { }

	// RVA: 0x29859D0 Offset: 0x29859D0 VA: 0x29859D0
	public void SetChestTypeForAnimation(int viewModelChestType) { }

	// RVA: 0x2985A04 Offset: 0x2985A04 VA: 0x2985A04
	public void SetFlipped(bool status) { }

	// RVA: 0x2985A24 Offset: 0x2985A24 VA: 0x2985A24
	public void SetSortOrder(int order) { }

	// RVA: 0x2985AF0 Offset: 0x2985AF0 VA: 0x2985AF0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Chest.Scripts
[CreateAssetMenu(fileName = "RevealAnimationConfig", menuName = "Configs/RevealAnimationConfig")]