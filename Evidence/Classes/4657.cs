public abstract class ChampionsLeagueLeaderboardElementView : BasicView // TypeDefIndex: 4657
{
	// Fields
	[SerializeField]
	protected UIElement _uiElement; // 0x28
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x30

	// Properties
	public Vector3 Size { get; }
	public override int Id { get; set; }

	// Methods

	// RVA: 0x3A76C10 Offset: 0x3A76C10 VA: 0x3A76C10
	public Vector3 get_Size() { }

	[CompilerGenerated]
	// RVA: 0x3A76C38 Offset: 0x3A76C38 VA: 0x3A76C38 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x3A76C40 Offset: 0x3A76C40 VA: 0x3A76C40 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x3A76C48 Offset: 0x3A76C48 VA: 0x3A76C48 Slot: 8
	public override void Recycle() { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void SetModel(IChampionsLeagueLeaderboardViewModel championsLeagueLeaderboardViewModel);

	// RVA: 0x3A76C94 Offset: 0x3A76C94 VA: 0x3A76C94 Slot: 10
	public virtual void SetRankDisplay(int newRankNumber) { }

	// RVA: 0x3A76C98 Offset: 0x3A76C98 VA: 0x3A76C98 Slot: 11
	public virtual void SetHatCountForRankUpAnim(int oldHatCount) { }

	// RVA: 0x3A76C9C Offset: 0x3A76C9C VA: 0x3A76C9C Slot: 12
	public virtual void UpdateHatCountTween(int oldHatCount, int newHatCount, float calculateScrollDuration) { }

	// RVA: 0x3A76CA0 Offset: 0x3A76CA0 VA: 0x3A76CA0 Slot: 13
	public virtual void AnimateRankChange(int currentRankIndex, int newRankIndex, float calculateScrollDuration) { }

	// RVA: 0x3A76180 Offset: 0x3A76180 VA: 0x3A76180
	public void AddSortingGroup(string popup, int i) { }

	// RVA: 0x3A76390 Offset: 0x3A76390 VA: 0x3A76390
	public void RemoveSortingGroup() { }

	// RVA: 0x3A76CA4 Offset: 0x3A76CA4 VA: 0x3A76CA4
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI