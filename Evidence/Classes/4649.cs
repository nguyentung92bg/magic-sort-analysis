public class ChampionsLeagueLeaderboardCupSorter : MonoBehaviour // TypeDefIndex: 4649
{
	// Fields
	[SerializeField]
	private List<ChampionsLeagueLeaderboardCupView> _cupViews; // 0x18
	[SerializeField]
	private float _scaleMultiplier; // 0x20
	[SerializeField]
	private float _distance; // 0x24
	[SerializeField]
	private List<SpriteRenderer> _arrows; // 0x28

	// Methods

	[Button]
	// RVA: 0x3A7417C Offset: 0x3A7417C VA: 0x3A7417C
	public void Prepare(int elo) { }

	// RVA: 0x3A74430 Offset: 0x3A74430 VA: 0x3A74430
	private List<float> DistributePositions(float baseStep, int itemCount, int index, float multiplier) { }

	// RVA: 0x3A746CC Offset: 0x3A746CC VA: 0x3A746CC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI