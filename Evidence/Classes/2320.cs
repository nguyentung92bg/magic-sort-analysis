public abstract class LeaderboardElementView : BasicView // TypeDefIndex: 2320
{
	// Fields
	[SerializeField]
	protected UIElement _uiElement; // 0x28
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x30

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2DE07A4 Offset: 0x2DE07A4 VA: 0x2DE07A4 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2DE07AC Offset: 0x2DE07AC VA: 0x2DE07AC Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x2DE07B4 Offset: 0x2DE07B4 VA: 0x2DE07B4
	public Vector3 get_Size() { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void SetModel(ITeamQuestLeaderboardItemViewModel teamQuestLeaderboardItemViewModel);

	// RVA: 0x2DE07DC Offset: 0x2DE07DC VA: 0x2DE07DC Slot: 8
	public override void Recycle() { }

	// RVA: 0x2DE0828 Offset: 0x2DE0828 VA: 0x2DE0828
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard