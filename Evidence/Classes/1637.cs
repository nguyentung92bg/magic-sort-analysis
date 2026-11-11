public class SafeAnimationConfig : ScriptableObject // TypeDefIndex: 1637
{
	// Fields
	public float LockProgressRotateDuration; // 0x18
	public AnimationCurve LockProgressRotateCurve; // 0x20
	public AnimationCurve LockProgressDoubleRotateCurve; // 0x28
	public AnimationCurve LockCountRotateCurve; // 0x30
	public float LockProgressAnimationRotationAmount; // 0x38
	public float LockProgressStartDelay; // 0x3C
	public float LockProgressCountChangeTime; // 0x40
	public float LockCounterFinishedTime; // 0x44
	public float LockCounterFinishedOverTime; // 0x48
	public float LockCounterFinishedOverBackTime; // 0x4C
	public float LockCountChangeOffset; // 0x50
	[SerializeField]
	public float ShadowFadeDuration; // 0x54
	[SerializeField]
	public float ShadowFadeTime; // 0x58
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <LockDoubleMoveRotateCurve>k__BackingField; // 0x60
	[SerializeField]
	[CompilerGenerated]
	private float <BottleScaleDuration>k__BackingField; // 0x68
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <BottleScaleCurve>k__BackingField; // 0x70
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <BottleStartScale>k__BackingField; // 0x78
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <BottlePunchRotationTarget>k__BackingField; // 0x84
	[CompilerGenerated]
	[SerializeField]
	private float <BottlePunchRotationDuration>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private int <BottlePunchRotationVibrato>k__BackingField; // 0x94
	[SerializeField]
	[CompilerGenerated]
	private float <RandomOffsetTimeBetweenBottles>k__BackingField; // 0x98
	[CompilerGenerated]
	[SerializeField]
	private float <BottleWaterShakeDelay>k__BackingField; // 0x9C
	[CompilerGenerated]
	[SerializeField]
	private float <BottleYMoveTarget>k__BackingField; // 0xA0
	[SerializeField]
	[CompilerGenerated]
	private float <BottleYMoveDuration>k__BackingField; // 0xA4
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BottleMoveYCurve>k__BackingField; // 0xA8
	[SerializeField]
	[CompilerGenerated]
	private float <SafeHideTime>k__BackingField; // 0xB0
	[SerializeField]
	[CompilerGenerated]
	private List<SafeConfigsForSize> <SafeConfigs>k__BackingField; // 0xB8
	[SerializeField]
	[CompilerGenerated]
	[Header("Complete Animation")]
	private float <RotationCompleteClipDuration>k__BackingField; // 0xC0
	[CompilerGenerated]
	[SerializeField]
	private float <CompleteT0>k__BackingField; // 0xC4
	[SerializeField]
	[CompilerGenerated]
	private float <CompleteT1>k__BackingField; // 0xC8
	[SerializeField]
	[CompilerGenerated]
	private float <CompleteT2>k__BackingField; // 0xCC
	[SerializeField]
	[CompilerGenerated]
	private float <CompleteT3>k__BackingField; // 0xD0
	[SerializeField]
	[CompilerGenerated]
	private float <LockProgressRotateDurationWithDelay>k__BackingField; // 0xD4
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <LockProgressCountCurveComplete>k__BackingField; // 0xD8
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <LockDefaultProgressCountCurveComplete>k__BackingField; // 0xE0
	[SerializeField]
	public List<float> SpeedValues; // 0xE8
	private List<float> _remainingSpeedValues; // 0xF0

	// Properties
	public AnimationCurve LockDoubleMoveRotateCurve { get; set; }
	public float BottleScaleDuration { get; set; }
	public AnimationCurve BottleScaleCurve { get; set; }
	public Vector3 BottleStartScale { get; set; }
	public Vector3 BottlePunchRotationTarget { get; set; }
	public float BottlePunchRotationDuration { get; set; }
	public int BottlePunchRotationVibrato { get; set; }
	public float RandomOffsetTimeBetweenBottles { get; set; }
	public float BottleWaterShakeDelay { get; set; }
	public float BottleYMoveTarget { get; set; }
	public float BottleYMoveDuration { get; set; }
	public AnimationCurve BottleMoveYCurve { get; set; }
	public float SafeHideTime { get; set; }
	public List<SafeConfigsForSize> SafeConfigs { get; set; }
	public float RotationCompleteClipDuration { get; set; }
	public float CompleteT0 { get; set; }
	public float CompleteT1 { get; set; }
	public float CompleteT2 { get; set; }
	public float CompleteT3 { get; set; }
	public float LockProgressRotateDurationWithDelay { get; set; }
	public AnimationCurve LockProgressCountCurveComplete { get; set; }
	public AnimationCurve LockDefaultProgressCountCurveComplete { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x26135B4 Offset: 0x26135B4 VA: 0x26135B4
	public AnimationCurve get_LockDoubleMoveRotateCurve() { }

	[CompilerGenerated]
	// RVA: 0x26135BC Offset: 0x26135BC VA: 0x26135BC
	private void set_LockDoubleMoveRotateCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x26135C4 Offset: 0x26135C4 VA: 0x26135C4
	public float get_BottleScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x26135CC Offset: 0x26135CC VA: 0x26135CC
	private void set_BottleScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x26135D4 Offset: 0x26135D4 VA: 0x26135D4
	public AnimationCurve get_BottleScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x26135DC Offset: 0x26135DC VA: 0x26135DC
	private void set_BottleScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x26135E4 Offset: 0x26135E4 VA: 0x26135E4
	public Vector3 get_BottleStartScale() { }

	[CompilerGenerated]
	// RVA: 0x26135F0 Offset: 0x26135F0 VA: 0x26135F0
	private void set_BottleStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x26135FC Offset: 0x26135FC VA: 0x26135FC
	public Vector3 get_BottlePunchRotationTarget() { }

	[CompilerGenerated]
	// RVA: 0x2613608 Offset: 0x2613608 VA: 0x2613608
	private void set_BottlePunchRotationTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2613614 Offset: 0x2613614 VA: 0x2613614
	public float get_BottlePunchRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x261361C Offset: 0x261361C VA: 0x261361C
	private void set_BottlePunchRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2613624 Offset: 0x2613624 VA: 0x2613624
	public int get_BottlePunchRotationVibrato() { }

	[CompilerGenerated]
	// RVA: 0x261362C Offset: 0x261362C VA: 0x261362C
	private void set_BottlePunchRotationVibrato(int value) { }

	[CompilerGenerated]
	// RVA: 0x2613634 Offset: 0x2613634 VA: 0x2613634
	public float get_RandomOffsetTimeBetweenBottles() { }

	[CompilerGenerated]
	// RVA: 0x261363C Offset: 0x261363C VA: 0x261363C
	private void set_RandomOffsetTimeBetweenBottles(float value) { }

	[CompilerGenerated]
	// RVA: 0x2613644 Offset: 0x2613644 VA: 0x2613644
	public float get_BottleWaterShakeDelay() { }

	[CompilerGenerated]
	// RVA: 0x261364C Offset: 0x261364C VA: 0x261364C
	private void set_BottleWaterShakeDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2613654 Offset: 0x2613654 VA: 0x2613654
	public float get_BottleYMoveTarget() { }

	[CompilerGenerated]
	// RVA: 0x261365C Offset: 0x261365C VA: 0x261365C
	public void set_BottleYMoveTarget(float value) { }

	[CompilerGenerated]
	// RVA: 0x2613664 Offset: 0x2613664 VA: 0x2613664
	public float get_BottleYMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x261366C Offset: 0x261366C VA: 0x261366C
	public void set_BottleYMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2613674 Offset: 0x2613674 VA: 0x2613674
	public AnimationCurve get_BottleMoveYCurve() { }

	[CompilerGenerated]
	// RVA: 0x261367C Offset: 0x261367C VA: 0x261367C
	public void set_BottleMoveYCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2613684 Offset: 0x2613684 VA: 0x2613684
	public float get_SafeHideTime() { }

	[CompilerGenerated]
	// RVA: 0x261368C Offset: 0x261368C VA: 0x261368C
	public void set_SafeHideTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2613694 Offset: 0x2613694 VA: 0x2613694
	public List<SafeConfigsForSize> get_SafeConfigs() { }

	[CompilerGenerated]
	// RVA: 0x261369C Offset: 0x261369C VA: 0x261369C
	public void set_SafeConfigs(List<SafeConfigsForSize> value) { }

	[CompilerGenerated]
	// RVA: 0x26136A4 Offset: 0x26136A4 VA: 0x26136A4
	public float get_RotationCompleteClipDuration() { }

	[CompilerGenerated]
	// RVA: 0x26136AC Offset: 0x26136AC VA: 0x26136AC
	public void set_RotationCompleteClipDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x26136B4 Offset: 0x26136B4 VA: 0x26136B4
	public float get_CompleteT0() { }

	[CompilerGenerated]
	// RVA: 0x26136BC Offset: 0x26136BC VA: 0x26136BC
	public void set_CompleteT0(float value) { }

	[CompilerGenerated]
	// RVA: 0x26136C4 Offset: 0x26136C4 VA: 0x26136C4
	public float get_CompleteT1() { }

	[CompilerGenerated]
	// RVA: 0x26136CC Offset: 0x26136CC VA: 0x26136CC
	public void set_CompleteT1(float value) { }

	[CompilerGenerated]
	// RVA: 0x26136D4 Offset: 0x26136D4 VA: 0x26136D4
	public float get_CompleteT2() { }

	[CompilerGenerated]
	// RVA: 0x26136DC Offset: 0x26136DC VA: 0x26136DC
	public void set_CompleteT2(float value) { }

	[CompilerGenerated]
	// RVA: 0x26136E4 Offset: 0x26136E4 VA: 0x26136E4
	public float get_CompleteT3() { }

	[CompilerGenerated]
	// RVA: 0x26136EC Offset: 0x26136EC VA: 0x26136EC
	public void set_CompleteT3(float value) { }

	[CompilerGenerated]
	// RVA: 0x26136F4 Offset: 0x26136F4 VA: 0x26136F4
	public float get_LockProgressRotateDurationWithDelay() { }

	[CompilerGenerated]
	// RVA: 0x26136FC Offset: 0x26136FC VA: 0x26136FC
	private void set_LockProgressRotateDurationWithDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2613704 Offset: 0x2613704 VA: 0x2613704
	public AnimationCurve get_LockProgressCountCurveComplete() { }

	[CompilerGenerated]
	// RVA: 0x261370C Offset: 0x261370C VA: 0x261370C
	private void set_LockProgressCountCurveComplete(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2613714 Offset: 0x2613714 VA: 0x2613714
	public AnimationCurve get_LockDefaultProgressCountCurveComplete() { }

	[CompilerGenerated]
	// RVA: 0x261371C Offset: 0x261371C VA: 0x261371C
	private void set_LockDefaultProgressCountCurveComplete(AnimationCurve value) { }

	// RVA: 0x2613724 Offset: 0x2613724 VA: 0x2613724
	public float GetRandomSpeedValue() { }

	// RVA: 0x2613874 Offset: 0x2613874 VA: 0x2613874
	public void ResetSpeedValues() { }

	// RVA: 0x26138C4 Offset: 0x26138C4 VA: 0x26138C4
	public SafeConfigsForSize GetSafeConfigsForSize(int size) { }

	// RVA: 0x2613940 Offset: 0x2613940 VA: 0x2613940
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe
[Serializable]