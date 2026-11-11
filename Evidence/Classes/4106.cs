public class JourneyScrollViewAdapter : ScrollViewAdapter // TypeDefIndex: 4106
{
	// Fields
	[SerializeField]
	private JourneyElementViewFactory _factory; // 0x20
	private JourneyViewModel _journeyViewModel; // 0x28
	private Dictionary<Type, ExtraElementInfo> _elementSizeByType; // 0x30
	private bool _isViewModelUpdateSupressed; // 0x38

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x3A813A4 Offset: 0x3A813A4 VA: 0x3A813A4 Slot: 5
	public override int get_Count() { }

	// RVA: 0x3A813F4 Offset: 0x3A813F4 VA: 0x3A813F4 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3A7CDC4 Offset: 0x3A7CDC4 VA: 0x3A7CDC4
	public void SuppressViewModelUpdate() { }

	// RVA: 0x3A7CF80 Offset: 0x3A7CF80 VA: 0x3A7CF80
	public void ResumeViewModelUpdate() { }

	// RVA: 0x3A81708 Offset: 0x3A81708 VA: 0x3A81708
	public void SetViewModel(JourneyViewModel journeyViewModel) { }

	// RVA: 0x3A81710 Offset: 0x3A81710 VA: 0x3A81710 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x3A8177C Offset: 0x3A8177C VA: 0x3A8177C Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x3A81824 Offset: 0x3A81824 VA: 0x3A81824 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x3A819D0 Offset: 0x3A819D0 VA: 0x3A819D0 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x3A81ADC Offset: 0x3A81ADC VA: 0x3A81ADC Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x3A81AE0 Offset: 0x3A81AE0 VA: 0x3A81AE0 Slot: 13
	public override void Reverse() { }

	// RVA: 0x3A7EB40 Offset: 0x3A7EB40 VA: 0x3A7EB40
	public Vector3 GetProgressBarStartPosByIndex(int index) { }

	// RVA: 0x3A7EA98 Offset: 0x3A7EA98 VA: 0x3A7EA98
	public Vector3 GetProgressBarEndPosByIndex(int index) { }

	// RVA: 0x3A81B38 Offset: 0x3A81B38 VA: 0x3A81B38
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts.UI