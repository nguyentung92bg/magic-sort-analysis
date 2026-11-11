public class WebSocketHearthBeat : IWebSocketMessageHandler, IInitializable, IDisposable, IIntervalUpdate // TypeDefIndex: 470
{
	// Fields
	private WebSocketManager _webSocketManager; // 0x10
	private CustomUpdater _customUpdater; // 0x18
	private TeamsService _teamsService; // 0x20
	private const float PingInterval = 10;
	private SocketMessage<EmptyContent> _lastSentPing; // 0x28
	private bool _pingPongMatched; // 0x30
	private bool _receivedPong; // 0x31
	[CompilerGenerated]
	private Action<SocketMessage<EmptyContent>> OnPongReceived; // 0x38

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D226BC Offset: 0x3D226BC VA: 0x3D226BC
	public void add_OnPongReceived(Action<SocketMessage<EmptyContent>> value) { }

	[CompilerGenerated]
	// RVA: 0x3D22DB4 Offset: 0x3D22DB4 VA: 0x3D22DB4
	public void remove_OnPongReceived(Action<SocketMessage<EmptyContent>> value) { }

	// RVA: 0x3D2419C Offset: 0x3D2419C VA: 0x3D2419C
	public void .ctor(WebSocketManager webSocketManager, CustomUpdater customUpdater, TeamsService teamsService) { }

	// RVA: 0x3D241FC Offset: 0x3D241FC VA: 0x3D241FC Slot: 7
	public void Initialize() { }

	// RVA: 0x3D2455C Offset: 0x3D2455C VA: 0x3D2455C Slot: 8
	public void Dispose() { }

	// RVA: 0x3D24868 Offset: 0x3D24868 VA: 0x3D24868
	private void OnSocketOpened() { }

	// RVA: 0x3D24870 Offset: 0x3D24870 VA: 0x3D24870
	private void OnSocketClosed(WebSocketStatusCodes code, string reason) { }

	// RVA: 0x3D24908 Offset: 0x3D24908 VA: 0x3D24908 Slot: 4
	public bool CanHandle(string action, string channel) { }

	// RVA: 0x3D249CC Offset: 0x3D249CC VA: 0x3D249CC Slot: 5
	public void Handle(string message) { }

	// RVA: 0x3D24B24 Offset: 0x3D24B24 VA: 0x3D24B24 Slot: 6
	public void Handle(SocketMessage message) { }

	// RVA: 0x3D24C98 Offset: 0x3D24C98 VA: 0x3D24C98 Slot: 9
	public void IntervalUpdate() { }

	// RVA: 0x3D24E50 Offset: 0x3D24E50 VA: 0x3D24E50
	private void SendPing() { }
}

// Namespace: Modules.Infrastructure.Network.Socketv2