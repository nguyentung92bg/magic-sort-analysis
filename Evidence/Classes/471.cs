public class WebSocketTeamChatJoinHandler : IWebSocketMessageHandler // TypeDefIndex: 471
{
	// Fields
	private const string Action = "join";
	private const string Channel = "chat";
	[CompilerGenerated]
	private Action<SocketMessage<EmptyContent>> OnJoinMessageReceived; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D2255C Offset: 0x3D2255C VA: 0x3D2255C
	public void add_OnJoinMessageReceived(Action<SocketMessage<EmptyContent>> value) { }

	[CompilerGenerated]
	// RVA: 0x3D22E64 Offset: 0x3D22E64 VA: 0x3D22E64
	public void remove_OnJoinMessageReceived(Action<SocketMessage<EmptyContent>> value) { }

	// RVA: 0x3D25034 Offset: 0x3D25034 VA: 0x3D25034 Slot: 4
	public bool CanHandle(string action, string channel) { }

	// RVA: 0x3D250C8 Offset: 0x3D250C8 VA: 0x3D250C8 Slot: 5
	public void Handle(string message) { }

	// RVA: 0x3D251E4 Offset: 0x3D251E4 VA: 0x3D251E4 Slot: 6
	public void Handle(SocketMessage message) { }

	// RVA: 0x3D25320 Offset: 0x3D25320 VA: 0x3D25320
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Network.Socketv2