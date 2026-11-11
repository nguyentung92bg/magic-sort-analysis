public class QuitAreYouSurePopup : MonoBehaviour, IPopUp // TypeDefIndex: 1047
{
	// Fields
	[SerializeField]
	private List<AreYouSureContainer> _areYouSureContainers; // 0x18
	[SerializeField]
	private DifficultySpriteConfig _difficultySpriteConfig; // 0x20
	[SerializeField]
	private SpriteRenderer backgroundSpriteRenderer; // 0x28
	[SerializeField]
	private SpriteRenderer backgroundSpriteRenderer2; // 0x30
	[SerializeField]
	private SpriteRenderer headerBackgroundSpriteRenderer; // 0x38
	[SerializeField]
	private SpriteRenderer headerBackgroundSpriteRenderer2; // 0x40
	[SerializeField]
	private GameObject hardView; // 0x48
	[SerializeField]
	private GameObject superHardView; // 0x50
	[SerializeField]
	private Transform container; // 0x58
	private FailFlowAnimationConfig animationConfig; // 0x60
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x68
	private Tween _tween; // 0x70

	// Methods

	// RVA: 0x16EA77C Offset: 0x16EA77C VA: 0x16EA77C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x16EAA10 Offset: 0x16EAA10 VA: 0x16EAA10
	private void PlayScaleAnimation() { }

	// RVA: 0x16EACE0 Offset: 0x16EACE0 VA: 0x16EACE0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x16EAAFC Offset: 0x16EAAFC VA: 0x16EAAFC
	private void ConfigureViewVisibilityBasedOnDifficulty(LevelDifficultyType difficultyType) { }

	// RVA: 0x16EADAC Offset: 0x16EADAC VA: 0x16EADAC Slot: 6
	public Task Hide() { }

	// RVA: 0x16EAE88 Offset: 0x16EAE88 VA: 0x16EAE88 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x16EAE90 Offset: 0x16EAE90 VA: 0x16EAE90
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts