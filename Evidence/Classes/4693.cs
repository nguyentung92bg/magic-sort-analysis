public class ShowChampionsLeaguePromotionPopupCommand : ICommand // TypeDefIndex: 4693
{
	// Fields
	private readonly string _eloName; // 0x10
	private readonly PromotionInfo _promotionInfo; // 0x18
	private readonly int _rank; // 0x24
	private readonly int _promotionCountOfElo; // 0x28

	// Methods

	// RVA: 0x3B21B68 Offset: 0x3B21B68 VA: 0x3B21B68
	public void .ctor(PromotionInfo promotionInfo, int rank, string eloName, int promotionCountOfElo) { }

	[AsyncStateMachine(typeof(ShowChampionsLeaguePromotionPopupCommand.<ExecuteAsync>d__5))]
	// RVA: 0x3B21BC8 Offset: 0x3B21BC8 VA: 0x3B21BC8 Slot: 4
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(ShowChampionsLeaguePromotionPopupCommand.<Open>d__6))]
	// RVA: 0x3B21CB4 Offset: 0x3B21CB4 VA: 0x3B21CB4
	private Task Open() { }

	// RVA: 0x3B21DA0 Offset: 0x3B21DA0 VA: 0x3B21DA0 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]