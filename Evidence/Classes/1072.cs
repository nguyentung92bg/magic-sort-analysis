public class PerfectTextAnimationConfig : ScriptableObject // TypeDefIndex: 1072
{
	// Fields
	[SerializeField]
	private float _entranceDuration; // 0x18
	[SerializeField]
	private float _initialScale; // 0x1C
	[SerializeField]
	private float _lastScale; // 0x20
	[SerializeField]
	private float _durationBetween; // 0x24
	[SerializeField]
	private AnimationCurve _animationCurve; // 0x28

	// Properties
	public float EntranceDuration { get; }
	public float InitialScale { get; }
	public float LastScale { get; }
	public float DurationBetween { get; }
	public AnimationCurve AnimationCurve { get; }

	// Methods

	// RVA: 0x16F0B00 Offset: 0x16F0B00 VA: 0x16F0B00
	public float get_EntranceDuration() { }

	// RVA: 0x16F0B08 Offset: 0x16F0B08 VA: 0x16F0B08
	public float get_InitialScale() { }

	// RVA: 0x16F0B10 Offset: 0x16F0B10 VA: 0x16F0B10
	public float get_LastScale() { }

	// RVA: 0x16F0B18 Offset: 0x16F0B18 VA: 0x16F0B18
	public float get_DurationBetween() { }

	// RVA: 0x16F0B20 Offset: 0x16F0B20 VA: 0x16F0B20
	public AnimationCurve get_AnimationCurve() { }

	// RVA: 0x16F0B28 Offset: 0x16F0B28 VA: 0x16F0B28
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]