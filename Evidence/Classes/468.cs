public class WebSocketTestSuit : MonoBehaviour // TypeDefIndex: 468
{
	// Fields
	[SerializeField]
	private bool _connectToGameServer; // 0x18
	[SerializeField]
	private Button _startTestButton; // 0x20
	[SerializeField]
	private Button _joinButton; // 0x28
	[SerializeField]
	private Button _sendMessageButton; // 0x30
	[SerializeField]
	private Button _closeButton; // 0x38
	[SerializeField]
	private TMP_InputField _input; // 0x40
	[SerializeField]
	private WebSocketTestMessageViewAdapter _messageViewAdapter; // 0x48
	[SerializeField]
	private ScrollBar _scrollBar; // 0x50
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x58
	[SerializeField]
	private GameObject _content; // 0x60
	private BestWebSocketProxy _webSocketProxy; // 0x68
	private WebSocketManager _webSocketManager; // 0x70
	private WebSocketHearthBeat _pingHandler; // 0x78
	private WebSocketTeamChatJoinHandler _joinHandler; // 0x80
	private WebSocketTeamChatMessageHandler _chatMessageHandler; // 0x88

	// Methods

	// RVA: 0x3D220D4 Offset: 0x3D220D4 VA: 0x3D220D4
	private void Start() { }

	// RVA: 0x3D2276C Offset: 0x3D2276C VA: 0x3D2276C
	private void OnJoinButtonSelected() { }

	// RVA: 0x3D22848 Offset: 0x3D22848 VA: 0x3D22848
	private void OnSendMessageButtonSelected() { }

	// RVA: 0x3D22A20 Offset: 0x3D22A20 VA: 0x3D22A20
	private void OnDestroy() { }

	// RVA: 0x3D22FC4 Offset: 0x3D22FC4 VA: 0x3D22FC4
	private void OnStartButtonSelected() { }

	// RVA: 0x3D2332C Offset: 0x3D2332C VA: 0x3D2332C
	private void OnClosedButton() { }

	// RVA: 0x3D23420 Offset: 0x3D23420 VA: 0x3D23420
	private void OnMessageSend(string action, string messageId, string content) { }

	// RVA: 0x3D23B2C Offset: 0x3D23B2C VA: 0x3D23B2C
	private void OnPongReceived(SocketMessage<EmptyContent> message) { }

	// RVA: 0x3D23D7C Offset: 0x3D23D7C VA: 0x3D23D7C
	private void OnJoinMessageReceived(SocketMessage<EmptyContent> message) { }

	// RVA: 0x3D23F98 Offset: 0x3D23F98 VA: 0x3D23F98
	private void OnChatMessageReceived(SocketMessage<TeamChatMessage> message) { }

	// RVA: 0x3D23968 Offset: 0x3D23968 VA: 0x3D23968
	private void AddNewMessage(string message, Color color, bool input) { }

	// RVA: 0x3D24194 Offset: 0x3D24194 VA: 0x3D24194
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Network.Socketv2