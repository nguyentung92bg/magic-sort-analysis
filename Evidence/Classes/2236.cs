public class TeamChatEventController : MonoBehaviour // TypeDefIndex: 2236
{
	// Fields
	[SerializeField]
	private TeamQuestTeamChatElementView _teamQuestInfoView; // 0x18
	[SerializeField]
	private TeamArenaInfoView _teamArenaInfoView; // 0x20
	private TeamQuestService _teamQuestService; // 0x28
	private TeamArenaService _teamArenaService; // 0x30
	private ITeamChatEventView _activeView; // 0x38
	[CompilerGenerated]
	private Action OnEventViewsUpdated; // 0x40

	// Methods

	[CompilerGenerated]
	// RVA: 0x2F059F0 Offset: 0x2F059F0 VA: 0x2F059F0
	public void add_OnEventViewsUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x2F05A8C Offset: 0x2F05A8C VA: 0x2F05A8C
	public void remove_OnEventViewsUpdated(Action value) { }

	// RVA: 0x2F05B28 Offset: 0x2F05B28 VA: 0x2F05B28
	public void Initialize() { }

	// RVA: 0x2F05DF8 Offset: 0x2F05DF8 VA: 0x2F05DF8
	public void Dispose() { }

	// RVA: 0x2F05F3C Offset: 0x2F05F3C VA: 0x2F05F3C
	public void Show() { }

	// RVA: 0x2F05F40 Offset: 0x2F05F40 VA: 0x2F05F40
	public void Hide() { }

	// RVA: 0x2F05D10 Offset: 0x2F05D10 VA: 0x2F05D10
	private void RefreshView() { }

	// RVA: 0x2F05F44 Offset: 0x2F05F44 VA: 0x2F05F44
	public bool IsThereAnActiveEvent() { }

	// RVA: 0x2F05FF4 Offset: 0x2F05FF4 VA: 0x2F05FF4
	public bool IsEventElementExpanded() { }

	// RVA: 0x2F060A0 Offset: 0x2F060A0 VA: 0x2F060A0
	private void OnTeamQuestStateChanged() { }

	// RVA: 0x2F060A4 Offset: 0x2F060A4 VA: 0x2F060A4
	private void InitializeTeamArenaView() { }

	// RVA: 0x2F060A8 Offset: 0x2F060A8 VA: 0x2F060A8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]