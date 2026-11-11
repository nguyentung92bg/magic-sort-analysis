public class WebSocketManager : IInitializable, IDisposable, IIntervalUpdate // TypeDefIndex: 480
{
	// Fields
	private Uri _uri; // 0x10
	private IWebSocketProxy _webSocketProxy; // 0x18
	private CustomUpdater _customUpdater; // 0x20
	private WebSocketHearthBeat _hearthBeat; // 0x28
	private List<IWebSocketMessageHandler> _handlers; // 0x30
	private int _reconnectAttemptsMade; // 0x38
	private const float ReconnectAttemptDelay = 5;
	private const float MaxReconnectDelay = 120;
	private bool _reconnecting; // 0x3C
	private bool _pauseReconnect; // 0x3D
	private DateTime _lastReconnectAttemptTime; // 0x40
	[CompilerGenerated]
	private Action<string, string, string> OnMessageSend; // 0x48
	[CompilerGenerated]
	private Action OnSocketOpenedEvent; // 0x50
	[CompilerGenerated]
	private Action<WebSocketStatusCodes, string> OnSocketClosedEvent; // 0x58
	[CompilerGenerated]
	private Action OnReconnecting; // 0x60
	[CompilerGenerated]
	private Action OnReconnected; // 0x68

	// Properties
	public bool IsSocketOpen { get; }

	// Methods

	// RVA: 0x3D24DA0 Offset: 0x3D24DA0 VA: 0x3D24DA0
	public bool get_IsSocketOpen() { }

	[CompilerGenerated]
	// RVA: 0x3D224AC Offset: 0x3D224AC VA: 0x3D224AC
	public void add_OnMessageSend(Action<string, string, string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D22D04 Offset: 0x3D22D04 VA: 0x3D22D04
	public void remove_OnMessageSend(Action<string, string, string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D242FC Offset: 0x3D242FC VA: 0x3D242FC
	public void add_OnSocketOpenedEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3D24658 Offset: 0x3D24658 VA: 0x3D24658
	public void remove_OnSocketOpenedEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3D24398 Offset: 0x3D24398 VA: 0x3D24398
	public void add_OnSocketClosedEvent(Action<WebSocketStatusCodes, string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D246F4 Offset: 0x3D246F4 VA: 0x3D246F4
	public void remove_OnSocketClosedEvent(Action<WebSocketStatusCodes, string> value) { }

	[CompilerGenerated]
	// RVA: 0x3D25A38 Offset: 0x3D25A38 VA: 0x3D25A38
	public void add_OnReconnecting(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3D25AD4 Offset: 0x3D25AD4 VA: 0x3D25AD4
	public void remove_OnReconnecting(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3D25B70 Offset: 0x3D25B70 VA: 0x3D25B70
	public void add_OnReconnected(Action value) { }

	[CompilerGenerated]
	// RVA: 0x3D25C0C Offset: 0x3D25C0C VA: 0x3D25C0C
	public void remove_OnReconnected(Action value) { }

	// RVA: 0x3D25CA8 Offset: 0x3D25CA8 VA: 0x3D25CA8
	public void .ctor(IWebSocketProxy webSocketProxy, CustomUpdater customUpdater, WebSocketHearthBeat hearthBeat) { }

	// RVA: 0x3D25D08 Offset: 0x3D25D08 VA: 0x3D25D08 Slot: 4
	public void Initialize() { }

	// RVA: 0x3D2622C Offset: 0x3D2622C VA: 0x3D2622C Slot: 5
	public void Dispose() { }

	// RVA: -1 Offset: -1
	public T GetHandler<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x23517F8 Offset: 0x23517F8 VA: 0x23517F8
	|-WebSocketManager.GetHandler<object>
	*/

	// RVA: 0x3D26544 Offset: 0x3D26544 VA: 0x3D26544
	private void OnSocketOpened() { }

	// RVA: 0x3D265EC Offset: 0x3D265EC VA: 0x3D265EC
	private void OnMessageReceived(string message) { }

	// RVA: 0x3D2695C Offset: 0x3D2695C VA: 0x3D2695C
	private void OnBinaryMessageReceived(BufferSegment bufferSegment) { }

	// RVA: 0x3D26C94 Offset: 0x3D26C94 VA: 0x3D26C94
	private void OnSocketClosed(WebSocketStatusCodes statusCode, string message) { }

	// RVA: 0x3D232CC Offset: 0x3D232CC VA: 0x3D232CC
	public void Start(Uri uri) { }

	// RVA: -1 Offset: -1
	public void SendMessage<T>(string action, string chatId, string channel, T content, int order = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2351CB8 Offset: 0x2351CB8 VA: 0x2351CB8
	|-WebSocketManager.SendMessage<EmptyContent>
	|
	|-RVA: 0x2351F34 Offset: 0x2351F34 VA: 0x2351F34
	|-WebSocketManager.SendMessage<object>
	*/

	// RVA: -1 Offset: -1
	public void SendMessage<T>(SocketMessage<T> message) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x23519A4 Offset: 0x23519A4 VA: 0x23519A4
	|-WebSocketManager.SendMessage<EmptyContent>
	|
	|-RVA: 0x2351B2C Offset: 0x2351B2C VA: 0x2351B2C
	|-WebSocketManager.SendMessage<object>
	*/

	// RVA: 0x3D23360 Offset: 0x3D23360 VA: 0x3D23360
	public void Disconnect(bool forceCleanUp = False) { }

	// RVA: 0x3D26CB0 Offset: 0x3D26CB0 VA: 0x3D26CB0
	private void Connect() { }

	// RVA: 0x3D26DC8 Offset: 0x3D26DC8 VA: 0x3D26DC8
	private void CleanUpSocket() { }

	// RVA: 0x3D248DC Offset: 0x3D248DC VA: 0x3D248DC
	public void TryReconnect() { }

	// RVA: 0x3D26E70 Offset: 0x3D26E70 VA: 0x3D26E70 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3D27024 Offset: 0x3D27024 VA: 0x3D27024
	public void Pause() { }

	// RVA: 0x3D27030 Offset: 0x3D27030 VA: 0x3D27030
	public void Unpause() { }
}

// Namespace: Modules.Infrastructure.Network.Socketv2.Flatbuffers