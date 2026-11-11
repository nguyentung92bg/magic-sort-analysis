public class MagicLabPopUpConfig : ScriptableObject // TypeDefIndex: 4024
{
	// Fields
	[SerializeField]
	private List<MagicLabTaskConfigsByType> _magicLabTaskIcons; // 0x18
	[SerializeField]
	public float _progressBarWidth; // 0x20
	[SerializeField]
	public Sprite _progressBarFilledSprite; // 0x28
	[SerializeField]
	public Sprite _progressBarNotFilledSprite; // 0x30
	[SerializeField]
	private AnimationCurve _completedTextScaleCurve; // 0x38
	[SerializeField]
	private float _completedTextStartScale; // 0x40
	[SerializeField]
	private float _completedTextScaleDuration; // 0x44
	[SerializeField]
	private float _taskColorChangeDuration; // 0x48
	[SerializeField]
	[CompilerGenerated]
	private float <ProgressBarMinFillRatio>k__BackingField; // 0x4C
	[SerializeField]
	public Vector3Options StageTaskPopUpOptions; // 0x50
	[SerializeField]
	public float SfxDelay; // 0x58

	// Properties
	public List<MagicLabTaskConfigsByType> MagicLabTaskIcons { get; }
	public float ProgressBarWidth { get; }
	public Sprite ProgressBarFilledSprite { get; }
	public Sprite ProgressBarNotFilledSprite { get; }
	public AnimationCurve CompletedTextScaleCurve { get; }
	public float CompletedTextStartScale { get; }
	public float CompletedTextScaleDuration { get; }
	public float TaskColorChangeDuration { get; }
	public float ProgressBarMinFillRatio { get; set; }

	// Methods

	// RVA: 0x375B49C Offset: 0x375B49C VA: 0x375B49C
	public List<MagicLabTaskConfigsByType> get_MagicLabTaskIcons() { }

	// RVA: 0x375B4A4 Offset: 0x375B4A4 VA: 0x375B4A4
	public float get_ProgressBarWidth() { }

	// RVA: 0x375B4AC Offset: 0x375B4AC VA: 0x375B4AC
	public Sprite get_ProgressBarFilledSprite() { }

	// RVA: 0x375B4B4 Offset: 0x375B4B4 VA: 0x375B4B4
	public Sprite get_ProgressBarNotFilledSprite() { }

	// RVA: 0x375B4BC Offset: 0x375B4BC VA: 0x375B4BC
	public AnimationCurve get_CompletedTextScaleCurve() { }

	// RVA: 0x375B4C4 Offset: 0x375B4C4 VA: 0x375B4C4
	public float get_CompletedTextStartScale() { }

	// RVA: 0x375B4CC Offset: 0x375B4CC VA: 0x375B4CC
	public float get_CompletedTextScaleDuration() { }

	// RVA: 0x375B4D4 Offset: 0x375B4D4 VA: 0x375B4D4
	public float get_TaskColorChangeDuration() { }

	[CompilerGenerated]
	// RVA: 0x375B4DC Offset: 0x375B4DC VA: 0x375B4DC
	public float get_ProgressBarMinFillRatio() { }

	[CompilerGenerated]
	// RVA: 0x375B4E4 Offset: 0x375B4E4 VA: 0x375B4E4
	private void set_ProgressBarMinFillRatio(float value) { }

	// RVA: 0x375B4EC Offset: 0x375B4EC VA: 0x375B4EC
	public MagicLabTaskConfigsByType GetTaskConfigByType(MagicLabTaskType magicLabTaskType) { }

	// RVA: 0x375B678 Offset: 0x375B678 VA: 0x375B678
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts.UI