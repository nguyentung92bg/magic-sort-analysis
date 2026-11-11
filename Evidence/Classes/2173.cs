public class TeamChatScrollViewAdapter : ScrollViewAdapter // TypeDefIndex: 2173
{
	// Fields
	[SerializeField]
	private TeamChatMessageViewFactory _factory; // 0x20
	[SerializeField]
	private TeamTextChatMessageView _sentMessage; // 0x28
	[SerializeField]
	private TeamTextChatMessageView _receivedMessage; // 0x30
	[SerializeField]
	private TMP_FontAsset[] _fonts; // 0x38
	private List<TeamsChatMessageViewModel> _messages; // 0x40
	private Dictionary<int, Vector3> _elementLookUp; // 0x48

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x3458B0C Offset: 0x3458B0C VA: 0x3458B0C Slot: 5
	public override int get_Count() { }

	// RVA: 0x3456094 Offset: 0x3456094 VA: 0x3456094
	public void SetMessages(List<TeamsChatMessageViewModel> messages, bool insertEmptyMessageToTop) { }

	// RVA: 0x3456968 Offset: 0x3456968 VA: 0x3456968
	public void AddMessage(TeamsChatMessageViewModel message) { }

	// RVA: 0x3456EF4 Offset: 0x3456EF4 VA: 0x3456EF4
	public void RemoveMessage(int index) { }

	// RVA: 0x3456E3C Offset: 0x3456E3C VA: 0x3456E3C
	public int GetIndexOf(string messageId) { }

	// RVA: 0x3458B58 Offset: 0x3458B58 VA: 0x3458B58 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3458BB4 Offset: 0x3458BB4 VA: 0x3458BB4 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x3458C2C Offset: 0x3458C2C VA: 0x3458C2C Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x3458DB8 Offset: 0x3458DB8 VA: 0x3458DB8 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x3458EA4 Offset: 0x3458EA4 VA: 0x3458EA4 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x3458FA4 Offset: 0x3458FA4 VA: 0x3458FA4 Slot: 13
	public override void Reverse() { }

	// RVA: 0x3458FF4 Offset: 0x3458FF4 VA: 0x3458FF4 Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x34576FC Offset: 0x34576FC VA: 0x34576FC
	public bool IsElementHelpableAt(int i) { }

	// RVA: 0x34577A0 Offset: 0x34577A0 VA: 0x34577A0
	public bool HasElementClaimableTicketAt(int i) { }

	// RVA: 0x3457C6C Offset: 0x3457C6C VA: 0x3457C6C
	public bool TryInsertEmptyMessageTop() { }

	// RVA: 0x3457EDC Offset: 0x3457EDC VA: 0x3457EDC
	public bool TryRemoveEmptyMessageFromTop() { }

	// RVA: 0x3458C80 Offset: 0x3458C80 VA: 0x3458C80
	private int GetPrefabTypeByIndex(int index) { }

	// RVA: 0x345639C Offset: 0x345639C VA: 0x345639C
	public void Clear() { }

	// RVA: 0x3459228 Offset: 0x3459228 VA: 0x3459228
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "TeamChatTextMessageViewAnimationConfig", menuName = "Configs/TeamChatTextMessageViewAnimationConfig", order = 1)]