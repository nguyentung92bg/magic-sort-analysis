public class MagicLabTaskView : MonoBehaviour // TypeDefIndex: 4032
{
	// Fields
	private MagicLabTaskType _magicLabTaskType; // 0x18
	[SerializeField]
	private TextMeshPro _taskInformationText; // 0x20
	[SerializeField]
	private TextMeshPro _taskInformationTextCompleted; // 0x28
	[SerializeField]
	private TextMeshPro _completedHeaderText; // 0x30
	[SerializeField]
	private MagicLabProgressBar _magicLabProgressBar; // 0x38
	[SerializeField]
	private SpriteRenderer _taskSpriteRenderer; // 0x40
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0x48
	[SerializeField]
	private Button _infoTextButton; // 0x50
	[SerializeField]
	private MagicLabPopUpConfig _magicLabPopUpConfig; // 0x58
	[SerializeField]
	private MagicLabBottleView _magicLabBottleView; // 0x60
	[SerializeField]
	private TextMeshPro _infoText; // 0x68
	[SerializeField]
	private SpriteRenderer _background; // 0x70
	[SerializeField]
	private SpriteRenderer _rightBackground; // 0x78
	[SerializeField]
	private SpriteRenderer _greenTick; // 0x80
	private bool _isStageOfTaskComplete; // 0x88
	private bool _infoTextVisible; // 0x89

	// Methods

	// RVA: 0x375B9D0 Offset: 0x375B9D0 VA: 0x375B9D0
	public void Initialize(MagicLabTaskViewModel magicLabTaskViewModel) { }

	// RVA: 0x3757A10 Offset: 0x3757A10 VA: 0x3757A10
	public void PreStageCompleteAnimation() { }

	// RVA: 0x3757A84 Offset: 0x3757A84 VA: 0x3757A84
	public void PreTaskCompleteAnimation() { }

	[Button]
	// RVA: 0x3757B88 Offset: 0x3757B88 VA: 0x3757B88
	public Sequence PlayTaskCompleteAnimation() { }

	// RVA: 0x375C63C Offset: 0x375C63C VA: 0x375C63C
	public void CloseCap() { }

	// RVA: 0x375C4C8 Offset: 0x375C4C8 VA: 0x375C4C8
	public void PlayBottlePour(int index) { }

	// RVA: 0x375C54C Offset: 0x375C54C VA: 0x375C54C
	public void PreGreenTickAnimation() { }

	// RVA: 0x375C114 Offset: 0x375C114 VA: 0x375C114
	public Tween PlayGreenTick() { }

	// RVA: 0x375C654 Offset: 0x375C654 VA: 0x375C654
	public void ShowInfoTextOnCompletedTask() { }

	// RVA: 0x3758CA4 Offset: 0x3758CA4 VA: 0x3758CA4
	public void Dispose() { }

	// RVA: 0x375C0EC Offset: 0x375C0EC VA: 0x375C0EC
	public void ResetBottle() { }

	// RVA: 0x375C958 Offset: 0x375C958 VA: 0x375C958
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x375C960 Offset: 0x375C960 VA: 0x375C960
	private void <PlayTaskCompleteAnimation>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x375C9F4 Offset: 0x375C9F4 VA: 0x375C9F4
	private void <PlayTaskCompleteAnimation>b__19_1() { }

	[CompilerGenerated]
	// RVA: 0x375CA0C Offset: 0x375CA0C VA: 0x375CA0C
	private void <ShowInfoTextOnCompletedTask>b__24_0() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts.UI