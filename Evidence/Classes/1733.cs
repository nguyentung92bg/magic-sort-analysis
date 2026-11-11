public class DuckHouseView : AItemView // TypeDefIndex: 1733
{
	// Fields
	[SerializeField]
	private DuckHouseColorConfig _coverConfig; // 0x20
	[SerializeField]
	private DuckHouseAnimationConfig _config; // 0x28
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x30
	[SerializeField]
	private Transform _root; // 0x38
	[SerializeField]
	private Transform _keyTargetPosition; // 0x40
	[SerializeField]
	private Transform _bottomPivot; // 0x48
	[SerializeField]
	private List<DuckHouseSizeContainer> _containers; // 0x50
	[SerializeField]
	private Transform _snitchPivot; // 0x58
	[SerializeField]
	private GameObject _remainingDuckHolderTransform; // 0x60
	[SerializeField]
	private TextMeshPro _remainingDuckTextMeshPro; // 0x68
	[SerializeField]
	private GameObject _coverHolder; // 0x70
	[SerializeField]
	private SpriteRenderer _coverCenter; // 0x78
	[SerializeField]
	private SpriteRenderer[] _coverSides; // 0x80
	[SerializeField]
	private SpriteRenderer _coveredItemSprite; // 0x88
	[SerializeField]
	private Animation _coverAnimation; // 0x90
	[SerializeField]
	private Animation _animation; // 0x98
	[SerializeField]
	private DuckHouseCompleteView _completeView; // 0xA0
	[SerializeField]
	private DuckHouseBrokeParticle[] _brokeParticles; // 0xA8
	[SerializeField]
	private Animator _coverItemAnimator; // 0xB0
	private bool _coverOpen; // 0xB8
	private int _revealingDuckCount; // 0xBC
	private bool _duckHouseCompleting; // 0xC0
	private DuckType _duckType; // 0xC4
	private int _resetStateHash; // 0xC8
	private ParticleSystem _brokeParticle; // 0xD0

	// Properties
	public DuckHouseAnimationConfig Config { get; }

	// Methods

	// RVA: 0x2759D20 Offset: 0x2759D20 VA: 0x2759D20
	public DuckHouseAnimationConfig get_Config() { }

	// RVA: 0x2759D28 Offset: 0x2759D28 VA: 0x2759D28 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2759D2C Offset: 0x2759D2C VA: 0x2759D2C Slot: 6
	public override void Spawn() { }

	// RVA: 0x275750C Offset: 0x275750C VA: 0x275750C
	public void Prepare(Sorting sorting, int bottlesCount, DuckType duckType, int duckItemsCount) { }

	// RVA: 0x2759444 Offset: 0x2759444 VA: 0x2759444
	public void SetRemainingDuckCount(int remainingDuckCount) { }

	// RVA: 0x2758094 Offset: 0x2758094 VA: 0x2758094
	public void IncreaseRevealingDuckCount() { }

	// RVA: 0x2759F9C Offset: 0x2759F9C VA: 0x2759F9C
	public void DecreaseRevealingDuckCount() { }

	// RVA: 0x2759ED0 Offset: 0x2759ED0 VA: 0x2759ED0
	private void SetDuckType(DuckType duckType) { }

	// RVA: 0x2759E34 Offset: 0x2759E34 VA: 0x2759E34
	private void SetParticle(DuckType duckType, int bottlesCount) { }

	// RVA: 0x27580A4 Offset: 0x27580A4 VA: 0x27580A4
	public Sequence PlayCoverAnim() { }

	// RVA: 0x2758E48 Offset: 0x2758E48 VA: 0x2758E48
	public Sequence PlayCompleteAnimation(List<BottleItem> bottleItems, bool immediate = False) { }

	// RVA: 0x2759FAC Offset: 0x2759FAC VA: 0x2759FAC Slot: 7
	public override void Recycle() { }

	// RVA: 0x2757B04 Offset: 0x2757B04 VA: 0x2757B04
	public Vector3 GetKeyTargetPositionForDuckItem() { }

	// RVA: 0x2759FB0 Offset: 0x2759FB0 VA: 0x2759FB0 Slot: 8
	public override void Show() { }

	// RVA: 0x2759FD4 Offset: 0x2759FD4 VA: 0x2759FD4 Slot: 9
	public override void Hide() { }

	// RVA: 0x27582D0 Offset: 0x27582D0 VA: 0x27582D0
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x2759350 Offset: 0x2759350 VA: 0x2759350
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x275A014 Offset: 0x275A014 VA: 0x275A014
	private void ScaleAnim(DuckHouseConfigForSize configForSize) { }

	// RVA: 0x275A0F0 Offset: 0x275A0F0 VA: 0x275A0F0
	private void TryPlayCoverOpenAnim() { }

	// RVA: 0x275A148 Offset: 0x275A148 VA: 0x275A148
	private void TryPlayCloseCoverAnim() { }

	// RVA: 0x275A1A8 Offset: 0x275A1A8 VA: 0x275A1A8
	private void OpenCoveredItem() { }

	// RVA: 0x275A240 Offset: 0x275A240 VA: 0x275A240
	private void TryCloseCoveredItem() { }

	// RVA: 0x275A3E8 Offset: 0x275A3E8 VA: 0x275A3E8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x275A440 Offset: 0x275A440 VA: 0x275A440
	private void <TryCloseCoveredItem>b__47_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck