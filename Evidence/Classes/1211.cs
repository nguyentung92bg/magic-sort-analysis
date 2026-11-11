public class SnitchAnimationConfig : ScriptableObject // TypeDefIndex: 1211
{
	// Fields
	[SerializeField]
	private List<SnitchAnimationConfig.ItemTypeInterval> redSnitchPerformIntervals; // 0x18
	public float LevelStartDelay; // 0x20
	public float SnitchCellRevealDelay; // 0x24
	public float SnitchMoveSpeed; // 0x28
	public float SnitchMoveSpeedBetweenBottles; // 0x2C
	public float SnitchesPerformDelay; // 0x30
	[Header("Snitch Box Animation")]
	public AnimationCurve SnitchBoxEntryCurve; // 0x38
	public AnimationCurve SnitchBoxEntryCurveX; // 0x40
	public AnimationCurve SnitchBoxEntryCurveY; // 0x48
	public Vector3 BoxRotationPivotStartRotation; // 0x50
	public float BoxRotationDuration; // 0x5C
	public AnimationCurve BoxRotationCurve; // 0x60
	public float SnitchBoxEntryDuration; // 0x68
	public Vector3 SnitchBoxStartPosition; // 0x6C
	public Vector3 SnitchBoxExitPosition; // 0x78
	public AnimationCurve BoxExitCurveX; // 0x88
	public AnimationCurve BoxExitCurveY; // 0x90
	public Vector3 BoxExitRotation; // 0x98
	public AnimationCurve BoxExitRotationCurve; // 0xA8
	public Vector3 SnitchBoxTargetPosition; // 0xB0
	public float SnithBoxWaitDuration; // 0xBC
	public float SnitchBoxExitDuration; // 0xC0
	public AnimationCurve SnitchBoxExitCurve; // 0xC8
	public float MoveTime; // 0xD0
	public float RotateDuration; // 0xD4
	public AnimationCurve RotateCurve; // 0xD8
	public float RotateTime; // 0xE0
	public float ScaleDuration; // 0xE4
	public AnimationCurve ScaleCurve; // 0xE8
	public float ScaleTime; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	[Header("STATE RISE")]
	private List<AnimationCurve> <RiseXCurves>k__BackingField; // 0xF8
	[CompilerGenerated]
	[SerializeField]
	private List<AnimationCurve> <RiseYCurves>k__BackingField; // 0x100
	[CompilerGenerated]
	[SerializeField]
	private List<float> <RiseDurations>k__BackingField; // 0x108
	[SerializeField]
	[CompilerGenerated]
	private List<Vector2> <SnitchRiseWorldTargetPositions>k__BackingField; // 0x110
	[SerializeField]
	[CompilerGenerated]
	private float <YellowRiseScaleTarget>k__BackingField; // 0x118
	[SerializeField]
	[CompilerGenerated]
	private float <GrayRiseScaleTarget>k__BackingField; // 0x11C
	[SerializeField]
	[CompilerGenerated]
	private float <RiseScaleDuration>k__BackingField; // 0x120
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RiseScaleCurve>k__BackingField; // 0x128
	[SerializeField]
	[CompilerGenerated]
	private float <RiseStartTime>k__BackingField; // 0x130
	[SerializeField]
	[CompilerGenerated]
	private float <WingAnimationClipStartTime>k__BackingField; // 0x134
	[Header("STATE HIT")]
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <SnitchHitTargetMoveMinMaxDuration>k__BackingField; // 0x138
	[CompilerGenerated]
	[SerializeField]
	private float <MaxDistanceCap>k__BackingField; // 0x140
	[CompilerGenerated]
	[SerializeField]
	private float <HitTargetEndScale>k__BackingField; // 0x144
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <HitScaleCurve>k__BackingField; // 0x148
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <LeftSnitchHitMoveXCurve>k__BackingField; // 0x150
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <LeftSnitchHitMoveYCurve>k__BackingField; // 0x158
	[SerializeField]
	[Header("STATE SITRISE")]
	[CompilerGenerated]
	private Vector3 <FirstSnitchSitRiseTargetPosition>k__BackingField; // 0x160
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <SecondSnitchSitRiseTargetPosition>k__BackingField; // 0x16C
	[CompilerGenerated]
	[SerializeField]
	private float <SitRiseDuration>k__BackingField; // 0x178
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SnitchSitRiseXCurve1>k__BackingField; // 0x180
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SnitchSitRiseXCurve2>k__BackingField; // 0x188
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SnitchSitRiseYCurve1>k__BackingField; // 0x190
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SnitchSitRiseYCurve2>k__BackingField; // 0x198
	[CompilerGenerated]
	[SerializeField]
	private float <SnitchSitRiseSwayStartTime>k__BackingField; // 0x1A0
	[CompilerGenerated]
	[SerializeField]
	private float <SitRiseTargetScale>k__BackingField; // 0x1A4
	[SerializeField]
	[CompilerGenerated]
	private float <SitRiseScaleDuration>k__BackingField; // 0x1A8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SitRiseScaleCurve>k__BackingField; // 0x1B0
	[CompilerGenerated]
	[SerializeField]
	private float <SitSwayDecreaseDuration>k__BackingField; // 0x1B8
	[CompilerGenerated]
	[SerializeField]
	private float <SitOnBottleTargetScale>k__BackingField; // 0x1BC
	[SerializeField]
	[CompilerGenerated]
	private float <SitOnBottleScaleDuration>k__BackingField; // 0x1C0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SitOnBottleScaleCurve>k__BackingField; // 0x1C8
	[SerializeField]
	[CompilerGenerated]
	private float <SitMoveDuration>k__BackingField; // 0x1D0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SitMoveXCurve>k__BackingField; // 0x1D8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SitMoveYCurve>k__BackingField; // 0x1E0
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <SitMovePathControlA>k__BackingField; // 0x1E8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <SitMovePathControlB>k__BackingField; // 0x1F4
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SitBezierPathMoveCurve>k__BackingField; // 0x200
	[CompilerGenerated]
	[SerializeField]
	private float <SitMoveSpeed>k__BackingField; // 0x208
	[CompilerGenerated]
	[SerializeField]
	private float <SitHideTime>k__BackingField; // 0x20C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <BlockerFadeOutCurve>k__BackingField; // 0x210
	[Header("COMMON")]
	[CompilerGenerated]
	[SerializeField]
	private float <GraySnitchEntryScale>k__BackingField; // 0x218
	[SerializeField]
	[CompilerGenerated]
	private float <YellowSnitchEntryScale>k__BackingField; // 0x21C
	[CompilerGenerated]
	[SerializeField]
	private List<SnitchAnimationConfig.ItemTypeOffsetsForSnitch> <ItemTypeOffsets>k__BackingField; // 0x220
	[CompilerGenerated]
	[SerializeField]
	private float <FirstGraySnitchHitDelay>k__BackingField; // 0x228
	[CompilerGenerated]
	[SerializeField]
	private float <SecondGraySnitchHitDelay>k__BackingField; // 0x22C
	[CompilerGenerated]
	[SerializeField]
	private float <ThirdGraySnitchHitDelay>k__BackingField; // 0x230
	[CompilerGenerated]
	[SerializeField]
	private float <FirstGraySnitchRiseDelay>k__BackingField; // 0x234
	[SerializeField]
	[CompilerGenerated]
	private float <SecondGraySnitchRiseDelay>k__BackingField; // 0x238
	[SerializeField]
	[CompilerGenerated]
	private float <ThirdGraySnitchRiseDelay>k__BackingField; // 0x23C
	[SerializeField]
	[CompilerGenerated]
	private float <FirstYellowSnitchRiseDelay>k__BackingField; // 0x240
	[CompilerGenerated]
	[SerializeField]
	private float <SecondYellowSnitchRiseDelay>k__BackingField; // 0x244
	[CompilerGenerated]
	[SerializeField]
	private float <FirstYellowSnitchSitRiseDelay>k__BackingField; // 0x248
	[CompilerGenerated]
	[SerializeField]
	private float <SecondYellowSnitchSitRiseDelay>k__BackingField; // 0x24C
	[SerializeField]
	[CompilerGenerated]
	private List<int> <SortOrdersByIndex>k__BackingField; // 0x250
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <WarpTransformInitialPosition>k__BackingField; // 0x258
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <WarpTransformInitialRotation>k__BackingField; // 0x264
	[CompilerGenerated]
	[SerializeField]
	private float <MaxDistanceFromCenter>k__BackingField; // 0x270
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <WarpVerticalCurve>k__BackingField; // 0x278
	[CompilerGenerated]
	[SerializeField]
	private float <WarpVerticalDuration>k__BackingField; // 0x280
	[SerializeField]
	[CompilerGenerated]
	private List<float> <WaterHeightOffsetsForSnitch>k__BackingField; // 0x288
	[SerializeField]
	[CompilerGenerated]
	private float <EntranceShakeRotationDuration>k__BackingField; // 0x290
	[SerializeField]
	[CompilerGenerated]
	private float <EntranceShakeRotationZValue>k__BackingField; // 0x294
	[CompilerGenerated]
	[SerializeField]
	private int <EntranceShakeVibrato>k__BackingField; // 0x298
	[CompilerGenerated]
	[SerializeField]
	private float <SnitchOnBottleTargetScale>k__BackingField; // 0x29C
	[CompilerGenerated]
	[SerializeField]
	private float <SnitchOnBottleScaleDuration>k__BackingField; // 0x2A0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SnitchOnBottleScaleCurve>k__BackingField; // 0x2A8
	[CompilerGenerated]
	[Header("SNITCH SWAY")]
	[SerializeField]
	private float <NoiseSpeed>k__BackingField; // 0x2B0
	[SerializeField]
	[CompilerGenerated]
	private float <NoiseScale>k__BackingField; // 0x2B4
	[CompilerGenerated]
	[SerializeField]
	private float <SwayFrequency>k__BackingField; // 0x2B8
	[SerializeField]
	[CompilerGenerated]
	private float <SwayAmplitude>k__BackingField; // 0x2BC
	[CompilerGenerated]
	[SerializeField]
	private float <RotationAmplitude>k__BackingField; // 0x2C0
	[SerializeField]
	[CompilerGenerated]
	private float <RotationFrequency>k__BackingField; // 0x2C4
	[CompilerGenerated]
	[SerializeField]
	private float <SwayReturnSpeed>k__BackingField; // 0x2C8
	[SerializeField]
	[CompilerGenerated]
	private float <SwayIntensityIncreaseDuration>k__BackingField; // 0x2CC
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SwayIntensityIncreaseCurve>k__BackingField; // 0x2D0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SwayIntensityDecreaseCurve>k__BackingField; // 0x2D8
	[SerializeField]
	[CompilerGenerated]
	private float <SwayEnableTime>k__BackingField; // 0x2E0
	[SerializeField]
	[Header("WARP")]
	[CompilerGenerated]
	private float <WarpTowardsTargetSpeed>k__BackingField; // 0x2E4
	[SerializeField]
	[CompilerGenerated]
	private float <WarpBackSpeed>k__BackingField; // 0x2E8
	[SerializeField]
	[CompilerGenerated]
	private float <WarpBackDuration>k__BackingField; // 0x2EC
	[CompilerGenerated]
	[SerializeField]
	private float <MaxWarpDistanceFromCenter>k__BackingField; // 0x2F0
	[SerializeField]
	[CompilerGenerated]
	[Header("ROTATION")]
	private float <RotationSmoothSpeed>k__BackingField; // 0x2F4
	[CompilerGenerated]
	[SerializeField]
	private float <MaxDegreePerFrame>k__BackingField; // 0x2F8
	[Header("OUT OF BOTTLE")]
	[SerializeField]
	[CompilerGenerated]
	private float <OutOfBottlePrepareMoveDuration>k__BackingField; // 0x2FC
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <OutOfBottleMoveYCurve>k__BackingField; // 0x300
	[CompilerGenerated]
	[SerializeField]
	private float <SnitchOutOfBottleOffset>k__BackingField; // 0x308
	[CompilerGenerated]
	[SerializeField]
	private float <OutOfBottleHitTargetDuration>k__BackingField; // 0x30C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <OutOfBottleHitTargetXCurve>k__BackingField; // 0x310
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <OutOfBottleHitTargetYCurve>k__BackingField; // 0x318
	[SerializeField]
	[CompilerGenerated]
	private float <OutOfBottleTargetScale>k__BackingField; // 0x320
	[CompilerGenerated]
	[SerializeField]
	private float <OutOfBottleScaleDuration>k__BackingField; // 0x324
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <OutOfBottleScaleCurve>k__BackingField; // 0x328
	[CompilerGenerated]
	[SerializeField]
	private float <OutOfBottleCompleteTime>k__BackingField; // 0x330
	[CompilerGenerated]
	[SerializeField]
	private float <OutOfBottleStartHitMoveTime>k__BackingField; // 0x334
	[CompilerGenerated]
	[SerializeField]
	private float <OutOfBottleHitTargetScale>k__BackingField; // 0x338
	[SerializeField]
	[CompilerGenerated]
	private float <OutOfBottleHitScaleDuration>k__BackingField; // 0x33C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <OutOfBottleHitScaleCurve>k__BackingField; // 0x340
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <OutOfBottleHitPathControlA>k__BackingField; // 0x348
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <OutOfBottleHitPathControlB>k__BackingField; // 0x354
	[CompilerGenerated]
	[SerializeField]
	private float <OutOfBottleHitDuration>k__BackingField; // 0x360
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <OutOfBottleHitDurationMinMax>k__BackingField; // 0x364
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <OutOfBottleHitLengthMinMax>k__BackingField; // 0x36C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <OutOfBottleBezierPathMoveCurve>k__BackingField; // 0x378
	[SerializeField]
	[CompilerGenerated]
	private float <SnitchOutOfBottleArcHeight>k__BackingField; // 0x380
	[Header("BEZIER SETTINGS")]
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <MinMaxPossibleXDistance>k__BackingField; // 0x384
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <MinMaxPossibleYDistance>k__BackingField; // 0x38C
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <MinMaxControlValue>k__BackingField; // 0x394
	[CompilerGenerated]
	[SerializeField]
	private float <OneRowAboveTargetAyOffset>k__BackingField; // 0x39C
	[SerializeField]
	[CompilerGenerated]
	private float <TwoRowAboveTargetByOffset>k__BackingField; // 0x3A0
	[SerializeField]
	[CompilerGenerated]
	private float <InSameRowAyOffset>k__BackingField; // 0x3A4
	[CompilerGenerated]
	[SerializeField]
	private float <CloseProximityThreshold>k__BackingField; // 0x3A8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <CloseProximityControlA>k__BackingField; // 0x3AC
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <CloseProximityControlB>k__BackingField; // 0x3B8
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <MinMaxBezierDurationForSit>k__BackingField; // 0x3C4
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <MinMaxBezierLengthForSit>k__BackingField; // 0x3CC
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <MinMaxBezierDurationForHit>k__BackingField; // 0x3D4
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <MinMaxBezierLengthForHit>k__BackingField; // 0x3DC
	[SerializeField]
	[CompilerGenerated]
	private float <CloseProximityHitDuration>k__BackingField; // 0x3E4
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CloseProximityHitCurveX>k__BackingField; // 0x3E8
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CloseProximityHitCurveY>k__BackingField; // 0x3F0

	// Properties
	public List<AnimationCurve> RiseXCurves { get; set; }
	public List<AnimationCurve> RiseYCurves { get; set; }
	public List<float> RiseDurations { get; set; }
	public List<Vector2> SnitchRiseWorldTargetPositions { get; set; }
	public float YellowRiseScaleTarget { get; set; }
	public float GrayRiseScaleTarget { get; set; }
	public float RiseScaleDuration { get; set; }
	public AnimationCurve RiseScaleCurve { get; set; }
	public float RiseStartTime { get; set; }
	public float WingAnimationClipStartTime { get; set; }
	public Vector2 SnitchHitTargetMoveMinMaxDuration { get; set; }
	public float MaxDistanceCap { get; set; }
	public float HitTargetEndScale { get; set; }
	public AnimationCurve HitScaleCurve { get; set; }
	public AnimationCurve LeftSnitchHitMoveXCurve { get; set; }
	public AnimationCurve LeftSnitchHitMoveYCurve { get; set; }
	public Vector3 FirstSnitchSitRiseTargetPosition { get; set; }
	public Vector3 SecondSnitchSitRiseTargetPosition { get; set; }
	public float SitRiseDuration { get; set; }
	public AnimationCurve SnitchSitRiseXCurve1 { get; set; }
	public AnimationCurve SnitchSitRiseXCurve2 { get; set; }
	public AnimationCurve SnitchSitRiseYCurve1 { get; set; }
	public AnimationCurve SnitchSitRiseYCurve2 { get; set; }
	public float SnitchSitRiseSwayStartTime { get; set; }
	public float SitRiseTargetScale { get; set; }
	public float SitRiseScaleDuration { get; set; }
	public AnimationCurve SitRiseScaleCurve { get; set; }
	public float SitSwayDecreaseDuration { get; set; }
	public float SitOnBottleTargetScale { get; set; }
	public float SitOnBottleScaleDuration { get; set; }
	public AnimationCurve SitOnBottleScaleCurve { get; set; }
	public float SitMoveDuration { get; set; }
	public AnimationCurve SitMoveXCurve { get; set; }
	public AnimationCurve SitMoveYCurve { get; set; }
	public Vector3 SitMovePathControlA { get; set; }
	public Vector3 SitMovePathControlB { get; set; }
	public AnimationCurve SitBezierPathMoveCurve { get; set; }
	public float SitMoveSpeed { get; set; }
	public float SitHideTime { get; set; }
	public AnimationCurve BlockerFadeOutCurve { get; set; }
	public float GraySnitchEntryScale { get; set; }
	public float YellowSnitchEntryScale { get; set; }
	public List<SnitchAnimationConfig.ItemTypeOffsetsForSnitch> ItemTypeOffsets { get; set; }
	public float FirstGraySnitchHitDelay { get; set; }
	public float SecondGraySnitchHitDelay { get; set; }
	public float ThirdGraySnitchHitDelay { get; set; }
	public float FirstGraySnitchRiseDelay { get; set; }
	public float SecondGraySnitchRiseDelay { get; set; }
	public float ThirdGraySnitchRiseDelay { get; set; }
	public float FirstYellowSnitchRiseDelay { get; set; }
	public float SecondYellowSnitchRiseDelay { get; set; }
	public float FirstYellowSnitchSitRiseDelay { get; set; }
	public float SecondYellowSnitchSitRiseDelay { get; set; }
	public List<int> SortOrdersByIndex { get; set; }
	public Vector3 WarpTransformInitialPosition { get; set; }
	public Vector3 WarpTransformInitialRotation { get; set; }
	public float MaxDistanceFromCenter { get; set; }
	public AnimationCurve WarpVerticalCurve { get; set; }
	public float WarpVerticalDuration { get; set; }
	public List<float> WaterHeightOffsetsForSnitch { get; set; }
	public float EntranceShakeRotationDuration { get; set; }
	public float EntranceShakeRotationZValue { get; set; }
	public int EntranceShakeVibrato { get; set; }
	public float SnitchOnBottleTargetScale { get; set; }
	public float SnitchOnBottleScaleDuration { get; set; }
	public AnimationCurve SnitchOnBottleScaleCurve { get; set; }
	public float NoiseSpeed { get; set; }
	public float NoiseScale { get; set; }
	public float SwayFrequency { get; set; }
	public float SwayAmplitude { get; set; }
	public float RotationAmplitude { get; set; }
	public float RotationFrequency { get; set; }
	public float SwayReturnSpeed { get; set; }
	public float SwayIntensityIncreaseDuration { get; set; }
	public AnimationCurve SwayIntensityIncreaseCurve { get; set; }
	public AnimationCurve SwayIntensityDecreaseCurve { get; set; }
	public float SwayEnableTime { get; set; }
	public float WarpTowardsTargetSpeed { get; set; }
	public float WarpBackSpeed { get; set; }
	public float WarpBackDuration { get; set; }
	public float MaxWarpDistanceFromCenter { get; set; }
	public float RotationSmoothSpeed { get; set; }
	public float MaxDegreePerFrame { get; set; }
	public float OutOfBottlePrepareMoveDuration { get; set; }
	public AnimationCurve OutOfBottleMoveYCurve { get; set; }
	public float SnitchOutOfBottleOffset { get; set; }
	public float OutOfBottleHitTargetDuration { get; set; }
	public AnimationCurve OutOfBottleHitTargetXCurve { get; set; }
	public AnimationCurve OutOfBottleHitTargetYCurve { get; set; }
	public float OutOfBottleTargetScale { get; set; }
	public float OutOfBottleScaleDuration { get; set; }
	public AnimationCurve OutOfBottleScaleCurve { get; set; }
	public float OutOfBottleCompleteTime { get; set; }
	public float OutOfBottleStartHitMoveTime { get; set; }
	public float OutOfBottleHitTargetScale { get; set; }
	public float OutOfBottleHitScaleDuration { get; set; }
	public AnimationCurve OutOfBottleHitScaleCurve { get; set; }
	public Vector3 OutOfBottleHitPathControlA { get; set; }
	public Vector3 OutOfBottleHitPathControlB { get; set; }
	public float OutOfBottleHitDuration { get; set; }
	public Vector2 OutOfBottleHitDurationMinMax { get; set; }
	public Vector2 OutOfBottleHitLengthMinMax { get; set; }
	public AnimationCurve OutOfBottleBezierPathMoveCurve { get; set; }
	public float SnitchOutOfBottleArcHeight { get; set; }
	public Vector2 MinMaxPossibleXDistance { get; set; }
	public Vector2 MinMaxPossibleYDistance { get; set; }
	public Vector2 MinMaxControlValue { get; set; }
	public float OneRowAboveTargetAyOffset { get; set; }
	public float TwoRowAboveTargetByOffset { get; set; }
	public float InSameRowAyOffset { get; set; }
	public float CloseProximityThreshold { get; set; }
	public Vector3 CloseProximityControlA { get; set; }
	public Vector3 CloseProximityControlB { get; set; }
	public Vector2 MinMaxBezierDurationForSit { get; set; }
	public Vector2 MinMaxBezierLengthForSit { get; set; }
	public Vector2 MinMaxBezierDurationForHit { get; set; }
	public Vector2 MinMaxBezierLengthForHit { get; set; }
	public float CloseProximityHitDuration { get; set; }
	public AnimationCurve CloseProximityHitCurveX { get; set; }
	public AnimationCurve CloseProximityHitCurveY { get; set; }

	// Methods

	// RVA: 0x20F94F0 Offset: 0x20F94F0 VA: 0x20F94F0
	public bool TryGetRedSnitchPerformInterval(ItemType itemType, out float interval) { }

	[CompilerGenerated]
	// RVA: 0x20F95F4 Offset: 0x20F95F4 VA: 0x20F95F4
	public List<AnimationCurve> get_RiseXCurves() { }

	[CompilerGenerated]
	// RVA: 0x20F95FC Offset: 0x20F95FC VA: 0x20F95FC
	private void set_RiseXCurves(List<AnimationCurve> value) { }

	[CompilerGenerated]
	// RVA: 0x20F9604 Offset: 0x20F9604 VA: 0x20F9604
	public List<AnimationCurve> get_RiseYCurves() { }

	[CompilerGenerated]
	// RVA: 0x20F960C Offset: 0x20F960C VA: 0x20F960C
	private void set_RiseYCurves(List<AnimationCurve> value) { }

	[CompilerGenerated]
	// RVA: 0x20F961C Offset: 0x20F961C VA: 0x20F961C
	public List<float> get_RiseDurations() { }

	[CompilerGenerated]
	// RVA: 0x20F9624 Offset: 0x20F9624 VA: 0x20F9624
	private void set_RiseDurations(List<float> value) { }

	[CompilerGenerated]
	// RVA: 0x20F9634 Offset: 0x20F9634 VA: 0x20F9634
	public List<Vector2> get_SnitchRiseWorldTargetPositions() { }

	[CompilerGenerated]
	// RVA: 0x20F963C Offset: 0x20F963C VA: 0x20F963C
	private void set_SnitchRiseWorldTargetPositions(List<Vector2> value) { }

	[CompilerGenerated]
	// RVA: 0x20F964C Offset: 0x20F964C VA: 0x20F964C
	public float get_YellowRiseScaleTarget() { }

	[CompilerGenerated]
	// RVA: 0x20F9654 Offset: 0x20F9654 VA: 0x20F9654
	private void set_YellowRiseScaleTarget(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F965C Offset: 0x20F965C VA: 0x20F965C
	public float get_GrayRiseScaleTarget() { }

	[CompilerGenerated]
	// RVA: 0x20F9664 Offset: 0x20F9664 VA: 0x20F9664
	private void set_GrayRiseScaleTarget(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F966C Offset: 0x20F966C VA: 0x20F966C
	public float get_RiseScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9674 Offset: 0x20F9674 VA: 0x20F9674
	private void set_RiseScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F967C Offset: 0x20F967C VA: 0x20F967C
	public AnimationCurve get_RiseScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9684 Offset: 0x20F9684 VA: 0x20F9684
	private void set_RiseScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9694 Offset: 0x20F9694 VA: 0x20F9694
	public float get_RiseStartTime() { }

	[CompilerGenerated]
	// RVA: 0x20F969C Offset: 0x20F969C VA: 0x20F969C
	private void set_RiseStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F96A4 Offset: 0x20F96A4 VA: 0x20F96A4
	public float get_WingAnimationClipStartTime() { }

	[CompilerGenerated]
	// RVA: 0x20F96AC Offset: 0x20F96AC VA: 0x20F96AC
	private void set_WingAnimationClipStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F96B4 Offset: 0x20F96B4 VA: 0x20F96B4
	public Vector2 get_SnitchHitTargetMoveMinMaxDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F96C0 Offset: 0x20F96C0 VA: 0x20F96C0
	private void set_SnitchHitTargetMoveMinMaxDuration(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F96CC Offset: 0x20F96CC VA: 0x20F96CC
	public float get_MaxDistanceCap() { }

	[CompilerGenerated]
	// RVA: 0x20F96D4 Offset: 0x20F96D4 VA: 0x20F96D4
	private void set_MaxDistanceCap(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F96DC Offset: 0x20F96DC VA: 0x20F96DC
	public float get_HitTargetEndScale() { }

	[CompilerGenerated]
	// RVA: 0x20F96E4 Offset: 0x20F96E4 VA: 0x20F96E4
	private void set_HitTargetEndScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F96EC Offset: 0x20F96EC VA: 0x20F96EC
	public AnimationCurve get_HitScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F96F4 Offset: 0x20F96F4 VA: 0x20F96F4
	private void set_HitScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9704 Offset: 0x20F9704 VA: 0x20F9704
	public AnimationCurve get_LeftSnitchHitMoveXCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F970C Offset: 0x20F970C VA: 0x20F970C
	private void set_LeftSnitchHitMoveXCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F971C Offset: 0x20F971C VA: 0x20F971C
	public AnimationCurve get_LeftSnitchHitMoveYCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9724 Offset: 0x20F9724 VA: 0x20F9724
	private void set_LeftSnitchHitMoveYCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9734 Offset: 0x20F9734 VA: 0x20F9734
	public Vector3 get_FirstSnitchSitRiseTargetPosition() { }

	[CompilerGenerated]
	// RVA: 0x20F9744 Offset: 0x20F9744 VA: 0x20F9744
	private void set_FirstSnitchSitRiseTargetPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9754 Offset: 0x20F9754 VA: 0x20F9754
	public Vector3 get_SecondSnitchSitRiseTargetPosition() { }

	[CompilerGenerated]
	// RVA: 0x20F9764 Offset: 0x20F9764 VA: 0x20F9764
	private void set_SecondSnitchSitRiseTargetPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9774 Offset: 0x20F9774 VA: 0x20F9774
	public float get_SitRiseDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F977C Offset: 0x20F977C VA: 0x20F977C
	private void set_SitRiseDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9784 Offset: 0x20F9784 VA: 0x20F9784
	public AnimationCurve get_SnitchSitRiseXCurve1() { }

	[CompilerGenerated]
	// RVA: 0x20F978C Offset: 0x20F978C VA: 0x20F978C
	private void set_SnitchSitRiseXCurve1(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F979C Offset: 0x20F979C VA: 0x20F979C
	public AnimationCurve get_SnitchSitRiseXCurve2() { }

	[CompilerGenerated]
	// RVA: 0x20F97A4 Offset: 0x20F97A4 VA: 0x20F97A4
	private void set_SnitchSitRiseXCurve2(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F97B4 Offset: 0x20F97B4 VA: 0x20F97B4
	public AnimationCurve get_SnitchSitRiseYCurve1() { }

	[CompilerGenerated]
	// RVA: 0x20F97BC Offset: 0x20F97BC VA: 0x20F97BC
	private void set_SnitchSitRiseYCurve1(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F97CC Offset: 0x20F97CC VA: 0x20F97CC
	public AnimationCurve get_SnitchSitRiseYCurve2() { }

	[CompilerGenerated]
	// RVA: 0x20F97D4 Offset: 0x20F97D4 VA: 0x20F97D4
	private void set_SnitchSitRiseYCurve2(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F97E4 Offset: 0x20F97E4 VA: 0x20F97E4
	public float get_SnitchSitRiseSwayStartTime() { }

	[CompilerGenerated]
	// RVA: 0x20F97EC Offset: 0x20F97EC VA: 0x20F97EC
	private void set_SnitchSitRiseSwayStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F97F4 Offset: 0x20F97F4 VA: 0x20F97F4
	public float get_SitRiseTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x20F97FC Offset: 0x20F97FC VA: 0x20F97FC
	private void set_SitRiseTargetScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9804 Offset: 0x20F9804 VA: 0x20F9804
	public float get_SitRiseScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F980C Offset: 0x20F980C VA: 0x20F980C
	private void set_SitRiseScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9814 Offset: 0x20F9814 VA: 0x20F9814
	public AnimationCurve get_SitRiseScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F981C Offset: 0x20F981C VA: 0x20F981C
	private void set_SitRiseScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F982C Offset: 0x20F982C VA: 0x20F982C
	public float get_SitSwayDecreaseDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9834 Offset: 0x20F9834 VA: 0x20F9834
	private void set_SitSwayDecreaseDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F983C Offset: 0x20F983C VA: 0x20F983C
	public float get_SitOnBottleTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x20F9844 Offset: 0x20F9844 VA: 0x20F9844
	private void set_SitOnBottleTargetScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F984C Offset: 0x20F984C VA: 0x20F984C
	public float get_SitOnBottleScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9854 Offset: 0x20F9854 VA: 0x20F9854
	private void set_SitOnBottleScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F985C Offset: 0x20F985C VA: 0x20F985C
	public AnimationCurve get_SitOnBottleScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9864 Offset: 0x20F9864 VA: 0x20F9864
	private void set_SitOnBottleScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9874 Offset: 0x20F9874 VA: 0x20F9874
	public float get_SitMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F987C Offset: 0x20F987C VA: 0x20F987C
	private void set_SitMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9884 Offset: 0x20F9884 VA: 0x20F9884
	public AnimationCurve get_SitMoveXCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F988C Offset: 0x20F988C VA: 0x20F988C
	private void set_SitMoveXCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F989C Offset: 0x20F989C VA: 0x20F989C
	public AnimationCurve get_SitMoveYCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F98A4 Offset: 0x20F98A4 VA: 0x20F98A4
	private void set_SitMoveYCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F98B4 Offset: 0x20F98B4 VA: 0x20F98B4
	public Vector3 get_SitMovePathControlA() { }

	[CompilerGenerated]
	// RVA: 0x20F98C4 Offset: 0x20F98C4 VA: 0x20F98C4
	private void set_SitMovePathControlA(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F98D4 Offset: 0x20F98D4 VA: 0x20F98D4
	public Vector3 get_SitMovePathControlB() { }

	[CompilerGenerated]
	// RVA: 0x20F98E4 Offset: 0x20F98E4 VA: 0x20F98E4
	private void set_SitMovePathControlB(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F98F4 Offset: 0x20F98F4 VA: 0x20F98F4
	public AnimationCurve get_SitBezierPathMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F98FC Offset: 0x20F98FC VA: 0x20F98FC
	private void set_SitBezierPathMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F990C Offset: 0x20F990C VA: 0x20F990C
	public float get_SitMoveSpeed() { }

	[CompilerGenerated]
	// RVA: 0x20F9914 Offset: 0x20F9914 VA: 0x20F9914
	private void set_SitMoveSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F991C Offset: 0x20F991C VA: 0x20F991C
	public float get_SitHideTime() { }

	[CompilerGenerated]
	// RVA: 0x20F9924 Offset: 0x20F9924 VA: 0x20F9924
	private void set_SitHideTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F992C Offset: 0x20F992C VA: 0x20F992C
	public AnimationCurve get_BlockerFadeOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9934 Offset: 0x20F9934 VA: 0x20F9934
	private void set_BlockerFadeOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9944 Offset: 0x20F9944 VA: 0x20F9944
	public float get_GraySnitchEntryScale() { }

	[CompilerGenerated]
	// RVA: 0x20F994C Offset: 0x20F994C VA: 0x20F994C
	private void set_GraySnitchEntryScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9954 Offset: 0x20F9954 VA: 0x20F9954
	public float get_YellowSnitchEntryScale() { }

	[CompilerGenerated]
	// RVA: 0x20F995C Offset: 0x20F995C VA: 0x20F995C
	private void set_YellowSnitchEntryScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9964 Offset: 0x20F9964 VA: 0x20F9964
	public List<SnitchAnimationConfig.ItemTypeOffsetsForSnitch> get_ItemTypeOffsets() { }

	[CompilerGenerated]
	// RVA: 0x20F996C Offset: 0x20F996C VA: 0x20F996C
	private void set_ItemTypeOffsets(List<SnitchAnimationConfig.ItemTypeOffsetsForSnitch> value) { }

	[CompilerGenerated]
	// RVA: 0x20F997C Offset: 0x20F997C VA: 0x20F997C
	public float get_FirstGraySnitchHitDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F9984 Offset: 0x20F9984 VA: 0x20F9984
	private void set_FirstGraySnitchHitDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F998C Offset: 0x20F998C VA: 0x20F998C
	public float get_SecondGraySnitchHitDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F9994 Offset: 0x20F9994 VA: 0x20F9994
	private void set_SecondGraySnitchHitDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F999C Offset: 0x20F999C VA: 0x20F999C
	public float get_ThirdGraySnitchHitDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F99A4 Offset: 0x20F99A4 VA: 0x20F99A4
	private void set_ThirdGraySnitchHitDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F99AC Offset: 0x20F99AC VA: 0x20F99AC
	public float get_FirstGraySnitchRiseDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F99B4 Offset: 0x20F99B4 VA: 0x20F99B4
	private void set_FirstGraySnitchRiseDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F99BC Offset: 0x20F99BC VA: 0x20F99BC
	public float get_SecondGraySnitchRiseDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F99C4 Offset: 0x20F99C4 VA: 0x20F99C4
	private void set_SecondGraySnitchRiseDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F99CC Offset: 0x20F99CC VA: 0x20F99CC
	public float get_ThirdGraySnitchRiseDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F99D4 Offset: 0x20F99D4 VA: 0x20F99D4
	private void set_ThirdGraySnitchRiseDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F99DC Offset: 0x20F99DC VA: 0x20F99DC
	public float get_FirstYellowSnitchRiseDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F99E4 Offset: 0x20F99E4 VA: 0x20F99E4
	private void set_FirstYellowSnitchRiseDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F99EC Offset: 0x20F99EC VA: 0x20F99EC
	public float get_SecondYellowSnitchRiseDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F99F4 Offset: 0x20F99F4 VA: 0x20F99F4
	private void set_SecondYellowSnitchRiseDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F99FC Offset: 0x20F99FC VA: 0x20F99FC
	public float get_FirstYellowSnitchSitRiseDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F9A04 Offset: 0x20F9A04 VA: 0x20F9A04
	private void set_FirstYellowSnitchSitRiseDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9A0C Offset: 0x20F9A0C VA: 0x20F9A0C
	public float get_SecondYellowSnitchSitRiseDelay() { }

	[CompilerGenerated]
	// RVA: 0x20F9A14 Offset: 0x20F9A14 VA: 0x20F9A14
	private void set_SecondYellowSnitchSitRiseDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9A1C Offset: 0x20F9A1C VA: 0x20F9A1C
	public List<int> get_SortOrdersByIndex() { }

	[CompilerGenerated]
	// RVA: 0x20F9A24 Offset: 0x20F9A24 VA: 0x20F9A24
	private void set_SortOrdersByIndex(List<int> value) { }

	[CompilerGenerated]
	// RVA: 0x20F9A34 Offset: 0x20F9A34 VA: 0x20F9A34
	public Vector3 get_WarpTransformInitialPosition() { }

	[CompilerGenerated]
	// RVA: 0x20F9A44 Offset: 0x20F9A44 VA: 0x20F9A44
	private void set_WarpTransformInitialPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9A54 Offset: 0x20F9A54 VA: 0x20F9A54
	public Vector3 get_WarpTransformInitialRotation() { }

	[CompilerGenerated]
	// RVA: 0x20F9A64 Offset: 0x20F9A64 VA: 0x20F9A64
	private void set_WarpTransformInitialRotation(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9A74 Offset: 0x20F9A74 VA: 0x20F9A74
	public float get_MaxDistanceFromCenter() { }

	[CompilerGenerated]
	// RVA: 0x20F9A7C Offset: 0x20F9A7C VA: 0x20F9A7C
	private void set_MaxDistanceFromCenter(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9A84 Offset: 0x20F9A84 VA: 0x20F9A84
	public AnimationCurve get_WarpVerticalCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9A8C Offset: 0x20F9A8C VA: 0x20F9A8C
	private void set_WarpVerticalCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9A9C Offset: 0x20F9A9C VA: 0x20F9A9C
	public float get_WarpVerticalDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9AA4 Offset: 0x20F9AA4 VA: 0x20F9AA4
	private void set_WarpVerticalDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9AAC Offset: 0x20F9AAC VA: 0x20F9AAC
	public List<float> get_WaterHeightOffsetsForSnitch() { }

	[CompilerGenerated]
	// RVA: 0x20F9AB4 Offset: 0x20F9AB4 VA: 0x20F9AB4
	private void set_WaterHeightOffsetsForSnitch(List<float> value) { }

	[CompilerGenerated]
	// RVA: 0x20F9AC4 Offset: 0x20F9AC4 VA: 0x20F9AC4
	public float get_EntranceShakeRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9ACC Offset: 0x20F9ACC VA: 0x20F9ACC
	private void set_EntranceShakeRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9AD4 Offset: 0x20F9AD4 VA: 0x20F9AD4
	public float get_EntranceShakeRotationZValue() { }

	[CompilerGenerated]
	// RVA: 0x20F9ADC Offset: 0x20F9ADC VA: 0x20F9ADC
	private void set_EntranceShakeRotationZValue(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9AE4 Offset: 0x20F9AE4 VA: 0x20F9AE4
	public int get_EntranceShakeVibrato() { }

	[CompilerGenerated]
	// RVA: 0x20F9AEC Offset: 0x20F9AEC VA: 0x20F9AEC
	private void set_EntranceShakeVibrato(int value) { }

	[CompilerGenerated]
	// RVA: 0x20F9AF4 Offset: 0x20F9AF4 VA: 0x20F9AF4
	public float get_SnitchOnBottleTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x20F9AFC Offset: 0x20F9AFC VA: 0x20F9AFC
	private void set_SnitchOnBottleTargetScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B04 Offset: 0x20F9B04 VA: 0x20F9B04
	public float get_SnitchOnBottleScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9B0C Offset: 0x20F9B0C VA: 0x20F9B0C
	private void set_SnitchOnBottleScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B14 Offset: 0x20F9B14 VA: 0x20F9B14
	public AnimationCurve get_SnitchOnBottleScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9B1C Offset: 0x20F9B1C VA: 0x20F9B1C
	private void set_SnitchOnBottleScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B2C Offset: 0x20F9B2C VA: 0x20F9B2C
	public float get_NoiseSpeed() { }

	[CompilerGenerated]
	// RVA: 0x20F9B34 Offset: 0x20F9B34 VA: 0x20F9B34
	private void set_NoiseSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B3C Offset: 0x20F9B3C VA: 0x20F9B3C
	public float get_NoiseScale() { }

	[CompilerGenerated]
	// RVA: 0x20F9B44 Offset: 0x20F9B44 VA: 0x20F9B44
	private void set_NoiseScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B4C Offset: 0x20F9B4C VA: 0x20F9B4C
	public float get_SwayFrequency() { }

	[CompilerGenerated]
	// RVA: 0x20F9B54 Offset: 0x20F9B54 VA: 0x20F9B54
	private void set_SwayFrequency(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B5C Offset: 0x20F9B5C VA: 0x20F9B5C
	public float get_SwayAmplitude() { }

	[CompilerGenerated]
	// RVA: 0x20F9B64 Offset: 0x20F9B64 VA: 0x20F9B64
	private void set_SwayAmplitude(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B6C Offset: 0x20F9B6C VA: 0x20F9B6C
	public float get_RotationAmplitude() { }

	[CompilerGenerated]
	// RVA: 0x20F9B74 Offset: 0x20F9B74 VA: 0x20F9B74
	private void set_RotationAmplitude(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B7C Offset: 0x20F9B7C VA: 0x20F9B7C
	public float get_RotationFrequency() { }

	[CompilerGenerated]
	// RVA: 0x20F9B84 Offset: 0x20F9B84 VA: 0x20F9B84
	private void set_RotationFrequency(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B8C Offset: 0x20F9B8C VA: 0x20F9B8C
	public float get_SwayReturnSpeed() { }

	[CompilerGenerated]
	// RVA: 0x20F9B94 Offset: 0x20F9B94 VA: 0x20F9B94
	private void set_SwayReturnSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9B9C Offset: 0x20F9B9C VA: 0x20F9B9C
	public float get_SwayIntensityIncreaseDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9BA4 Offset: 0x20F9BA4 VA: 0x20F9BA4
	private void set_SwayIntensityIncreaseDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9BAC Offset: 0x20F9BAC VA: 0x20F9BAC
	public AnimationCurve get_SwayIntensityIncreaseCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9BB4 Offset: 0x20F9BB4 VA: 0x20F9BB4
	private void set_SwayIntensityIncreaseCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9BC4 Offset: 0x20F9BC4 VA: 0x20F9BC4
	public AnimationCurve get_SwayIntensityDecreaseCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9BCC Offset: 0x20F9BCC VA: 0x20F9BCC
	private void set_SwayIntensityDecreaseCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9BDC Offset: 0x20F9BDC VA: 0x20F9BDC
	public float get_SwayEnableTime() { }

	[CompilerGenerated]
	// RVA: 0x20F9BE4 Offset: 0x20F9BE4 VA: 0x20F9BE4
	private void set_SwayEnableTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9BEC Offset: 0x20F9BEC VA: 0x20F9BEC
	public float get_WarpTowardsTargetSpeed() { }

	[CompilerGenerated]
	// RVA: 0x20F9BF4 Offset: 0x20F9BF4 VA: 0x20F9BF4
	private void set_WarpTowardsTargetSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9BFC Offset: 0x20F9BFC VA: 0x20F9BFC
	public float get_WarpBackSpeed() { }

	[CompilerGenerated]
	// RVA: 0x20F9C04 Offset: 0x20F9C04 VA: 0x20F9C04
	private void set_WarpBackSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C0C Offset: 0x20F9C0C VA: 0x20F9C0C
	public float get_WarpBackDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9C14 Offset: 0x20F9C14 VA: 0x20F9C14
	private void set_WarpBackDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C1C Offset: 0x20F9C1C VA: 0x20F9C1C
	public float get_MaxWarpDistanceFromCenter() { }

	[CompilerGenerated]
	// RVA: 0x20F9C24 Offset: 0x20F9C24 VA: 0x20F9C24
	private void set_MaxWarpDistanceFromCenter(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C2C Offset: 0x20F9C2C VA: 0x20F9C2C
	public float get_RotationSmoothSpeed() { }

	[CompilerGenerated]
	// RVA: 0x20F9C34 Offset: 0x20F9C34 VA: 0x20F9C34
	private void set_RotationSmoothSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C3C Offset: 0x20F9C3C VA: 0x20F9C3C
	public float get_MaxDegreePerFrame() { }

	[CompilerGenerated]
	// RVA: 0x20F9C44 Offset: 0x20F9C44 VA: 0x20F9C44
	private void set_MaxDegreePerFrame(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C4C Offset: 0x20F9C4C VA: 0x20F9C4C
	public float get_OutOfBottlePrepareMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9C54 Offset: 0x20F9C54 VA: 0x20F9C54
	private void set_OutOfBottlePrepareMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C5C Offset: 0x20F9C5C VA: 0x20F9C5C
	public AnimationCurve get_OutOfBottleMoveYCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9C64 Offset: 0x20F9C64 VA: 0x20F9C64
	private void set_OutOfBottleMoveYCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C74 Offset: 0x20F9C74 VA: 0x20F9C74
	public float get_SnitchOutOfBottleOffset() { }

	[CompilerGenerated]
	// RVA: 0x20F9C7C Offset: 0x20F9C7C VA: 0x20F9C7C
	private void set_SnitchOutOfBottleOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C84 Offset: 0x20F9C84 VA: 0x20F9C84
	public float get_OutOfBottleHitTargetDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9C8C Offset: 0x20F9C8C VA: 0x20F9C8C
	private void set_OutOfBottleHitTargetDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9C94 Offset: 0x20F9C94 VA: 0x20F9C94
	public AnimationCurve get_OutOfBottleHitTargetXCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9C9C Offset: 0x20F9C9C VA: 0x20F9C9C
	private void set_OutOfBottleHitTargetXCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9CAC Offset: 0x20F9CAC VA: 0x20F9CAC
	public AnimationCurve get_OutOfBottleHitTargetYCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9CB4 Offset: 0x20F9CB4 VA: 0x20F9CB4
	private void set_OutOfBottleHitTargetYCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9CC4 Offset: 0x20F9CC4 VA: 0x20F9CC4
	public float get_OutOfBottleTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x20F9CCC Offset: 0x20F9CCC VA: 0x20F9CCC
	private void set_OutOfBottleTargetScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9CD4 Offset: 0x20F9CD4 VA: 0x20F9CD4
	public float get_OutOfBottleScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9CDC Offset: 0x20F9CDC VA: 0x20F9CDC
	private void set_OutOfBottleScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9CE4 Offset: 0x20F9CE4 VA: 0x20F9CE4
	public AnimationCurve get_OutOfBottleScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9CEC Offset: 0x20F9CEC VA: 0x20F9CEC
	private void set_OutOfBottleScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9CFC Offset: 0x20F9CFC VA: 0x20F9CFC
	public float get_OutOfBottleCompleteTime() { }

	[CompilerGenerated]
	// RVA: 0x20F9D04 Offset: 0x20F9D04 VA: 0x20F9D04
	private void set_OutOfBottleCompleteTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9D0C Offset: 0x20F9D0C VA: 0x20F9D0C
	public float get_OutOfBottleStartHitMoveTime() { }

	[CompilerGenerated]
	// RVA: 0x20F9D14 Offset: 0x20F9D14 VA: 0x20F9D14
	private void set_OutOfBottleStartHitMoveTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9D1C Offset: 0x20F9D1C VA: 0x20F9D1C
	public float get_OutOfBottleHitTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x20F9D24 Offset: 0x20F9D24 VA: 0x20F9D24
	private void set_OutOfBottleHitTargetScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9D2C Offset: 0x20F9D2C VA: 0x20F9D2C
	public float get_OutOfBottleHitScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9D34 Offset: 0x20F9D34 VA: 0x20F9D34
	private void set_OutOfBottleHitScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9D3C Offset: 0x20F9D3C VA: 0x20F9D3C
	public AnimationCurve get_OutOfBottleHitScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9D44 Offset: 0x20F9D44 VA: 0x20F9D44
	private void set_OutOfBottleHitScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9D54 Offset: 0x20F9D54 VA: 0x20F9D54
	public Vector3 get_OutOfBottleHitPathControlA() { }

	[CompilerGenerated]
	// RVA: 0x20F9D64 Offset: 0x20F9D64 VA: 0x20F9D64
	private void set_OutOfBottleHitPathControlA(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9D74 Offset: 0x20F9D74 VA: 0x20F9D74
	public Vector3 get_OutOfBottleHitPathControlB() { }

	[CompilerGenerated]
	// RVA: 0x20F9D84 Offset: 0x20F9D84 VA: 0x20F9D84
	private void set_OutOfBottleHitPathControlB(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9D94 Offset: 0x20F9D94 VA: 0x20F9D94
	public float get_OutOfBottleHitDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9D9C Offset: 0x20F9D9C VA: 0x20F9D9C
	private void set_OutOfBottleHitDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9DA4 Offset: 0x20F9DA4 VA: 0x20F9DA4
	public Vector2 get_OutOfBottleHitDurationMinMax() { }

	[CompilerGenerated]
	// RVA: 0x20F9DB0 Offset: 0x20F9DB0 VA: 0x20F9DB0
	private void set_OutOfBottleHitDurationMinMax(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9DBC Offset: 0x20F9DBC VA: 0x20F9DBC
	public Vector2 get_OutOfBottleHitLengthMinMax() { }

	[CompilerGenerated]
	// RVA: 0x20F9DC8 Offset: 0x20F9DC8 VA: 0x20F9DC8
	private void set_OutOfBottleHitLengthMinMax(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9DD4 Offset: 0x20F9DD4 VA: 0x20F9DD4
	public AnimationCurve get_OutOfBottleBezierPathMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x20F9DDC Offset: 0x20F9DDC VA: 0x20F9DDC
	private void set_OutOfBottleBezierPathMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9DEC Offset: 0x20F9DEC VA: 0x20F9DEC
	public float get_SnitchOutOfBottleArcHeight() { }

	[CompilerGenerated]
	// RVA: 0x20F9DF4 Offset: 0x20F9DF4 VA: 0x20F9DF4
	private void set_SnitchOutOfBottleArcHeight(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9DFC Offset: 0x20F9DFC VA: 0x20F9DFC
	public Vector2 get_MinMaxPossibleXDistance() { }

	[CompilerGenerated]
	// RVA: 0x20F9E08 Offset: 0x20F9E08 VA: 0x20F9E08
	private void set_MinMaxPossibleXDistance(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9E14 Offset: 0x20F9E14 VA: 0x20F9E14
	public Vector2 get_MinMaxPossibleYDistance() { }

	[CompilerGenerated]
	// RVA: 0x20F9E20 Offset: 0x20F9E20 VA: 0x20F9E20
	private void set_MinMaxPossibleYDistance(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9E2C Offset: 0x20F9E2C VA: 0x20F9E2C
	public Vector2 get_MinMaxControlValue() { }

	[CompilerGenerated]
	// RVA: 0x20F9E38 Offset: 0x20F9E38 VA: 0x20F9E38
	private void set_MinMaxControlValue(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9E44 Offset: 0x20F9E44 VA: 0x20F9E44
	public float get_OneRowAboveTargetAyOffset() { }

	[CompilerGenerated]
	// RVA: 0x20F9E4C Offset: 0x20F9E4C VA: 0x20F9E4C
	private void set_OneRowAboveTargetAyOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9E54 Offset: 0x20F9E54 VA: 0x20F9E54
	public float get_TwoRowAboveTargetByOffset() { }

	[CompilerGenerated]
	// RVA: 0x20F9E5C Offset: 0x20F9E5C VA: 0x20F9E5C
	private void set_TwoRowAboveTargetByOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9E64 Offset: 0x20F9E64 VA: 0x20F9E64
	public float get_InSameRowAyOffset() { }

	[CompilerGenerated]
	// RVA: 0x20F9E6C Offset: 0x20F9E6C VA: 0x20F9E6C
	private void set_InSameRowAyOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9E74 Offset: 0x20F9E74 VA: 0x20F9E74
	public float get_CloseProximityThreshold() { }

	[CompilerGenerated]
	// RVA: 0x20F9E7C Offset: 0x20F9E7C VA: 0x20F9E7C
	private void set_CloseProximityThreshold(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9E84 Offset: 0x20F9E84 VA: 0x20F9E84
	public Vector3 get_CloseProximityControlA() { }

	[CompilerGenerated]
	// RVA: 0x20F9E94 Offset: 0x20F9E94 VA: 0x20F9E94
	private void set_CloseProximityControlA(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9EA4 Offset: 0x20F9EA4 VA: 0x20F9EA4
	public Vector3 get_CloseProximityControlB() { }

	[CompilerGenerated]
	// RVA: 0x20F9EB4 Offset: 0x20F9EB4 VA: 0x20F9EB4
	private void set_CloseProximityControlB(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9EC4 Offset: 0x20F9EC4 VA: 0x20F9EC4
	public Vector2 get_MinMaxBezierDurationForSit() { }

	[CompilerGenerated]
	// RVA: 0x20F9ED0 Offset: 0x20F9ED0 VA: 0x20F9ED0
	private void set_MinMaxBezierDurationForSit(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9EDC Offset: 0x20F9EDC VA: 0x20F9EDC
	public Vector2 get_MinMaxBezierLengthForSit() { }

	[CompilerGenerated]
	// RVA: 0x20F9EE8 Offset: 0x20F9EE8 VA: 0x20F9EE8
	private void set_MinMaxBezierLengthForSit(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9EF4 Offset: 0x20F9EF4 VA: 0x20F9EF4
	public Vector2 get_MinMaxBezierDurationForHit() { }

	[CompilerGenerated]
	// RVA: 0x20F9F00 Offset: 0x20F9F00 VA: 0x20F9F00
	private void set_MinMaxBezierDurationForHit(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9F0C Offset: 0x20F9F0C VA: 0x20F9F0C
	public Vector2 get_MinMaxBezierLengthForHit() { }

	[CompilerGenerated]
	// RVA: 0x20F9F18 Offset: 0x20F9F18 VA: 0x20F9F18
	private void set_MinMaxBezierLengthForHit(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x20F9F24 Offset: 0x20F9F24 VA: 0x20F9F24
	public float get_CloseProximityHitDuration() { }

	[CompilerGenerated]
	// RVA: 0x20F9F2C Offset: 0x20F9F2C VA: 0x20F9F2C
	private void set_CloseProximityHitDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x20F9F34 Offset: 0x20F9F34 VA: 0x20F9F34
	public AnimationCurve get_CloseProximityHitCurveX() { }

	[CompilerGenerated]
	// RVA: 0x20F9F3C Offset: 0x20F9F3C VA: 0x20F9F3C
	private void set_CloseProximityHitCurveX(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x20F9F4C Offset: 0x20F9F4C VA: 0x20F9F4C
	public AnimationCurve get_CloseProximityHitCurveY() { }

	[CompilerGenerated]
	// RVA: 0x20F9F54 Offset: 0x20F9F54 VA: 0x20F9F54
	private void set_CloseProximityHitCurveY(AnimationCurve value) { }

	// RVA: 0x20F9F64 Offset: 0x20F9F64 VA: 0x20F9F64
	public ValueTuple<AnimationCurve, AnimationCurve> GetSnitchRiseCurvesByIndex(int index) { }

	// RVA: 0x20FA064 Offset: 0x20FA064 VA: 0x20FA064
	public float GetSnitchRiseDurationsByIndex(int index) { }

	// RVA: 0x20FA0E8 Offset: 0x20FA0E8 VA: 0x20FA0E8
	public Vector2 GetSnitchRiseWorldTargetPositionsByIndex(int index) { }

	// RVA: 0x20FA198 Offset: 0x20FA198 VA: 0x20FA198
	public Vector2 GetSnitchTargetOffsetForItemType(ItemType itemType) { }

	// RVA: 0x20FA2E0 Offset: 0x20FA2E0 VA: 0x20FA2E0
	public int GetSortOrderForIndex(int index) { }

	// RVA: 0x20FA364 Offset: 0x20FA364 VA: 0x20FA364
	public float GetWaterHeightOffsetsForSnitch(int height) { }

	// RVA: 0x20FA3E8 Offset: 0x20FA3E8 VA: 0x20FA3E8
	public void .ctor() { }
}

// Namespace: 