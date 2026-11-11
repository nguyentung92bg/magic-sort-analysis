public class BottleAnimationConfig : ScriptableObject // TypeDefIndex: 113
{
	// Fields
	[SerializeField]
	private float _riseHeight; // 0x18
	[SerializeField]
	private float _heightOffset; // 0x1C
	[SerializeField]
	private AnimationCurve _moveToTargetAnimationCurve; // 0x20
	[SerializeField]
	private float _moveToTargetSpeed; // 0x28
	[SerializeField]
	private float _moveToTargetMinDuration; // 0x2C
	[SerializeField]
	private float _moveToInitialPositionSpeed; // 0x30
	[SerializeField]
	private float _moveToInitialPositionMinDuration; // 0x34
	[SerializeField]
	private AnimationCurve _animationCurveBetweenStep1AndStep2; // 0x38
	[SerializeField]
	private AnimationCurve _moveToInitialPositionAnimationCurve; // 0x40
	[SerializeField]
	private AnimationCurve _rotateWhenToMoveInitialPositionAnimationCurve; // 0x48
	[SerializeField]
	private float _applyResultForTargetAt; // 0x50
	[SerializeField]
	private float _differentColorEllipseFadeInDuration; // 0x54
	[SerializeField]
	private float _waterLineDuration; // 0x58
	[SerializeField]
	private float _riseOffset; // 0x5C
	[SerializeField]
	private float _riseBottleDuration; // 0x60
	[SerializeField]
	private float _extraRiseBottleDurationByWaterDropHeight; // 0x64
	[SerializeField]
	private AnimationCurve _riseAnimationCurve; // 0x68
	[SerializeField]
	private float _bottleSelectionAnimationDuration; // 0x70
	[SerializeField]
	private AnimationCurve _bottleSelectionAnimationCurve; // 0x78
	[SerializeField]
	private float _bottleSelectionAnimationHeight; // 0x80
	[SerializeField]
	private float _bottleSelectionAnimationHeightFor3Row; // 0x84
	[SerializeField]
	private float _bottleDeselectionAnimationDuration; // 0x88
	[SerializeField]
	private AnimationCurve _bottleDeselectionAnimationCurve; // 0x90
	[SerializeField]
	private List<RotationByEmptyCell> _rotationsByHeights; // 0x98
	[SerializeField]
	private List<RotationByEmptyCell> _rotationsByHeightsFor2UnitBottle; // 0xA0
	[SerializeField]
	private List<RotationByEmptyCell> _rotationsByHeightsFor1UnitBottle; // 0xA8
	[SerializeField]
	private Vector3 _bottleStopperOffset; // 0xB0
	[SerializeField]
	private float _clayViewPositionOffset; // 0xBC
	[SerializeField]
	private float _plasterViewPositionOffset; // 0xC0
	[SerializeField]
	private float _curtainViewPositionOffset; // 0xC4
	[SerializeField]
	private float _questionMarkPositionOffset; // 0xC8
	[SerializeField]
	private float _tagViewOffsetY; // 0xCC
	[SerializeField]
	private float _iceViewOffsetY; // 0xD0
	[SerializeField]
	private float _generatorViewOffsetY; // 0xD4
	[SerializeField]
	private float _woodboxViewOffsetY; // 0xD8
	[SerializeField]
	private float _woodboxKeyViewOffsetY; // 0xDC
	[SerializeField]
	private float _carpetViewOffsetY; // 0xE0
	[SerializeField]
	private List<DistanceBySelfHeight> _distanceToBottomOfTheBottleIfBottomWaterForKey; // 0xE8
	[SerializeField]
	private float _dailyBottleDeselectStretchInDelay; // 0xF0
	[SerializeField]
	private List<float> _bottleStretchOutOnSelectTimes; // 0xF8
	[SerializeField]
	private float _dailyBlobMinYPositionOffset; // 0x100
	[SerializeField]
	private float _dailyDeselectRiseWaterTime; // 0x104
	[SerializeField]
	private List<float> _dailyQuestionMarkPositions; // 0x108

	// Properties
	public float HeightOffset { get; }
	public AnimationCurve MoveToTargetAnimationCurve { get; }
	public float MoveToTargetSpeed { get; }
	public float MoveToTargetMinDuration { get; }
	public float MoveToInitialPositionSpeed { get; }
	public float MoveToInitialPositionMinDuration { get; }
	public AnimationCurve AnimationCurveBetweenStep1AndStep2 { get; }
	public AnimationCurve MoveToInitialPositionAnimationCurve { get; }
	public AnimationCurve RotateWhenToMoveInitialPositionAnimationCurve { get; }
	public float ApplyResultForTargetAt { get; }
	public float DifferentColorEllipseFadeInDuration { get; }
	public float WaterLineDuration { get; }
	public float RiseOffset { get; }
	public float RiseBottleDuration { get; }
	public float ExtraRiseBottleDurationByWaterDropHeight { get; }
	public AnimationCurve RiseAnimationCurve { get; }
	public float BottleSelectionAnimationDuration { get; }
	public AnimationCurve BottleSelectionAnimationCurve { get; }
	public float BottleDeselectionAnimationDuration { get; }
	public AnimationCurve BottleDeselectionAnimationCurve { get; }
	public Vector3 BottleStopperOffset { get; }
	public float ClayViewPositionOffset { get; }
	public float PlasterViewPositionOffset { get; }
	public float CurtainViewPositionOffset { get; }
	public float QuestionMarkPositionOffset { get; }
	public float TagViewOffsetY { get; }
	public float IceViewOffsetY { get; }
	public float GeneratorViewOffsetY { get; }
	public float WoodboxViewOffsetY { get; }
	public float WoodboxKeyViewOffsetY { get; }
	public float CarpetViewOffsetY { get; }
	public float RiseHeight { get; }
	public float DailyBottleDeselectStretchInDelay { get; }
	public float DailyBlobMinYPositionOffset { get; }
	public float DailyDeselectRiseWaterTime { get; }

	// Methods

	// RVA: 0x3AF55B4 Offset: 0x3AF55B4 VA: 0x3AF55B4
	public float get_HeightOffset() { }

	// RVA: 0x3AF55BC Offset: 0x3AF55BC VA: 0x3AF55BC
	public AnimationCurve get_MoveToTargetAnimationCurve() { }

	// RVA: 0x3AF55C4 Offset: 0x3AF55C4 VA: 0x3AF55C4
	public float get_MoveToTargetSpeed() { }

	// RVA: 0x3AF55CC Offset: 0x3AF55CC VA: 0x3AF55CC
	public float get_MoveToTargetMinDuration() { }

	// RVA: 0x3AF55D4 Offset: 0x3AF55D4 VA: 0x3AF55D4
	public float get_MoveToInitialPositionSpeed() { }

	// RVA: 0x3AF55DC Offset: 0x3AF55DC VA: 0x3AF55DC
	public float get_MoveToInitialPositionMinDuration() { }

	// RVA: 0x3AF55E4 Offset: 0x3AF55E4 VA: 0x3AF55E4
	public AnimationCurve get_AnimationCurveBetweenStep1AndStep2() { }

	// RVA: 0x3AF55EC Offset: 0x3AF55EC VA: 0x3AF55EC
	public AnimationCurve get_MoveToInitialPositionAnimationCurve() { }

	// RVA: 0x3AF55F4 Offset: 0x3AF55F4 VA: 0x3AF55F4
	public AnimationCurve get_RotateWhenToMoveInitialPositionAnimationCurve() { }

	// RVA: 0x3AF55FC Offset: 0x3AF55FC VA: 0x3AF55FC
	public float get_ApplyResultForTargetAt() { }

	// RVA: 0x3AF5604 Offset: 0x3AF5604 VA: 0x3AF5604
	public float get_DifferentColorEllipseFadeInDuration() { }

	// RVA: 0x3AF560C Offset: 0x3AF560C VA: 0x3AF560C
	public float get_WaterLineDuration() { }

	// RVA: 0x3AF5614 Offset: 0x3AF5614 VA: 0x3AF5614
	public float get_RiseOffset() { }

	// RVA: 0x3AF561C Offset: 0x3AF561C VA: 0x3AF561C
	public float get_RiseBottleDuration() { }

	// RVA: 0x3AF5624 Offset: 0x3AF5624 VA: 0x3AF5624
	public float get_ExtraRiseBottleDurationByWaterDropHeight() { }

	// RVA: 0x3AF562C Offset: 0x3AF562C VA: 0x3AF562C
	public AnimationCurve get_RiseAnimationCurve() { }

	// RVA: 0x3AF5634 Offset: 0x3AF5634 VA: 0x3AF5634
	public float get_BottleSelectionAnimationDuration() { }

	// RVA: 0x3AF563C Offset: 0x3AF563C VA: 0x3AF563C
	public AnimationCurve get_BottleSelectionAnimationCurve() { }

	// RVA: 0x3AF5644 Offset: 0x3AF5644 VA: 0x3AF5644
	public float BottleSelectionAnimationHeight(int bottleRowCount) { }

	// RVA: 0x3AF565C Offset: 0x3AF565C VA: 0x3AF565C
	public float get_BottleDeselectionAnimationDuration() { }

	// RVA: 0x3AF5664 Offset: 0x3AF5664 VA: 0x3AF5664
	public AnimationCurve get_BottleDeselectionAnimationCurve() { }

	// RVA: 0x3AF566C Offset: 0x3AF566C VA: 0x3AF566C
	public Vector3 get_BottleStopperOffset() { }

	// RVA: 0x3AF5678 Offset: 0x3AF5678 VA: 0x3AF5678
	public float get_ClayViewPositionOffset() { }

	// RVA: 0x3AF5680 Offset: 0x3AF5680 VA: 0x3AF5680
	public float get_PlasterViewPositionOffset() { }

	// RVA: 0x3AF5688 Offset: 0x3AF5688 VA: 0x3AF5688
	public float get_CurtainViewPositionOffset() { }

	// RVA: 0x3AF5690 Offset: 0x3AF5690 VA: 0x3AF5690
	public float get_QuestionMarkPositionOffset() { }

	// RVA: 0x3AF5698 Offset: 0x3AF5698 VA: 0x3AF5698
	public float get_TagViewOffsetY() { }

	// RVA: 0x3AF56A0 Offset: 0x3AF56A0 VA: 0x3AF56A0
	public float get_IceViewOffsetY() { }

	// RVA: 0x3AF56A8 Offset: 0x3AF56A8 VA: 0x3AF56A8
	public float get_GeneratorViewOffsetY() { }

	// RVA: 0x3AF56B0 Offset: 0x3AF56B0 VA: 0x3AF56B0
	public float get_WoodboxViewOffsetY() { }

	// RVA: 0x3AF56B8 Offset: 0x3AF56B8 VA: 0x3AF56B8
	public float get_WoodboxKeyViewOffsetY() { }

	// RVA: 0x3AF56C0 Offset: 0x3AF56C0 VA: 0x3AF56C0
	public float get_CarpetViewOffsetY() { }

	// RVA: 0x3AF56C8 Offset: 0x3AF56C8 VA: 0x3AF56C8
	public float get_RiseHeight() { }

	// RVA: 0x3AF56D0 Offset: 0x3AF56D0 VA: 0x3AF56D0
	public float get_DailyBottleDeselectStretchInDelay() { }

	// RVA: 0x3AF56D8 Offset: 0x3AF56D8 VA: 0x3AF56D8
	public float get_DailyBlobMinYPositionOffset() { }

	// RVA: 0x3AF56E0 Offset: 0x3AF56E0 VA: 0x3AF56E0
	public float get_DailyDeselectRiseWaterTime() { }

	// RVA: 0x3AF56E8 Offset: 0x3AF56E8 VA: 0x3AF56E8
	public RotationByEmptyCell GetRotationByEmptyCell(int bottleHeight, int emptyCell) { }

	// RVA: 0x3AF5874 Offset: 0x3AF5874 VA: 0x3AF5874
	public float GetDistanceToBottomOfTheBottleIfBottomWaterForKey(int selfHeight) { }

	// RVA: 0x3AF59E0 Offset: 0x3AF59E0 VA: 0x3AF59E0
	public float GetBottleStretchOutOnSelectTime(int index) { }

	// RVA: 0x3AF5A38 Offset: 0x3AF5A38 VA: 0x3AF5A38
	public float GetDailyQuestionMarkOffset(int index) { }

	// RVA: 0x3AF5A90 Offset: 0x3AF5A90 VA: 0x3AF5A90
	public void .ctor() { }
}

// Namespace: BakedFluid
[Serializable]