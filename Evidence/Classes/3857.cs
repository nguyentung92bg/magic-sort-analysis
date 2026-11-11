public class MagicStreakGaePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3857
{
	// Fields
	[SerializeField]
	private Button _infoPopupButton; // 0x18
	[SerializeField]
	private MagicStreakGaeRewardsSwipeController _magicStreakGaeRewardsSwipeController; // 0x20
	[SerializeField]
	private MagicStreakGaeProgressBarView _magicStreakGaeProgressBarView; // 0x28
	[SerializeField]
	private MagicStreakGaeMultiplierBarView _magicStreakGaeMultiplierBarView; // 0x30
	[SerializeField]
	private List<TextMeshPro> _goldMultiplierTexts; // 0x38
	[SerializeField]
	private List<TextMeshPro> _multiplierTexts; // 0x40
	[SerializeField]
	private MagicStreakGaeAnimationConfig _animationConfig; // 0x48
	[SerializeField]
	private MagicStreakGaeTimer _magicStreakGaeTimer; // 0x50
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x58
	private Sequence _sequence; // 0x60

	// Methods

	// RVA: 0x3CF8F98 Offset: 0x3CF8F98 VA: 0x3CF8F98
	private void Awake() { }

	// RVA: 0x3CF9024 Offset: 0x3CF9024 VA: 0x3CF9024
	private void OpenMagicStreakGaeInfoPopUp() { }

	// RVA: 0x3CF910C Offset: 0x3CF910C VA: 0x3CF910C
	private void OnDestroy() { }

	// RVA: 0x3CF9198 Offset: 0x3CF9198 VA: 0x3CF9198 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3CF98EC Offset: 0x3CF98EC VA: 0x3CF98EC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3CF99C8 Offset: 0x3CF99C8 VA: 0x3CF99C8 Slot: 6
	public Task Hide() { }

	// RVA: 0x3CF9ABC Offset: 0x3CF9ABC VA: 0x3CF9ABC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3CF97B4 Offset: 0x3CF97B4 VA: 0x3CF97B4
	private void PlayIntroduceAnimations(int maxIndex) { }

	// RVA: 0x3CF94E0 Offset: 0x3CF94E0 VA: 0x3CF94E0
	private void SetMultiplierTexts(List<int> multipliers) { }

	// RVA: 0x3CF968C Offset: 0x3CF968C VA: 0x3CF968C
	private void SetMultiplierIndexView(int index) { }

	// RVA: 0x3CF9AFC Offset: 0x3CF9AFC VA: 0x3CF9AFC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts