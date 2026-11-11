public class ChampionsLeaguePreJoinPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4681
{
	// Fields
	[SerializeField]
	private List<ChampionsLeaguePreJoinPopup.EloItems> _eloItems; // 0x18
	[SerializeField]
	private Timer _timer; // 0x20
	[SerializeField]
	private ChampionsLeaguePreJoinProgressBarController _championsLeaguePreJoinProgressBarController; // 0x28
	[SerializeField]
	private TextMeshPro _descriptionText; // 0x30
	[SerializeField]
	private Animation _heroImageAnimation; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40

	// Methods

	// RVA: 0x3A7A714 Offset: 0x3A7A714 VA: 0x3A7A714 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A7AC98 Offset: 0x3A7AC98 VA: 0x3A7AC98 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A7ADBC Offset: 0x3A7ADBC VA: 0x3A7ADBC Slot: 6
	public Task Hide() { }

	// RVA: 0x3A7AED8 Offset: 0x3A7AED8 VA: 0x3A7AED8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A7A9EC Offset: 0x3A7A9EC VA: 0x3A7A9EC
	private void ActivateEloItems(int elo) { }

	// RVA: 0x3A7AEE0 Offset: 0x3A7AEE0 VA: 0x3A7AEE0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI