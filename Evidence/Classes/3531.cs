public class MiniGameBoardBasicItem : MiniGameBoardItem // TypeDefIndex: 3531
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x38
	[SerializeField]
	private SpriteRenderer _glowEffect; // 0x40
	[SerializeField]
	private ParticleSystem _moveParticles; // 0x48
	[SerializeField]
	private ParticleSystem _stageCompletedParticle; // 0x50
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x58
	private Sequence _collectSequence; // 0x60

	// Methods

	// RVA: 0x21877B4 Offset: 0x21877B4 VA: 0x21877B4 Slot: 4
	public override void Initialize(MiniGameItemData itemData, MiniGameLevelItemPlacementData itemPlacementData) { }

	// RVA: 0x2187854 Offset: 0x2187854 VA: 0x2187854
	public Tween PlaySlotCollectAnimation(MiniGameBoardItemSlot targetSlot) { }

	// RVA: 0x2188198 Offset: 0x2188198 VA: 0x2188198
	public void CollectToSlotImmediately(MiniGameBoardItemSlot targetSlot, float moveScale) { }

	// RVA: 0x21882A4 Offset: 0x21882A4 VA: 0x21882A4
	public Tween MoveStageCompletedParticlesToTarget(Transform targetTransform) { }

	// RVA: 0x21884CC Offset: 0x21884CC VA: 0x21884CC Slot: 5
	public override void Dispose() { }

	// RVA: 0x21884E4 Offset: 0x21884E4 VA: 0x21884E4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21884F4 Offset: 0x21884F4 VA: 0x21884F4
	private void <PlaySlotCollectAnimation>b__7_0() { }

	[CompilerGenerated]
	// RVA: 0x218851C Offset: 0x218851C VA: 0x218851C
	private void <PlaySlotCollectAnimation>b__7_1() { }

	[CompilerGenerated]
	// RVA: 0x2188548 Offset: 0x2188548 VA: 0x2188548
	private void <PlaySlotCollectAnimation>b__7_2() { }

	[CompilerGenerated]
	// RVA: 0x2188574 Offset: 0x2188574 VA: 0x2188574
	private void <PlaySlotCollectAnimation>b__7_3() { }

	[CompilerGenerated]
	// RVA: 0x2188594 Offset: 0x2188594 VA: 0x2188594
	private void <PlaySlotCollectAnimation>b__7_5() { }

	[CompilerGenerated]
	// RVA: 0x21885B8 Offset: 0x21885B8 VA: 0x21885B8
	private void <PlaySlotCollectAnimation>b__7_8() { }

	[CompilerGenerated]
	// RVA: 0x21885E4 Offset: 0x21885E4 VA: 0x21885E4
	private void <PlaySlotCollectAnimation>b__7_9() { }

	[CompilerGenerated]
	// RVA: 0x218860C Offset: 0x218860C VA: 0x218860C
	private void <MoveStageCompletedParticlesToTarget>b__9_0() { }

	[CompilerGenerated]
	// RVA: 0x2188650 Offset: 0x2188650 VA: 0x2188650
	private void <MoveStageCompletedParticlesToTarget>b__9_1() { }
}

// Namespace: 
[CompilerGenerated]