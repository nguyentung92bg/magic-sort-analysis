public class FireworkAnimationConfig : ScriptableObject // TypeDefIndex: 1704
{
	// Fields
	public float HideTime; // 0x18
	public float LaunchDelayBetweenFireworks; // 0x1C
	public float BaseDestroyTime; // 0x20
	public float FireworkLaunchTime; // 0x24
	public float FireworkDurationNoise; // 0x28
	public float HitTimeOffSet; // 0x2C
	[Header("Scale Up")]
	public float FireworkScaleUpTime; // 0x30
	public Vector3 FireworkScaleUpVal; // 0x34
	public float FireworkScaleUpDuration; // 0x40
	public AnimationCurve FireworkScaleUpCurve; // 0x48
	[Header("Scale Down")]
	public float FireworkScaleDownTime; // 0x50
	public Vector3 FireworkScaleDownVal; // 0x54
	public float FireworkScaleDownDuration; // 0x60
	public AnimationCurve FireworkScaleDownCurve; // 0x68
	[Header("Path")]
	public float MoveToTargetBaseDuration; // 0x70
	public AnimationCurve MoveToTargetCurve; // 0x78
	public float FirebaseReversedHideTime; // 0x80
	public float LaunchFactor; // 0x84
	public float MinLaunchLength; // 0x88
	public float MaxLaunchLength; // 0x8C
	public float ApproachFactor; // 0x90
	public float MinApproachLength; // 0x94
	public float MaxApproachLength; // 0x98
	public float ArcHeight; // 0x9C
	public MaxMin ArcHeightRandomness; // 0xA0
	public float MaxTurnDegreesPerSecond; // 0xA8
	public float NarrowArcHorizontalThreshold; // 0xAC
	public float NarrowArcShiftAmount; // 0xB0
	public float FireworkTrailDisableTime; // 0xB4

	// Methods

	// RVA: 0x2752AB0 Offset: 0x2752AB0 VA: 0x2752AB0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework