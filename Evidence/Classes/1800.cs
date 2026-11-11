public class WindQuestGoalRewardView : MonoBehaviour // TypeDefIndex: 1800
{
	// Fields
	[SerializeField]
	private WatchAndWinDynamicRewardView _rewardView; // 0x18
	[SerializeField]
	private GameObject _completedCheck; // 0x20
	[SerializeField]
	private GameObject _completedText; // 0x28
	private RewardModel _currentReward; // 0x30

	// Methods

	// RVA: 0x2D99274 Offset: 0x2D99274 VA: 0x2D99274
	public void Show(RewardModel reward, bool showAsGranted, bool isLastReward = False) { }

	// RVA: 0x2D99444 Offset: 0x2D99444 VA: 0x2D99444
	public void PlayGrantAnimation(WindQuestAnimationConfig animationConfig, bool isLastReward) { }

	// RVA: 0x2D9983C Offset: 0x2D9983C VA: 0x2D9983C
	public void Dispose() { }

	// RVA: 0x2D99858 Offset: 0x2D99858 VA: 0x2D99858
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WindQuest.Scripts