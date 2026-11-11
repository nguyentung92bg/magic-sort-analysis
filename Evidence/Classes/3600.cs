public class MergeMiniGameAnimationConfig : ScriptableObject // TypeDefIndex: 3600
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	[Header("Select Animation")]
	private float <ItemSelectAnimDuration>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ItemSelectAnimScaleCurve>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CursorAppearCurve>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private float <CursorAppearDuration>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CursorStartScale>k__BackingField; // 0x34
	[Header("Generator Item")]
	[CompilerGenerated]
	[SerializeField]
	private float <GeneratorItemDisappearDuration>k__BackingField; // 0x40
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <GeneratorItemDisappearCurve>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private float <ItemGeneratorItemClickScaleDuration>k__BackingField; // 0x50
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ItemGeneratorItemClickCurve>k__BackingField; // 0x58
	[Header("Merge Hover Hint")]
	[CompilerGenerated]
	[SerializeField]
	private float <MergeableHintStartDuration>k__BackingField; // 0x60
	[SerializeField]
	[CompilerGenerated]
	private float <MergeableHintGlowEndAlpha>k__BackingField; // 0x64
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <MergeableHintParticleEndScale>k__BackingField; // 0x68
	[SerializeField]
	[Header("Merge Anim")]
	[CompilerGenerated]
	private Vector3 <PreMergeOriginItemTargetScale>k__BackingField; // 0x74
	[CompilerGenerated]
	[SerializeField]
	private float <PreMergeOriginItemScaleDuration>k__BackingField; // 0x80
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <PreMergeTargetItemTargetScale>k__BackingField; // 0x84
	[SerializeField]
	[CompilerGenerated]
	private float <PreMergeTargetItemScaleDuration>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private float <PostMergeNewItemScaleDuration>k__BackingField; // 0x94
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <PostMergeNewItemInitialScale>k__BackingField; // 0x98
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <PostMergeNewItemTargetScale>k__BackingField; // 0xA4
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <PostMergeNewItemExpandCurve>k__BackingField; // 0xB0
	[CompilerGenerated]
	[SerializeField]
	private float <PostMergeNewItemShrinkAnimationDuration>k__BackingField; // 0xB8
	[CompilerGenerated]
	[SerializeField]
	private float <PostMergeNewItemExpandAnimationDuration>k__BackingField; // 0xBC
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <PostMergeNewItemShrinkCurve>k__BackingField; // 0xC0
	[CompilerGenerated]
	[Header("Merge Anim Neighbor")]
	[SerializeField]
	private float <NeighborItemScaleDuration>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <NeighborItemsScaleCurve>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private float <BlockFadeOutDuration>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BlockFadeOutCurve>k__BackingField; // 0xE0
	[SerializeField]
	[CompilerGenerated]
	private float <NeighborItemsScaleDelay>k__BackingField; // 0xE8
	[SerializeField]
	[Header("Bubble")]
	[CompilerGenerated]
	private float <BubbleDisappearDuration>k__BackingField; // 0xEC
	[SerializeField]
	[CompilerGenerated]
	[Header("Move")]
	private float <MoveSequenceDuration>k__BackingField; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <MoveSequenceCurve>k__BackingField; // 0xF8
	[CompilerGenerated]
	[Header("Scatter")]
	[SerializeField]
	private float <ScatterMoveDuration>k__BackingField; // 0x100
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <ScatterMoveCurve>k__BackingField; // 0x108
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <ScatterScaleTarget>k__BackingField; // 0x110
	[SerializeField]
	[CompilerGenerated]
	private float <ScatterScaleDuration>k__BackingField; // 0x11C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ScatterScaleCurve>k__BackingField; // 0x120
	[SerializeField]
	[CompilerGenerated]
	private float <ScatterDelayBetweenItems>k__BackingField; // 0x128
	[CompilerGenerated]
	[Header("Scatter Queue View")]
	[SerializeField]
	private float <ScatterQueueNextItemScaleDuration>k__BackingField; // 0x12C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ScatterQueueNextItemScaleCurve>k__BackingField; // 0x130
	[SerializeField]
	[CompilerGenerated]
	private float <ScatterQueueViewDisappearDuration>k__BackingField; // 0x138
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ScatterQueueViewDisappearScale>k__BackingField; // 0x140
	[CompilerGenerated]
	[SerializeField]
	private float <ScatterQueueViewAppearDuration>k__BackingField; // 0x148
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ScatterQueueViewAppearScale>k__BackingField; // 0x150
	[CompilerGenerated]
	[SerializeField]
	private float <ScatterFromQueueAfterCollectTime>k__BackingField; // 0x158
	[CompilerGenerated]
	[Header("Generator Button Launch")]
	[SerializeField]
	private float <GeneratorButtonInitialScale>k__BackingField; // 0x15C
	[SerializeField]
	[CompilerGenerated]
	private float <GeneratorButtonSequenceDuration>k__BackingField; // 0x160
	[SerializeField]
	[CompilerGenerated]
	private float <GeneratorButtonScaleDuration>k__BackingField; // 0x164
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <GeneratorButtonMoveSequenceCurve>k__BackingField; // 0x168
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <GeneratorButtonScaleCurve>k__BackingField; // 0x170
	[SerializeField]
	[Header("Generator Button Bezier Curves")]
	[CompilerGenerated]
	private Vector3 <AOffset>k__BackingField; // 0x178
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <BOffset>k__BackingField; // 0x184
	[Header("Hint")]
	public float HintMoveMagnitude; // 0x190
	public float HintScaleMultiplier; // 0x194
	public float HintDuration; // 0x198
	public Ease HintEase; // 0x19C
	[Header("Stage Completed")]
	public float StageCompletedSlotItemsParticleToCenterMoveDuration; // 0x1A0
	public float StageCompletedSlotItemsParticleToTargetMoveDuration; // 0x1A4
	public Vector3 StageCompletedSlotItemsParticleMoveOffset; // 0x1A8
	public AnimationCurve StageCompletedSlotItemsParticleMoveCurve; // 0x1B8
	public float StageCompletedItemInitialScale; // 0x1C0
	public float StageCompletedItemFinalScale; // 0x1C4
	public Vector3 StageCompletedItemTargetPosition; // 0x1C8
	public float StageCompletedBackgroundFadeEndValue; // 0x1D4
	public float StageCompletedAnimationDuration; // 0x1D8
	public AnimationCurve ItemMoveCurve; // 0x1E0
	public AnimationCurve ItemScaleCurve; // 0x1E8
	public float RewardRevealTime; // 0x1F0
	public float CheckMarkScaleTime; // 0x1F4
	public float ProgressBarRewardFadeTime; // 0x1F8
	[Header("Event Failed")]
	public float CollectibleCollectTime; // 0x1FC
	public float DelayBetweenCollectibles; // 0x200
	public float EnergyCollectDelay; // 0x204
	[Header("Grand Prize")]
	public float GrandPrizeTapToOpenTime; // 0x208
	public float GrandPrizeAnimationStartTime; // 0x20C
	public float GrandPrizeBackgroundFadeInValue; // 0x210
	public float GrandPrizeBackgroundFadeInTime; // 0x214
	public float GrandPrizeBackgroundFadeInDuration; // 0x218
	public float GrandPrizeBackgroundFadeOutDuration; // 0x21C
	public float GrandPrizeTitleIntroDuration; // 0x220
	public AnimationCurve GrandPrizeTitleIntroCurve; // 0x228
	public float GrandPrizeIntroTime; // 0x230
	public float GrandPrizeChestIntroTime; // 0x234
	public AnimationClip GrandPrizeChestIntroClip; // 0x238
	public AnimationClip GrandPrizeChestOpenClip; // 0x240
	public float GrandPrizeRewardRevealTime; // 0x248
	public float DelayBetweenGrandPrizeRewards; // 0x24C
	public float GrandPrizeRewardScaleInTime; // 0x250
	public Vector3 GrandPrizeRewardScaleTarget; // 0x254
	public float GrandPrizeRewardScaleDuration; // 0x260
	public AnimationCurve GrandPrizeRewardScaleCurve; // 0x268
	public AnimationCurve GrandPrizeRewardPositioningCurve; // 0x270
	public float ItemPositionYScaling; // 0x278
	public float GrandPrizeRewardMoveTime; // 0x27C
	public float GrandPrizeRewardMoveDuration; // 0x280
	public AnimationCurve GrandPrizeRewardMoveCurve; // 0x288
	public float TapToContinueActivateTime; // 0x290
	public int GrandPrizeMaxRewardCount; // 0x294

	// Properties
	public float ItemSelectAnimDuration { get; set; }
	public AnimationCurve ItemSelectAnimScaleCurve { get; set; }
	public AnimationCurve CursorAppearCurve { get; set; }
	public float CursorAppearDuration { get; set; }
	public Vector3 CursorStartScale { get; set; }
	public float GeneratorItemDisappearDuration { get; set; }
	public AnimationCurve GeneratorItemDisappearCurve { get; set; }
	public float ItemGeneratorItemClickScaleDuration { get; set; }
	public AnimationCurve ItemGeneratorItemClickCurve { get; set; }
	public float MergeableHintStartDuration { get; set; }
	public float MergeableHintGlowEndAlpha { get; set; }
	public Vector3 MergeableHintParticleEndScale { get; set; }
	public Vector3 PreMergeOriginItemTargetScale { get; set; }
	public float PreMergeOriginItemScaleDuration { get; set; }
	public Vector3 PreMergeTargetItemTargetScale { get; set; }
	public float PreMergeTargetItemScaleDuration { get; set; }
	public float PostMergeNewItemScaleDuration { get; set; }
	public Vector3 PostMergeNewItemInitialScale { get; set; }
	public Vector3 PostMergeNewItemTargetScale { get; set; }
	public AnimationCurve PostMergeNewItemExpandCurve { get; set; }
	public float PostMergeNewItemShrinkAnimationDuration { get; set; }
	public float PostMergeNewItemExpandAnimationDuration { get; set; }
	public AnimationCurve PostMergeNewItemShrinkCurve { get; set; }
	public float NeighborItemScaleDuration { get; set; }
	public AnimationCurve NeighborItemsScaleCurve { get; set; }
	public float BlockFadeOutDuration { get; set; }
	public AnimationCurve BlockFadeOutCurve { get; set; }
	public float NeighborItemsScaleDelay { get; set; }
	public float BubbleDisappearDuration { get; set; }
	public float MoveSequenceDuration { get; set; }
	public AnimationCurve MoveSequenceCurve { get; set; }
	public float ScatterMoveDuration { get; set; }
	public AnimationCurve ScatterMoveCurve { get; set; }
	public Vector3 ScatterScaleTarget { get; set; }
	public float ScatterScaleDuration { get; set; }
	public AnimationCurve ScatterScaleCurve { get; set; }
	public float ScatterDelayBetweenItems { get; set; }
	public float ScatterQueueNextItemScaleDuration { get; set; }
	public AnimationCurve ScatterQueueNextItemScaleCurve { get; set; }
	public float ScatterQueueViewDisappearDuration { get; set; }
	public AnimationCurve ScatterQueueViewDisappearScale { get; set; }
	public float ScatterQueueViewAppearDuration { get; set; }
	public AnimationCurve ScatterQueueViewAppearScale { get; set; }
	public float ScatterFromQueueAfterCollectTime { get; set; }
	public float GeneratorButtonInitialScale { get; set; }
	public float GeneratorButtonSequenceDuration { get; set; }
	public float GeneratorButtonScaleDuration { get; set; }
	public AnimationCurve GeneratorButtonMoveSequenceCurve { get; set; }
	public AnimationCurve GeneratorButtonScaleCurve { get; set; }
	public Vector3 AOffset { get; set; }
	public Vector3 BOffset { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3FAA954 Offset: 0x3FAA954 VA: 0x3FAA954
	public float get_ItemSelectAnimDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAA95C Offset: 0x3FAA95C VA: 0x3FAA95C
	public void set_ItemSelectAnimDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA964 Offset: 0x3FAA964 VA: 0x3FAA964
	public AnimationCurve get_ItemSelectAnimScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAA96C Offset: 0x3FAA96C VA: 0x3FAA96C
	public void set_ItemSelectAnimScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA974 Offset: 0x3FAA974 VA: 0x3FAA974
	public AnimationCurve get_CursorAppearCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAA97C Offset: 0x3FAA97C VA: 0x3FAA97C
	public void set_CursorAppearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA984 Offset: 0x3FAA984 VA: 0x3FAA984
	public float get_CursorAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAA98C Offset: 0x3FAA98C VA: 0x3FAA98C
	public void set_CursorAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA994 Offset: 0x3FAA994 VA: 0x3FAA994
	public Vector3 get_CursorStartScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAA9A0 Offset: 0x3FAA9A0 VA: 0x3FAA9A0
	public void set_CursorStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA9AC Offset: 0x3FAA9AC VA: 0x3FAA9AC
	public float get_GeneratorItemDisappearDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAA9B4 Offset: 0x3FAA9B4 VA: 0x3FAA9B4
	public void set_GeneratorItemDisappearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA9BC Offset: 0x3FAA9BC VA: 0x3FAA9BC
	public AnimationCurve get_GeneratorItemDisappearCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAA9C4 Offset: 0x3FAA9C4 VA: 0x3FAA9C4
	public void set_GeneratorItemDisappearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA9CC Offset: 0x3FAA9CC VA: 0x3FAA9CC
	public float get_ItemGeneratorItemClickScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAA9D4 Offset: 0x3FAA9D4 VA: 0x3FAA9D4
	public void set_ItemGeneratorItemClickScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA9DC Offset: 0x3FAA9DC VA: 0x3FAA9DC
	public AnimationCurve get_ItemGeneratorItemClickCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAA9E4 Offset: 0x3FAA9E4 VA: 0x3FAA9E4
	public void set_ItemGeneratorItemClickCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA9EC Offset: 0x3FAA9EC VA: 0x3FAA9EC
	public float get_MergeableHintStartDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAA9F4 Offset: 0x3FAA9F4 VA: 0x3FAA9F4
	public void set_MergeableHintStartDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAA9FC Offset: 0x3FAA9FC VA: 0x3FAA9FC
	public float get_MergeableHintGlowEndAlpha() { }

	[CompilerGenerated]
	// RVA: 0x3FAAA04 Offset: 0x3FAAA04 VA: 0x3FAAA04
	public void set_MergeableHintGlowEndAlpha(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAA0C Offset: 0x3FAAA0C VA: 0x3FAAA0C
	public Vector3 get_MergeableHintParticleEndScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAAA18 Offset: 0x3FAAA18 VA: 0x3FAAA18
	public void set_MergeableHintParticleEndScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAA24 Offset: 0x3FAAA24 VA: 0x3FAAA24
	public Vector3 get_PreMergeOriginItemTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAAA30 Offset: 0x3FAAA30 VA: 0x3FAAA30
	public void set_PreMergeOriginItemTargetScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAA3C Offset: 0x3FAAA3C VA: 0x3FAAA3C
	public float get_PreMergeOriginItemScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAA44 Offset: 0x3FAAA44 VA: 0x3FAAA44
	public void set_PreMergeOriginItemScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAA4C Offset: 0x3FAAA4C VA: 0x3FAAA4C
	public Vector3 get_PreMergeTargetItemTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAAA58 Offset: 0x3FAAA58 VA: 0x3FAAA58
	public void set_PreMergeTargetItemTargetScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAA64 Offset: 0x3FAAA64 VA: 0x3FAAA64
	public float get_PreMergeTargetItemScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAA6C Offset: 0x3FAAA6C VA: 0x3FAAA6C
	public void set_PreMergeTargetItemScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAA74 Offset: 0x3FAAA74 VA: 0x3FAAA74
	public float get_PostMergeNewItemScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAA7C Offset: 0x3FAAA7C VA: 0x3FAAA7C
	public void set_PostMergeNewItemScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAA84 Offset: 0x3FAAA84 VA: 0x3FAAA84
	public Vector3 get_PostMergeNewItemInitialScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAAA90 Offset: 0x3FAAA90 VA: 0x3FAAA90
	public void set_PostMergeNewItemInitialScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAA9C Offset: 0x3FAAA9C VA: 0x3FAAA9C
	public Vector3 get_PostMergeNewItemTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAAAA8 Offset: 0x3FAAAA8 VA: 0x3FAAAA8
	public void set_PostMergeNewItemTargetScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAAB4 Offset: 0x3FAAAB4 VA: 0x3FAAAB4
	public AnimationCurve get_PostMergeNewItemExpandCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAAABC Offset: 0x3FAAABC VA: 0x3FAAABC
	public void set_PostMergeNewItemExpandCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAAC4 Offset: 0x3FAAAC4 VA: 0x3FAAAC4
	public float get_PostMergeNewItemShrinkAnimationDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAACC Offset: 0x3FAAACC VA: 0x3FAAACC
	public void set_PostMergeNewItemShrinkAnimationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAAD4 Offset: 0x3FAAAD4 VA: 0x3FAAAD4
	public float get_PostMergeNewItemExpandAnimationDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAADC Offset: 0x3FAAADC VA: 0x3FAAADC
	public void set_PostMergeNewItemExpandAnimationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAAE4 Offset: 0x3FAAAE4 VA: 0x3FAAAE4
	public AnimationCurve get_PostMergeNewItemShrinkCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAAAEC Offset: 0x3FAAAEC VA: 0x3FAAAEC
	public void set_PostMergeNewItemShrinkCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAAF4 Offset: 0x3FAAAF4 VA: 0x3FAAAF4
	public float get_NeighborItemScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAAFC Offset: 0x3FAAAFC VA: 0x3FAAAFC
	public void set_NeighborItemScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB04 Offset: 0x3FAAB04 VA: 0x3FAAB04
	public AnimationCurve get_NeighborItemsScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB0C Offset: 0x3FAAB0C VA: 0x3FAAB0C
	public void set_NeighborItemsScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB14 Offset: 0x3FAAB14 VA: 0x3FAAB14
	public float get_BlockFadeOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB1C Offset: 0x3FAAB1C VA: 0x3FAAB1C
	public void set_BlockFadeOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB24 Offset: 0x3FAAB24 VA: 0x3FAAB24
	public AnimationCurve get_BlockFadeOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB2C Offset: 0x3FAAB2C VA: 0x3FAAB2C
	public void set_BlockFadeOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB34 Offset: 0x3FAAB34 VA: 0x3FAAB34
	public float get_NeighborItemsScaleDelay() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB3C Offset: 0x3FAAB3C VA: 0x3FAAB3C
	public void set_NeighborItemsScaleDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB44 Offset: 0x3FAAB44 VA: 0x3FAAB44
	public float get_BubbleDisappearDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB4C Offset: 0x3FAAB4C VA: 0x3FAAB4C
	public void set_BubbleDisappearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB54 Offset: 0x3FAAB54 VA: 0x3FAAB54
	public float get_MoveSequenceDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB5C Offset: 0x3FAAB5C VA: 0x3FAAB5C
	public void set_MoveSequenceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB64 Offset: 0x3FAAB64 VA: 0x3FAAB64
	public AnimationCurve get_MoveSequenceCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB6C Offset: 0x3FAAB6C VA: 0x3FAAB6C
	public void set_MoveSequenceCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB74 Offset: 0x3FAAB74 VA: 0x3FAAB74
	public float get_ScatterMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB7C Offset: 0x3FAAB7C VA: 0x3FAAB7C
	public void set_ScatterMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB84 Offset: 0x3FAAB84 VA: 0x3FAAB84
	public AnimationCurve get_ScatterMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAAB8C Offset: 0x3FAAB8C VA: 0x3FAAB8C
	public void set_ScatterMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAB9C Offset: 0x3FAAB9C VA: 0x3FAAB9C
	public Vector3 get_ScatterScaleTarget() { }

	[CompilerGenerated]
	// RVA: 0x3FAABAC Offset: 0x3FAABAC VA: 0x3FAABAC
	public void set_ScatterScaleTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FAABBC Offset: 0x3FAABBC VA: 0x3FAABBC
	public float get_ScatterScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAABC4 Offset: 0x3FAABC4 VA: 0x3FAABC4
	public void set_ScatterScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAABCC Offset: 0x3FAABCC VA: 0x3FAABCC
	public AnimationCurve get_ScatterScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAABD4 Offset: 0x3FAABD4 VA: 0x3FAABD4
	public void set_ScatterScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAABE4 Offset: 0x3FAABE4 VA: 0x3FAABE4
	public float get_ScatterDelayBetweenItems() { }

	[CompilerGenerated]
	// RVA: 0x3FAABEC Offset: 0x3FAABEC VA: 0x3FAABEC
	public void set_ScatterDelayBetweenItems(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAABF4 Offset: 0x3FAABF4 VA: 0x3FAABF4
	public float get_ScatterQueueNextItemScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAABFC Offset: 0x3FAABFC VA: 0x3FAABFC
	public void set_ScatterQueueNextItemScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC04 Offset: 0x3FAAC04 VA: 0x3FAAC04
	public AnimationCurve get_ScatterQueueNextItemScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAAC0C Offset: 0x3FAAC0C VA: 0x3FAAC0C
	public void set_ScatterQueueNextItemScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC1C Offset: 0x3FAAC1C VA: 0x3FAAC1C
	public float get_ScatterQueueViewDisappearDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAC24 Offset: 0x3FAAC24 VA: 0x3FAAC24
	public void set_ScatterQueueViewDisappearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC2C Offset: 0x3FAAC2C VA: 0x3FAAC2C
	public AnimationCurve get_ScatterQueueViewDisappearScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAAC34 Offset: 0x3FAAC34 VA: 0x3FAAC34
	public void set_ScatterQueueViewDisappearScale(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC44 Offset: 0x3FAAC44 VA: 0x3FAAC44
	public float get_ScatterQueueViewAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAC4C Offset: 0x3FAAC4C VA: 0x3FAAC4C
	public void set_ScatterQueueViewAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC54 Offset: 0x3FAAC54 VA: 0x3FAAC54
	public AnimationCurve get_ScatterQueueViewAppearScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAAC5C Offset: 0x3FAAC5C VA: 0x3FAAC5C
	public void set_ScatterQueueViewAppearScale(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC6C Offset: 0x3FAAC6C VA: 0x3FAAC6C
	public float get_ScatterFromQueueAfterCollectTime() { }

	[CompilerGenerated]
	// RVA: 0x3FAAC74 Offset: 0x3FAAC74 VA: 0x3FAAC74
	public void set_ScatterFromQueueAfterCollectTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC7C Offset: 0x3FAAC7C VA: 0x3FAAC7C
	public float get_GeneratorButtonInitialScale() { }

	[CompilerGenerated]
	// RVA: 0x3FAAC84 Offset: 0x3FAAC84 VA: 0x3FAAC84
	public void set_GeneratorButtonInitialScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC8C Offset: 0x3FAAC8C VA: 0x3FAAC8C
	public float get_GeneratorButtonSequenceDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAAC94 Offset: 0x3FAAC94 VA: 0x3FAAC94
	public void set_GeneratorButtonSequenceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAAC9C Offset: 0x3FAAC9C VA: 0x3FAAC9C
	public float get_GeneratorButtonScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FAACA4 Offset: 0x3FAACA4 VA: 0x3FAACA4
	public void set_GeneratorButtonScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FAACAC Offset: 0x3FAACAC VA: 0x3FAACAC
	public AnimationCurve get_GeneratorButtonMoveSequenceCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAACB4 Offset: 0x3FAACB4 VA: 0x3FAACB4
	public void set_GeneratorButtonMoveSequenceCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAACC4 Offset: 0x3FAACC4 VA: 0x3FAACC4
	public AnimationCurve get_GeneratorButtonScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FAACCC Offset: 0x3FAACCC VA: 0x3FAACCC
	public void set_GeneratorButtonScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FAACDC Offset: 0x3FAACDC VA: 0x3FAACDC
	public Vector3 get_AOffset() { }

	[CompilerGenerated]
	// RVA: 0x3FAACEC Offset: 0x3FAACEC VA: 0x3FAACEC
	public void set_AOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FAACFC Offset: 0x3FAACFC VA: 0x3FAACFC
	public Vector3 get_BOffset() { }

	[CompilerGenerated]
	// RVA: 0x3FAAD0C Offset: 0x3FAAD0C VA: 0x3FAAD0C
	public void set_BOffset(Vector3 value) { }

	// RVA: 0x3FAAD1C Offset: 0x3FAAD1C VA: 0x3FAAD1C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI