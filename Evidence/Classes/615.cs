public class HomeScaleConfig : ScriptableObject // TypeDefIndex: 615
{
	// Fields
	[SerializeField]
	private float smallScreenScaleLimit; // 0x18
	[SerializeField]
	private float minimumScaleRatio; // 0x1C
	[SerializeField]
	private float cameraSizeForSmallScreen; // 0x20

	// Properties
	public float SmallScreenScaleLimit { get; }
	public float MinimumScaleRatio { get; }
	public float CameraSizeForSmallScreen { get; }

	// Methods

	// RVA: 0x400D724 Offset: 0x400D724 VA: 0x400D724
	public float get_SmallScreenScaleLimit() { }

	// RVA: 0x400D72C Offset: 0x400D72C VA: 0x400D72C
	public float get_MinimumScaleRatio() { }

	// RVA: 0x400D734 Offset: 0x400D734 VA: 0x400D734
	public float get_CameraSizeForSmallScreen() { }

	// RVA: 0x400D73C Offset: 0x400D73C VA: 0x400D73C
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scaler