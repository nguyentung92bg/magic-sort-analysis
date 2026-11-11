public class BottleAnimationController : MonoBehaviour // TypeDefIndex: 2908
{
	// Fields
	[SerializeField]
	private Animation _bottleWaterFallAnimation; // 0x18
	[SerializeField]
	private string _bottleWaterFallAnimationKey; // 0x20
	[SerializeField]
	private string _bottleWaterIdleAnimationKey; // 0x28
	private readonly Vector3 _startPosition; // 0x30

	// Methods

	[Button]
	// RVA: 0x2983300 Offset: 0x2983300 VA: 0x2983300
	public void ResetAnimations() { }

	[Button]
	// RVA: 0x2983324 Offset: 0x2983324 VA: 0x2983324
	public void StartWaterFallAnimation() { }

	// RVA: 0x2983348 Offset: 0x2983348 VA: 0x2983348
	private void OnDisable() { }

	// RVA: 0x298337C Offset: 0x298337C VA: 0x298337C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]