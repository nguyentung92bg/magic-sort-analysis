public class WindQuestGoalSectionView : MonoBehaviour // TypeDefIndex: 1801
{
	// Fields
	[SerializeField]
	private TMP_Text _goalCountText; // 0x18
	[SerializeField]
	private WindQuestGoalRewardView _goalRewardView; // 0x20
	[Range(0, 1)]
	[SerializeField]
	private float _visualStartRatio; // 0x28
	[SerializeField]
	private bool _isLastGoal; // 0x2C

	// Properties
	public float VisualStartRatio { get; }

	// Methods

	// RVA: 0x2D99964 Offset: 0x2D99964 VA: 0x2D99964
	public float get_VisualStartRatio() { }

	// RVA: 0x2D9996C Offset: 0x2D9996C VA: 0x2D9996C
	public void Show(WindQuestGoalViewModel goalViewModel, bool showAsGranted) { }

	// RVA: 0x2D999EC Offset: 0x2D999EC VA: 0x2D999EC
	public void PlayGrantAnimation(WindQuestAnimationConfig animationConfig) { }

	// RVA: 0x2D99A0C Offset: 0x2D99A0C VA: 0x2D99A0C
	public void Dispose() { }

	// RVA: 0x2D99A30 Offset: 0x2D99A30 VA: 0x2D99A30
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]