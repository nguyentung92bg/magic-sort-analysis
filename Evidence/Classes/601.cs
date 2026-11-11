public class InertialMovementConfig : ScriptableObject // TypeDefIndex: 601
{
	// Fields
	[SerializeField]
	private float _decreaseRatio; // 0x18
	[SerializeField]
	private float _stopThreshold; // 0x1C
	[SerializeField]
	private float _rubberBack; // 0x20
	[SerializeField]
	private float _maxScrollSpeed; // 0x24

	// Properties
	public float DecreaseRatio { get; }
	public float StopThreshold { get; }
	public float RubberBack { get; }
	public float MaxScrollSpeed { get; }

	// Methods

	// RVA: 0x4008FF0 Offset: 0x4008FF0 VA: 0x4008FF0
	public float get_DecreaseRatio() { }

	// RVA: 0x4008FF8 Offset: 0x4008FF8 VA: 0x4008FF8
	public float get_StopThreshold() { }

	// RVA: 0x4009000 Offset: 0x4009000 VA: 0x4009000
	public float get_RubberBack() { }

	// RVA: 0x4009008 Offset: 0x4009008 VA: 0x4009008
	public float get_MaxScrollSpeed() { }

	// RVA: 0x4009010 Offset: 0x4009010 VA: 0x4009010
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll