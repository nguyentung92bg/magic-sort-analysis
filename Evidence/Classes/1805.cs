public class WindQuestMultipleGoalUI : MonoBehaviour // TypeDefIndex: 1805
{
	// Fields
	[SerializeField]
	private SpriteRenderer _progressBarFill; // 0x18
	[SerializeField]
	private float _progressBarMaxWidth; // 0x20
	[SerializeField]
	private List<WindQuestGoalSectionView> _goalSections; // 0x28
	[SerializeField]
	private TMP_Text _progressText; // 0x30
	[SerializeField]
	private WindQuestTaskView _taskView; // 0x38

	// Methods

	// RVA: 0x2D984C8 Offset: 0x2D984C8 VA: 0x2D984C8
	public Tween Show(WindQuestViewModel viewModel, WindQuestAnimationConfig animationConfig) { }

	// RVA: 0x2D980DC Offset: 0x2D980DC VA: 0x2D980DC
	public void Hide() { }

	// RVA: 0x2D9A59C Offset: 0x2D9A59C VA: 0x2D9A59C
	private Tween GetFillTween(List<WindQuestGoalViewModel> goals, int sectionCount, int fromProgress, int toProgress, WindQuestAnimationConfig animationConfig, int lastGoalTarget) { }

	// RVA: 0x2D9A3E4 Offset: 0x2D9A3E4 VA: 0x2D9A3E4
	private float GetFillRatio(List<WindQuestGoalViewModel> goals, float progress) { }

	// RVA: 0x2D9A55C Offset: 0x2D9A55C VA: 0x2D9A55C
	private void SetFill(float fillRatio) { }

	// RVA: 0x2D98B38 Offset: 0x2D98B38 VA: 0x2D98B38
	public void Dispose() { }

	// RVA: 0x2D9A800 Offset: 0x2D9A800 VA: 0x2D9A800
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]