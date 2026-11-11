public class BroomStreakBannerConfig : ScriptableObject // TypeDefIndex: 4776
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	[Header("Animation")]
	private AnimationCurve <CatMoveCurve>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private float <CatMoveDuration>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CatPrepareOffset>k__BackingField; // 0x24
	[SerializeField]
	[CompilerGenerated]
	private float <CatPrepareDuration>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private float <BroomStreakBannerCatMoveDuration>k__BackingField; // 0x34
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BroomStreakBannerCatMoveCurve>k__BackingField; // 0x38
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CatPrepareCurve>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private float <CatTiltRotationZ>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private float <CatStartTiltDuration>k__BackingField; // 0x4C
	[SerializeField]
	[CompilerGenerated]
	private float <CatStopTiltDuration>k__BackingField; // 0x50
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CatStartTiltCurve>k__BackingField; // 0x58
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CatStopTiltCurve>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private float <CatStopTiltStartTime>k__BackingField; // 0x68
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CatPathMiddleOffset>k__BackingField; // 0x6C
	[CompilerGenerated]
	[SerializeField]
	private float <CatPathEndOffset>k__BackingField; // 0x78
	[CompilerGenerated]
	[SerializeField]
	private float <CatYOffsetInPath>k__BackingField; // 0x7C
	[CompilerGenerated]
	[SerializeField]
	private float <IncreaseAnimDelay>k__BackingField; // 0x80
	[CompilerGenerated]
	[SerializeField]
	private float <RevealMainStepTime>k__BackingField; // 0x84
	[SerializeField]
	[CompilerGenerated]
	private float <TickScaleDuration>k__BackingField; // 0x88
	[SerializeField]
	[CompilerGenerated]
	private float <TickStartTime>k__BackingField; // 0x8C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <TickScaleCurve>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <TickSpriteEndScale>k__BackingField; // 0x98
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <TickSpriteStartScale>k__BackingField; // 0xA4
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <MainStepEnlargeScale>k__BackingField; // 0xB0
	[CompilerGenerated]
	[SerializeField]
	private float <MainStepEnlargeStartTime>k__BackingField; // 0xBC
	[CompilerGenerated]
	[SerializeField]
	private float <MainStepEnlargeDuration>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <MainStepEnlargeAnimationCurve>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
	private float <MainStepShrinkDuration>k__BackingField; // 0xD0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <MainStepShrinkCurve>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private float <ParticlePlayTime>k__BackingField; // 0xE0
	[CompilerGenerated]
	[SerializeField]
	private float <SpriteSwapTime>k__BackingField; // 0xE4
	[SerializeField]
	[CompilerGenerated]
	private float <DistanceBetweenMainSteps>k__BackingField; // 0xE8
	[CompilerGenerated]
	[SerializeField]
	private float <ContainerMoveDuration>k__BackingField; // 0xEC
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <ContainerMoveEase>k__BackingField; // 0xF0
	[Header("Prefabs")]
	[SerializeField]
	[CompilerGenerated]
	private BroomStreakBannerMainStep <MainStepPrefab>k__BackingField; // 0xF8
	[CompilerGenerated]
	[SerializeField]
	private BroomStreakBannerIntermediateStep <IntermediateStepPrefab>k__BackingField; // 0x100
	[Header("Sprites")]
	[SerializeField]
	[CompilerGenerated]
	private Sprite <MainStepLockedSprite>k__BackingField; // 0x108
	[SerializeField]
	[CompilerGenerated]
	private Sprite <MainStepUnlockedSprite>k__BackingField; // 0x110
	[CompilerGenerated]
	[SerializeField]
	private Sprite <IntermediateStepLockedSprite>k__BackingField; // 0x118
	[CompilerGenerated]
	[SerializeField]
	private Sprite <IntermediateStepUnlockedSprite>k__BackingField; // 0x120
	[SerializeField]
	[CompilerGenerated]
	private Sprite <CheckPointStepLockedSprite>k__BackingField; // 0x128
	[CompilerGenerated]
	[SerializeField]
	private Sprite <CheckPointStepUnlockedSprite>k__BackingField; // 0x130
	[SerializeField]
	private List<Sprite> _chestSprites; // 0x138

	// Properties
	public AnimationCurve CatMoveCurve { get; set; }
	public float CatMoveDuration { get; set; }
	public Vector3 CatPrepareOffset { get; set; }
	public float CatPrepareDuration { get; set; }
	public float BroomStreakBannerCatMoveDuration { get; set; }
	public AnimationCurve BroomStreakBannerCatMoveCurve { get; set; }
	public AnimationCurve CatPrepareCurve { get; set; }
	public float CatTiltRotationZ { get; set; }
	public float CatStartTiltDuration { get; set; }
	public float CatStopTiltDuration { get; set; }
	public AnimationCurve CatStartTiltCurve { get; set; }
	public AnimationCurve CatStopTiltCurve { get; set; }
	public float CatStopTiltStartTime { get; set; }
	public Vector3 CatPathMiddleOffset { get; set; }
	public float CatPathEndOffset { get; set; }
	public float CatYOffsetInPath { get; set; }
	public float IncreaseAnimDelay { get; set; }
	public float RevealMainStepTime { get; set; }
	public float TickScaleDuration { get; set; }
	public float TickStartTime { get; set; }
	public AnimationCurve TickScaleCurve { get; set; }
	public Vector3 TickSpriteEndScale { get; set; }
	public Vector3 TickSpriteStartScale { get; set; }
	public Vector3 MainStepEnlargeScale { get; set; }
	public float MainStepEnlargeStartTime { get; set; }
	public float MainStepEnlargeDuration { get; set; }
	public AnimationCurve MainStepEnlargeAnimationCurve { get; set; }
	public float MainStepShrinkDuration { get; set; }
	public AnimationCurve MainStepShrinkCurve { get; set; }
	public float ParticlePlayTime { get; set; }
	public float SpriteSwapTime { get; set; }
	public float DistanceBetweenMainSteps { get; set; }
	public float ContainerMoveDuration { get; set; }
	public AnimationCurve ContainerMoveEase { get; set; }
	public BroomStreakBannerMainStep MainStepPrefab { get; set; }
	public BroomStreakBannerIntermediateStep IntermediateStepPrefab { get; set; }
	public Sprite MainStepLockedSprite { get; set; }
	public Sprite MainStepUnlockedSprite { get; set; }
	public Sprite IntermediateStepLockedSprite { get; set; }
	public Sprite IntermediateStepUnlockedSprite { get; set; }
	public Sprite CheckPointStepLockedSprite { get; set; }
	public Sprite CheckPointStepUnlockedSprite { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3FC100C Offset: 0x3FC100C VA: 0x3FC100C
	public AnimationCurve get_CatMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FC1014 Offset: 0x3FC1014 VA: 0x3FC1014
	private void set_CatMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC101C Offset: 0x3FC101C VA: 0x3FC101C
	public float get_CatMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC1024 Offset: 0x3FC1024 VA: 0x3FC1024
	private void set_CatMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC102C Offset: 0x3FC102C VA: 0x3FC102C
	public Vector3 get_CatPrepareOffset() { }

	[CompilerGenerated]
	// RVA: 0x3FC1038 Offset: 0x3FC1038 VA: 0x3FC1038
	private void set_CatPrepareOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1044 Offset: 0x3FC1044 VA: 0x3FC1044
	public float get_CatPrepareDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC104C Offset: 0x3FC104C VA: 0x3FC104C
	private void set_CatPrepareDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1054 Offset: 0x3FC1054 VA: 0x3FC1054
	public float get_BroomStreakBannerCatMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC105C Offset: 0x3FC105C VA: 0x3FC105C
	private void set_BroomStreakBannerCatMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1064 Offset: 0x3FC1064 VA: 0x3FC1064
	public AnimationCurve get_BroomStreakBannerCatMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FC106C Offset: 0x3FC106C VA: 0x3FC106C
	private void set_BroomStreakBannerCatMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1074 Offset: 0x3FC1074 VA: 0x3FC1074
	public AnimationCurve get_CatPrepareCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FC107C Offset: 0x3FC107C VA: 0x3FC107C
	private void set_CatPrepareCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1084 Offset: 0x3FC1084 VA: 0x3FC1084
	public float get_CatTiltRotationZ() { }

	[CompilerGenerated]
	// RVA: 0x3FC108C Offset: 0x3FC108C VA: 0x3FC108C
	private void set_CatTiltRotationZ(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1094 Offset: 0x3FC1094 VA: 0x3FC1094
	public float get_CatStartTiltDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC109C Offset: 0x3FC109C VA: 0x3FC109C
	private void set_CatStartTiltDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC10A4 Offset: 0x3FC10A4 VA: 0x3FC10A4
	public float get_CatStopTiltDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC10AC Offset: 0x3FC10AC VA: 0x3FC10AC
	private void set_CatStopTiltDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC10B4 Offset: 0x3FC10B4 VA: 0x3FC10B4
	public AnimationCurve get_CatStartTiltCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FC10BC Offset: 0x3FC10BC VA: 0x3FC10BC
	private void set_CatStartTiltCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC10C4 Offset: 0x3FC10C4 VA: 0x3FC10C4
	public AnimationCurve get_CatStopTiltCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FC10CC Offset: 0x3FC10CC VA: 0x3FC10CC
	private void set_CatStopTiltCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC10D4 Offset: 0x3FC10D4 VA: 0x3FC10D4
	public float get_CatStopTiltStartTime() { }

	[CompilerGenerated]
	// RVA: 0x3FC10DC Offset: 0x3FC10DC VA: 0x3FC10DC
	private void set_CatStopTiltStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC10E4 Offset: 0x3FC10E4 VA: 0x3FC10E4
	public Vector3 get_CatPathMiddleOffset() { }

	[CompilerGenerated]
	// RVA: 0x3FC10F0 Offset: 0x3FC10F0 VA: 0x3FC10F0
	private void set_CatPathMiddleOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FC10FC Offset: 0x3FC10FC VA: 0x3FC10FC
	public float get_CatPathEndOffset() { }

	[CompilerGenerated]
	// RVA: 0x3FC1104 Offset: 0x3FC1104 VA: 0x3FC1104
	private void set_CatPathEndOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC110C Offset: 0x3FC110C VA: 0x3FC110C
	public float get_CatYOffsetInPath() { }

	[CompilerGenerated]
	// RVA: 0x3FC1114 Offset: 0x3FC1114 VA: 0x3FC1114
	private void set_CatYOffsetInPath(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC111C Offset: 0x3FC111C VA: 0x3FC111C
	public float get_IncreaseAnimDelay() { }

	[CompilerGenerated]
	// RVA: 0x3FC1124 Offset: 0x3FC1124 VA: 0x3FC1124
	public void set_IncreaseAnimDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC112C Offset: 0x3FC112C VA: 0x3FC112C
	public float get_RevealMainStepTime() { }

	[CompilerGenerated]
	// RVA: 0x3FC1134 Offset: 0x3FC1134 VA: 0x3FC1134
	private void set_RevealMainStepTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC113C Offset: 0x3FC113C VA: 0x3FC113C
	public float get_TickScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC1144 Offset: 0x3FC1144 VA: 0x3FC1144
	private void set_TickScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC114C Offset: 0x3FC114C VA: 0x3FC114C
	public float get_TickStartTime() { }

	[CompilerGenerated]
	// RVA: 0x3FC1154 Offset: 0x3FC1154 VA: 0x3FC1154
	private void set_TickStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC115C Offset: 0x3FC115C VA: 0x3FC115C
	public AnimationCurve get_TickScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FC1164 Offset: 0x3FC1164 VA: 0x3FC1164
	private void set_TickScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC116C Offset: 0x3FC116C VA: 0x3FC116C
	public Vector3 get_TickSpriteEndScale() { }

	[CompilerGenerated]
	// RVA: 0x3FC1178 Offset: 0x3FC1178 VA: 0x3FC1178
	private void set_TickSpriteEndScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1184 Offset: 0x3FC1184 VA: 0x3FC1184
	public Vector3 get_TickSpriteStartScale() { }

	[CompilerGenerated]
	// RVA: 0x3FC1190 Offset: 0x3FC1190 VA: 0x3FC1190
	private void set_TickSpriteStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FC119C Offset: 0x3FC119C VA: 0x3FC119C
	public Vector3 get_MainStepEnlargeScale() { }

	[CompilerGenerated]
	// RVA: 0x3FC11A8 Offset: 0x3FC11A8 VA: 0x3FC11A8
	private void set_MainStepEnlargeScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3FC11B4 Offset: 0x3FC11B4 VA: 0x3FC11B4
	public float get_MainStepEnlargeStartTime() { }

	[CompilerGenerated]
	// RVA: 0x3FC11BC Offset: 0x3FC11BC VA: 0x3FC11BC
	private void set_MainStepEnlargeStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC11C4 Offset: 0x3FC11C4 VA: 0x3FC11C4
	public float get_MainStepEnlargeDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC11CC Offset: 0x3FC11CC VA: 0x3FC11CC
	private void set_MainStepEnlargeDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC11D4 Offset: 0x3FC11D4 VA: 0x3FC11D4
	public AnimationCurve get_MainStepEnlargeAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FC11DC Offset: 0x3FC11DC VA: 0x3FC11DC
	private void set_MainStepEnlargeAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC11E4 Offset: 0x3FC11E4 VA: 0x3FC11E4
	public float get_MainStepShrinkDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC11EC Offset: 0x3FC11EC VA: 0x3FC11EC
	private void set_MainStepShrinkDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC11F4 Offset: 0x3FC11F4 VA: 0x3FC11F4
	public AnimationCurve get_MainStepShrinkCurve() { }

	[CompilerGenerated]
	// RVA: 0x3FC11FC Offset: 0x3FC11FC VA: 0x3FC11FC
	private void set_MainStepShrinkCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1204 Offset: 0x3FC1204 VA: 0x3FC1204
	public float get_ParticlePlayTime() { }

	[CompilerGenerated]
	// RVA: 0x3FC120C Offset: 0x3FC120C VA: 0x3FC120C
	private void set_ParticlePlayTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1214 Offset: 0x3FC1214 VA: 0x3FC1214
	public float get_SpriteSwapTime() { }

	[CompilerGenerated]
	// RVA: 0x3FC121C Offset: 0x3FC121C VA: 0x3FC121C
	private void set_SpriteSwapTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1224 Offset: 0x3FC1224 VA: 0x3FC1224
	public float get_DistanceBetweenMainSteps() { }

	[CompilerGenerated]
	// RVA: 0x3FC122C Offset: 0x3FC122C VA: 0x3FC122C
	private void set_DistanceBetweenMainSteps(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1234 Offset: 0x3FC1234 VA: 0x3FC1234
	public float get_ContainerMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x3FC123C Offset: 0x3FC123C VA: 0x3FC123C
	private void set_ContainerMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1244 Offset: 0x3FC1244 VA: 0x3FC1244
	public AnimationCurve get_ContainerMoveEase() { }

	[CompilerGenerated]
	// RVA: 0x3FC124C Offset: 0x3FC124C VA: 0x3FC124C
	private void set_ContainerMoveEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1254 Offset: 0x3FC1254 VA: 0x3FC1254
	public BroomStreakBannerMainStep get_MainStepPrefab() { }

	[CompilerGenerated]
	// RVA: 0x3FC125C Offset: 0x3FC125C VA: 0x3FC125C
	private void set_MainStepPrefab(BroomStreakBannerMainStep value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1264 Offset: 0x3FC1264 VA: 0x3FC1264
	public BroomStreakBannerIntermediateStep get_IntermediateStepPrefab() { }

	[CompilerGenerated]
	// RVA: 0x3FC126C Offset: 0x3FC126C VA: 0x3FC126C
	private void set_IntermediateStepPrefab(BroomStreakBannerIntermediateStep value) { }

	[CompilerGenerated]
	// RVA: 0x3FC127C Offset: 0x3FC127C VA: 0x3FC127C
	public Sprite get_MainStepLockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x3FC1284 Offset: 0x3FC1284 VA: 0x3FC1284
	private void set_MainStepLockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x3FC1294 Offset: 0x3FC1294 VA: 0x3FC1294
	public Sprite get_MainStepUnlockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x3FC129C Offset: 0x3FC129C VA: 0x3FC129C
	private void set_MainStepUnlockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x3FC12AC Offset: 0x3FC12AC VA: 0x3FC12AC
	public Sprite get_IntermediateStepLockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x3FC12B4 Offset: 0x3FC12B4 VA: 0x3FC12B4
	private void set_IntermediateStepLockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x3FC12C4 Offset: 0x3FC12C4 VA: 0x3FC12C4
	public Sprite get_IntermediateStepUnlockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x3FC12CC Offset: 0x3FC12CC VA: 0x3FC12CC
	private void set_IntermediateStepUnlockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x3FC12DC Offset: 0x3FC12DC VA: 0x3FC12DC
	public Sprite get_CheckPointStepLockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x3FC12E4 Offset: 0x3FC12E4 VA: 0x3FC12E4
	private void set_CheckPointStepLockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x3FC12F4 Offset: 0x3FC12F4 VA: 0x3FC12F4
	public Sprite get_CheckPointStepUnlockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x3FC12FC Offset: 0x3FC12FC VA: 0x3FC12FC
	private void set_CheckPointStepUnlockedSprite(Sprite value) { }

	// RVA: 0x3FC130C Offset: 0x3FC130C VA: 0x3FC130C
	public Sprite GetChestType(int chestType) { }

	// RVA: 0x3FC13E8 Offset: 0x3FC13E8 VA: 0x3FC13E8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI