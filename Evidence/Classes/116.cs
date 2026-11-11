public class SpriteShapeCustomControllerConfig : ScriptableObject // TypeDefIndex: 116
{
	// Fields
	[SerializeField]
	private List<DistanceBySelfHeight> _distanceToBottleIfBottomWater; // 0x18
	[SerializeField]
	private List<DistanceBySelfHeight> _distanceToBottleIfBottomWaterFor2Unit; // 0x20
	[SerializeField]
	private List<DistanceBySelfHeight> _distanceToBottleIfBottomWaterFor1Unit; // 0x28

	// Methods

	// RVA: 0x3AF5AB4 Offset: 0x3AF5AB4 VA: 0x3AF5AB4
	public float GetDistanceToBottleIfBottomWater(int bottleHeight, int selfHeight) { }

	// RVA: 0x3AF5C50 Offset: 0x3AF5C50 VA: 0x3AF5C50
	public void .ctor() { }
}

// Namespace: IapVerifier.V1