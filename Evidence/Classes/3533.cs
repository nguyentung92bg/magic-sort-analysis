public class MiniGameBoardBoosterItem : MiniGameBoardItem // TypeDefIndex: 3533
{
	// Fields
	[SerializeField]
	private GameObject _viewParent; // 0x38
	[SerializeField]
	private SkeletonAnimation _skeletonAnimation; // 0x40
	[SerializeField]
	private MeshRenderer _meshRenderer; // 0x48
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x50
	private Sequence _activationSequence; // 0x58

	// Methods

	// RVA: 0x2188890 Offset: 0x2188890 VA: 0x2188890 Slot: 4
	public override void Initialize(MiniGameItemData itemData, MiniGameLevelItemPlacementData itemPlacementData) { }

	// RVA: 0x21888F4 Offset: 0x21888F4 VA: 0x21888F4
	public MiniGameBoardCell GetBoosterCell() { }

	// RVA: 0x218893C Offset: 0x218893C VA: 0x218893C
	public void SetBoosterCell(MiniGameBoardCell cell) { }

	// RVA: 0x21889F0 Offset: 0x21889F0 VA: 0x21889F0
	public Tween PlayBoosterAnimation(List<MiniGameBoardCell> targetCells) { }

	// RVA: 0x2188DFC Offset: 0x2188DFC VA: 0x2188DFC
	private Tween PlayCellHitAnimations(List<MiniGameBoardCell> targetCells, float moveDuration) { }

	// RVA: 0x2189034 Offset: 0x2189034 VA: 0x2189034
	private void PlaySpineAnimation() { }

	// RVA: 0x218909C Offset: 0x218909C VA: 0x218909C
	private void SetSpineAnimationTimeScale(float timeScale) { }

	// RVA: 0x21890B8 Offset: 0x21890B8 VA: 0x21890B8
	private void TrySetUnderCellSortingOrder() { }

	// RVA: 0x2188D50 Offset: 0x2188D50 VA: 0x2188D50
	private Vector3 GetRotationByTarget(Vector3 targetPosition) { }

	// RVA: 0x2189104 Offset: 0x2189104 VA: 0x2189104
	private void Show() { }

	// RVA: 0x21888C8 Offset: 0x21888C8 VA: 0x21888C8
	private void Hide() { }

	// RVA: 0x2189130 Offset: 0x2189130 VA: 0x2189130 Slot: 5
	public override void Dispose() { }

	// RVA: 0x2189148 Offset: 0x2189148 VA: 0x2189148
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2189150 Offset: 0x2189150 VA: 0x2189150
	private void <PlayBoosterAnimation>b__8_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]