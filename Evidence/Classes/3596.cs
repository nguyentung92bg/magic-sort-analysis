public class MergeItemChainPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3596
{
	// Fields
	[SerializeField]
	private GameObject _progressPopup; // 0x18
	[SerializeField]
	private GameObject _collectiblePopup; // 0x20
	[SerializeField]
	private List<SpriteRenderer> _progressSprites; // 0x28
	[SerializeField]
	private List<SpriteRenderer> _coffeeSprites; // 0x30
	[SerializeField]
	private List<SpriteRenderer> _collectibleSprites; // 0x38
	[SerializeField]
	private List<SpriteRenderer> _collectibleAmountSprites; // 0x40
	[SerializeField]
	private List<TMP_Text> _collectibleAmountTexts; // 0x48
	[SerializeField]
	private MergeItemSpriteConfig _spriteConfig; // 0x50
	private MergeItemChainPopupViewModel _viewModel; // 0x58
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x60

	// Methods

	// RVA: 0x3FA9D18 Offset: 0x3FA9D18 VA: 0x3FA9D18 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3FA9E44 Offset: 0x3FA9E44 VA: 0x3FA9E44
	private void SetupProgressItems() { }

	// RVA: 0x3FA9F4C Offset: 0x3FA9F4C VA: 0x3FA9F4C
	private void SetupCollectibleItems() { }

	// RVA: 0x3FAA298 Offset: 0x3FAA298 VA: 0x3FAA298 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAA374 Offset: 0x3FAA374 VA: 0x3FAA374 Slot: 6
	public Task Hide() { }

	// RVA: 0x3FAA428 Offset: 0x3FAA428 VA: 0x3FAA428 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3FAA430 Offset: 0x3FAA430 VA: 0x3FAA430
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI