public class BulkCurrencyAnimationConfig : ScriptableObject // TypeDefIndex: 5138
{
	// Fields
	[CompilerGenerated]
	[Header("RevealScale")]
	[SerializeField]
	private float <RevealEndScale>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private float <RevealScaleDuration>k__BackingField; // 0x1C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RevealScaleCurve>k__BackingField; // 0x20
	[SerializeField]
	[Header("RewardMove")]
	[CompilerGenerated]
	private float <RewardMoveMinDuration>k__BackingField; // 0x28
	[SerializeField]
	[CompilerGenerated]
	private float <RewardMoveMaxDuration>k__BackingField; // 0x2C
	[SerializeField]
	[CompilerGenerated]
	private float <RewardMoveLengthDurationFactor>k__BackingField; // 0x30
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RewardMoveCurve>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private float <RewardPathAPointXOffsetMultiplier>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private float <RewardPathAPointYOffsetMultiplier>k__BackingField; // 0x44
	[CompilerGenerated]
	[SerializeField]
	private int <BezierResolution>k__BackingField; // 0x48
	[SerializeField]
	[Header("CoinMove")]
	[CompilerGenerated]
	private Vector2 <CoinPathAPointXOffsetMultiplierMinMax>k__BackingField; // 0x4C
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <CoinPathAPointYOffsetMultiplierMinMax>k__BackingField; // 0x54
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <CoinStartPositionRandomOffset>k__BackingField; // 0x5C
	[CompilerGenerated]
	[SerializeField]
	private float <CoinMoveDuration>k__BackingField; // 0x64
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CoinMoveCurve>k__BackingField; // 0x68
	[CompilerGenerated]
	[SerializeField]
	[Header("CoinScaleIn")]
	private Vector3 <CoinEndScale>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private float <CoinScaleInDuration>k__BackingField; // 0x7C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CoinScaleInCurve>k__BackingField; // 0x80
	[CompilerGenerated]
	[Header("DefaultScaleOut")]
	[SerializeField]
	private float <ScaleOutDuration>k__BackingField; // 0x88
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ScaleOutCurve>k__BackingField; // 0x90
	[CompilerGenerated]
	[Header("RewardScaleDown")]
	[SerializeField]
	private float <RewardScaleDownDuration>k__BackingField; // 0x98
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RewardScaleDownCurve>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <RewardScaleDownTarget>k__BackingField; // 0xA8
	[SerializeField]
	[Header("TextScaleOut")]
	[CompilerGenerated]
	private float <TextScaleOutDuration>k__BackingField; // 0xB4
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <TextScaleOutCurve>k__BackingField; // 0xB8
	[CompilerGenerated]
	[SerializeField]
	[Header("RewardMoveSequenced")]
	private float <RewardMoveToTargetConstantDuration>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RewardMoveToTargetCurve>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
	[Header("RewardPunchScale")]
	private Vector3 <RewardPunchScale>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private float <RewardPunchScaleDuration>k__BackingField; // 0xDC
	[CompilerGenerated]
	[SerializeField]
	private int <RewardPunchScaleVibrato>k__BackingField; // 0xE0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RewardPunchScaleCurve>k__BackingField; // 0xE8

	// Properties
	public float RevealEndScale { get; set; }
	public float RevealScaleDuration { get; set; }
	public AnimationCurve RevealScaleCurve { get; set; }
	public float RewardMoveMinDuration { get; set; }
	public float RewardMoveMaxDuration { get; set; }
	public float RewardMoveLengthDurationFactor { get; set; }
	public AnimationCurve RewardMoveCurve { get; set; }
	public float RewardPathAPointXOffsetMultiplier { get; set; }
	public float RewardPathAPointYOffsetMultiplier { get; set; }
	public int BezierResolution { get; set; }
	public Vector2 CoinPathAPointXOffsetMultiplierMinMax { get; set; }
	public Vector2 CoinPathAPointYOffsetMultiplierMinMax { get; set; }
	public Vector2 CoinStartPositionRandomOffset { get; set; }
	public float CoinMoveDuration { get; set; }
	public AnimationCurve CoinMoveCurve { get; set; }
	public Vector3 CoinEndScale { get; set; }
	public float CoinScaleInDuration { get; set; }
	public AnimationCurve CoinScaleInCurve { get; set; }
	public float ScaleOutDuration { get; set; }
	public AnimationCurve ScaleOutCurve { get; set; }
	public float RewardScaleDownDuration { get; set; }
	public AnimationCurve RewardScaleDownCurve { get; set; }
	public Vector3 RewardScaleDownTarget { get; set; }
	public float TextScaleOutDuration { get; set; }
	public AnimationCurve TextScaleOutCurve { get; set; }
	public float RewardMoveToTargetConstantDuration { get; set; }
	public AnimationCurve RewardMoveToTargetCurve { get; set; }
	public Vector3 RewardPunchScale { get; set; }
	public float RewardPunchScaleDuration { get; set; }
	public int RewardPunchScaleVibrato { get; set; }
	public AnimationCurve RewardPunchScaleCurve { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x138023C Offset: 0x138023C VA: 0x138023C
	public float get_RevealEndScale() { }

	[CompilerGenerated]
	// RVA: 0x1380244 Offset: 0x1380244 VA: 0x1380244
	private void set_RevealEndScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x138024C Offset: 0x138024C VA: 0x138024C
	public float get_RevealScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380254 Offset: 0x1380254 VA: 0x1380254
	private void set_RevealScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138025C Offset: 0x138025C VA: 0x138025C
	public AnimationCurve get_RevealScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x1380264 Offset: 0x1380264 VA: 0x1380264
	private void set_RevealScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x138026C Offset: 0x138026C VA: 0x138026C
	public float get_RewardMoveMinDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380274 Offset: 0x1380274 VA: 0x1380274
	private void set_RewardMoveMinDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138027C Offset: 0x138027C VA: 0x138027C
	public float get_RewardMoveMaxDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380284 Offset: 0x1380284 VA: 0x1380284
	private void set_RewardMoveMaxDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138028C Offset: 0x138028C VA: 0x138028C
	public float get_RewardMoveLengthDurationFactor() { }

	[CompilerGenerated]
	// RVA: 0x1380294 Offset: 0x1380294 VA: 0x1380294
	private void set_RewardMoveLengthDurationFactor(float value) { }

	[CompilerGenerated]
	// RVA: 0x138029C Offset: 0x138029C VA: 0x138029C
	public AnimationCurve get_RewardMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x13802A4 Offset: 0x13802A4 VA: 0x13802A4
	private void set_RewardMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x13802AC Offset: 0x13802AC VA: 0x13802AC
	public float get_RewardPathAPointXOffsetMultiplier() { }

	[CompilerGenerated]
	// RVA: 0x13802B4 Offset: 0x13802B4 VA: 0x13802B4
	private void set_RewardPathAPointXOffsetMultiplier(float value) { }

	[CompilerGenerated]
	// RVA: 0x13802BC Offset: 0x13802BC VA: 0x13802BC
	public float get_RewardPathAPointYOffsetMultiplier() { }

	[CompilerGenerated]
	// RVA: 0x13802C4 Offset: 0x13802C4 VA: 0x13802C4
	private void set_RewardPathAPointYOffsetMultiplier(float value) { }

	[CompilerGenerated]
	// RVA: 0x13802CC Offset: 0x13802CC VA: 0x13802CC
	public int get_BezierResolution() { }

	[CompilerGenerated]
	// RVA: 0x13802D4 Offset: 0x13802D4 VA: 0x13802D4
	private void set_BezierResolution(int value) { }

	[CompilerGenerated]
	// RVA: 0x13802DC Offset: 0x13802DC VA: 0x13802DC
	public Vector2 get_CoinPathAPointXOffsetMultiplierMinMax() { }

	[CompilerGenerated]
	// RVA: 0x13802E4 Offset: 0x13802E4 VA: 0x13802E4
	private void set_CoinPathAPointXOffsetMultiplierMinMax(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x13802EC Offset: 0x13802EC VA: 0x13802EC
	public Vector2 get_CoinPathAPointYOffsetMultiplierMinMax() { }

	[CompilerGenerated]
	// RVA: 0x13802F4 Offset: 0x13802F4 VA: 0x13802F4
	private void set_CoinPathAPointYOffsetMultiplierMinMax(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x13802FC Offset: 0x13802FC VA: 0x13802FC
	public Vector2 get_CoinStartPositionRandomOffset() { }

	[CompilerGenerated]
	// RVA: 0x1380304 Offset: 0x1380304 VA: 0x1380304
	private void set_CoinStartPositionRandomOffset(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x138030C Offset: 0x138030C VA: 0x138030C
	public float get_CoinMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380314 Offset: 0x1380314 VA: 0x1380314
	private void set_CoinMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138031C Offset: 0x138031C VA: 0x138031C
	public AnimationCurve get_CoinMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x1380324 Offset: 0x1380324 VA: 0x1380324
	private void set_CoinMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x138032C Offset: 0x138032C VA: 0x138032C
	public Vector3 get_CoinEndScale() { }

	[CompilerGenerated]
	// RVA: 0x1380338 Offset: 0x1380338 VA: 0x1380338
	private void set_CoinEndScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x1380344 Offset: 0x1380344 VA: 0x1380344
	public float get_CoinScaleInDuration() { }

	[CompilerGenerated]
	// RVA: 0x138034C Offset: 0x138034C VA: 0x138034C
	private void set_CoinScaleInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x1380354 Offset: 0x1380354 VA: 0x1380354
	public AnimationCurve get_CoinScaleInCurve() { }

	[CompilerGenerated]
	// RVA: 0x138035C Offset: 0x138035C VA: 0x138035C
	private void set_CoinScaleInCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x1380364 Offset: 0x1380364 VA: 0x1380364
	public float get_ScaleOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x138036C Offset: 0x138036C VA: 0x138036C
	private void set_ScaleOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x1380374 Offset: 0x1380374 VA: 0x1380374
	public AnimationCurve get_ScaleOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x138037C Offset: 0x138037C VA: 0x138037C
	private void set_ScaleOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x1380384 Offset: 0x1380384 VA: 0x1380384
	public float get_RewardScaleDownDuration() { }

	[CompilerGenerated]
	// RVA: 0x138038C Offset: 0x138038C VA: 0x138038C
	private void set_RewardScaleDownDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x1380394 Offset: 0x1380394 VA: 0x1380394
	public AnimationCurve get_RewardScaleDownCurve() { }

	[CompilerGenerated]
	// RVA: 0x138039C Offset: 0x138039C VA: 0x138039C
	private void set_RewardScaleDownCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x13803A4 Offset: 0x13803A4 VA: 0x13803A4
	public Vector3 get_RewardScaleDownTarget() { }

	[CompilerGenerated]
	// RVA: 0x13803B0 Offset: 0x13803B0 VA: 0x13803B0
	private void set_RewardScaleDownTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x13803BC Offset: 0x13803BC VA: 0x13803BC
	public float get_TextScaleOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x13803C4 Offset: 0x13803C4 VA: 0x13803C4
	private void set_TextScaleOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x13803CC Offset: 0x13803CC VA: 0x13803CC
	public AnimationCurve get_TextScaleOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x13803D4 Offset: 0x13803D4 VA: 0x13803D4
	private void set_TextScaleOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x13803DC Offset: 0x13803DC VA: 0x13803DC
	public float get_RewardMoveToTargetConstantDuration() { }

	[CompilerGenerated]
	// RVA: 0x13803E4 Offset: 0x13803E4 VA: 0x13803E4
	private void set_RewardMoveToTargetConstantDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x13803EC Offset: 0x13803EC VA: 0x13803EC
	public AnimationCurve get_RewardMoveToTargetCurve() { }

	[CompilerGenerated]
	// RVA: 0x13803F4 Offset: 0x13803F4 VA: 0x13803F4
	private void set_RewardMoveToTargetCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x13803FC Offset: 0x13803FC VA: 0x13803FC
	public Vector3 get_RewardPunchScale() { }

	[CompilerGenerated]
	// RVA: 0x1380408 Offset: 0x1380408 VA: 0x1380408
	private void set_RewardPunchScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x1380414 Offset: 0x1380414 VA: 0x1380414
	public float get_RewardPunchScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x138041C Offset: 0x138041C VA: 0x138041C
	private void set_RewardPunchScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x1380424 Offset: 0x1380424 VA: 0x1380424
	public int get_RewardPunchScaleVibrato() { }

	[CompilerGenerated]
	// RVA: 0x138042C Offset: 0x138042C VA: 0x138042C
	private void set_RewardPunchScaleVibrato(int value) { }

	[CompilerGenerated]
	// RVA: 0x1380434 Offset: 0x1380434 VA: 0x1380434
	public AnimationCurve get_RewardPunchScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x138043C Offset: 0x138043C VA: 0x138043C
	private void set_RewardPunchScaleCurve(AnimationCurve value) { }

	// RVA: 0x1380444 Offset: 0x1380444 VA: 0x1380444
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI
[CreateAssetMenu(fileName = "BulkRewardAnimationConfig", menuName = "Configs/BulkRewardAnimationConfig")]