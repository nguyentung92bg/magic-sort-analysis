public class MergeMiniGameCollectibleItemAnimationConfig : ScriptableObject // TypeDefIndex: 3669
{
	// Fields
	[Header("Default Collect")]
	public float ItemScaleOutTime; // 0x18
	public float ItemScaleOutDuration; // 0x1C
	public Vector3 ItemScaleOutValue; // 0x20
	public AnimationCurve ItemScaleOutCurve; // 0x30
	public float ItemRevealAnimationTime; // 0x38
	public Vector3 RevealInitialTransform; // 0x3C
	public float DefaultCollectibleItemAnimationUnlockTime; // 0x48
	public float DefaultCollectibleAnimationDuration; // 0x4C
	[Header("Energy Collect")]
	public float EnergyCollectDuration; // 0x50
	public Vector3 EnergyCollectAPoint; // 0x54
	public Vector3 EnergyCollectBPoint; // 0x60
	public AnimationCurve EnergyCollectCurve; // 0x70

	// Methods

	// RVA: 0x410A7C8 Offset: 0x410A7C8 VA: 0x410A7C8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board