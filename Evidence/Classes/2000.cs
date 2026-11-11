public class TowerAnimationsConfig : ScriptableObject // TypeDefIndex: 2000
{
	// Fields
	[CompilerGenerated]
	[Header("RiseAnimation")]
	[SerializeField]
	private AnimationCurve <CatMoveCurve>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private float <CatMoveDuration>k__BackingField; // 0x20
	[SerializeField]
	[CompilerGenerated]
	private float <RiseDelayAfterStart>k__BackingField; // 0x24
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <CatStartRotation>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CatEndRotation>k__BackingField; // 0x34
	[CompilerGenerated]
	[SerializeField]
	private float <CatStartRotationDuration>k__BackingField; // 0x40
	[SerializeField]
	[CompilerGenerated]
	private float <CatEndRotationDuration>k__BackingField; // 0x44
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CatStartRotationCurve>k__BackingField; // 0x48
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CatEndRotationCurve>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	[Header("ScrollBar")]
	private AnimationCurve <ProgressCurve>k__BackingField; // 0x58
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressDuration>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ScrollTweenCurve>k__BackingField; // 0x68
	[CompilerGenerated]
	[SerializeField]
	private float <ScrollTweenDuration>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private float <ScrollBarMaxSize>k__BackingField; // 0x74
	[SerializeField]
	[CompilerGenerated]
	private float <ScrollBarMinSize>k__BackingField; // 0x78
	[CompilerGenerated]
	[SerializeField]
	private float <ParallaxYPosition>k__BackingField; // 0x7C
	[Header("Rewards")]
	[SerializeField]
	[CompilerGenerated]
	private float <RewardsRevealDelay>k__BackingField; // 0x80
	[SerializeField]
	[CompilerGenerated]
	private float <HorizontalOffset>k__BackingField; // 0x84
	[CompilerGenerated]
	[SerializeField]
	private float <VerticalOffset>k__BackingField; // 0x88
	[CompilerGenerated]
	[SerializeField]
	private float <RevealAnimationChestOffset>k__BackingField; // 0x8C
	[SerializeField]
	[CompilerGenerated]
	private float <DelayBetweenReveals>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <PivotOffset>k__BackingField; // 0x94
	[CompilerGenerated]
	[Header("Sprites")]
	[SerializeField]
	private Sprite <IntermediateGreenSprite>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private Sprite <IntermediatePurpleSprite>k__BackingField; // 0xA8
	[CompilerGenerated]
	[SerializeField]
	private Sprite <MainStepUnlockedSprite>k__BackingField; // 0xB0
	[SerializeField]
	[CompilerGenerated]
	private Sprite <MainStepLockedSprite>k__BackingField; // 0xB8
	[Header("MainStepUnlockAnimation")]
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <MainStepUnlockScale>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private float <MainStepFirstScaleDuration>k__BackingField; // 0xCC
	[CompilerGenerated]
	[SerializeField]
	private float <MainStepSecondScaleDuration>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private float <MainStepParticleHitStartTime>k__BackingField; // 0xD4
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <MainStepFirstScaleCurve>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <MainStepSecondScaleCurve>k__BackingField; // 0xE0
	[SerializeField]
	[CompilerGenerated]
	private float <ChestGreenTickStartTime>k__BackingField; // 0xE8
	[CompilerGenerated]
	[SerializeField]
	private float <ChestParticleStartTime>k__BackingField; // 0xEC
	[CompilerGenerated]
	[SerializeField]
	private float <ChestOpenAnimationTime>k__BackingField; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <GreenTickStartScale>k__BackingField; // 0xF4
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <GreenTickEndScale>k__BackingField; // 0x100
	[CompilerGenerated]
	[SerializeField]
	private float <GreenTickDuration>k__BackingField; // 0x10C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <GreenTickCurve>k__BackingField; // 0x110
	[SerializeField]
	[CompilerGenerated]
	private float <FallProgressBarDelayForFirstEverShow>k__BackingField; // 0x118
	[SerializeField]
	[CompilerGenerated]
	private float <FallProgressBarDurationForFirstEverShow>k__BackingField; // 0x11C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <FallAnimationCurveForFirstEverShow>k__BackingField; // 0x120
	[SerializeField]
	[CompilerGenerated]
	private float <FallEndWaitDurationFirstEverShow>k__BackingField; // 0x128
	[CompilerGenerated]
	[SerializeField]
	private float <EnableInputTime>k__BackingField; // 0x12C
	[CompilerGenerated]
	[Header("CatFall")]
	[SerializeField]
	private float <CatFallDurationMultiplier>k__BackingField; // 0x130
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <CatFallDurationMinMax>k__BackingField; // 0x134
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CatFallCurve>k__BackingField; // 0x140
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CatFallProgressCurve>k__BackingField; // 0x148
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CatFallSampleCurve>k__BackingField; // 0x150
	[SerializeField]
	[CompilerGenerated]
	private float <CatFallDelay>k__BackingField; // 0x158
	[CompilerGenerated]
	[SerializeField]
	private float <CatFallGroundOffset>k__BackingField; // 0x15C

	// Properties
	public AnimationCurve CatMoveCurve { get; set; }
	public float CatMoveDuration { get; set; }
	public float RiseDelayAfterStart { get; set; }
	public Vector3 CatStartRotation { get; set; }
	public Vector3 CatEndRotation { get; set; }
	public float CatStartRotationDuration { get; set; }
	public float CatEndRotationDuration { get; set; }
	public AnimationCurve CatStartRotationCurve { get; set; }
	public AnimationCurve CatEndRotationCurve { get; set; }
	public AnimationCurve ProgressCurve { get; set; }
	public float ProgressDuration { get; set; }
	public AnimationCurve ScrollTweenCurve { get; set; }
	public float ScrollTweenDuration { get; set; }
	public float ScrollBarMaxSize { get; set; }
	public float ScrollBarMinSize { get; set; }
	public float ParallaxYPosition { get; set; }
	public float RewardsRevealDelay { get; set; }
	public float HorizontalOffset { get; set; }
	public float VerticalOffset { get; set; }
	public float RevealAnimationChestOffset { get; set; }
	public float DelayBetweenReveals { get; set; }
	public Vector3 PivotOffset { get; set; }
	public Sprite IntermediateGreenSprite { get; set; }
	public Sprite IntermediatePurpleSprite { get; set; }
	public Sprite MainStepUnlockedSprite { get; set; }
	public Sprite MainStepLockedSprite { get; set; }
	public Vector3 MainStepUnlockScale { get; set; }
	public float MainStepFirstScaleDuration { get; set; }
	public float MainStepSecondScaleDuration { get; set; }
	public float MainStepParticleHitStartTime { get; set; }
	public AnimationCurve MainStepFirstScaleCurve { get; set; }
	public AnimationCurve MainStepSecondScaleCurve { get; set; }
	public float ChestGreenTickStartTime { get; set; }
	public float ChestParticleStartTime { get; set; }
	public float ChestOpenAnimationTime { get; set; }
	public Vector3 GreenTickStartScale { get; set; }
	public Vector3 GreenTickEndScale { get; set; }
	public float GreenTickDuration { get; set; }
	public AnimationCurve GreenTickCurve { get; set; }
	public float FallProgressBarDelayForFirstEverShow { get; set; }
	public float FallProgressBarDurationForFirstEverShow { get; set; }
	public AnimationCurve FallAnimationCurveForFirstEverShow { get; set; }
	public float FallEndWaitDurationFirstEverShow { get; set; }
	public float EnableInputTime { get; set; }
	public float CatFallDurationMultiplier { get; set; }
	public Vector2 CatFallDurationMinMax { get; set; }
	public AnimationCurve CatFallCurve { get; set; }
	public AnimationCurve CatFallProgressCurve { get; set; }
	public AnimationCurve CatFallSampleCurve { get; set; }
	public float CatFallDelay { get; set; }
	public float CatFallGroundOffset { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32DFBC8 Offset: 0x32DFBC8 VA: 0x32DFBC8
	public AnimationCurve get_CatMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFBD0 Offset: 0x32DFBD0 VA: 0x32DFBD0
	private void set_CatMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFBD8 Offset: 0x32DFBD8 VA: 0x32DFBD8
	public float get_CatMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x32DFBE0 Offset: 0x32DFBE0 VA: 0x32DFBE0
	private void set_CatMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFBE8 Offset: 0x32DFBE8 VA: 0x32DFBE8
	public float get_RiseDelayAfterStart() { }

	[CompilerGenerated]
	// RVA: 0x32DFBF0 Offset: 0x32DFBF0 VA: 0x32DFBF0
	private void set_RiseDelayAfterStart(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFBF8 Offset: 0x32DFBF8 VA: 0x32DFBF8
	public Vector3 get_CatStartRotation() { }

	[CompilerGenerated]
	// RVA: 0x32DFC04 Offset: 0x32DFC04 VA: 0x32DFC04
	private void set_CatStartRotation(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC10 Offset: 0x32DFC10 VA: 0x32DFC10
	public Vector3 get_CatEndRotation() { }

	[CompilerGenerated]
	// RVA: 0x32DFC1C Offset: 0x32DFC1C VA: 0x32DFC1C
	private void set_CatEndRotation(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC28 Offset: 0x32DFC28 VA: 0x32DFC28
	public float get_CatStartRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x32DFC30 Offset: 0x32DFC30 VA: 0x32DFC30
	private void set_CatStartRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC38 Offset: 0x32DFC38 VA: 0x32DFC38
	public float get_CatEndRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x32DFC40 Offset: 0x32DFC40 VA: 0x32DFC40
	private void set_CatEndRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC48 Offset: 0x32DFC48 VA: 0x32DFC48
	public AnimationCurve get_CatStartRotationCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFC50 Offset: 0x32DFC50 VA: 0x32DFC50
	private void set_CatStartRotationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC58 Offset: 0x32DFC58 VA: 0x32DFC58
	public AnimationCurve get_CatEndRotationCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFC60 Offset: 0x32DFC60 VA: 0x32DFC60
	private void set_CatEndRotationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC68 Offset: 0x32DFC68 VA: 0x32DFC68
	public AnimationCurve get_ProgressCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFC70 Offset: 0x32DFC70 VA: 0x32DFC70
	private void set_ProgressCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC78 Offset: 0x32DFC78 VA: 0x32DFC78
	public float get_ProgressDuration() { }

	[CompilerGenerated]
	// RVA: 0x32DFC80 Offset: 0x32DFC80 VA: 0x32DFC80
	private void set_ProgressDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC88 Offset: 0x32DFC88 VA: 0x32DFC88
	public AnimationCurve get_ScrollTweenCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFC90 Offset: 0x32DFC90 VA: 0x32DFC90
	private void set_ScrollTweenCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFC98 Offset: 0x32DFC98 VA: 0x32DFC98
	public float get_ScrollTweenDuration() { }

	[CompilerGenerated]
	// RVA: 0x32DFCA0 Offset: 0x32DFCA0 VA: 0x32DFCA0
	private void set_ScrollTweenDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFCA8 Offset: 0x32DFCA8 VA: 0x32DFCA8
	public float get_ScrollBarMaxSize() { }

	[CompilerGenerated]
	// RVA: 0x32DFCB0 Offset: 0x32DFCB0 VA: 0x32DFCB0
	private void set_ScrollBarMaxSize(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFCB8 Offset: 0x32DFCB8 VA: 0x32DFCB8
	public float get_ScrollBarMinSize() { }

	[CompilerGenerated]
	// RVA: 0x32DFCC0 Offset: 0x32DFCC0 VA: 0x32DFCC0
	private void set_ScrollBarMinSize(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFCC8 Offset: 0x32DFCC8 VA: 0x32DFCC8
	public float get_ParallaxYPosition() { }

	[CompilerGenerated]
	// RVA: 0x32DFCD0 Offset: 0x32DFCD0 VA: 0x32DFCD0
	private void set_ParallaxYPosition(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFCD8 Offset: 0x32DFCD8 VA: 0x32DFCD8
	public float get_RewardsRevealDelay() { }

	[CompilerGenerated]
	// RVA: 0x32DFCE0 Offset: 0x32DFCE0 VA: 0x32DFCE0
	private void set_RewardsRevealDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFCE8 Offset: 0x32DFCE8 VA: 0x32DFCE8
	public float get_HorizontalOffset() { }

	[CompilerGenerated]
	// RVA: 0x32DFCF0 Offset: 0x32DFCF0 VA: 0x32DFCF0
	private void set_HorizontalOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFCF8 Offset: 0x32DFCF8 VA: 0x32DFCF8
	public float get_VerticalOffset() { }

	[CompilerGenerated]
	// RVA: 0x32DFD00 Offset: 0x32DFD00 VA: 0x32DFD00
	private void set_VerticalOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD08 Offset: 0x32DFD08 VA: 0x32DFD08
	public float get_RevealAnimationChestOffset() { }

	[CompilerGenerated]
	// RVA: 0x32DFD10 Offset: 0x32DFD10 VA: 0x32DFD10
	private void set_RevealAnimationChestOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD18 Offset: 0x32DFD18 VA: 0x32DFD18
	public float get_DelayBetweenReveals() { }

	[CompilerGenerated]
	// RVA: 0x32DFD20 Offset: 0x32DFD20 VA: 0x32DFD20
	public void set_DelayBetweenReveals(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD28 Offset: 0x32DFD28 VA: 0x32DFD28
	public Vector3 get_PivotOffset() { }

	[CompilerGenerated]
	// RVA: 0x32DFD34 Offset: 0x32DFD34 VA: 0x32DFD34
	private void set_PivotOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD40 Offset: 0x32DFD40 VA: 0x32DFD40
	public Sprite get_IntermediateGreenSprite() { }

	[CompilerGenerated]
	// RVA: 0x32DFD48 Offset: 0x32DFD48 VA: 0x32DFD48
	private void set_IntermediateGreenSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD50 Offset: 0x32DFD50 VA: 0x32DFD50
	public Sprite get_IntermediatePurpleSprite() { }

	[CompilerGenerated]
	// RVA: 0x32DFD58 Offset: 0x32DFD58 VA: 0x32DFD58
	private void set_IntermediatePurpleSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD60 Offset: 0x32DFD60 VA: 0x32DFD60
	public Sprite get_MainStepUnlockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x32DFD68 Offset: 0x32DFD68 VA: 0x32DFD68
	private void set_MainStepUnlockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD70 Offset: 0x32DFD70 VA: 0x32DFD70
	public Sprite get_MainStepLockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x32DFD78 Offset: 0x32DFD78 VA: 0x32DFD78
	private void set_MainStepLockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD80 Offset: 0x32DFD80 VA: 0x32DFD80
	public Vector3 get_MainStepUnlockScale() { }

	[CompilerGenerated]
	// RVA: 0x32DFD8C Offset: 0x32DFD8C VA: 0x32DFD8C
	private void set_MainStepUnlockScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x32DFD98 Offset: 0x32DFD98 VA: 0x32DFD98
	public float get_MainStepFirstScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x32DFDA0 Offset: 0x32DFDA0 VA: 0x32DFDA0
	private void set_MainStepFirstScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFDA8 Offset: 0x32DFDA8 VA: 0x32DFDA8
	public float get_MainStepSecondScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x32DFDB0 Offset: 0x32DFDB0 VA: 0x32DFDB0
	private void set_MainStepSecondScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFDB8 Offset: 0x32DFDB8 VA: 0x32DFDB8
	public float get_MainStepParticleHitStartTime() { }

	[CompilerGenerated]
	// RVA: 0x32DFDC0 Offset: 0x32DFDC0 VA: 0x32DFDC0
	private void set_MainStepParticleHitStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFDC8 Offset: 0x32DFDC8 VA: 0x32DFDC8
	public AnimationCurve get_MainStepFirstScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFDD0 Offset: 0x32DFDD0 VA: 0x32DFDD0
	private void set_MainStepFirstScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFDD8 Offset: 0x32DFDD8 VA: 0x32DFDD8
	public AnimationCurve get_MainStepSecondScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFDE0 Offset: 0x32DFDE0 VA: 0x32DFDE0
	private void set_MainStepSecondScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFDE8 Offset: 0x32DFDE8 VA: 0x32DFDE8
	public float get_ChestGreenTickStartTime() { }

	[CompilerGenerated]
	// RVA: 0x32DFDF0 Offset: 0x32DFDF0 VA: 0x32DFDF0
	private void set_ChestGreenTickStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFDF8 Offset: 0x32DFDF8 VA: 0x32DFDF8
	public float get_ChestParticleStartTime() { }

	[CompilerGenerated]
	// RVA: 0x32DFE00 Offset: 0x32DFE00 VA: 0x32DFE00
	private void set_ChestParticleStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFE08 Offset: 0x32DFE08 VA: 0x32DFE08
	public float get_ChestOpenAnimationTime() { }

	[CompilerGenerated]
	// RVA: 0x32DFE10 Offset: 0x32DFE10 VA: 0x32DFE10
	private void set_ChestOpenAnimationTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFE18 Offset: 0x32DFE18 VA: 0x32DFE18
	public Vector3 get_GreenTickStartScale() { }

	[CompilerGenerated]
	// RVA: 0x32DFE24 Offset: 0x32DFE24 VA: 0x32DFE24
	private void set_GreenTickStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x32DFE30 Offset: 0x32DFE30 VA: 0x32DFE30
	public Vector3 get_GreenTickEndScale() { }

	[CompilerGenerated]
	// RVA: 0x32DFE40 Offset: 0x32DFE40 VA: 0x32DFE40
	private void set_GreenTickEndScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x32DFE50 Offset: 0x32DFE50 VA: 0x32DFE50
	public float get_GreenTickDuration() { }

	[CompilerGenerated]
	// RVA: 0x32DFE58 Offset: 0x32DFE58 VA: 0x32DFE58
	private void set_GreenTickDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFE60 Offset: 0x32DFE60 VA: 0x32DFE60
	public AnimationCurve get_GreenTickCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFE68 Offset: 0x32DFE68 VA: 0x32DFE68
	private void set_GreenTickCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFE78 Offset: 0x32DFE78 VA: 0x32DFE78
	public float get_FallProgressBarDelayForFirstEverShow() { }

	[CompilerGenerated]
	// RVA: 0x32DFE80 Offset: 0x32DFE80 VA: 0x32DFE80
	private void set_FallProgressBarDelayForFirstEverShow(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFE88 Offset: 0x32DFE88 VA: 0x32DFE88
	public float get_FallProgressBarDurationForFirstEverShow() { }

	[CompilerGenerated]
	// RVA: 0x32DFE90 Offset: 0x32DFE90 VA: 0x32DFE90
	private void set_FallProgressBarDurationForFirstEverShow(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFE98 Offset: 0x32DFE98 VA: 0x32DFE98
	public AnimationCurve get_FallAnimationCurveForFirstEverShow() { }

	[CompilerGenerated]
	// RVA: 0x32DFEA0 Offset: 0x32DFEA0 VA: 0x32DFEA0
	private void set_FallAnimationCurveForFirstEverShow(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFEB0 Offset: 0x32DFEB0 VA: 0x32DFEB0
	public float get_FallEndWaitDurationFirstEverShow() { }

	[CompilerGenerated]
	// RVA: 0x32DFEB8 Offset: 0x32DFEB8 VA: 0x32DFEB8
	private void set_FallEndWaitDurationFirstEverShow(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFEC0 Offset: 0x32DFEC0 VA: 0x32DFEC0
	public float get_EnableInputTime() { }

	[CompilerGenerated]
	// RVA: 0x32DFEC8 Offset: 0x32DFEC8 VA: 0x32DFEC8
	private void set_EnableInputTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFED0 Offset: 0x32DFED0 VA: 0x32DFED0
	public float get_CatFallDurationMultiplier() { }

	[CompilerGenerated]
	// RVA: 0x32DFED8 Offset: 0x32DFED8 VA: 0x32DFED8
	private void set_CatFallDurationMultiplier(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFEE0 Offset: 0x32DFEE0 VA: 0x32DFEE0
	public Vector2 get_CatFallDurationMinMax() { }

	[CompilerGenerated]
	// RVA: 0x32DFEEC Offset: 0x32DFEEC VA: 0x32DFEEC
	private void set_CatFallDurationMinMax(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x32DFEF8 Offset: 0x32DFEF8 VA: 0x32DFEF8
	public AnimationCurve get_CatFallCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFF00 Offset: 0x32DFF00 VA: 0x32DFF00
	private void set_CatFallCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFF10 Offset: 0x32DFF10 VA: 0x32DFF10
	public AnimationCurve get_CatFallProgressCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFF18 Offset: 0x32DFF18 VA: 0x32DFF18
	private void set_CatFallProgressCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFF28 Offset: 0x32DFF28 VA: 0x32DFF28
	public AnimationCurve get_CatFallSampleCurve() { }

	[CompilerGenerated]
	// RVA: 0x32DFF30 Offset: 0x32DFF30 VA: 0x32DFF30
	private void set_CatFallSampleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x32DFF40 Offset: 0x32DFF40 VA: 0x32DFF40
	public float get_CatFallDelay() { }

	[CompilerGenerated]
	// RVA: 0x32DFF48 Offset: 0x32DFF48 VA: 0x32DFF48
	private void set_CatFallDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x32DFF50 Offset: 0x32DFF50 VA: 0x32DFF50
	public float get_CatFallGroundOffset() { }

	[CompilerGenerated]
	// RVA: 0x32DFF58 Offset: 0x32DFF58 VA: 0x32DFF58
	private void set_CatFallGroundOffset(float value) { }

	// RVA: 0x32DFF60 Offset: 0x32DFF60 VA: 0x32DFF60
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts