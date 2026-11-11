public class HeartBeatAnimationConfig : ScriptableObject // TypeDefIndex: 1083
{
	// Fields
	[SerializeField]
	private float _heartBeatDuration; // 0x18
	[SerializeField]
	private float _heartIdleDuration; // 0x1C
	[SerializeField]
	private float _minScale; // 0x20
	[SerializeField]
	private float _maxScale; // 0x24
	[SerializeField]
	private AnimationCurve _heartBeatCurve; // 0x28

	// Properties
	public float HeartBeatDuration { get; }
	public AnimationCurve HeartBeatCurve { get; }
	public float MinScale { get; }
	public float MaxScale { get; }
	public float HeartIdleDuration { get; }

	// Methods

	// RVA: 0x16F3380 Offset: 0x16F3380 VA: 0x16F3380
	public float get_HeartBeatDuration() { }

	// RVA: 0x16F3388 Offset: 0x16F3388 VA: 0x16F3388
	public AnimationCurve get_HeartBeatCurve() { }

	// RVA: 0x16F3390 Offset: 0x16F3390 VA: 0x16F3390
	public float get_MinScale() { }

	// RVA: 0x16F3398 Offset: 0x16F3398 VA: 0x16F3398
	public float get_MaxScale() { }

	// RVA: 0x16F33A0 Offset: 0x16F33A0 VA: 0x16F33A0
	public float get_HeartIdleDuration() { }

	// RVA: 0x16F33A8 Offset: 0x16F33A8 VA: 0x16F33A8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts