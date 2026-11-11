public class TeamJoinRequestsView : MonoBehaviour // TypeDefIndex: 2206
{
	// Fields
	[SerializeField]
	private Button[] _closeButtons; // 0x18
	[SerializeField]
	private GameObject _noRequestView; // 0x20
	[SerializeField]
	private JoinRequestViewAdapter _viewAdapter; // 0x28
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x30
	[SerializeField]
	private ScrollBar _scrollBar; // 0x38

	// Methods

	// RVA: 0x2EFD0F8 Offset: 0x2EFD0F8 VA: 0x2EFD0F8
	public void Show(List<TeamJoinRequestInfo> requests) { }

	// RVA: 0x2EFEE64 Offset: 0x2EFEE64 VA: 0x2EFEE64
	private void Awake() { }

	// RVA: 0x2EFEFF0 Offset: 0x2EFEFF0 VA: 0x2EFEFF0
	private void OnDestroy() { }

	// RVA: 0x2EFF17C Offset: 0x2EFF17C VA: 0x2EFF17C
	private void OnCloseSelected() { }

	// RVA: 0x2EFF1A0 Offset: 0x2EFF1A0 VA: 0x2EFF1A0
	private void RemoveJoinRequest(string requestId) { }

	// RVA: 0x2EFF278 Offset: 0x2EFF278 VA: 0x2EFF278
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI