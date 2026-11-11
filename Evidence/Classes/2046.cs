public class TowerWinStreakBannerConfig : ScriptableObject // TypeDefIndex: 2046
{
	// Fields
	[SerializeField]
	[CompilerGenerated]
	[Header("Animation")]
	private AnimationCurve <CatMoveCurve>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private float <CatMoveDuration>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CatPrepareOffset>k__BackingField; // 0x24
	[CompilerGenerated]
	[SerializeField]
	private float <CatPrepareDuration>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CatPrepareCurve>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private float <CatTiltRotationZ>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private float <CatStartTiltDuration>k__BackingField; // 0x44
	[CompilerGenerated]
	[SerializeField]
	private float <CatStopTiltDuration>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CatStartTiltCurve>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CatStopTiltCurve>k__BackingField; // 0x58
	[CompilerGenerated]
	[SerializeField]
	private float <CatStopTiltStartTime>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CatPathMiddleOffset>k__BackingField; // 0x64
	[CompilerGenerated]
	[SerializeField]
	private float <CatPathEndOffset>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private float <CatYOffsetInPath>k__BackingField; // 0x74
	[CompilerGenerated]
	[SerializeField]
	private float <IncreaseAnimDelay>k__BackingField; // 0x78
	[CompilerGenerated]
	[SerializeField]
	private float <RevealMainStepTime>k__BackingField; // 0x7C
	[SerializeField]
	[CompilerGenerated]
	private float <TickScaleDuration>k__BackingField; // 0x80
	[CompilerGenerated]
	[SerializeField]
	private float <TickStartTime>k__BackingField; // 0x84
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <TickScaleCurve>k__BackingField; // 0x88
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <TickSpriteEndScale>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <TickSpriteStartScale>k__BackingField; // 0x9C
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <MainStepEnlargeScale>k__BackingField; // 0xA8
	[CompilerGenerated]
	[SerializeField]
	private float <MainStepEnlargeStartTime>k__BackingField; // 0xB4
	[SerializeField]
	[CompilerGenerated]
	private float <MainStepEnlargeDuration>k__BackingField; // 0xB8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <MainStepEnlargeAnimationCurve>k__BackingField; // 0xC0
	[CompilerGenerated]
	[SerializeField]
	private float <MainStepShrinkDuration>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <MainStepShrinkCurve>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private float <ParticlePlayTime>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private float <SpriteSwapTime>k__BackingField; // 0xDC
	[CompilerGenerated]
	[SerializeField]
	private float <DistanceBetweenMainSteps>k__BackingField; // 0xE0
	[SerializeField]
	[CompilerGenerated]
	private float <ContainerMoveDuration>k__BackingField; // 0xE4
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <ContainerMoveEase>k__BackingField; // 0xE8
	[Header("Prefabs")]
	[CompilerGenerated]
	[SerializeField]
	private TowerWinStreakBannerMainStep <MainStepPrefab>k__BackingField; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	private TowerWinStreakBannerIntermediateStep <IntermediateStepPrefab>k__BackingField; // 0xF8
	[SerializeField]
	[Header("Sprites")]
	[CompilerGenerated]
	private Sprite <MainStepLockedSprite>k__BackingField; // 0x100
	[SerializeField]
	[CompilerGenerated]
	private Sprite <MainStepUnlockedSprite>k__BackingField; // 0x108
	[CompilerGenerated]
	[SerializeField]
	private Sprite <IntermediateStepLockedSprite>k__BackingField; // 0x110
	[CompilerGenerated]
	[SerializeField]
	private Sprite <IntermediateStepUnlockedSprite>k__BackingField; // 0x118
	[SerializeField]
	private List<Sprite> _chestSprites; // 0x120

	// Properties
	public AnimationCurve CatMoveCurve { get; set; }
	public float CatMoveDuration { get; set; }
	public Vector3 CatPrepareOffset { get; set; }
	public float CatPrepareDuration { get; set; }
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
	public TowerWinStreakBannerMainStep MainStepPrefab { get; set; }
	public TowerWinStreakBannerIntermediateStep IntermediateStepPrefab { get; set; }
	public Sprite MainStepLockedSprite { get; set; }
	public Sprite MainStepUnlockedSprite { get; set; }
	public Sprite IntermediateStepLockedSprite { get; set; }
	public Sprite IntermediateStepUnlockedSprite { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x359CB48 Offset: 0x359CB48 VA: 0x359CB48
	public AnimationCurve get_CatMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x359CB50 Offset: 0x359CB50 VA: 0x359CB50
	private void set_CatMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x359CB58 Offset: 0x359CB58 VA: 0x359CB58
	public float get_CatMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x359CB60 Offset: 0x359CB60 VA: 0x359CB60
	private void set_CatMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CB68 Offset: 0x359CB68 VA: 0x359CB68
	public Vector3 get_CatPrepareOffset() { }

	[CompilerGenerated]
	// RVA: 0x359CB74 Offset: 0x359CB74 VA: 0x359CB74
	private void set_CatPrepareOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x359CB80 Offset: 0x359CB80 VA: 0x359CB80
	public float get_CatPrepareDuration() { }

	[CompilerGenerated]
	// RVA: 0x359CB88 Offset: 0x359CB88 VA: 0x359CB88
	private void set_CatPrepareDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CB90 Offset: 0x359CB90 VA: 0x359CB90
	public AnimationCurve get_CatPrepareCurve() { }

	[CompilerGenerated]
	// RVA: 0x359CB98 Offset: 0x359CB98 VA: 0x359CB98
	private void set_CatPrepareCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x359CBA0 Offset: 0x359CBA0 VA: 0x359CBA0
	public float get_CatTiltRotationZ() { }

	[CompilerGenerated]
	// RVA: 0x359CBA8 Offset: 0x359CBA8 VA: 0x359CBA8
	private void set_CatTiltRotationZ(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CBB0 Offset: 0x359CBB0 VA: 0x359CBB0
	public float get_CatStartTiltDuration() { }

	[CompilerGenerated]
	// RVA: 0x359CBB8 Offset: 0x359CBB8 VA: 0x359CBB8
	private void set_CatStartTiltDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CBC0 Offset: 0x359CBC0 VA: 0x359CBC0
	public float get_CatStopTiltDuration() { }

	[CompilerGenerated]
	// RVA: 0x359CBC8 Offset: 0x359CBC8 VA: 0x359CBC8
	private void set_CatStopTiltDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CBD0 Offset: 0x359CBD0 VA: 0x359CBD0
	public AnimationCurve get_CatStartTiltCurve() { }

	[CompilerGenerated]
	// RVA: 0x359CBD8 Offset: 0x359CBD8 VA: 0x359CBD8
	private void set_CatStartTiltCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x359CBE0 Offset: 0x359CBE0 VA: 0x359CBE0
	public AnimationCurve get_CatStopTiltCurve() { }

	[CompilerGenerated]
	// RVA: 0x359CBE8 Offset: 0x359CBE8 VA: 0x359CBE8
	private void set_CatStopTiltCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x359CBF0 Offset: 0x359CBF0 VA: 0x359CBF0
	public float get_CatStopTiltStartTime() { }

	[CompilerGenerated]
	// RVA: 0x359CBF8 Offset: 0x359CBF8 VA: 0x359CBF8
	private void set_CatStopTiltStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CC00 Offset: 0x359CC00 VA: 0x359CC00
	public Vector3 get_CatPathMiddleOffset() { }

	[CompilerGenerated]
	// RVA: 0x359CC0C Offset: 0x359CC0C VA: 0x359CC0C
	private void set_CatPathMiddleOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x359CC18 Offset: 0x359CC18 VA: 0x359CC18
	public float get_CatPathEndOffset() { }

	[CompilerGenerated]
	// RVA: 0x359CC20 Offset: 0x359CC20 VA: 0x359CC20
	private void set_CatPathEndOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CC28 Offset: 0x359CC28 VA: 0x359CC28
	public float get_CatYOffsetInPath() { }

	[CompilerGenerated]
	// RVA: 0x359CC30 Offset: 0x359CC30 VA: 0x359CC30
	private void set_CatYOffsetInPath(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CC38 Offset: 0x359CC38 VA: 0x359CC38
	public float get_IncreaseAnimDelay() { }

	[CompilerGenerated]
	// RVA: 0x359CC40 Offset: 0x359CC40 VA: 0x359CC40
	public void set_IncreaseAnimDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CC48 Offset: 0x359CC48 VA: 0x359CC48
	public float get_RevealMainStepTime() { }

	[CompilerGenerated]
	// RVA: 0x359CC50 Offset: 0x359CC50 VA: 0x359CC50
	private void set_RevealMainStepTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CC58 Offset: 0x359CC58 VA: 0x359CC58
	public float get_TickScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x359CC60 Offset: 0x359CC60 VA: 0x359CC60
	private void set_TickScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CC68 Offset: 0x359CC68 VA: 0x359CC68
	public float get_TickStartTime() { }

	[CompilerGenerated]
	// RVA: 0x359CC70 Offset: 0x359CC70 VA: 0x359CC70
	private void set_TickStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CC78 Offset: 0x359CC78 VA: 0x359CC78
	public AnimationCurve get_TickScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x359CC80 Offset: 0x359CC80 VA: 0x359CC80
	private void set_TickScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x359CC88 Offset: 0x359CC88 VA: 0x359CC88
	public Vector3 get_TickSpriteEndScale() { }

	[CompilerGenerated]
	// RVA: 0x359CC94 Offset: 0x359CC94 VA: 0x359CC94
	private void set_TickSpriteEndScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x359CCA0 Offset: 0x359CCA0 VA: 0x359CCA0
	public Vector3 get_TickSpriteStartScale() { }

	[CompilerGenerated]
	// RVA: 0x359CCAC Offset: 0x359CCAC VA: 0x359CCAC
	private void set_TickSpriteStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x359CCB8 Offset: 0x359CCB8 VA: 0x359CCB8
	public Vector3 get_MainStepEnlargeScale() { }

	[CompilerGenerated]
	// RVA: 0x359CCC4 Offset: 0x359CCC4 VA: 0x359CCC4
	private void set_MainStepEnlargeScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x359CCD0 Offset: 0x359CCD0 VA: 0x359CCD0
	public float get_MainStepEnlargeStartTime() { }

	[CompilerGenerated]
	// RVA: 0x359CCD8 Offset: 0x359CCD8 VA: 0x359CCD8
	private void set_MainStepEnlargeStartTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CCE0 Offset: 0x359CCE0 VA: 0x359CCE0
	public float get_MainStepEnlargeDuration() { }

	[CompilerGenerated]
	// RVA: 0x359CCE8 Offset: 0x359CCE8 VA: 0x359CCE8
	private void set_MainStepEnlargeDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CCF0 Offset: 0x359CCF0 VA: 0x359CCF0
	public AnimationCurve get_MainStepEnlargeAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x359CCF8 Offset: 0x359CCF8 VA: 0x359CCF8
	private void set_MainStepEnlargeAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x359CD00 Offset: 0x359CD00 VA: 0x359CD00
	public float get_MainStepShrinkDuration() { }

	[CompilerGenerated]
	// RVA: 0x359CD08 Offset: 0x359CD08 VA: 0x359CD08
	private void set_MainStepShrinkDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CD10 Offset: 0x359CD10 VA: 0x359CD10
	public AnimationCurve get_MainStepShrinkCurve() { }

	[CompilerGenerated]
	// RVA: 0x359CD18 Offset: 0x359CD18 VA: 0x359CD18
	private void set_MainStepShrinkCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x359CD20 Offset: 0x359CD20 VA: 0x359CD20
	public float get_ParticlePlayTime() { }

	[CompilerGenerated]
	// RVA: 0x359CD28 Offset: 0x359CD28 VA: 0x359CD28
	private void set_ParticlePlayTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CD30 Offset: 0x359CD30 VA: 0x359CD30
	public float get_SpriteSwapTime() { }

	[CompilerGenerated]
	// RVA: 0x359CD38 Offset: 0x359CD38 VA: 0x359CD38
	private void set_SpriteSwapTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CD40 Offset: 0x359CD40 VA: 0x359CD40
	public float get_DistanceBetweenMainSteps() { }

	[CompilerGenerated]
	// RVA: 0x359CD48 Offset: 0x359CD48 VA: 0x359CD48
	private void set_DistanceBetweenMainSteps(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CD50 Offset: 0x359CD50 VA: 0x359CD50
	public float get_ContainerMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x359CD58 Offset: 0x359CD58 VA: 0x359CD58
	private void set_ContainerMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x359CD60 Offset: 0x359CD60 VA: 0x359CD60
	public AnimationCurve get_ContainerMoveEase() { }

	[CompilerGenerated]
	// RVA: 0x359CD68 Offset: 0x359CD68 VA: 0x359CD68
	private void set_ContainerMoveEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x359CD70 Offset: 0x359CD70 VA: 0x359CD70
	public TowerWinStreakBannerMainStep get_MainStepPrefab() { }

	[CompilerGenerated]
	// RVA: 0x359CD78 Offset: 0x359CD78 VA: 0x359CD78
	private void set_MainStepPrefab(TowerWinStreakBannerMainStep value) { }

	[CompilerGenerated]
	// RVA: 0x359CD80 Offset: 0x359CD80 VA: 0x359CD80
	public TowerWinStreakBannerIntermediateStep get_IntermediateStepPrefab() { }

	[CompilerGenerated]
	// RVA: 0x359CD88 Offset: 0x359CD88 VA: 0x359CD88
	private void set_IntermediateStepPrefab(TowerWinStreakBannerIntermediateStep value) { }

	[CompilerGenerated]
	// RVA: 0x359CD90 Offset: 0x359CD90 VA: 0x359CD90
	public Sprite get_MainStepLockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x359CD98 Offset: 0x359CD98 VA: 0x359CD98
	private void set_MainStepLockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x359CDA8 Offset: 0x359CDA8 VA: 0x359CDA8
	public Sprite get_MainStepUnlockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x359CDB0 Offset: 0x359CDB0 VA: 0x359CDB0
	private void set_MainStepUnlockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x359CDC0 Offset: 0x359CDC0 VA: 0x359CDC0
	public Sprite get_IntermediateStepLockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x359CDC8 Offset: 0x359CDC8 VA: 0x359CDC8
	private void set_IntermediateStepLockedSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0x359CDD8 Offset: 0x359CDD8 VA: 0x359CDD8
	public Sprite get_IntermediateStepUnlockedSprite() { }

	[CompilerGenerated]
	// RVA: 0x359CDE0 Offset: 0x359CDE0 VA: 0x359CDE0
	private void set_IntermediateStepUnlockedSprite(Sprite value) { }

	// RVA: 0x359CDF0 Offset: 0x359CDF0 VA: 0x359CDF0
	public Sprite GetChestType(int chestType) { }

	// RVA: 0x359CECC Offset: 0x359CECC VA: 0x359CECC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI