public class WaterRotationAnimation : MonoBehaviour // TypeDefIndex: 1478
{
	// Fields
	[CompilerGenerated]
	private BottleOutlines <BottleOutlines>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <BottleHeight>k__BackingField; // 0x20
	[CompilerGenerated]
	private Vector2 <NotReducedTopLeftPosition>k__BackingField; // 0x24
	[CompilerGenerated]
	private Vector2 <NotReducedTopRightPosition>k__BackingField; // 0x2C
	public bool _isLeftSide; // 0x34
	[SerializeField]
	private WaterRegularRotationConfig _config; // 0x38
	[SerializeField]
	private WaterRegularRotationConfig _configVariant1; // 0x40
	[SerializeField]
	private SpriteShapeCustomControllerConfig _spriteShapeCustomControllerConfig; // 0x48
	private float _reduceRatio; // 0x50
	private Tween _reduceRatioTween; // 0x58
	private bool _isReduceRatioPlaying; // 0x60

	// Properties
	public BottleOutlines BottleOutlines { get; set; }
	public int BottleHeight { get; set; }
	public Vector2 NotReducedTopLeftPosition { get; set; }
	public Vector2 NotReducedTopRightPosition { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x248D23C Offset: 0x248D23C VA: 0x248D23C
	public BottleOutlines get_BottleOutlines() { }

	[CompilerGenerated]
	// RVA: 0x248D244 Offset: 0x248D244 VA: 0x248D244
	public void set_BottleOutlines(BottleOutlines value) { }

	[CompilerGenerated]
	// RVA: 0x248D24C Offset: 0x248D24C VA: 0x248D24C
	public int get_BottleHeight() { }

	[CompilerGenerated]
	// RVA: 0x248D254 Offset: 0x248D254 VA: 0x248D254
	public void set_BottleHeight(int value) { }

	[CompilerGenerated]
	// RVA: 0x248D25C Offset: 0x248D25C VA: 0x248D25C
	public Vector2 get_NotReducedTopLeftPosition() { }

	[CompilerGenerated]
	// RVA: 0x248D264 Offset: 0x248D264 VA: 0x248D264
	private void set_NotReducedTopLeftPosition(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x248D26C Offset: 0x248D26C VA: 0x248D26C
	public Vector2 get_NotReducedTopRightPosition() { }

	[CompilerGenerated]
	// RVA: 0x248D274 Offset: 0x248D274 VA: 0x248D274
	private void set_NotReducedTopRightPosition(Vector2 value) { }

	// RVA: 0x248D27C Offset: 0x248D27C VA: 0x248D27C
	public void SetDropRatio(float ratio) { }

	// RVA: 0x248D284 Offset: 0x248D284 VA: 0x248D284
	private WaterRegularRotationConfig GetVariant(int variant) { }

	// RVA: 0x248BE7C Offset: 0x248BE7C VA: 0x248BE7C
	public void RotateWaters(float degree, int height, int bottomHeight, bool waterRotationAnimationExist, Vector2 notReducedTopLeftPosition, Vector2 notReducedTopRightPosition, WaterPivotPositionsByBottleHeight valuesByDegrees, int variant) { }

	// RVA: 0x248C664 Offset: 0x248C664 VA: 0x248C664
	public Tween PlayDropRatio(float duration, float currentHeight, float nextHeight) { }

	// RVA: 0x248D680 Offset: 0x248D680 VA: 0x248D680
	public void StopDropRatio() { }

	// RVA: 0x248D6A0 Offset: 0x248D6A0 VA: 0x248D6A0
	public void SetDirectionValues(bool isLeftSide) { }

	// RVA: 0x248D3BC Offset: 0x248D3BC VA: 0x248D3BC
	private ValueTuple<Vector3, Vector3> GetIntersectedPoints(Vector3 topLeft, Vector3 topRight, int waterBottom) { }

	// RVA: 0x248D29C Offset: 0x248D29C VA: 0x248D29C
	private ValueTuple<Vector3, Vector3> GetRotatedTopLine(Vector2 topRight, Vector2 topLeft, float rotation, float waterHeight, int pourableWaterHeight) { }

	// RVA: 0x248AEE8 Offset: 0x248AEE8 VA: 0x248AEE8
	public void Dispose() { }

	// RVA: 0x248D6AC Offset: 0x248D6AC VA: 0x248D6AC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x248D6BC Offset: 0x248D6BC VA: 0x248D6BC
	private void <PlayDropRatio>b__26_0(float value) { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.QuestionMark