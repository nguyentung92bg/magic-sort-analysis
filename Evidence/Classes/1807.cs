public class WindQuestOneGoalUI : MonoBehaviour // TypeDefIndex: 1807
{
	// Fields
	[SerializeField]
	private SpriteRenderer _progressBarFill; // 0x18
	[SerializeField]
	private float _progressBarMaxWidth; // 0x20
	[SerializeField]
	[Range(0, 1)]
	private float _maxFillRatio; // 0x24
	[SerializeField]
	private WindQuestGoalRewardView _goalRewardView; // 0x28
	[SerializeField]
	private TMP_Text _progressText; // 0x30
	[SerializeField]
	private TMP_Text _maxGoalText; // 0x38
	[SerializeField]
	private WindQuestTaskView _taskView; // 0x40

	// Methods

	// RVA: 0x2D98B14 Offset: 0x2D98B14 VA: 0x2D98B14
	public void Dispose() { }

	// RVA: 0x2D98100 Offset: 0x2D98100 VA: 0x2D98100
	public Tween Show(WindQuestViewModel viewModel, WindQuestAnimationConfig animationConfig) { }

	// RVA: 0x2D980B8 Offset: 0x2D980B8 VA: 0x2D980B8
	public void Hide() { }

	// RVA: 0x2D9AAD4 Offset: 0x2D9AAD4 VA: 0x2D9AAD4
	private Tween GetFillTween(int fromProgress, int toProgress, int goal, bool shouldPlayGrantAnimation, WindQuestAnimationConfig animationConfig) { }

	// RVA: 0x2D9AA58 Offset: 0x2D9AA58 VA: 0x2D9AA58
	private float GetFillRatio(float progress, int goal) { }

	// RVA: 0x2D9AA94 Offset: 0x2D9AA94 VA: 0x2D9AA94
	private void SetFill(float fillRatio) { }

	// RVA: 0x2D9ACD0 Offset: 0x2D9ACD0 VA: 0x2D9ACD0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WindQuest.Scripts