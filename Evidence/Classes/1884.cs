public class WheelOfFortuneAnimationConfig : ScriptableObject // TypeDefIndex: 1884
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	[Header("Chip View")]
	private Vector2 <ChipSpawnRandomRange>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private float <ChipSpawnDelayConsecutive>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private float <TickAppearTime>k__BackingField; // 0x24
	[CompilerGenerated]
	[Header("Task View")]
	[SerializeField]
	private float <TaskProgressBarFillDuration>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private float <CompletedTextScaleDuration>k__BackingField; // 0x2C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CompletedTextScaleCurve>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private float <CompletedTextStartScale>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private float <TaskProgressBarWidth>k__BackingField; // 0x3C
	[SerializeField]
	[CompilerGenerated]
	private float <TaskProgressBarMinFillRatio>k__BackingField; // 0x40
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <TaskProgressBarMinMaxFillValue>k__BackingField; // 0x44
	[CompilerGenerated]
	[SerializeField]
	private float <TaskProgressBarMaxFillValueForFullFill>k__BackingField; // 0x4C
	[CompilerGenerated]
	[SerializeField]
	private float <TaskCompleteDelay>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <NewTaskAppearCurve>k__BackingField; // 0x58
	[CompilerGenerated]
	[SerializeField]
	private float <NewTaskAppearDuration>k__BackingField; // 0x60
	[SerializeField]
	[CompilerGenerated]
	private float <OldTaskDissapearDuration>k__BackingField; // 0x64
	[CompilerGenerated]
	[Header("ProgressView")]
	[SerializeField]
	private List<Vector3> <StageIdlePositions>k__BackingField; // 0x68
	[SerializeField]
	[CompilerGenerated]
	private List<Vector3> <StageReachedPositions>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarFullWidth>k__BackingField; // 0x78
	[SerializeField]
	[CompilerGenerated]
	private Sprite <ProgressBarFilledSprite>k__BackingField; // 0x80
	[CompilerGenerated]
	[SerializeField]
	private Sprite <ProgressBarNotFilledSprite>k__BackingField; // 0x88
	[Header("CurrentProgressView")]
	[SerializeField]
	[CompilerGenerated]
	private List<Vector3> <CurrentProgressBarStagePositions>k__BackingField; // 0x90
	[SerializeField]
	[CompilerGenerated]
	private Sprite <ProgressBarLastStageFrame>k__BackingField; // 0x98
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <ProgressBarLastStageFrameSize>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarLastStageFullWidth>k__BackingField; // 0xA8
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <CurrentProgressTextLastStagePosition>k__BackingField; // 0xAC
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <ProgressBarInitialFrameSize>k__BackingField; // 0xB4
	[SerializeField]
	[CompilerGenerated]
	private float <CurrentProgressBarSizeY>k__BackingField; // 0xBC
	[CompilerGenerated]
	[Header("Update ProgressBar And MoveNextStage Animation")]
	[SerializeField]
	private float <DelayBeforeProgressBarUpdateAndMoveToNextStage>k__BackingField; // 0xC0
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarChangeTime>k__BackingField; // 0xC4
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarStartScrollTime>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressViewUnlockedTime>k__BackingField; // 0xCC
	[CompilerGenerated]
	[SerializeField]
	private float <StageUnlockedTime>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private float <RevealCurrentProgressBarTime>k__BackingField; // 0xD4
	[SerializeField]
	[CompilerGenerated]
	private float <RevealCurrentProgressBarTextTime>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private float <CurrentProgressBarSnapToFinishedBarDuration>k__BackingField; // 0xDC
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarStageScrollDuration>k__BackingField; // 0xE0
	[CompilerGenerated]
	[Header("FinishedProgressBar")]
	[SerializeField]
	private Vector2 <FinishedProgressBarStepSize>k__BackingField; // 0xE4
	[CompilerGenerated]
	[SerializeField]
	private float <FinishedProgressBarStageCompleteFillWidth>k__BackingField; // 0xEC
	[SerializeField]
	[CompilerGenerated]
	private float <FinishedProgressBarFrameSizeY>k__BackingField; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	private float <FinishedProgressBarFillSizeY>k__BackingField; // 0xF4
	[SerializeField]
	[CompilerGenerated]
	[Header("EmptyProgressBar")]
	private Vector2 <EmptyProgressBarStepSize>k__BackingField; // 0xF8
	[CompilerGenerated]
	[SerializeField]
	private float <EmptyProgressBarSizeY>k__BackingField; // 0x100
	[CompilerGenerated]
	[Header("ProgressBar")]
	[SerializeField]
	private float <ProgressBarWidth>k__BackingField; // 0x104
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarMinFillRatio>k__BackingField; // 0x108
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <ProgressBarMinMaxFillValue>k__BackingField; // 0x10C
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarMaxFillValueForFullFill>k__BackingField; // 0x114
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarFillDuration>k__BackingField; // 0x118
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressDelayDuration>k__BackingField; // 0x11C
	[SerializeField]
	[CompilerGenerated]
	private float <DelayAfterUnlockedStageDuration>k__BackingField; // 0x120
	[SerializeField]
	[CompilerGenerated]
	private float <DelayBeforeScrollNextStageOnCollectionReturn>k__BackingField; // 0x124
	[SerializeField]
	[Header("ProgressBarStage")]
	[CompilerGenerated]
	private float <ProgressBarStageLockDisappearDuration>k__BackingField; // 0x128
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarStageGlowAppearDuration>k__BackingField; // 0x12C
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarStageGlowDisappearDuration>k__BackingField; // 0x130
	[SerializeField]
	[CompilerGenerated]
	private float <ProgressBarStageTickAppearDuration>k__BackingField; // 0x134
	[SerializeField]
	[CompilerGenerated]
	private List<Sprite> <ProgressBarStageLockedWheelSprites>k__BackingField; // 0x138
	[SerializeField]
	[CompilerGenerated]
	private List<Sprite> <ProgressBarStageCurrentWheelSprites>k__BackingField; // 0x140
	[CompilerGenerated]
	[SerializeField]
	private List<Sprite> <ProgressBarStageClaimedWheelSprites>k__BackingField; // 0x148
	[Header("ScrollBar")]
	[SerializeField]
	[CompilerGenerated]
	private float <ScrollBarMaxSize>k__BackingField; // 0x150
	[CompilerGenerated]
	[SerializeField]
	private float <ScrollBarMinSize>k__BackingField; // 0x154
	[CompilerGenerated]
	[SerializeField]
	private float <ScrollCompleteThreshold>k__BackingField; // 0x158
	[CompilerGenerated]
	[SerializeField]
	private float <DelayBeforeStageButtonClaimed>k__BackingField; // 0x15C
	[CompilerGenerated]
	[SerializeField]
	private float <ScrollToNextStageTime>k__BackingField; // 0x160
	[CompilerGenerated]
	[Header("Claim")]
	[SerializeField]
	private Vector3 <TickScaleOnClaim>k__BackingField; // 0x164
	[CompilerGenerated]
	[SerializeField]
	private float <TickScaleDuration>k__BackingField; // 0x170
	[CompilerGenerated]
	[SerializeField]
	private float <LockBackgroundTargetFade>k__BackingField; // 0x174
	[SerializeField]
	[CompilerGenerated]
	private float <LockBackgroundTargetFadeDuration>k__BackingField; // 0x178
	[SerializeField]
	[Header("Clamp")]
	[CompilerGenerated]
	private float <DragEndJumpDuration>k__BackingField; // 0x17C
	[SerializeField]
	[CompilerGenerated]
	private float <NextStageJumpDuration>k__BackingField; // 0x180
	[CompilerGenerated]
	[SerializeField]
	private float <WaitAfterScrollDuration>k__BackingField; // 0x184
	[CompilerGenerated]
	[Header("Spin")]
	[SerializeField]
	private float <SpinAnimationStartTime>k__BackingField; // 0x188
	[SerializeField]
	[CompilerGenerated]
	[Header("Reward")]
	private int <RewardRevealAnimationSortOrder>k__BackingField; // 0x18C
	[SerializeField]
	[CompilerGenerated]
	private float <RewardMoveDuration>k__BackingField; // 0x190
	[SerializeField]
	[CompilerGenerated]
	private float <RewardScaleDuration>k__BackingField; // 0x194
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <RewardScaleAnimationCurve>k__BackingField; // 0x198
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RewardMoveAnimationCurve>k__BackingField; // 0x1A0
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <InitialRewardScale>k__BackingField; // 0x1A8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <RewardFirstMoveScale>k__BackingField; // 0x1B4
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <RewardArrivedShrinkScale>k__BackingField; // 0x1C0
	[CompilerGenerated]
	[SerializeField]
	private float <RewardArrivedShrinkDuration>k__BackingField; // 0x1CC
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <RewardArrivedShrinkCurve>k__BackingField; // 0x1D0
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <RewardArrivedZoomScale>k__BackingField; // 0x1D8
	[CompilerGenerated]
	[SerializeField]
	private float <RewardArrivedZoomDuration>k__BackingField; // 0x1E4
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <RewardArrivedZoomCurve>k__BackingField; // 0x1E8
	[CompilerGenerated]
	[SerializeField]
	private float <RewardBackgroundFadeInDuration>k__BackingField; // 0x1F0
	[CompilerGenerated]
	[SerializeField]
	private float <RewardBackgroundFadeInTarget>k__BackingField; // 0x1F4
	[CompilerGenerated]
	[Header("TapToClaim")]
	[SerializeField]
	private float <TextScaleAnimationDuration>k__BackingField; // 0x1F8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <TextAnimationScaleCurve>k__BackingField; // 0x200
	[CompilerGenerated]
	[Header("Spin")]
	[SerializeField]
	private float <AccelerationDuration>k__BackingField; // 0x208
	[CompilerGenerated]
	[SerializeField]
	private float <ConstantVelocityDuration>k__BackingField; // 0x20C
	[SerializeField]
	[CompilerGenerated]
	private float <DecelerationDuration>k__BackingField; // 0x210
	[SerializeField]
	[CompilerGenerated]
	private int <FullRotationCount>k__BackingField; // 0x214
	[SerializeField]
	[CompilerGenerated]
	private float <MovementDurationWithoutFinalStrategyBehavior>k__BackingField; // 0x218
	[CompilerGenerated]
	[SerializeField]
	private float <FinalStrategyDuration>k__BackingField; // 0x21C
	[SerializeField]
	[CompilerGenerated]
	private float <FinalStrategyRewardSoundProgress>k__BackingField; // 0x220
	[CompilerGenerated]
	[SerializeField]
	private float <LightBlinkDuration>k__BackingField; // 0x224
	[CompilerGenerated]
	[SerializeField]
	private float <LightBlinkInterval>k__BackingField; // 0x228
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <FallBackCurve>k__BackingField; // 0x230
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <OvershootCurve>k__BackingField; // 0x238

	// Properties
	public Vector2 ChipSpawnRandomRange { get; set; }
	public float ChipSpawnDelayConsecutive { get; set; }
	public float TickAppearTime { get; set; }
	public float TaskProgressBarFillDuration { get; set; }
	public float CompletedTextScaleDuration { get; set; }
	public AnimationCurve CompletedTextScaleCurve { get; set; }
	public float CompletedTextStartScale { get; set; }
	public float TaskProgressBarWidth { get; set; }
	public float TaskProgressBarMinFillRatio { get; set; }
	public Vector2 TaskProgressBarMinMaxFillValue { get; set; }
	public float TaskProgressBarMaxFillValueForFullFill { get; set; }
	public float TaskCompleteDelay { get; set; }
	public AnimationCurve NewTaskAppearCurve { get; set; }
	public float NewTaskAppearDuration { get; set; }
	public float OldTaskDissapearDuration { get; set; }
	public List<Vector3> StageIdlePositions { get; set; }
	public List<Vector3> StageReachedPositions { get; set; }
	public float ProgressBarFullWidth { get; set; }
	public Sprite ProgressBarFilledSprite { get; set; }
	public Sprite ProgressBarNotFilledSprite { get; set; }
	public List<Vector3> CurrentProgressBarStagePositions { get; set; }
	public Sprite ProgressBarLastStageFrame { get; set; }
	public Vector2 ProgressBarLastStageFrameSize { get; set; }
	public float ProgressBarLastStageFullWidth { get; set; }
	public Vector2 CurrentProgressTextLastStagePosition { get; set; }
	public Vector2 ProgressBarInitialFrameSize { get; set; }
	public float CurrentProgressBarSizeY { get; set; }
	public float DelayBeforeProgressBarUpdateAndMoveToNextStage { get; set; }
	public float ProgressBarChangeTime { get; set; }
	public float ProgressBarStartScrollTime { get; set; }
	public float ProgressViewUnlockedTime { get; set; }
	public float StageUnlockedTime { get; set; }
	public float RevealCurrentProgressBarTime { get; set; }
	public float RevealCurrentProgressBarTextTime { get; set; }
	public float CurrentProgressBarSnapToFinishedBarDuration { get; set; }
	public float ProgressBarStageScrollDuration { get; set; }
	public Vector2 FinishedProgressBarStepSize { get; set; }
	public float FinishedProgressBarStageCompleteFillWidth { get; set; }
	public float FinishedProgressBarFrameSizeY { get; set; }
	public float FinishedProgressBarFillSizeY { get; set; }
	public Vector2 EmptyProgressBarStepSize { get; set; }
	public float EmptyProgressBarSizeY { get; set; }
	public float ProgressBarWidth { get; set; }
	public float ProgressBarMinFillRatio { get; set; }
	public Vector2 ProgressBarMinMaxFillValue { get; set; }
	public float ProgressBarMaxFillValueForFullFill { get; set; }
	public float ProgressBarFillDuration { get; set; }
	public float ProgressDelayDuration { get; set; }
	public float DelayAfterUnlockedStageDuration { get; set; }
	public float DelayBeforeScrollNextStageOnCollectionReturn { get; set; }
	public float ProgressBarStageLockDisappearDuration { get; set; }
	public float ProgressBarStageGlowAppearDuration { get; set; }
	public float ProgressBarStageGlowDisappearDuration { get; set; }
	public float ProgressBarStageTickAppearDuration { get; set; }
	public List<Sprite> ProgressBarStageLockedWheelSprites { get; set; }
	public List<Sprite> ProgressBarStageCurrentWheelSprites { get; set; }
	public List<Sprite> ProgressBarStageClaimedWheelSprites { get; set; }
	public float ScrollBarMaxSize { get; set; }
	public float ScrollBarMinSize { get; set; }
	public float ScrollCompleteThreshold { get; set; }
	public float DelayBeforeStageButtonClaimed { get; set; }
	public float ScrollToNextStageTime { get; set; }
	public Vector3 TickScaleOnClaim { get; set; }
	public float TickScaleDuration { get; set; }
	public float LockBackgroundTargetFade { get; set; }
	public float LockBackgroundTargetFadeDuration { get; set; }
	public float DragEndJumpDuration { get; set; }
	public float NextStageJumpDuration { get; set; }
	public float WaitAfterScrollDuration { get; set; }
	public float SpinAnimationStartTime { get; set; }
	public int RewardRevealAnimationSortOrder { get; set; }
	public float RewardMoveDuration { get; set; }
	public float RewardScaleDuration { get; set; }
	public AnimationCurve RewardScaleAnimationCurve { get; set; }
	public AnimationCurve RewardMoveAnimationCurve { get; set; }
	public Vector3 InitialRewardScale { get; set; }
	public Vector3 RewardFirstMoveScale { get; set; }
	public Vector3 RewardArrivedShrinkScale { get; set; }
	public float RewardArrivedShrinkDuration { get; set; }
	public AnimationCurve RewardArrivedShrinkCurve { get; set; }
	public Vector3 RewardArrivedZoomScale { get; set; }
	public float RewardArrivedZoomDuration { get; set; }
	public AnimationCurve RewardArrivedZoomCurve { get; set; }
	public float RewardBackgroundFadeInDuration { get; set; }
	public float RewardBackgroundFadeInTarget { get; set; }
	public float TextScaleAnimationDuration { get; set; }
	public AnimationCurve TextAnimationScaleCurve { get; set; }
	public float AccelerationDuration { get; set; }
	public float ConstantVelocityDuration { get; set; }
	public float DecelerationDuration { get; set; }
	public int FullRotationCount { get; set; }
	public float MovementDurationWithoutFinalStrategyBehavior { get; set; }
	public float FinalStrategyDuration { get; set; }
	public float FinalStrategyRewardSoundProgress { get; set; }
	public float LightBlinkDuration { get; set; }
	public float LightBlinkInterval { get; set; }
	public AnimationCurve FallBackCurve { get; set; }
	public AnimationCurve OvershootCurve { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3199260 Offset: 0x3199260 VA: 0x3199260
	public Vector2 get_ChipSpawnRandomRange() { }

	[CompilerGenerated]
	// RVA: 0x3199268 Offset: 0x3199268 VA: 0x3199268
	public void set_ChipSpawnRandomRange(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x3199270 Offset: 0x3199270 VA: 0x3199270
	public float get_ChipSpawnDelayConsecutive() { }

	[CompilerGenerated]
	// RVA: 0x3199278 Offset: 0x3199278 VA: 0x3199278
	private void set_ChipSpawnDelayConsecutive(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199280 Offset: 0x3199280 VA: 0x3199280
	public float get_TickAppearTime() { }

	[CompilerGenerated]
	// RVA: 0x3199288 Offset: 0x3199288 VA: 0x3199288
	private void set_TickAppearTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199290 Offset: 0x3199290 VA: 0x3199290
	public float get_TaskProgressBarFillDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199298 Offset: 0x3199298 VA: 0x3199298
	public void set_TaskProgressBarFillDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31992A0 Offset: 0x31992A0 VA: 0x31992A0
	public float get_CompletedTextScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x31992A8 Offset: 0x31992A8 VA: 0x31992A8
	private void set_CompletedTextScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31992B0 Offset: 0x31992B0 VA: 0x31992B0
	public AnimationCurve get_CompletedTextScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x31992B8 Offset: 0x31992B8 VA: 0x31992B8
	private void set_CompletedTextScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x31992C0 Offset: 0x31992C0 VA: 0x31992C0
	public float get_CompletedTextStartScale() { }

	[CompilerGenerated]
	// RVA: 0x31992C8 Offset: 0x31992C8 VA: 0x31992C8
	private void set_CompletedTextStartScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x31992D0 Offset: 0x31992D0 VA: 0x31992D0
	public float get_TaskProgressBarWidth() { }

	[CompilerGenerated]
	// RVA: 0x31992D8 Offset: 0x31992D8 VA: 0x31992D8
	public void set_TaskProgressBarWidth(float value) { }

	[CompilerGenerated]
	// RVA: 0x31992E0 Offset: 0x31992E0 VA: 0x31992E0
	public float get_TaskProgressBarMinFillRatio() { }

	[CompilerGenerated]
	// RVA: 0x31992E8 Offset: 0x31992E8 VA: 0x31992E8
	public void set_TaskProgressBarMinFillRatio(float value) { }

	[CompilerGenerated]
	// RVA: 0x31992F0 Offset: 0x31992F0 VA: 0x31992F0
	public Vector2 get_TaskProgressBarMinMaxFillValue() { }

	[CompilerGenerated]
	// RVA: 0x31992F8 Offset: 0x31992F8 VA: 0x31992F8
	private void set_TaskProgressBarMinMaxFillValue(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x3199300 Offset: 0x3199300 VA: 0x3199300
	public float get_TaskProgressBarMaxFillValueForFullFill() { }

	[CompilerGenerated]
	// RVA: 0x3199308 Offset: 0x3199308 VA: 0x3199308
	private void set_TaskProgressBarMaxFillValueForFullFill(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199310 Offset: 0x3199310 VA: 0x3199310
	public float get_TaskCompleteDelay() { }

	[CompilerGenerated]
	// RVA: 0x3199318 Offset: 0x3199318 VA: 0x3199318
	public void set_TaskCompleteDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199320 Offset: 0x3199320 VA: 0x3199320
	public AnimationCurve get_NewTaskAppearCurve() { }

	[CompilerGenerated]
	// RVA: 0x3199328 Offset: 0x3199328 VA: 0x3199328
	private void set_NewTaskAppearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3199330 Offset: 0x3199330 VA: 0x3199330
	public float get_NewTaskAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199338 Offset: 0x3199338 VA: 0x3199338
	public void set_NewTaskAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199340 Offset: 0x3199340 VA: 0x3199340
	public float get_OldTaskDissapearDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199348 Offset: 0x3199348 VA: 0x3199348
	public void set_OldTaskDissapearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199350 Offset: 0x3199350 VA: 0x3199350
	public List<Vector3> get_StageIdlePositions() { }

	[CompilerGenerated]
	// RVA: 0x3199358 Offset: 0x3199358 VA: 0x3199358
	private void set_StageIdlePositions(List<Vector3> value) { }

	[CompilerGenerated]
	// RVA: 0x3199360 Offset: 0x3199360 VA: 0x3199360
	public List<Vector3> get_StageReachedPositions() { }

	[CompilerGenerated]
	// RVA: 0x3199368 Offset: 0x3199368 VA: 0x3199368
	private void set_StageReachedPositions(List<Vector3> value) { }

	[CompilerGenerated]
	// RVA: 0x3199370 Offset: 0x3199370 VA: 0x3199370
	public float get_ProgressBarFullWidth() { }

	[CompilerGenerated]
	// RVA: 0x3199378 Offset: 0x3199378 VA: 0x3199378
	private void set_ProgressBarFullWidth(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199380 Offset: 0x3199380 VA: 0x3199380
	public Sprite get_ProgressBarFilledSprite() { }

	[CompilerGenerated]
	// RVA: 0x3199388 Offset: 0x3199388 VA: 0x3199388
	private void set_ProgressBarFilledSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x3199390 Offset: 0x3199390 VA: 0x3199390
	public Sprite get_ProgressBarNotFilledSprite() { }

	[CompilerGenerated]
	// RVA: 0x3199398 Offset: 0x3199398 VA: 0x3199398
	private void set_ProgressBarNotFilledSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x31993A0 Offset: 0x31993A0 VA: 0x31993A0
	public List<Vector3> get_CurrentProgressBarStagePositions() { }

	[CompilerGenerated]
	// RVA: 0x31993A8 Offset: 0x31993A8 VA: 0x31993A8
	private void set_CurrentProgressBarStagePositions(List<Vector3> value) { }

	[CompilerGenerated]
	// RVA: 0x31993B0 Offset: 0x31993B0 VA: 0x31993B0
	public Sprite get_ProgressBarLastStageFrame() { }

	[CompilerGenerated]
	// RVA: 0x31993B8 Offset: 0x31993B8 VA: 0x31993B8
	private void set_ProgressBarLastStageFrame(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x31993C0 Offset: 0x31993C0 VA: 0x31993C0
	public Vector2 get_ProgressBarLastStageFrameSize() { }

	[CompilerGenerated]
	// RVA: 0x31993C8 Offset: 0x31993C8 VA: 0x31993C8
	private void set_ProgressBarLastStageFrameSize(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x31993D0 Offset: 0x31993D0 VA: 0x31993D0
	public float get_ProgressBarLastStageFullWidth() { }

	[CompilerGenerated]
	// RVA: 0x31993D8 Offset: 0x31993D8 VA: 0x31993D8
	private void set_ProgressBarLastStageFullWidth(float value) { }

	[CompilerGenerated]
	// RVA: 0x31993E0 Offset: 0x31993E0 VA: 0x31993E0
	public Vector2 get_CurrentProgressTextLastStagePosition() { }

	[CompilerGenerated]
	// RVA: 0x31993E8 Offset: 0x31993E8 VA: 0x31993E8
	private void set_CurrentProgressTextLastStagePosition(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x31993F0 Offset: 0x31993F0 VA: 0x31993F0
	public Vector2 get_ProgressBarInitialFrameSize() { }

	[CompilerGenerated]
	// RVA: 0x31993F8 Offset: 0x31993F8 VA: 0x31993F8
	private void set_ProgressBarInitialFrameSize(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x3199400 Offset: 0x3199400 VA: 0x3199400
	public float get_CurrentProgressBarSizeY() { }

	[CompilerGenerated]
	// RVA: 0x3199408 Offset: 0x3199408 VA: 0x3199408
	private void set_CurrentProgressBarSizeY(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199410 Offset: 0x3199410 VA: 0x3199410
	public float get_DelayBeforeProgressBarUpdateAndMoveToNextStage() { }

	[CompilerGenerated]
	// RVA: 0x3199418 Offset: 0x3199418 VA: 0x3199418
	private void set_DelayBeforeProgressBarUpdateAndMoveToNextStage(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199420 Offset: 0x3199420 VA: 0x3199420
	public float get_ProgressBarChangeTime() { }

	[CompilerGenerated]
	// RVA: 0x3199428 Offset: 0x3199428 VA: 0x3199428
	private void set_ProgressBarChangeTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199430 Offset: 0x3199430 VA: 0x3199430
	public float get_ProgressBarStartScrollTime() { }

	[CompilerGenerated]
	// RVA: 0x3199438 Offset: 0x3199438 VA: 0x3199438
	private void set_ProgressBarStartScrollTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199440 Offset: 0x3199440 VA: 0x3199440
	public float get_ProgressViewUnlockedTime() { }

	[CompilerGenerated]
	// RVA: 0x3199448 Offset: 0x3199448 VA: 0x3199448
	private void set_ProgressViewUnlockedTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199450 Offset: 0x3199450 VA: 0x3199450
	public float get_StageUnlockedTime() { }

	[CompilerGenerated]
	// RVA: 0x3199458 Offset: 0x3199458 VA: 0x3199458
	private void set_StageUnlockedTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199460 Offset: 0x3199460 VA: 0x3199460
	public float get_RevealCurrentProgressBarTime() { }

	[CompilerGenerated]
	// RVA: 0x3199468 Offset: 0x3199468 VA: 0x3199468
	private void set_RevealCurrentProgressBarTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199470 Offset: 0x3199470 VA: 0x3199470
	public float get_RevealCurrentProgressBarTextTime() { }

	[CompilerGenerated]
	// RVA: 0x3199478 Offset: 0x3199478 VA: 0x3199478
	private void set_RevealCurrentProgressBarTextTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199480 Offset: 0x3199480 VA: 0x3199480
	public float get_CurrentProgressBarSnapToFinishedBarDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199488 Offset: 0x3199488 VA: 0x3199488
	private void set_CurrentProgressBarSnapToFinishedBarDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199490 Offset: 0x3199490 VA: 0x3199490
	public float get_ProgressBarStageScrollDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199498 Offset: 0x3199498 VA: 0x3199498
	private void set_ProgressBarStageScrollDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31994A0 Offset: 0x31994A0 VA: 0x31994A0
	public Vector2 get_FinishedProgressBarStepSize() { }

	[CompilerGenerated]
	// RVA: 0x31994A8 Offset: 0x31994A8 VA: 0x31994A8
	public void set_FinishedProgressBarStepSize(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x31994B0 Offset: 0x31994B0 VA: 0x31994B0
	public float get_FinishedProgressBarStageCompleteFillWidth() { }

	[CompilerGenerated]
	// RVA: 0x31994B8 Offset: 0x31994B8 VA: 0x31994B8
	public void set_FinishedProgressBarStageCompleteFillWidth(float value) { }

	[CompilerGenerated]
	// RVA: 0x31994C0 Offset: 0x31994C0 VA: 0x31994C0
	public float get_FinishedProgressBarFrameSizeY() { }

	[CompilerGenerated]
	// RVA: 0x31994C8 Offset: 0x31994C8 VA: 0x31994C8
	private void set_FinishedProgressBarFrameSizeY(float value) { }

	[CompilerGenerated]
	// RVA: 0x31994D0 Offset: 0x31994D0 VA: 0x31994D0
	public float get_FinishedProgressBarFillSizeY() { }

	[CompilerGenerated]
	// RVA: 0x31994D8 Offset: 0x31994D8 VA: 0x31994D8
	private void set_FinishedProgressBarFillSizeY(float value) { }

	[CompilerGenerated]
	// RVA: 0x31994E0 Offset: 0x31994E0 VA: 0x31994E0
	public Vector2 get_EmptyProgressBarStepSize() { }

	[CompilerGenerated]
	// RVA: 0x31994E8 Offset: 0x31994E8 VA: 0x31994E8
	public void set_EmptyProgressBarStepSize(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x31994F0 Offset: 0x31994F0 VA: 0x31994F0
	public float get_EmptyProgressBarSizeY() { }

	[CompilerGenerated]
	// RVA: 0x31994F8 Offset: 0x31994F8 VA: 0x31994F8
	private void set_EmptyProgressBarSizeY(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199500 Offset: 0x3199500 VA: 0x3199500
	public float get_ProgressBarWidth() { }

	[CompilerGenerated]
	// RVA: 0x3199508 Offset: 0x3199508 VA: 0x3199508
	public void set_ProgressBarWidth(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199510 Offset: 0x3199510 VA: 0x3199510
	public float get_ProgressBarMinFillRatio() { }

	[CompilerGenerated]
	// RVA: 0x3199518 Offset: 0x3199518 VA: 0x3199518
	public void set_ProgressBarMinFillRatio(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199520 Offset: 0x3199520 VA: 0x3199520
	public Vector2 get_ProgressBarMinMaxFillValue() { }

	[CompilerGenerated]
	// RVA: 0x319952C Offset: 0x319952C VA: 0x319952C
	private void set_ProgressBarMinMaxFillValue(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x3199538 Offset: 0x3199538 VA: 0x3199538
	public float get_ProgressBarMaxFillValueForFullFill() { }

	[CompilerGenerated]
	// RVA: 0x3199540 Offset: 0x3199540 VA: 0x3199540
	private void set_ProgressBarMaxFillValueForFullFill(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199548 Offset: 0x3199548 VA: 0x3199548
	public float get_ProgressBarFillDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199550 Offset: 0x3199550 VA: 0x3199550
	private void set_ProgressBarFillDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199558 Offset: 0x3199558 VA: 0x3199558
	public float get_ProgressDelayDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199560 Offset: 0x3199560 VA: 0x3199560
	private void set_ProgressDelayDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199568 Offset: 0x3199568 VA: 0x3199568
	public float get_DelayAfterUnlockedStageDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199570 Offset: 0x3199570 VA: 0x3199570
	private void set_DelayAfterUnlockedStageDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199578 Offset: 0x3199578 VA: 0x3199578
	public float get_DelayBeforeScrollNextStageOnCollectionReturn() { }

	[CompilerGenerated]
	// RVA: 0x3199580 Offset: 0x3199580 VA: 0x3199580
	private void set_DelayBeforeScrollNextStageOnCollectionReturn(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199588 Offset: 0x3199588 VA: 0x3199588
	public float get_ProgressBarStageLockDisappearDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199590 Offset: 0x3199590 VA: 0x3199590
	private void set_ProgressBarStageLockDisappearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199598 Offset: 0x3199598 VA: 0x3199598
	public float get_ProgressBarStageGlowAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x31995A0 Offset: 0x31995A0 VA: 0x31995A0
	private void set_ProgressBarStageGlowAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31995A8 Offset: 0x31995A8 VA: 0x31995A8
	public float get_ProgressBarStageGlowDisappearDuration() { }

	[CompilerGenerated]
	// RVA: 0x31995B0 Offset: 0x31995B0 VA: 0x31995B0
	private void set_ProgressBarStageGlowDisappearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31995B8 Offset: 0x31995B8 VA: 0x31995B8
	public float get_ProgressBarStageTickAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x31995C0 Offset: 0x31995C0 VA: 0x31995C0
	private void set_ProgressBarStageTickAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31995C8 Offset: 0x31995C8 VA: 0x31995C8
	public List<Sprite> get_ProgressBarStageLockedWheelSprites() { }

	[CompilerGenerated]
	// RVA: 0x31995D0 Offset: 0x31995D0 VA: 0x31995D0
	private void set_ProgressBarStageLockedWheelSprites(List<Sprite> value) { }

	[CompilerGenerated]
	// RVA: 0x31995E0 Offset: 0x31995E0 VA: 0x31995E0
	public List<Sprite> get_ProgressBarStageCurrentWheelSprites() { }

	[CompilerGenerated]
	// RVA: 0x31995E8 Offset: 0x31995E8 VA: 0x31995E8
	private void set_ProgressBarStageCurrentWheelSprites(List<Sprite> value) { }

	[CompilerGenerated]
	// RVA: 0x31995F8 Offset: 0x31995F8 VA: 0x31995F8
	public List<Sprite> get_ProgressBarStageClaimedWheelSprites() { }

	[CompilerGenerated]
	// RVA: 0x3199600 Offset: 0x3199600 VA: 0x3199600
	private void set_ProgressBarStageClaimedWheelSprites(List<Sprite> value) { }

	[CompilerGenerated]
	// RVA: 0x3199610 Offset: 0x3199610 VA: 0x3199610
	public float get_ScrollBarMaxSize() { }

	[CompilerGenerated]
	// RVA: 0x3199618 Offset: 0x3199618 VA: 0x3199618
	private void set_ScrollBarMaxSize(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199620 Offset: 0x3199620 VA: 0x3199620
	public float get_ScrollBarMinSize() { }

	[CompilerGenerated]
	// RVA: 0x3199628 Offset: 0x3199628 VA: 0x3199628
	private void set_ScrollBarMinSize(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199630 Offset: 0x3199630 VA: 0x3199630
	public float get_ScrollCompleteThreshold() { }

	[CompilerGenerated]
	// RVA: 0x3199638 Offset: 0x3199638 VA: 0x3199638
	private void set_ScrollCompleteThreshold(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199640 Offset: 0x3199640 VA: 0x3199640
	public float get_DelayBeforeStageButtonClaimed() { }

	[CompilerGenerated]
	// RVA: 0x3199648 Offset: 0x3199648 VA: 0x3199648
	private void set_DelayBeforeStageButtonClaimed(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199650 Offset: 0x3199650 VA: 0x3199650
	public float get_ScrollToNextStageTime() { }

	[CompilerGenerated]
	// RVA: 0x3199658 Offset: 0x3199658 VA: 0x3199658
	private void set_ScrollToNextStageTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199660 Offset: 0x3199660 VA: 0x3199660
	public Vector3 get_TickScaleOnClaim() { }

	[CompilerGenerated]
	// RVA: 0x3199670 Offset: 0x3199670 VA: 0x3199670
	private void set_TickScaleOnClaim(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3199680 Offset: 0x3199680 VA: 0x3199680
	public float get_TickScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199688 Offset: 0x3199688 VA: 0x3199688
	private void set_TickScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199690 Offset: 0x3199690 VA: 0x3199690
	public float get_LockBackgroundTargetFade() { }

	[CompilerGenerated]
	// RVA: 0x3199698 Offset: 0x3199698 VA: 0x3199698
	private void set_LockBackgroundTargetFade(float value) { }

	[CompilerGenerated]
	// RVA: 0x31996A0 Offset: 0x31996A0 VA: 0x31996A0
	public float get_LockBackgroundTargetFadeDuration() { }

	[CompilerGenerated]
	// RVA: 0x31996A8 Offset: 0x31996A8 VA: 0x31996A8
	private void set_LockBackgroundTargetFadeDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31996B0 Offset: 0x31996B0 VA: 0x31996B0
	public float get_DragEndJumpDuration() { }

	[CompilerGenerated]
	// RVA: 0x31996B8 Offset: 0x31996B8 VA: 0x31996B8
	private void set_DragEndJumpDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31996C0 Offset: 0x31996C0 VA: 0x31996C0
	public float get_NextStageJumpDuration() { }

	[CompilerGenerated]
	// RVA: 0x31996C8 Offset: 0x31996C8 VA: 0x31996C8
	private void set_NextStageJumpDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31996D0 Offset: 0x31996D0 VA: 0x31996D0
	public float get_WaitAfterScrollDuration() { }

	[CompilerGenerated]
	// RVA: 0x31996D8 Offset: 0x31996D8 VA: 0x31996D8
	private void set_WaitAfterScrollDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31996E0 Offset: 0x31996E0 VA: 0x31996E0
	public float get_SpinAnimationStartTime() { }

	[CompilerGenerated]
	// RVA: 0x31996E8 Offset: 0x31996E8 VA: 0x31996E8
	private void set_SpinAnimationStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x31996F0 Offset: 0x31996F0 VA: 0x31996F0
	public int get_RewardRevealAnimationSortOrder() { }

	[CompilerGenerated]
	// RVA: 0x31996F8 Offset: 0x31996F8 VA: 0x31996F8
	private void set_RewardRevealAnimationSortOrder(int value) { }

	[CompilerGenerated]
	// RVA: 0x3199700 Offset: 0x3199700 VA: 0x3199700
	public float get_RewardMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199708 Offset: 0x3199708 VA: 0x3199708
	private void set_RewardMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199710 Offset: 0x3199710 VA: 0x3199710
	public float get_RewardScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199718 Offset: 0x3199718 VA: 0x3199718
	private void set_RewardScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199720 Offset: 0x3199720 VA: 0x3199720
	public AnimationCurve get_RewardScaleAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x3199728 Offset: 0x3199728 VA: 0x3199728
	private void set_RewardScaleAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3199738 Offset: 0x3199738 VA: 0x3199738
	public AnimationCurve get_RewardMoveAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x3199740 Offset: 0x3199740 VA: 0x3199740
	private void set_RewardMoveAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3199750 Offset: 0x3199750 VA: 0x3199750
	public Vector3 get_InitialRewardScale() { }

	[CompilerGenerated]
	// RVA: 0x3199760 Offset: 0x3199760 VA: 0x3199760
	private void set_InitialRewardScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3199770 Offset: 0x3199770 VA: 0x3199770
	public Vector3 get_RewardFirstMoveScale() { }

	[CompilerGenerated]
	// RVA: 0x3199780 Offset: 0x3199780 VA: 0x3199780
	private void set_RewardFirstMoveScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3199790 Offset: 0x3199790 VA: 0x3199790
	public Vector3 get_RewardArrivedShrinkScale() { }

	[CompilerGenerated]
	// RVA: 0x31997A0 Offset: 0x31997A0 VA: 0x31997A0
	private void set_RewardArrivedShrinkScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x31997B0 Offset: 0x31997B0 VA: 0x31997B0
	public float get_RewardArrivedShrinkDuration() { }

	[CompilerGenerated]
	// RVA: 0x31997B8 Offset: 0x31997B8 VA: 0x31997B8
	private void set_RewardArrivedShrinkDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31997C0 Offset: 0x31997C0 VA: 0x31997C0
	public AnimationCurve get_RewardArrivedShrinkCurve() { }

	[CompilerGenerated]
	// RVA: 0x31997C8 Offset: 0x31997C8 VA: 0x31997C8
	private void set_RewardArrivedShrinkCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x31997D8 Offset: 0x31997D8 VA: 0x31997D8
	public Vector3 get_RewardArrivedZoomScale() { }

	[CompilerGenerated]
	// RVA: 0x31997E8 Offset: 0x31997E8 VA: 0x31997E8
	private void set_RewardArrivedZoomScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x31997F8 Offset: 0x31997F8 VA: 0x31997F8
	public float get_RewardArrivedZoomDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199800 Offset: 0x3199800 VA: 0x3199800
	private void set_RewardArrivedZoomDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199808 Offset: 0x3199808 VA: 0x3199808
	public AnimationCurve get_RewardArrivedZoomCurve() { }

	[CompilerGenerated]
	// RVA: 0x3199810 Offset: 0x3199810 VA: 0x3199810
	private void set_RewardArrivedZoomCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3199820 Offset: 0x3199820 VA: 0x3199820
	public float get_RewardBackgroundFadeInDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199828 Offset: 0x3199828 VA: 0x3199828
	private void set_RewardBackgroundFadeInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199830 Offset: 0x3199830 VA: 0x3199830
	public float get_RewardBackgroundFadeInTarget() { }

	[CompilerGenerated]
	// RVA: 0x3199838 Offset: 0x3199838 VA: 0x3199838
	private void set_RewardBackgroundFadeInTarget(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199840 Offset: 0x3199840 VA: 0x3199840
	public float get_TextScaleAnimationDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199848 Offset: 0x3199848 VA: 0x3199848
	private void set_TextScaleAnimationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199850 Offset: 0x3199850 VA: 0x3199850
	public AnimationCurve get_TextAnimationScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x3199858 Offset: 0x3199858 VA: 0x3199858
	private void set_TextAnimationScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3199868 Offset: 0x3199868 VA: 0x3199868
	public float get_AccelerationDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199870 Offset: 0x3199870 VA: 0x3199870
	private void set_AccelerationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199878 Offset: 0x3199878 VA: 0x3199878
	public float get_ConstantVelocityDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199880 Offset: 0x3199880 VA: 0x3199880
	private void set_ConstantVelocityDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199888 Offset: 0x3199888 VA: 0x3199888
	public float get_DecelerationDuration() { }

	[CompilerGenerated]
	// RVA: 0x3199890 Offset: 0x3199890 VA: 0x3199890
	private void set_DecelerationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3199898 Offset: 0x3199898 VA: 0x3199898
	public int get_FullRotationCount() { }

	[CompilerGenerated]
	// RVA: 0x31998A0 Offset: 0x31998A0 VA: 0x31998A0
	private void set_FullRotationCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x31998A8 Offset: 0x31998A8 VA: 0x31998A8
	public float get_MovementDurationWithoutFinalStrategyBehavior() { }

	[CompilerGenerated]
	// RVA: 0x31998B0 Offset: 0x31998B0 VA: 0x31998B0
	private void set_MovementDurationWithoutFinalStrategyBehavior(float value) { }

	[CompilerGenerated]
	// RVA: 0x31998B8 Offset: 0x31998B8 VA: 0x31998B8
	public float get_FinalStrategyDuration() { }

	[CompilerGenerated]
	// RVA: 0x31998C0 Offset: 0x31998C0 VA: 0x31998C0
	private void set_FinalStrategyDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31998C8 Offset: 0x31998C8 VA: 0x31998C8
	public float get_FinalStrategyRewardSoundProgress() { }

	[CompilerGenerated]
	// RVA: 0x31998D0 Offset: 0x31998D0 VA: 0x31998D0
	private void set_FinalStrategyRewardSoundProgress(float value) { }

	[CompilerGenerated]
	// RVA: 0x31998D8 Offset: 0x31998D8 VA: 0x31998D8
	public float get_LightBlinkDuration() { }

	[CompilerGenerated]
	// RVA: 0x31998E0 Offset: 0x31998E0 VA: 0x31998E0
	private void set_LightBlinkDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x31998E8 Offset: 0x31998E8 VA: 0x31998E8
	public float get_LightBlinkInterval() { }

	[CompilerGenerated]
	// RVA: 0x31998F0 Offset: 0x31998F0 VA: 0x31998F0
	private void set_LightBlinkInterval(float value) { }

	[CompilerGenerated]
	// RVA: 0x31998F8 Offset: 0x31998F8 VA: 0x31998F8
	public AnimationCurve get_FallBackCurve() { }

	[CompilerGenerated]
	// RVA: 0x3199900 Offset: 0x3199900 VA: 0x3199900
	private void set_FallBackCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3199910 Offset: 0x3199910 VA: 0x3199910
	public AnimationCurve get_OvershootCurve() { }

	[CompilerGenerated]
	// RVA: 0x3199918 Offset: 0x3199918 VA: 0x3199918
	private void set_OvershootCurve(AnimationCurve value) { }

	// RVA: 0x3199928 Offset: 0x3199928 VA: 0x3199928
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI