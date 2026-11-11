public class JoinRequestViewAdapter : ScrollViewAdapter // TypeDefIndex: 2186
{
	// Fields
	[SerializeField]
	private RequestViewFactory _factory; // 0x20
	private List<TeamJoinRequestInfo> _requests; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x345DB64 Offset: 0x345DB64 VA: 0x345DB64 Slot: 5
	public override int get_Count() { }

	// RVA: 0x345DBB0 Offset: 0x345DBB0 VA: 0x345DBB0
	public void SetRequests(List<TeamJoinRequestInfo> requests) { }

	// RVA: 0x345DBB8 Offset: 0x345DBB8 VA: 0x345DBB8 Slot: 7
	public override void Initialize() { }

	// RVA: 0x345DBBC Offset: 0x345DBBC VA: 0x345DBBC Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x345DC50 Offset: 0x345DC50 VA: 0x345DC50 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x345DC9C Offset: 0x345DC9C VA: 0x345DC9C Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x345DECC Offset: 0x345DECC VA: 0x345DECC Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x345DFA0 Offset: 0x345DFA0 VA: 0x345DFA0 Slot: 13
	public override void Reverse() { }

	// RVA: 0x345DFF8 Offset: 0x345DFF8 VA: 0x345DFF8
	public int GetIndexByRequestId(string requestId) { }

	// RVA: 0x345E0A4 Offset: 0x345E0A4 VA: 0x345E0A4
	public void RemoveRequest(int index) { }

	// RVA: 0x345E0FC Offset: 0x345E0FC VA: 0x345E0FC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI