public class MiniGameAnimationConfig : ScriptableObject // TypeDefIndex: 3480
{
	// Fields
	[Header("Slot Collect")]
	public float ItemCollectMoveStartDelay; // 0x18
	public float ItemCollectCenterMoveDuration; // 0x1C
	public AnimationCurve ItemCollectScaleCurve; // 0x20
	public Vector3 ItemCollectScale; // 0x28
	public float ItemRevealMoveOffset; // 0x34
	public float ItemCollectCenterWaitDuration; // 0x38
	public float ItemCollectCenterToSlotMoveDuration; // 0x3C
	public float ItemCollectCenterToSlotMoveEndScaleMultiplier; // 0x40
	public float ItemCollectCenterToSlotMoveEndScaleDelay; // 0x44
	public float ItemCollectCenterToSlotMoveEndScaleDuration; // 0x48
	public AnimationCurve ItemCollectCenterToSlotMoveCurve; // 0x50
	public AnimationCurve ItemCollectCenterToSlotScaleCurve; // 0x58
	public Vector3 ItemContainerCollectPathOffset; // 0x60
	public int ItemCollectMoveSortingOrder; // 0x6C
	public int ItemCollectMoveSortingOrderOnSlot; // 0x70
	public float ItemCollectFadeDuration; // 0x74
	[Header("JellFish")]
	public AnimationClip JellyFishMoveAnimationClip; // 0x78
	public float JellyFishActivationDelay; // 0x80
	public float JellyFishMoveDelay; // 0x84
	public float JellyFishMoveDurationPerCell; // 0x88
	public AnimationCurve JellyFishMoveCurve; // 0x90
	public float JellyFishDeactivationDelay; // 0x98
	public int JellyFishUnderCellSortingOrder; // 0x9C
	public float JellyFishInitialTimeScale; // 0xA0
	[Header("Trident")]
	public Vector3 TridentHitOffset; // 0xA4
	public Vector3 TridentLastHitOffset; // 0xB0
	[Header("Cell")]
	public float CellDestroyParticleDelay; // 0xBC
	public float CellDestroyLastHitParticleDelay; // 0xC0
	public float CellDestroyDisableDelay; // 0xC4
	[Header("Over Item")]
	public float OverItemDestroyParticleDelay; // 0xC8
	public float OverItemSpriteChangeDelay; // 0xCC
	[Header("ProgressBar")]
	public float ProgressBarStageProgressFillDuration; // 0xD0
	public float ProgressBarClaimedIconScaleDuration; // 0xD4
	public Ease ProgressBarClaimedIconScaleInEase; // 0xD8
	public Ease ProgressBarRewardIconScaleOutEase; // 0xDC
	public float ProgressBarStageProgressMoveDelay; // 0xE0
	public float ProgressBarStageProgressMoveDuration; // 0xE4
	public int ProgressBarRewardShowOffset; // 0xE8
	[Header("Reveal All Button")]
	public float RevealAllButtonScaleDuration; // 0xEC
	public Ease RevealAllButtonScaleInEase; // 0xF0
	public float RevealAllSlotCollectInterval; // 0xF4
	public float RevealAllSlotCollectWaitDuration; // 0xF8
	public float RevealAllSoundPlayDelay; // 0xFC
	[Header("Completed Text")]
	public float CompletedTextInitialScale; // 0x100
	public float CompletedTextAnimationDuration; // 0x104
	public float CompletedTextAnimationIntervalDuration; // 0x108
	public AnimationCurve CompletedTextAnimationScaleCurve; // 0x110
	[Header("Tutorial")]
	public float TutorialBackgroundFadeAmount; // 0x118
	public float TutorialBackgroundFadeDuration; // 0x11C
	public float TutorialArrowFadeDuration; // 0x120
	public float TutorialArrowMoveDuration; // 0x124
	public float TutorialInfoTextUpperCellYOffset; // 0x128
	public float TutorialInfoTextLowerCellYOffset; // 0x12C
	public Vector3 TutorialArrowCellOffset; // 0x130
	[Header("Item Container Animations")]
	public AnimationClip ItemContainerEnterAnimationClip; // 0x140
	public AnimationClip ItemContainerExitAnimationClip; // 0x148
	public AnimationClip ItemContainerCompletedAnimationClip; // 0x150
	[Header("Board Animations")]
	public AnimationClip BoardEnterAnimationClip; // 0x158
	public AnimationClip BoardExitAnimationClip; // 0x160
	[Header("Stage Completed")]
	public float StageCompleteProgressBarWaitDuration; // 0x168
	public float StageCompletedSlotItemsParticleToCenterMoveDuration; // 0x16C
	public float StageCompletedSlotItemsParticleToTargetMoveDuration; // 0x170
	public Vector3 StageCompletedSlotItemsParticleMoveOffset; // 0x174
	public AnimationCurve StageCompletedSlotItemsParticleMoveCurve; // 0x180
	public float StageCompletedTargetPunchScale; // 0x188
	public float StageCompletedTargetPunchDuration; // 0x18C
	public float StageCompletedSoundPlayDelay; // 0x190
	[Header("Offer")]
	public float OfferPopupDelay; // 0x194

	// Methods

	// RVA: 0x20B2F54 Offset: 0x20B2F54 VA: 0x20B2F54
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts
[Serializable]