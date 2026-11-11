public class StrikeShowRewardsView : MonoBehaviour // TypeDefIndex: 2515
{
	// Fields
	[SerializeField]
	private WatchAndWinDynamicRewardView[] _rewardSlots; // 0x18
	[SerializeField]
	private StrikeShowRewardLayoutConfig _layoutConfig; // 0x20
	private float _currentLayoutScale; // 0x28
	private int _visibleSlotCount; // 0x2C

	// Methods

	// RVA: 0x2AFB44C Offset: 0x2AFB44C VA: 0x2AFB44C
	public void SetRewards(List<RewardModel> rewards) { }

	// RVA: 0x2AFBC8C Offset: 0x2AFBC8C VA: 0x2AFBC8C
	public void SetRewards(List<RewardModel> rewards, bool isMiddle) { }

	// RVA: 0x2AFF470 Offset: 0x2AFF470 VA: 0x2AFF470
	public void PrepareIntro(float startScaleRatio, float startAlpha) { }

	// RVA: 0x2AFF9AC Offset: 0x2AFF9AC VA: 0x2AFF9AC
	public Sequence BuildIntroSequence(float scaleDuration, float delayBetweenRewards) { }

	// RVA: 0x2AFFC14 Offset: 0x2AFFC14 VA: 0x2AFFC14
	public void RestoreIntroState() { }

	// RVA: 0x2AFB454 Offset: 0x2AFB454 VA: 0x2AFB454
	public void Dispose() { }

	// RVA: 0x2B00230 Offset: 0x2B00230 VA: 0x2B00230
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI