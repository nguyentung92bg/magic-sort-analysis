public interface IWebSocketMessageHandler // TypeDefIndex: 469
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool CanHandle(string action, string channel);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Handle(string message);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Handle(SocketMessage message);
}

// Namespace: Modules.Infrastructure.Network.Socketv2