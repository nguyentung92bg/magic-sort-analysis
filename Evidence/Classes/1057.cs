public class NewBlockerIntroPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1057
{
	// Fields
	[SerializeField]
	private List<BoardItemTypeAndGameObject> _boardItemTypeAndGameObjects; // 0x18
	[SerializeField]
	private TextMeshPro _descriptionText; // 0x20
	[SerializeField]
	private TextMeshPro _titleText; // 0x28

	// Methods

	// RVA: 0x16EC184 Offset: 0x16EC184 VA: 0x16EC184 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[Button]
	// RVA: 0x16EC45C Offset: 0x16EC45C VA: 0x16EC45C
	public void ShowItem(ItemType itemType) { }

	// RVA: 0x16EC684 Offset: 0x16EC684 VA: 0x16EC684 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x16EC728 Offset: 0x16EC728 VA: 0x16EC728 Slot: 6
	public Task Hide() { }

	// RVA: 0x16EC820 Offset: 0x16EC820 VA: 0x16EC820 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x16EC828 Offset: 0x16EC828 VA: 0x16EC828
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts