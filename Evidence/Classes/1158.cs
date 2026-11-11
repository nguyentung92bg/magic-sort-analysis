public class SelectionSuccessAnimation : IFrameUpdate // TypeDefIndex: 1158
{
	// Fields
	private readonly SelectionSuccessAnimation.AnimationData _animationData1; // 0x10
	private readonly SelectionSuccessAnimation.AnimationData _animationData2; // 0x18
	private readonly SelectionSuccessAnimation.AnimationData _animationData3; // 0x20
	private readonly SelectionSuccessAnimation.AnimationData _animationData4; // 0x28
	private readonly SelectionSuccessAnimation.AnimationData _animationData5; // 0x30
	private readonly SelectionSuccessAnimation.AnimationData _serialAnimationData; // 0x38
	private readonly Action _onComplete; // 0x40
	private readonly OptimizedGameObject _boardParentGo; // 0x48
	private readonly OptimizedGameObject _originBottleParentGo; // 0x50
	private readonly BottleItem _originBottle; // 0x58
	private readonly WaterItem _originWater; // 0x60
	private readonly WaterItem _targetWater; // 0x68
	private readonly WaterLineStartView _originBottleWaterLineStartView; // 0x70
	private readonly BottleItem _targetBottle; // 0x78
	private readonly WaterLineItemPart _waterLineItemPart; // 0x80
	private readonly ColorAndColorId _originWaterColor; // 0x88
	private readonly bool _isLeft; // 0x90
	private readonly Vector3 _originBottleParentInitialPosition; // 0x94
	private readonly int _originWaterHeight; // 0xA0
	private readonly int _originWaterHeightPourable; // 0xA4
	private readonly Vector3 _originBottleParentTowardPositionFrom; // 0xA8
	private readonly Vector3 _originBottleParentTowardPositionTo; // 0xB4
	private readonly float _originBottleParentTowardRotationFrom; // 0xC0
	private readonly float _originBottleParentTowardRotationTo; // 0xC4
	private readonly float _originBottleParentTowardDuration; // 0xC8
	private readonly AnimationCurve _originBottleParentTowardMoveCurve; // 0xD0
	private readonly Vector3 _originBottleParentPourPositionFrom; // 0xD8
	private readonly Vector3 _originBottleParentPourPositionTo; // 0xE4
	private readonly float _originBottleParentPourRotationFrom; // 0xF0
	private readonly float _originBottleParentPourRotationTo; // 0xF4
	private readonly float _originBottleParentPourDuration; // 0xF8
	private readonly AnimationCurve _originBottleParentPourMoveCurve; // 0x100
	private readonly AnimationCurve _originBottleParentPourRotationCurve; // 0x108
	private readonly Vector3 _originBottleParentBackwardPositionFrom; // 0x110
	private readonly Vector3 _originBottleParentBackwardPositionTo; // 0x11C
	private readonly float _originBottleParentBackwardRotationFrom; // 0x128
	private readonly float _originBottleParentBackwardRotationTo; // 0x12C
	private readonly float _originBottleParentBackwardDuration; // 0x130
	private readonly AnimationCurve _originBottleParentBackwardMoveCurve; // 0x138
	private readonly AnimationCurve _originBottleParentBackwardRotationCurve; // 0x140
	private readonly float _waterLineDuration; // 0x148
	private readonly float _waterLineMoveDistance; // 0x14C
	private readonly float _waterLineDropDuration; // 0x150
	private readonly float _waterFillAt; // 0x154
	private readonly int _targetWaterHeightOld; // 0x158
	private readonly int _targetWaterHeightNew; // 0x15C
	private bool _shouldPlayAnimation; // 0x160
	private bool _followOriginBottle; // 0x161
	private Selection _selection; // 0x168
	private readonly bool _isOriginWaterRainbow; // 0x170
	private readonly float _newWaterEllipseFadeInDuration; // 0x174
	private WaterItem _newWaterOnDifferentColor; // 0x178

	// Methods

	// RVA: 0x1613B50 Offset: 0x1613B50 VA: 0x1613B50
	public void .ctor(BottleCollection bottleCollection, BottleItem originBottle, BottleItem targetBottle, SelectionResult selectionResult, Action onComplete, Vector3 originBottleInitialPosition, Selection selection) { }

	// RVA: 0x1614494 Offset: 0x1614494 VA: 0x1614494
	public void StartAnimation() { }

	// RVA: 0x1614A08 Offset: 0x1614A08 VA: 0x1614A08 Slot: 4
	public void FrameUpdate(float elapsedSeconds) { }

	// RVA: 0x1614B14 Offset: 0x1614B14 VA: 0x1614B14
	private bool PlayStartingAnimation() { }

	// RVA: 0x1614CE4 Offset: 0x1614CE4 VA: 0x1614CE4
	private bool PlayBottleTowardAnimation() { }

	// RVA: 0x1614F08 Offset: 0x1614F08 VA: 0x1614F08
	private bool PlayBottlePourAnimation() { }

	// RVA: 0x16152EC Offset: 0x16152EC VA: 0x16152EC
	private bool PlayWaterPourAnimation() { }

	// RVA: 0x16156BC Offset: 0x16156BC VA: 0x16156BC
	private bool PlayEndingAnimation() { }

	// RVA: 0x16145EC Offset: 0x16145EC VA: 0x16145EC
	private bool IsLeftSide(BottleItem bottle1, BottleItem bottle2) { }

	// RVA: 0x16147B8 Offset: 0x16147B8 VA: 0x16147B8
	private float GetDistanceToTarget(BottleItem bottle1, BottleItem bottle2, Vector3 originBottleTopPosition, float rotation, float riseHeight) { }

	// RVA: 0x1615838 Offset: 0x1615838 VA: 0x1615838
	private void Deinitialize() { }

	[CompilerGenerated]
	// RVA: 0x16158BC Offset: 0x16158BC VA: 0x16158BC
	private void <PlayWaterPourAnimation>b__58_0() { }

	[CompilerGenerated]
	// RVA: 0x16158E8 Offset: 0x16158E8 VA: 0x16158E8
	private void <PlayWaterPourAnimation>b__58_1() { }
}

// Namespace: 
[CompilerGenerated]