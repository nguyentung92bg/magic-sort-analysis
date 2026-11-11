public class MiniGameBoardItemSlotsContainer : MonoBehaviour // TypeDefIndex: 3542
{
	// Fields
	[SerializeField]
	private MiniGameItemDataConfig _itemDataConfig; // 0x18
	[SerializeField]
	private Transform _slotsParent; // 0x20
	[SerializeField]
	private List<Transform> _stageObjectParents; // 0x28
	[SerializeField]
	private Animation _animation; // 0x30
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x38
	private List<MiniGameBoardItemSlot> _currentSlots; // 0x40

	// Methods

	// RVA: 0x218AE14 Offset: 0x218AE14 VA: 0x218AE14
	public void Initialize(MiniGameLevelData levelData, int currentStage, Vector3 slotScale) { }

	// RVA: 0x218B120 Offset: 0x218B120 VA: 0x218B120
	private void ClearCurrentSlots() { }

	// RVA: 0x218B43C Offset: 0x218B43C VA: 0x218B43C
	private void ActivateStageObjects(int stage) { }

	// RVA: 0x218B4E8 Offset: 0x218B4E8 VA: 0x218B4E8
	public void PlayEnterAnimation() { }

	// RVA: 0x218B528 Offset: 0x218B528 VA: 0x218B528
	public void PlayExitAnimation() { }

	// RVA: 0x218B568 Offset: 0x218B568 VA: 0x218B568
	public void PlayCompletedAnimation() { }

	// RVA: 0x218B5A8 Offset: 0x218B5A8 VA: 0x218B5A8
	public Tween MoveStageCompletedParticlesToTarget(Transform target) { }

	// RVA: 0x218B8E4 Offset: 0x218B8E4 VA: 0x218B8E4
	public MiniGameBoardItemSlot GetItemSlotByIndex(int itemIndex) { }

	// RVA: 0x218B93C Offset: 0x218B93C VA: 0x218B93C
	public void Dispose() { }

	// RVA: 0x218B940 Offset: 0x218B940 VA: 0x218B940
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]