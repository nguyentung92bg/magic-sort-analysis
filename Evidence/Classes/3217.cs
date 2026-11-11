public class TreasureDrillPopUpConfig : ScriptableObject // TypeDefIndex: 3217
{
	// Fields
	[SerializeField]
	private List<TreasureDrillTaskConfigsByType> _treasureDrillTaskIcons; // 0x18
	[SerializeField]
	public float _progressBarWidth; // 0x20
	[SerializeField]
	public Sprite _progressBarFilledSprite; // 0x28
	[SerializeField]
	public Sprite _progressBarNotFilledSprite; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarMinFillRatio>k__BackingField; // 0x38
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <ProgressBarMinMaxFillValue>k__BackingField; // 0x3C
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarMaxFillValueForFullFill>k__BackingField; // 0x44
	[SerializeField]
	private float _completedTextStartScale; // 0x48
	[SerializeField]
	private float _completedTextScaleDuration; // 0x4C
	[SerializeField]
	private AnimationCurve _completedTextScaleCurve; // 0x50

	// Properties
	public List<TreasureDrillTaskConfigsByType> TreasureDrillTaskIcons { get; }
	public float ProgressBarWidth { get; }
	public Sprite ProgressBarFilledSprite { get; }
	public Sprite ProgressBarNotFilledSprite { get; }
	public float ProgressBarMinFillRatio { get; set; }
	public Vector2 ProgressBarMinMaxFillValue { get; set; }
	public float ProgressBarMaxFillValueForFullFill { get; set; }
	public float CompletedTextStartScale { get; }
	public float CompletedTextScaleDuration { get; }
	public AnimationCurve CompletedTextScaleCurve { get; }

	// Methods

	// RVA: 0x330CB60 Offset: 0x330CB60 VA: 0x330CB60
	public List<TreasureDrillTaskConfigsByType> get_TreasureDrillTaskIcons() { }

	// RVA: 0x330CB68 Offset: 0x330CB68 VA: 0x330CB68
	public float get_ProgressBarWidth() { }

	// RVA: 0x330CB70 Offset: 0x330CB70 VA: 0x330CB70
	public Sprite get_ProgressBarFilledSprite() { }

	// RVA: 0x330CB78 Offset: 0x330CB78 VA: 0x330CB78
	public Sprite get_ProgressBarNotFilledSprite() { }

	[CompilerGenerated]
	// RVA: 0x330CB80 Offset: 0x330CB80 VA: 0x330CB80
	public float get_ProgressBarMinFillRatio() { }

	[CompilerGenerated]
	// RVA: 0x330CB88 Offset: 0x330CB88 VA: 0x330CB88
	private void set_ProgressBarMinFillRatio(float value) { }

	[CompilerGenerated]
	// RVA: 0x330CB90 Offset: 0x330CB90 VA: 0x330CB90
	public Vector2 get_ProgressBarMinMaxFillValue() { }

	[CompilerGenerated]
	// RVA: 0x330CB98 Offset: 0x330CB98 VA: 0x330CB98
	private void set_ProgressBarMinMaxFillValue(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x330CBA0 Offset: 0x330CBA0 VA: 0x330CBA0
	public float get_ProgressBarMaxFillValueForFullFill() { }

	[CompilerGenerated]
	// RVA: 0x330CBA8 Offset: 0x330CBA8 VA: 0x330CBA8
	private void set_ProgressBarMaxFillValueForFullFill(float value) { }

	// RVA: 0x330CBB0 Offset: 0x330CBB0 VA: 0x330CBB0
	public float get_CompletedTextStartScale() { }

	// RVA: 0x330CBB8 Offset: 0x330CBB8 VA: 0x330CBB8
	public float get_CompletedTextScaleDuration() { }

	// RVA: 0x330CBC0 Offset: 0x330CBC0 VA: 0x330CBC0
	public AnimationCurve get_CompletedTextScaleCurve() { }

	// RVA: 0x330CBC8 Offset: 0x330CBC8 VA: 0x330CBC8
	public TreasureDrillTaskConfigsByType GetTaskConfigByType(TreasureDrillTaskType treasureDrillTaskType) { }

	// RVA: 0x330CD54 Offset: 0x330CD54 VA: 0x330CD54
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]