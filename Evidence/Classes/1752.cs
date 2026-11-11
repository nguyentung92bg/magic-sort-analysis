public class CarpetAnimationConfig : ScriptableObject // TypeDefIndex: 1752
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private List<float> <CarpetRollXSizes>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private List<Vector3> <RollXPositions>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private float <CarpetRollScaleDuration>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CarpetRollScaleCurve>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private float <CarpetMoveDuration>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private float <CarpetLastStepMoveDuration>k__BackingField; // 0x3C
	[SerializeField]
	[CompilerGenerated]
	private float <SpiralLastStepDuration>k__BackingField; // 0x40
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CarpetMoveCurve>k__BackingField; // 0x48
	[SerializeField]
	[CompilerGenerated]
	private float <CarpetMoveYTarget>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CarpetMoveYCurve>k__BackingField; // 0x58
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CarpetLastStepMoveCurve>k__BackingField; // 0x60
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <CarpetRollLastStepOffset>k__BackingField; // 0x68
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <MaskLastStepOffset>k__BackingField; // 0x74
	[SerializeField]
	[CompilerGenerated]
	private List<float> <MaskXScalesForSize>k__BackingField; // 0x80
	[SerializeField]
	[CompilerGenerated]
	private float <MaskScaleDuration>k__BackingField; // 0x88
	[CompilerGenerated]
	[SerializeField]
	private float <MaskLastStepScaleDuration>k__BackingField; // 0x8C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <MaskScaleCurve>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <MetalTargetScale>k__BackingField; // 0x98
	[CompilerGenerated]
	[SerializeField]
	private float <MetalScaleDuration>k__BackingField; // 0xA4
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <MetalScaleCurve>k__BackingField; // 0xA8
	[SerializeField]
	[CompilerGenerated]
	private float <NonEvenBottleCountPivotOffset>k__BackingField; // 0xB0
	[CompilerGenerated]
	[SerializeField]
	private List<float> <PivotPointsForCarpetSize>k__BackingField; // 0xB8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SpiralRotationCurve>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <EndSpiralRotationCurve>k__BackingField; // 0xC8
	[SerializeField]
	[CompilerGenerated]
	private int <Revolution>k__BackingField; // 0xD0
	[SerializeField]
	[CompilerGenerated]
	private int <EndRevolution>k__BackingField; // 0xD4
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <SliceScaleTarget>k__BackingField; // 0xD8
	[SerializeField]
	[CompilerGenerated]
	private float <SliceScaleDuration>k__BackingField; // 0xE4
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SliceScaleCurve>k__BackingField; // 0xE8
	[SerializeField]
	[CompilerGenerated]
	private float <LastSliceScaleDuration>k__BackingField; // 0xF0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <LastSliceScaleCurve>k__BackingField; // 0xF8
	[SerializeField]
	[CompilerGenerated]
	private float <FadeOutDuration>k__BackingField; // 0x100
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <FadeOutCurve>k__BackingField; // 0x108
	[SerializeField]
	[CompilerGenerated]
	private float <FadeDelay>k__BackingField; // 0x110
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <RollScaleOutTarget>k__BackingField; // 0x114
	[SerializeField]
	[CompilerGenerated]
	private float <RollScaleOutDuration>k__BackingField; // 0x120
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <RollScaleOutCurve>k__BackingField; // 0x128
	[CompilerGenerated]
	[SerializeField]
	private float <RollScaleOutDelay>k__BackingField; // 0x130
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <RollScaleInTarget>k__BackingField; // 0x134
	[CompilerGenerated]
	[SerializeField]
	private float <RollScaleInDuration>k__BackingField; // 0x140
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RollScaleInCurve>k__BackingField; // 0x148
	[CompilerGenerated]
	[SerializeField]
	private float <CarpetMoveUpPosition>k__BackingField; // 0x150
	[CompilerGenerated]
	[SerializeField]
	private float <CarpetMoveUpDuration>k__BackingField; // 0x154
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CarpetMoveUpCurve>k__BackingField; // 0x158
	[CompilerGenerated]
	[SerializeField]
	private float <CarpetFadeOutDuration>k__BackingField; // 0x160
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CarpetFadeOutCurve>k__BackingField; // 0x168
	[SerializeField]
	[CompilerGenerated]
	private float <CarpetRollSfxDelay>k__BackingField; // 0x170
	[SerializeField]
	[CompilerGenerated]
	private float <CarpetEndSfxDelay>k__BackingField; // 0x174
	[CompilerGenerated]
	[SerializeField]
	[Header("Shadow")]
	private Vector3 <CarpetRollShadowMiddleSliceSize>k__BackingField; // 0x178
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CarpetRollShadowEndSliceSize>k__BackingField; // 0x184
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <CarpetRollShadowMiddleSliceYPosition>k__BackingField; // 0x190
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <CarpetRollShadowEndSliceYPosition>k__BackingField; // 0x19C
	[Header("CarpetBottle")]
	[SerializeField]
	[CompilerGenerated]
	private float <BottleScaleDuration>k__BackingField; // 0x1A8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BottleScaleCurve>k__BackingField; // 0x1B0
	[CompilerGenerated]
	[SerializeField]
	private float <ShakeRotationDuration>k__BackingField; // 0x1B8
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <ShakeRotationTarget>k__BackingField; // 0x1BC
	[CompilerGenerated]
	[SerializeField]
	private int <ShakeRotationVibrato>k__BackingField; // 0x1C8
	[CompilerGenerated]
	[SerializeField]
	private float <BottleMoveTargetY>k__BackingField; // 0x1CC
	[SerializeField]
	[CompilerGenerated]
	private float <BottleMoveDuration>k__BackingField; // 0x1D0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <BottleMoveCurve>k__BackingField; // 0x1D8
	[SerializeField]
	[CompilerGenerated]
	private float <BottleAnimDelay>k__BackingField; // 0x1E0
	[SerializeField]
	[CompilerGenerated]
	private float <LastSliceBottleAnimDelay>k__BackingField; // 0x1E4
	[SerializeField]
	[CompilerGenerated]
	private float <CarpetAdditionalOffset>k__BackingField; // 0x1E8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <EndSliceScale>k__BackingField; // 0x1EC
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <EndSlicePosition>k__BackingField; // 0x1F8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <MiddleSlicePosition>k__BackingField; // 0x204

	// Properties
	public List<float> CarpetRollXSizes { get; set; }
	public List<Vector3> RollXPositions { get; set; }
	public float CarpetRollScaleDuration { get; set; }
	public AnimationCurve CarpetRollScaleCurve { get; set; }
	public float CarpetMoveDuration { get; set; }
	public float CarpetLastStepMoveDuration { get; set; }
	public float SpiralLastStepDuration { get; set; }
	public AnimationCurve CarpetMoveCurve { get; set; }
	public float CarpetMoveYTarget { get; set; }
	public AnimationCurve CarpetMoveYCurve { get; set; }
	public AnimationCurve CarpetLastStepMoveCurve { get; set; }
	public Vector3 CarpetRollLastStepOffset { get; set; }
	public Vector3 MaskLastStepOffset { get; set; }
	public List<float> MaskXScalesForSize { get; set; }
	public float MaskScaleDuration { get; set; }
	public float MaskLastStepScaleDuration { get; set; }
	public AnimationCurve MaskScaleCurve { get; set; }
	public Vector3 MetalTargetScale { get; set; }
	public float MetalScaleDuration { get; set; }
	public AnimationCurve MetalScaleCurve { get; set; }
	public float NonEvenBottleCountPivotOffset { get; set; }
	public List<float> PivotPointsForCarpetSize { get; set; }
	public AnimationCurve SpiralRotationCurve { get; set; }
	public AnimationCurve EndSpiralRotationCurve { get; set; }
	public int Revolution { get; set; }
	public int EndRevolution { get; set; }
	public Vector3 SliceScaleTarget { get; set; }
	public float SliceScaleDuration { get; set; }
	public AnimationCurve SliceScaleCurve { get; set; }
	public float LastSliceScaleDuration { get; set; }
	public AnimationCurve LastSliceScaleCurve { get; set; }
	public float FadeOutDuration { get; set; }
	public AnimationCurve FadeOutCurve { get; set; }
	public float FadeDelay { get; set; }
	public Vector3 RollScaleOutTarget { get; set; }
	public float RollScaleOutDuration { get; set; }
	public AnimationCurve RollScaleOutCurve { get; set; }
	public float RollScaleOutDelay { get; set; }
	public Vector3 RollScaleInTarget { get; set; }
	public float RollScaleInDuration { get; set; }
	public AnimationCurve RollScaleInCurve { get; set; }
	public float CarpetMoveUpPosition { get; set; }
	public float CarpetMoveUpDuration { get; set; }
	public AnimationCurve CarpetMoveUpCurve { get; set; }
	public float CarpetFadeOutDuration { get; set; }
	public AnimationCurve CarpetFadeOutCurve { get; set; }
	public float CarpetRollSfxDelay { get; set; }
	public float CarpetEndSfxDelay { get; set; }
	public Vector3 CarpetRollShadowMiddleSliceSize { get; set; }
	public Vector3 CarpetRollShadowEndSliceSize { get; set; }
	public Vector3 CarpetRollShadowMiddleSliceYPosition { get; set; }
	public Vector3 CarpetRollShadowEndSliceYPosition { get; set; }
	public float BottleScaleDuration { get; set; }
	public AnimationCurve BottleScaleCurve { get; set; }
	public float ShakeRotationDuration { get; set; }
	public Vector3 ShakeRotationTarget { get; set; }
	public int ShakeRotationVibrato { get; set; }
	public float BottleMoveTargetY { get; set; }
	public float BottleMoveDuration { get; set; }
	public AnimationCurve BottleMoveCurve { get; set; }
	public float BottleAnimDelay { get; set; }
	public float LastSliceBottleAnimDelay { get; set; }
	public float CarpetAdditionalOffset { get; set; }
	public Vector3 EndSliceScale { get; set; }
	public Vector3 EndSlicePosition { get; set; }
	public Vector3 MiddleSlicePosition { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2F59BF4 Offset: 0x2F59BF4 VA: 0x2F59BF4
	public List<float> get_CarpetRollXSizes() { }

	[CompilerGenerated]
	// RVA: 0x2F59BFC Offset: 0x2F59BFC VA: 0x2F59BFC
	private void set_CarpetRollXSizes(List<float> value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C04 Offset: 0x2F59C04 VA: 0x2F59C04
	public List<Vector3> get_RollXPositions() { }

	[CompilerGenerated]
	// RVA: 0x2F59C0C Offset: 0x2F59C0C VA: 0x2F59C0C
	private void set_RollXPositions(List<Vector3> value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C14 Offset: 0x2F59C14 VA: 0x2F59C14
	public float get_CarpetRollScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59C1C Offset: 0x2F59C1C VA: 0x2F59C1C
	private void set_CarpetRollScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C24 Offset: 0x2F59C24 VA: 0x2F59C24
	public AnimationCurve get_CarpetRollScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59C2C Offset: 0x2F59C2C VA: 0x2F59C2C
	private void set_CarpetRollScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C34 Offset: 0x2F59C34 VA: 0x2F59C34
	public float get_CarpetMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59C3C Offset: 0x2F59C3C VA: 0x2F59C3C
	private void set_CarpetMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C44 Offset: 0x2F59C44 VA: 0x2F59C44
	public float get_CarpetLastStepMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59C4C Offset: 0x2F59C4C VA: 0x2F59C4C
	private void set_CarpetLastStepMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C54 Offset: 0x2F59C54 VA: 0x2F59C54
	public float get_SpiralLastStepDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59C5C Offset: 0x2F59C5C VA: 0x2F59C5C
	private void set_SpiralLastStepDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C64 Offset: 0x2F59C64 VA: 0x2F59C64
	public AnimationCurve get_CarpetMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59C6C Offset: 0x2F59C6C VA: 0x2F59C6C
	private void set_CarpetMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C74 Offset: 0x2F59C74 VA: 0x2F59C74
	public float get_CarpetMoveYTarget() { }

	[CompilerGenerated]
	// RVA: 0x2F59C7C Offset: 0x2F59C7C VA: 0x2F59C7C
	private void set_CarpetMoveYTarget(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C84 Offset: 0x2F59C84 VA: 0x2F59C84
	public AnimationCurve get_CarpetMoveYCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59C8C Offset: 0x2F59C8C VA: 0x2F59C8C
	private void set_CarpetMoveYCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59C94 Offset: 0x2F59C94 VA: 0x2F59C94
	public AnimationCurve get_CarpetLastStepMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59C9C Offset: 0x2F59C9C VA: 0x2F59C9C
	private void set_CarpetLastStepMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59CA4 Offset: 0x2F59CA4 VA: 0x2F59CA4
	public Vector3 get_CarpetRollLastStepOffset() { }

	[CompilerGenerated]
	// RVA: 0x2F59CB0 Offset: 0x2F59CB0 VA: 0x2F59CB0
	private void set_CarpetRollLastStepOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59CBC Offset: 0x2F59CBC VA: 0x2F59CBC
	public Vector3 get_MaskLastStepOffset() { }

	[CompilerGenerated]
	// RVA: 0x2F59CC8 Offset: 0x2F59CC8 VA: 0x2F59CC8
	private void set_MaskLastStepOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59CD4 Offset: 0x2F59CD4 VA: 0x2F59CD4
	public List<float> get_MaskXScalesForSize() { }

	[CompilerGenerated]
	// RVA: 0x2F59CDC Offset: 0x2F59CDC VA: 0x2F59CDC
	private void set_MaskXScalesForSize(List<float> value) { }

	[CompilerGenerated]
	// RVA: 0x2F59CE4 Offset: 0x2F59CE4 VA: 0x2F59CE4
	public float get_MaskScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59CEC Offset: 0x2F59CEC VA: 0x2F59CEC
	private void set_MaskScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59CF4 Offset: 0x2F59CF4 VA: 0x2F59CF4
	public float get_MaskLastStepScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59CFC Offset: 0x2F59CFC VA: 0x2F59CFC
	private void set_MaskLastStepScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D04 Offset: 0x2F59D04 VA: 0x2F59D04
	public AnimationCurve get_MaskScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59D0C Offset: 0x2F59D0C VA: 0x2F59D0C
	private void set_MaskScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D14 Offset: 0x2F59D14 VA: 0x2F59D14
	public Vector3 get_MetalTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x2F59D20 Offset: 0x2F59D20 VA: 0x2F59D20
	private void set_MetalTargetScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D2C Offset: 0x2F59D2C VA: 0x2F59D2C
	public float get_MetalScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59D34 Offset: 0x2F59D34 VA: 0x2F59D34
	private void set_MetalScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D3C Offset: 0x2F59D3C VA: 0x2F59D3C
	public AnimationCurve get_MetalScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59D44 Offset: 0x2F59D44 VA: 0x2F59D44
	private void set_MetalScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D4C Offset: 0x2F59D4C VA: 0x2F59D4C
	public float get_NonEvenBottleCountPivotOffset() { }

	[CompilerGenerated]
	// RVA: 0x2F59D54 Offset: 0x2F59D54 VA: 0x2F59D54
	private void set_NonEvenBottleCountPivotOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D5C Offset: 0x2F59D5C VA: 0x2F59D5C
	public List<float> get_PivotPointsForCarpetSize() { }

	[CompilerGenerated]
	// RVA: 0x2F59D64 Offset: 0x2F59D64 VA: 0x2F59D64
	private void set_PivotPointsForCarpetSize(List<float> value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D6C Offset: 0x2F59D6C VA: 0x2F59D6C
	public AnimationCurve get_SpiralRotationCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59D74 Offset: 0x2F59D74 VA: 0x2F59D74
	private void set_SpiralRotationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D7C Offset: 0x2F59D7C VA: 0x2F59D7C
	public AnimationCurve get_EndSpiralRotationCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59D84 Offset: 0x2F59D84 VA: 0x2F59D84
	private void set_EndSpiralRotationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D8C Offset: 0x2F59D8C VA: 0x2F59D8C
	public int get_Revolution() { }

	[CompilerGenerated]
	// RVA: 0x2F59D94 Offset: 0x2F59D94 VA: 0x2F59D94
	private void set_Revolution(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F59D9C Offset: 0x2F59D9C VA: 0x2F59D9C
	public int get_EndRevolution() { }

	[CompilerGenerated]
	// RVA: 0x2F59DA4 Offset: 0x2F59DA4 VA: 0x2F59DA4
	private void set_EndRevolution(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F59DAC Offset: 0x2F59DAC VA: 0x2F59DAC
	public Vector3 get_SliceScaleTarget() { }

	[CompilerGenerated]
	// RVA: 0x2F59DB8 Offset: 0x2F59DB8 VA: 0x2F59DB8
	private void set_SliceScaleTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59DC4 Offset: 0x2F59DC4 VA: 0x2F59DC4
	public float get_SliceScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59DCC Offset: 0x2F59DCC VA: 0x2F59DCC
	private void set_SliceScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59DD4 Offset: 0x2F59DD4 VA: 0x2F59DD4
	public AnimationCurve get_SliceScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59DDC Offset: 0x2F59DDC VA: 0x2F59DDC
	private void set_SliceScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59DE4 Offset: 0x2F59DE4 VA: 0x2F59DE4
	public float get_LastSliceScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59DEC Offset: 0x2F59DEC VA: 0x2F59DEC
	private void set_LastSliceScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59DF4 Offset: 0x2F59DF4 VA: 0x2F59DF4
	public AnimationCurve get_LastSliceScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59DFC Offset: 0x2F59DFC VA: 0x2F59DFC
	private void set_LastSliceScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59E04 Offset: 0x2F59E04 VA: 0x2F59E04
	public float get_FadeOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59E0C Offset: 0x2F59E0C VA: 0x2F59E0C
	private void set_FadeOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59E14 Offset: 0x2F59E14 VA: 0x2F59E14
	public AnimationCurve get_FadeOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59E1C Offset: 0x2F59E1C VA: 0x2F59E1C
	private void set_FadeOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59E2C Offset: 0x2F59E2C VA: 0x2F59E2C
	public float get_FadeDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F59E34 Offset: 0x2F59E34 VA: 0x2F59E34
	private void set_FadeDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59E3C Offset: 0x2F59E3C VA: 0x2F59E3C
	public Vector3 get_RollScaleOutTarget() { }

	[CompilerGenerated]
	// RVA: 0x2F59E4C Offset: 0x2F59E4C VA: 0x2F59E4C
	private void set_RollScaleOutTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59E5C Offset: 0x2F59E5C VA: 0x2F59E5C
	public float get_RollScaleOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59E64 Offset: 0x2F59E64 VA: 0x2F59E64
	private void set_RollScaleOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59E6C Offset: 0x2F59E6C VA: 0x2F59E6C
	public AnimationCurve get_RollScaleOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59E74 Offset: 0x2F59E74 VA: 0x2F59E74
	private void set_RollScaleOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59E84 Offset: 0x2F59E84 VA: 0x2F59E84
	public float get_RollScaleOutDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F59E8C Offset: 0x2F59E8C VA: 0x2F59E8C
	private void set_RollScaleOutDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59E94 Offset: 0x2F59E94 VA: 0x2F59E94
	public Vector3 get_RollScaleInTarget() { }

	[CompilerGenerated]
	// RVA: 0x2F59EA4 Offset: 0x2F59EA4 VA: 0x2F59EA4
	private void set_RollScaleInTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59EB4 Offset: 0x2F59EB4 VA: 0x2F59EB4
	public float get_RollScaleInDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59EBC Offset: 0x2F59EBC VA: 0x2F59EBC
	private void set_RollScaleInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59EC4 Offset: 0x2F59EC4 VA: 0x2F59EC4
	public AnimationCurve get_RollScaleInCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59ECC Offset: 0x2F59ECC VA: 0x2F59ECC
	private void set_RollScaleInCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59EDC Offset: 0x2F59EDC VA: 0x2F59EDC
	public float get_CarpetMoveUpPosition() { }

	[CompilerGenerated]
	// RVA: 0x2F59EE4 Offset: 0x2F59EE4 VA: 0x2F59EE4
	private void set_CarpetMoveUpPosition(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59EEC Offset: 0x2F59EEC VA: 0x2F59EEC
	public float get_CarpetMoveUpDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59EF4 Offset: 0x2F59EF4 VA: 0x2F59EF4
	private void set_CarpetMoveUpDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59EFC Offset: 0x2F59EFC VA: 0x2F59EFC
	public AnimationCurve get_CarpetMoveUpCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59F04 Offset: 0x2F59F04 VA: 0x2F59F04
	private void set_CarpetMoveUpCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59F14 Offset: 0x2F59F14 VA: 0x2F59F14
	public float get_CarpetFadeOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59F1C Offset: 0x2F59F1C VA: 0x2F59F1C
	private void set_CarpetFadeOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59F24 Offset: 0x2F59F24 VA: 0x2F59F24
	public AnimationCurve get_CarpetFadeOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59F2C Offset: 0x2F59F2C VA: 0x2F59F2C
	private void set_CarpetFadeOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F59F3C Offset: 0x2F59F3C VA: 0x2F59F3C
	public float get_CarpetRollSfxDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F59F44 Offset: 0x2F59F44 VA: 0x2F59F44
	private void set_CarpetRollSfxDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59F4C Offset: 0x2F59F4C VA: 0x2F59F4C
	public float get_CarpetEndSfxDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F59F54 Offset: 0x2F59F54 VA: 0x2F59F54
	private void set_CarpetEndSfxDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59F5C Offset: 0x2F59F5C VA: 0x2F59F5C
	public Vector3 get_CarpetRollShadowMiddleSliceSize() { }

	[CompilerGenerated]
	// RVA: 0x2F59F6C Offset: 0x2F59F6C VA: 0x2F59F6C
	private void set_CarpetRollShadowMiddleSliceSize(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59F7C Offset: 0x2F59F7C VA: 0x2F59F7C
	public Vector3 get_CarpetRollShadowEndSliceSize() { }

	[CompilerGenerated]
	// RVA: 0x2F59F8C Offset: 0x2F59F8C VA: 0x2F59F8C
	private void set_CarpetRollShadowEndSliceSize(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59F9C Offset: 0x2F59F9C VA: 0x2F59F9C
	public Vector3 get_CarpetRollShadowMiddleSliceYPosition() { }

	[CompilerGenerated]
	// RVA: 0x2F59FAC Offset: 0x2F59FAC VA: 0x2F59FAC
	private void set_CarpetRollShadowMiddleSliceYPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59FBC Offset: 0x2F59FBC VA: 0x2F59FBC
	public Vector3 get_CarpetRollShadowEndSliceYPosition() { }

	[CompilerGenerated]
	// RVA: 0x2F59FCC Offset: 0x2F59FCC VA: 0x2F59FCC
	private void set_CarpetRollShadowEndSliceYPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F59FDC Offset: 0x2F59FDC VA: 0x2F59FDC
	public float get_BottleScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F59FE4 Offset: 0x2F59FE4 VA: 0x2F59FE4
	private void set_BottleScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F59FEC Offset: 0x2F59FEC VA: 0x2F59FEC
	public AnimationCurve get_BottleScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F59FF4 Offset: 0x2F59FF4 VA: 0x2F59FF4
	private void set_BottleScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A004 Offset: 0x2F5A004 VA: 0x2F5A004
	public float get_ShakeRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F5A00C Offset: 0x2F5A00C VA: 0x2F5A00C
	private void set_ShakeRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A014 Offset: 0x2F5A014 VA: 0x2F5A014
	public Vector3 get_ShakeRotationTarget() { }

	[CompilerGenerated]
	// RVA: 0x2F5A024 Offset: 0x2F5A024 VA: 0x2F5A024
	private void set_ShakeRotationTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A034 Offset: 0x2F5A034 VA: 0x2F5A034
	public int get_ShakeRotationVibrato() { }

	[CompilerGenerated]
	// RVA: 0x2F5A03C Offset: 0x2F5A03C VA: 0x2F5A03C
	private void set_ShakeRotationVibrato(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A044 Offset: 0x2F5A044 VA: 0x2F5A044
	public float get_BottleMoveTargetY() { }

	[CompilerGenerated]
	// RVA: 0x2F5A04C Offset: 0x2F5A04C VA: 0x2F5A04C
	private void set_BottleMoveTargetY(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A054 Offset: 0x2F5A054 VA: 0x2F5A054
	public float get_BottleMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F5A05C Offset: 0x2F5A05C VA: 0x2F5A05C
	private void set_BottleMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A064 Offset: 0x2F5A064 VA: 0x2F5A064
	public AnimationCurve get_BottleMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F5A06C Offset: 0x2F5A06C VA: 0x2F5A06C
	private void set_BottleMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A07C Offset: 0x2F5A07C VA: 0x2F5A07C
	public float get_BottleAnimDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F5A084 Offset: 0x2F5A084 VA: 0x2F5A084
	private void set_BottleAnimDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A08C Offset: 0x2F5A08C VA: 0x2F5A08C
	public float get_LastSliceBottleAnimDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F5A094 Offset: 0x2F5A094 VA: 0x2F5A094
	private void set_LastSliceBottleAnimDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A09C Offset: 0x2F5A09C VA: 0x2F5A09C
	public float get_CarpetAdditionalOffset() { }

	[CompilerGenerated]
	// RVA: 0x2F5A0A4 Offset: 0x2F5A0A4 VA: 0x2F5A0A4
	private void set_CarpetAdditionalOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A0AC Offset: 0x2F5A0AC VA: 0x2F5A0AC
	public Vector3 get_EndSliceScale() { }

	[CompilerGenerated]
	// RVA: 0x2F5A0BC Offset: 0x2F5A0BC VA: 0x2F5A0BC
	private void set_EndSliceScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A0CC Offset: 0x2F5A0CC VA: 0x2F5A0CC
	public Vector3 get_EndSlicePosition() { }

	[CompilerGenerated]
	// RVA: 0x2F5A0DC Offset: 0x2F5A0DC VA: 0x2F5A0DC
	private void set_EndSlicePosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F5A0EC Offset: 0x2F5A0EC VA: 0x2F5A0EC
	public Vector3 get_MiddleSlicePosition() { }

	[CompilerGenerated]
	// RVA: 0x2F5A0FC Offset: 0x2F5A0FC VA: 0x2F5A0FC
	private void set_MiddleSlicePosition(Vector3 value) { }

	// RVA: 0x2F5A10C Offset: 0x2F5A10C VA: 0x2F5A10C
	public void .ctor() { }
}

// Namespace: 