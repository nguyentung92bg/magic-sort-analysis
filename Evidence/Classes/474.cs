public class WebSocketTeamChatMessageHandler : IWebSocketMessageHandler // TypeDefIndex: 474
{
	// Fields
	private const string Action = "message";
	private const string ChatChannel = "chat";
	private const string SystemChannel = "system";
	[CompilerGenerated]
	private Action<SocketMessage<TeamChatMessage>> OnTeamChatMessageReceived; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D2260C Offset: 0x3D2260C VA: 0x3D2260C
	public void add_OnTeamChatMessageReceived(Action<SocketMessage<TeamChatMessage>> value) { }

	[CompilerGenerated]
	// RVA: 0x3D22F14 Offset: 0x3D22F14 VA: 0x3D22F14
	public void remove_OnTeamChatMessageReceived(Action<SocketMessage<TeamChatMessage>> value) { }

	// RVA: 0x3D254F8 Offset: 0x3D254F8 VA: 0x3D254F8 Slot: 4
	public bool CanHandle(string action, string channel) { }

	// RVA: 0x3D255BC Offset: 0x3D255BC VA: 0x3D255BC Slot: 5
	public void Handle(string message) { }

	// RVA: 0x3D25728 Offset: 0x3D25728 VA: 0x3D25728 Slot: 6
	public void Handle(SocketMessage message) { }

	// RVA: 0x3D25900 Offset: 0x3D25900 VA: 0x3D25900
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Network.Socketv2