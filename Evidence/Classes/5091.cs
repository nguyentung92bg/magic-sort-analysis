public class RewardPopupAnimationConfig : ScriptableObject // TypeDefIndex: 5091
{
	// Fields
	[SerializeField]
	public float rewardMoveDuration; // 0x18
	[SerializeField]
	public Vector3 rewardScaleAmount; // 0x1C
	[SerializeField]
	public Vector3 initialRewardScale; // 0x28
	[SerializeField]
	public float tapToClaimScaleDuration; // 0x34
	[SerializeField]
	public float hideDelayDuration; // 0x38
	[SerializeField]
	public AnimationCurve collectableMoveAnimationCurve; // 0x40
	[SerializeField]
	public float scaleDelay; // 0x48
	[SerializeField]
	public float backgroundFadeInDuration; // 0x4C
	[SerializeField]
	public float backgroundFadeInDelay; // 0x50

	// Methods

	// RVA: 0x3CE7DBC Offset: 0x3CE7DBC VA: 0x3CE7DBC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Reward.Scripts