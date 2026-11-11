public struct TeamArenaLobbyIconViewModel // TypeDefIndex: 2374
{
	// Fields
	public bool IsVisible; // 0x0
	public int NotificationCount; // 0x4
	public bool ShowExclamationMark; // 0x8
	public int UserTeamRank; // 0xC
	public bool IsJoinTextVisible; // 0x10
	public DateTime EventEndDate; // 0x18

	// Properties
	public bool IsNotificationContainerVisible { get; }
	public bool IsRankContainerVisible { get; }

	// Methods

	// RVA: 0x2964B5C Offset: 0x2964B5C VA: 0x2964B5C
	public bool get_IsNotificationContainerVisible() { }

	// RVA: 0x2964B80 Offset: 0x2964B80 VA: 0x2964B80
	public bool get_IsRankContainerVisible() { }
}

// Namespace: Modules.Contexts.Home.TeamArena