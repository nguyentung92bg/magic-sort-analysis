public class BottleShuffleAnimationConfig : ScriptableObject // TypeDefIndex: 1523
{
	// Fields
	[SerializeField]
	private Vector3 _rotation; // 0x18
	[SerializeField]
	private Vector3 _decreaseRotation; // 0x24
	[SerializeField]
	private float _rotationDuration; // 0x30
	[SerializeField]
	private AnimationCurve _rotationAnimationCurve; // 0x38
	[SerializeField]
	private int _rotateLoopCount; // 0x40
	[SerializeField]
	private Vector3 _positionOffset; // 0x44
	[SerializeField]
	private Vector3 _decreasePosition; // 0x50
	[SerializeField]
	private float _positionDuration; // 0x5C
	[SerializeField]
	private AnimationCurve _positionAnimationCurve; // 0x60
	[SerializeField]
	private int _positionLoopCount; // 0x68
	[SerializeField]
	private float _reduceDurationPerLoop; // 0x6C
	[SerializeField]
	private float _waterColorRevealDelay; // 0x70

	// Properties
	public Vector3 Rotation { get; }
	public float RotationDuration { get; }
	public AnimationCurve RotationAnimationCurve { get; }
	public Vector3 DecreaseRotation { get; }
	public int RotateLoopCount { get; }
	public Vector3 PositionOffset { get; }
	public Vector3 DecreasePosition { get; }
	public float PositionDuration { get; }
	public AnimationCurve PositionAnimationCurve { get; }
	public int PositionLoopCount { get; }
	public float ReduceDurationPerLoop { get; }
	public float WaterColorRevealDelay { get; }

	// Methods

	// RVA: 0x22FB9A8 Offset: 0x22FB9A8 VA: 0x22FB9A8
	public Vector3 get_Rotation() { }

	// RVA: 0x22FB9B4 Offset: 0x22FB9B4 VA: 0x22FB9B4
	public float get_RotationDuration() { }

	// RVA: 0x22FB9BC Offset: 0x22FB9BC VA: 0x22FB9BC
	public AnimationCurve get_RotationAnimationCurve() { }

	// RVA: 0x22FB9C4 Offset: 0x22FB9C4 VA: 0x22FB9C4
	public Vector3 get_DecreaseRotation() { }

	// RVA: 0x22FB9D0 Offset: 0x22FB9D0 VA: 0x22FB9D0
	public int get_RotateLoopCount() { }

	// RVA: 0x22FB9D8 Offset: 0x22FB9D8 VA: 0x22FB9D8
	public Vector3 get_PositionOffset() { }

	// RVA: 0x22FB9E4 Offset: 0x22FB9E4 VA: 0x22FB9E4
	public Vector3 get_DecreasePosition() { }

	// RVA: 0x22FB9F0 Offset: 0x22FB9F0 VA: 0x22FB9F0
	public float get_PositionDuration() { }

	// RVA: 0x22FB9F8 Offset: 0x22FB9F8 VA: 0x22FB9F8
	public AnimationCurve get_PositionAnimationCurve() { }

	// RVA: 0x22FBA00 Offset: 0x22FBA00 VA: 0x22FBA00
	public int get_PositionLoopCount() { }

	// RVA: 0x22FBA08 Offset: 0x22FBA08 VA: 0x22FBA08
	public float get_ReduceDurationPerLoop() { }

	// RVA: 0x22FBA10 Offset: 0x22FBA10 VA: 0x22FBA10
	public float get_WaterColorRevealDelay() { }

	// RVA: 0x22FBA18 Offset: 0x22FBA18 VA: 0x22FBA18
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle
[Serializable]