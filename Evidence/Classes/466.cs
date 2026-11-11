public class WebSocketTestMessageViewAdapter : ScrollViewAdapter // TypeDefIndex: 466
{
	// Fields
	[SerializeField]
	private WebSocketTestMessageViewFactory _factory; // 0x20
	private List<WebSocketTestMessageViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x3D21CE0 Offset: 0x3D21CE0 VA: 0x3D21CE0 Slot: 5
	public override int get_Count() { }

	// RVA: 0x3D21D2C Offset: 0x3D21D2C VA: 0x3D21D2C Slot: 7
	public override void Initialize() { }

	// RVA: 0x3D21D30 Offset: 0x3D21D30 VA: 0x3D21D30
	public void SetViewModels(List<WebSocketTestMessageViewModel> viewModels) { }

	// RVA: 0x3D21D38 Offset: 0x3D21D38 VA: 0x3D21D38
	public void AddNewViewModel(WebSocketTestMessageViewModel viewModel) { }

	// RVA: 0x3D21DE8 Offset: 0x3D21DE8 VA: 0x3D21DE8 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x3D21E54 Offset: 0x3D21E54 VA: 0x3D21E54 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x3D21EA0 Offset: 0x3D21EA0 VA: 0x3D21EA0 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x3D21F60 Offset: 0x3D21F60 VA: 0x3D21F60 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x3D22034 Offset: 0x3D22034 VA: 0x3D22034 Slot: 13
	public override void Reverse() { }

	// RVA: 0x3D22084 Offset: 0x3D22084 VA: 0x3D22084
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Network.Socketv2
[CreateAssetMenu(fileName = "TestMessageFactory", menuName = "Factory/WebSocketTestMessageFactory")]