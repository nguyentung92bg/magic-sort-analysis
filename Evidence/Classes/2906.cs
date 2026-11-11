public class LobbyEventsService : IService, IInitializable, IDisposable // TypeDefIndex: 2906
{
	// Fields
	private LobbyEventMap _eventMap; // 0x10
	private Dictionary<LobbyIconPositionType, int> _availablePositions; // 0x18

	// Methods

	// RVA: 0x2982B60 Offset: 0x2982B60 VA: 0x2982B60 Slot: 4
	public void Initialize() { }

	// RVA: 0x2982C68 Offset: 0x2982C68 VA: 0x2982C68
	public bool CanShowService(ILobbyShownService service) { }

	// RVA: 0x2982D3C Offset: 0x2982D3C VA: 0x2982D3C
	private HashSet<ILobbyShownService> GetActiveServices(LobbyIconPositionType position, ILobbyShownService service) { }

	// RVA: 0x2982FFC Offset: 0x2982FFC VA: 0x2982FFC
	private string GetDebug(LobbyIconPositionType position, HashSet<ILobbyShownService> lobbyMap) { }

	// RVA: 0x29831E8 Offset: 0x29831E8 VA: 0x29831E8 Slot: 5
	public void Dispose() { }

	// RVA: 0x29831EC Offset: 0x29831EC VA: 0x29831EC
	public void Debug() { }

	// RVA: 0x29832F8 Offset: 0x29832F8 VA: 0x29832F8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts.LobbyEventController