public interface IEventSender // TypeDefIndex: 5269
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SendEvent(Event eventToSend);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendEventWithoutExtraParameter(Event eventToSend);
}

// Namespace: Modules.Contexts.Application.Events.Scripts