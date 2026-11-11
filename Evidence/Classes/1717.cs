public class DuckHouseAnimationConfig : ScriptableObject // TypeDefIndex: 1717
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private float <DuckRevealDuration>k__BackingField; // 0x18
	[Header("Cover Animations")]
	[CompilerGenerated]
	[SerializeField]
	private float <CoverOpenAnimTime>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private AnimationClip <CoverOpenClip>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private float <CoverCloseAnimTime>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private AnimationClip <CoverCloseClip>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private float <OpenCoverItemTime>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private float <CloseCoverItemTime>k__BackingField; // 0x3C
	[SerializeField]
	[CompilerGenerated]
	private AnimationClip <CoverCloseInstantClip>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private float <UpdateRemainingCountTime>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private float <UpdateRemainingCountTimeForComplete>k__BackingField; // 0x4C
	[CompilerGenerated]
	[Header("Fill Light Animation")]
	[SerializeField]
	private float <FillLightsAnimTime>k__BackingField; // 0x50
	[CompilerGenerated]
	[SerializeField]
	private AnimationClip[] <FillLightClips>k__BackingField; // 0x58
	[CompilerGenerated]
	[Header("Shake Animation")]
	[SerializeField]
	private float <CoveredItemShakeTime>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private AnimationClip[] <ShakeClips>k__BackingField; // 0x68
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CoverItemInitialScale>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CoverItemInitialPosition>k__BackingField; // 0x7C
	[CompilerGenerated]
	[Header("Punch Scale Animation")]
	[SerializeField]
	private float <PunchScaleTime>k__BackingField; // 0x88
	[CompilerGenerated]
	[SerializeField]
	private int <PunchScaleVibrato>k__BackingField; // 0x8C
	[SerializeField]
	[CompilerGenerated]
	private float <PunchScaleElasticity>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <PunchScaleValue>k__BackingField; // 0x94
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <PunchScaleCurve>k__BackingField; // 0xA0
	[Header("Bottle Reveal Animations")]
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <BottleStartScale>k__BackingField; // 0xA8
	[SerializeField]
	[CompilerGenerated]
	private float <BottleScaleDuration>k__BackingField; // 0xB4
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BottleScaleCurve>k__BackingField; // 0xB8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <BottlePunchRotationTarget>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private float <BottlePunchRotationDuration>k__BackingField; // 0xCC
	[CompilerGenerated]
	[SerializeField]
	private int <BottlePunchRotationVibrato>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private float <BottleWaterShakeDelay>k__BackingField; // 0xD4
	[CompilerGenerated]
	[SerializeField]
	private float <BottleYMoveTarget>k__BackingField; // 0xD8
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <BottleMoveYCurve>k__BackingField; // 0xE0
	[CompilerGenerated]
	[SerializeField]
	private float <BottleYMoveDuration>k__BackingField; // 0xE8
	[SerializeField]
	[CompilerGenerated]
	private float <RandomOffsetTimeBetweenBottles>k__BackingField; // 0xEC
	[SerializeField]
	[CompilerGenerated]
	private List<DuckHouseConfigForSize> <DuckHouseConfigs>k__BackingField; // 0xF0

	// Properties
	public float DuckRevealDuration { get; set; }
	public float CoverOpenAnimTime { get; set; }
	public AnimationClip CoverOpenClip { get; set; }
	public float CoverCloseAnimTime { get; set; }
	public AnimationClip CoverCloseClip { get; set; }
	public float OpenCoverItemTime { get; set; }
	public float CloseCoverItemTime { get; set; }
	public AnimationClip CoverCloseInstantClip { get; set; }
	public float UpdateRemainingCountTime { get; set; }
	public float UpdateRemainingCountTimeForComplete { get; set; }
	public float FillLightsAnimTime { get; set; }
	public AnimationClip[] FillLightClips { get; set; }
	public float CoveredItemShakeTime { get; set; }
	public AnimationClip[] ShakeClips { get; set; }
	public Vector3 CoverItemInitialScale { get; set; }
	public Vector3 CoverItemInitialPosition { get; set; }
	public float PunchScaleTime { get; set; }
	public int PunchScaleVibrato { get; set; }
	public float PunchScaleElasticity { get; set; }
	public Vector3 PunchScaleValue { get; set; }
	public AnimationCurve PunchScaleCurve { get; set; }
	public Vector3 BottleStartScale { get; set; }
	public float BottleScaleDuration { get; set; }
	public AnimationCurve BottleScaleCurve { get; set; }
	public Vector3 BottlePunchRotationTarget { get; set; }
	public float BottlePunchRotationDuration { get; set; }
	public int BottlePunchRotationVibrato { get; set; }
	public float BottleWaterShakeDelay { get; set; }
	public float BottleYMoveTarget { get; set; }
	public AnimationCurve BottleMoveYCurve { get; set; }
	public float BottleYMoveDuration { get; set; }
	public float RandomOffsetTimeBetweenBottles { get; set; }
	public List<DuckHouseConfigForSize> DuckHouseConfigs { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2756374 Offset: 0x2756374 VA: 0x2756374
	public float get_DuckRevealDuration() { }

	[CompilerGenerated]
	// RVA: 0x275637C Offset: 0x275637C VA: 0x275637C
	private void set_DuckRevealDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756384 Offset: 0x2756384 VA: 0x2756384
	public float get_CoverOpenAnimTime() { }

	[CompilerGenerated]
	// RVA: 0x275638C Offset: 0x275638C VA: 0x275638C
	private void set_CoverOpenAnimTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756394 Offset: 0x2756394 VA: 0x2756394
	public AnimationClip get_CoverOpenClip() { }

	[CompilerGenerated]
	// RVA: 0x275639C Offset: 0x275639C VA: 0x275639C
	private void set_CoverOpenClip(AnimationClip value) { }

	[CompilerGenerated]
	// RVA: 0x27563A4 Offset: 0x27563A4 VA: 0x27563A4
	public float get_CoverCloseAnimTime() { }

	[CompilerGenerated]
	// RVA: 0x27563AC Offset: 0x27563AC VA: 0x27563AC
	private void set_CoverCloseAnimTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27563B4 Offset: 0x27563B4 VA: 0x27563B4
	public AnimationClip get_CoverCloseClip() { }

	[CompilerGenerated]
	// RVA: 0x27563BC Offset: 0x27563BC VA: 0x27563BC
	private void set_CoverCloseClip(AnimationClip value) { }

	[CompilerGenerated]
	// RVA: 0x27563C4 Offset: 0x27563C4 VA: 0x27563C4
	public float get_OpenCoverItemTime() { }

	[CompilerGenerated]
	// RVA: 0x27563CC Offset: 0x27563CC VA: 0x27563CC
	private void set_OpenCoverItemTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27563D4 Offset: 0x27563D4 VA: 0x27563D4
	public float get_CloseCoverItemTime() { }

	[CompilerGenerated]
	// RVA: 0x27563DC Offset: 0x27563DC VA: 0x27563DC
	private void set_CloseCoverItemTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x27563E4 Offset: 0x27563E4 VA: 0x27563E4
	public AnimationClip get_CoverCloseInstantClip() { }

	[CompilerGenerated]
	// RVA: 0x27563EC Offset: 0x27563EC VA: 0x27563EC
	private void set_CoverCloseInstantClip(AnimationClip value) { }

	[CompilerGenerated]
	// RVA: 0x27563F4 Offset: 0x27563F4 VA: 0x27563F4
	public float get_UpdateRemainingCountTime() { }

	[CompilerGenerated]
	// RVA: 0x27563FC Offset: 0x27563FC VA: 0x27563FC
	private void set_UpdateRemainingCountTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756404 Offset: 0x2756404 VA: 0x2756404
	public float get_UpdateRemainingCountTimeForComplete() { }

	[CompilerGenerated]
	// RVA: 0x275640C Offset: 0x275640C VA: 0x275640C
	private void set_UpdateRemainingCountTimeForComplete(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756414 Offset: 0x2756414 VA: 0x2756414
	public float get_FillLightsAnimTime() { }

	[CompilerGenerated]
	// RVA: 0x275641C Offset: 0x275641C VA: 0x275641C
	private void set_FillLightsAnimTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756424 Offset: 0x2756424 VA: 0x2756424
	public AnimationClip[] get_FillLightClips() { }

	[CompilerGenerated]
	// RVA: 0x275642C Offset: 0x275642C VA: 0x275642C
	private void set_FillLightClips(AnimationClip[] value) { }

	[CompilerGenerated]
	// RVA: 0x2756434 Offset: 0x2756434 VA: 0x2756434
	public float get_CoveredItemShakeTime() { }

	[CompilerGenerated]
	// RVA: 0x275643C Offset: 0x275643C VA: 0x275643C
	private void set_CoveredItemShakeTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756444 Offset: 0x2756444 VA: 0x2756444
	public AnimationClip[] get_ShakeClips() { }

	[CompilerGenerated]
	// RVA: 0x275644C Offset: 0x275644C VA: 0x275644C
	private void set_ShakeClips(AnimationClip[] value) { }

	[CompilerGenerated]
	// RVA: 0x2756454 Offset: 0x2756454 VA: 0x2756454
	public Vector3 get_CoverItemInitialScale() { }

	[CompilerGenerated]
	// RVA: 0x2756460 Offset: 0x2756460 VA: 0x2756460
	private void set_CoverItemInitialScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x275646C Offset: 0x275646C VA: 0x275646C
	public Vector3 get_CoverItemInitialPosition() { }

	[CompilerGenerated]
	// RVA: 0x2756478 Offset: 0x2756478 VA: 0x2756478
	private void set_CoverItemInitialPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2756484 Offset: 0x2756484 VA: 0x2756484
	public float get_PunchScaleTime() { }

	[CompilerGenerated]
	// RVA: 0x275648C Offset: 0x275648C VA: 0x275648C
	private void set_PunchScaleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756494 Offset: 0x2756494 VA: 0x2756494
	public int get_PunchScaleVibrato() { }

	[CompilerGenerated]
	// RVA: 0x275649C Offset: 0x275649C VA: 0x275649C
	private void set_PunchScaleVibrato(int value) { }

	[CompilerGenerated]
	// RVA: 0x27564A4 Offset: 0x27564A4 VA: 0x27564A4
	public float get_PunchScaleElasticity() { }

	[CompilerGenerated]
	// RVA: 0x27564AC Offset: 0x27564AC VA: 0x27564AC
	private void set_PunchScaleElasticity(float value) { }

	[CompilerGenerated]
	// RVA: 0x27564B4 Offset: 0x27564B4 VA: 0x27564B4
	public Vector3 get_PunchScaleValue() { }

	[CompilerGenerated]
	// RVA: 0x27564C0 Offset: 0x27564C0 VA: 0x27564C0
	private void set_PunchScaleValue(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x27564CC Offset: 0x27564CC VA: 0x27564CC
	public AnimationCurve get_PunchScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x27564D4 Offset: 0x27564D4 VA: 0x27564D4
	private void set_PunchScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x27564DC Offset: 0x27564DC VA: 0x27564DC
	public Vector3 get_BottleStartScale() { }

	[CompilerGenerated]
	// RVA: 0x27564E8 Offset: 0x27564E8 VA: 0x27564E8
	private void set_BottleStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x27564F4 Offset: 0x27564F4 VA: 0x27564F4
	public float get_BottleScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x27564FC Offset: 0x27564FC VA: 0x27564FC
	private void set_BottleScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2756504 Offset: 0x2756504 VA: 0x2756504
	public AnimationCurve get_BottleScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x275650C Offset: 0x275650C VA: 0x275650C
	private void set_BottleScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2756514 Offset: 0x2756514 VA: 0x2756514
	public Vector3 get_BottlePunchRotationTarget() { }

	[CompilerGenerated]
	// RVA: 0x2756520 Offset: 0x2756520 VA: 0x2756520
	private void set_BottlePunchRotationTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x275652C Offset: 0x275652C VA: 0x275652C
	public float get_BottlePunchRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2756534 Offset: 0x2756534 VA: 0x2756534
	private void set_BottlePunchRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x275653C Offset: 0x275653C VA: 0x275653C
	public int get_BottlePunchRotationVibrato() { }

	[CompilerGenerated]
	// RVA: 0x2756544 Offset: 0x2756544 VA: 0x2756544
	private void set_BottlePunchRotationVibrato(int value) { }

	[CompilerGenerated]
	// RVA: 0x275654C Offset: 0x275654C VA: 0x275654C
	public float get_BottleWaterShakeDelay() { }

	[CompilerGenerated]
	// RVA: 0x2756554 Offset: 0x2756554 VA: 0x2756554
	private void set_BottleWaterShakeDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x275655C Offset: 0x275655C VA: 0x275655C
	public float get_BottleYMoveTarget() { }

	[CompilerGenerated]
	// RVA: 0x2756564 Offset: 0x2756564 VA: 0x2756564
	public void set_BottleYMoveTarget(float value) { }

	[CompilerGenerated]
	// RVA: 0x275656C Offset: 0x275656C VA: 0x275656C
	public AnimationCurve get_BottleMoveYCurve() { }

	[CompilerGenerated]
	// RVA: 0x2756574 Offset: 0x2756574 VA: 0x2756574
	private void set_BottleMoveYCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x275657C Offset: 0x275657C VA: 0x275657C
	public float get_BottleYMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x2756584 Offset: 0x2756584 VA: 0x2756584
	public void set_BottleYMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x275658C Offset: 0x275658C VA: 0x275658C
	public float get_RandomOffsetTimeBetweenBottles() { }

	[CompilerGenerated]
	// RVA: 0x2756594 Offset: 0x2756594 VA: 0x2756594
	private void set_RandomOffsetTimeBetweenBottles(float value) { }

	[CompilerGenerated]
	// RVA: 0x275659C Offset: 0x275659C VA: 0x275659C
	public List<DuckHouseConfigForSize> get_DuckHouseConfigs() { }

	[CompilerGenerated]
	// RVA: 0x27565A4 Offset: 0x27565A4 VA: 0x27565A4
	public void set_DuckHouseConfigs(List<DuckHouseConfigForSize> value) { }

	// RVA: 0x27565AC Offset: 0x27565AC VA: 0x27565AC
	public string GetClipNameBySize(int size) { }

	// RVA: 0x2756640 Offset: 0x2756640 VA: 0x2756640
	public DuckHouseConfigForSize GetDuckHouseConfigBySize(int size) { }

	// RVA: 0x27566BC Offset: 0x27566BC VA: 0x27566BC
	public string GetCoverItemClipNameByType(DuckType duckType) { }

	// RVA: 0x2756710 Offset: 0x2756710 VA: 0x2756710
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck
[Serializable]