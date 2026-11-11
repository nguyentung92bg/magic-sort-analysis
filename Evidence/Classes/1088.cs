public class LevelFailPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1088
{
	// Fields
	[SerializeField]
	private List<AreYouSureContainer> _areYouSureContainers; // 0x18
	[SerializeField]
	private GameObject _levelFailedBanner; // 0x20
	[SerializeField]
	private AnimationController _animationController; // 0x28
	[SerializeField]
	private GameObject _panelRoot; // 0x30
	[SerializeField]
	private Image _backgroundImage; // 0x38
	[SerializeField]
	private Image _levelShowBackgroundImage; // 0x40
	[SerializeField]
	private Button _hidePanelButton; // 0x48
	[SerializeField]
	private Button _showPanelButton; // 0x50

	// Methods

	// RVA: 0x16F46A0 Offset: 0x16F46A0 VA: 0x16F46A0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x16F4984 Offset: 0x16F4984 VA: 0x16F4984 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x16F4804 Offset: 0x16F4804 VA: 0x16F4804
	private void ShowLevelFailedBanner() { }

	// RVA: 0x16F4A18 Offset: 0x16F4A18 VA: 0x16F4A18
	private void OnBannerLeave() { }

	// RVA: 0x16F4AA0 Offset: 0x16F4AA0 VA: 0x16F4AA0
	private void ShowAndIterateLevelFailedContainers() { }

	// RVA: 0x16F4B50 Offset: 0x16F4B50 VA: 0x16F4B50
	public void HidePanelWithAnimation() { }

	// RVA: 0x16F4C08 Offset: 0x16F4C08 VA: 0x16F4C08
	public void ShowPanelWithAnimation() { }

	// RVA: 0x16F4CBC Offset: 0x16F4CBC VA: 0x16F4CBC Slot: 6
	public Task Hide() { }

	// RVA: 0x16F4EAC Offset: 0x16F4EAC VA: 0x16F4EAC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x16F4EB4 Offset: 0x16F4EB4 VA: 0x16F4EB4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]