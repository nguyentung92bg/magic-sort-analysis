public abstract class JourneyElementView : BasicView // TypeDefIndex: 4095
{
	// Fields
	[SerializeField]
	protected UIElement _uiElement; // 0x28
	[SerializeField]
	private Transform _progressBarStartPosition; // 0x30
	[SerializeField]
	private Transform _progressBarEndPosition; // 0x38
	protected AssetManager _assetManager; // 0x40
	protected JourneyService _journeyService; // 0x48
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x50

	// Properties
	public Vector3 ProgressBarStartPosition { get; }
	public Vector3 ProgressBarEndPosition { get; }
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	// RVA: 0x3A7EBF4 Offset: 0x3A7EBF4 VA: 0x3A7EBF4
	public Vector3 get_ProgressBarStartPosition() { }

	// RVA: 0x3A7EC10 Offset: 0x3A7EC10 VA: 0x3A7EC10
	public Vector3 get_ProgressBarEndPosition() { }

	[CompilerGenerated]
	// RVA: 0x3A7EC2C Offset: 0x3A7EC2C VA: 0x3A7EC2C Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x3A7EC34 Offset: 0x3A7EC34 VA: 0x3A7EC34 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x3A7EC3C Offset: 0x3A7EC3C VA: 0x3A7EC3C
	public Vector3 get_Size() { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void SetModel(IJourneyItemViewModel journeyItemViewModel);

	// RVA: 0x3A7EC64 Offset: 0x3A7EC64 VA: 0x3A7EC64 Slot: 8
	public override void Recycle() { }

	// RVA: 0x3A7ECB0 Offset: 0x3A7ECB0 VA: 0x3A7ECB0
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts.UI
[CreateAssetMenu(fileName = "JourneyElementViewFactory", menuName = "Factory/JourneyElementViewFactory")]