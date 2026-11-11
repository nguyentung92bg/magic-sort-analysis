public class ChampionsLeaguePromotionPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4689
{
	// Fields
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x18
	[SerializeField]
	private ChampionsLeaguePromotionAnimationHandler _animationHandler; // 0x20

	// Methods

	// RVA: 0x3B21838 Offset: 0x3B21838 VA: 0x3B21838 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3B218D0 Offset: 0x3B218D0 VA: 0x3B218D0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3B21A04 Offset: 0x3B21A04 VA: 0x3B21A04 Slot: 6
	public Task Hide() { }

	// RVA: 0x3B21AB8 Offset: 0x3B21AB8 VA: 0x3B21AB8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3B21AC0 Offset: 0x3B21AC0 VA: 0x3B21AC0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI