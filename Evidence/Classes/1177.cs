public class SuperChargerInGameManager : MonoBehaviour, IDisposable // TypeDefIndex: 1177
{
	// Fields
	[SerializeField]
	private Button _useChargerButton; // 0x18
	[SerializeField]
	private SuperChargerButtonUI _buttonUI; // 0x20
	[SerializeField]
	private ChargeableBottleAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private SuperChargerTrailAnimationController _trailAnimationController; // 0x30
	[SerializeField]
	private SuperchargerTutorialController _tutorialController; // 0x38
	[SerializeField]
	private PillowView _magicBottlePillowView; // 0x40
	public LevelWinOrStuckSystem StuckSystem; // 0x48
	public SelectionSystem SelectionSystem; // 0x50
	private BottleCollections _bottleCollections; // 0x58
	private ISuperChargerStrategy _strategy; // 0x60
	private int _remainingGoal; // 0x68
	private List<ColorId> _completedColors; // 0x70
	private int _superChargerUseCount; // 0x78
	private List<int> _chargeMatchCounts; // 0x80
	private SuperChargerService _superChargerService; // 0x88
	private bool _tutorialShowed; // 0x90
	private bool _waitingForTutorial; // 0x91
	private bool _cancelTutorial; // 0x92
	private int _moveCount; // 0x94
	private int _bottleCompleted; // 0x98

	// Methods

	// RVA: 0x20E6550 Offset: 0x20E6550 VA: 0x20E6550
	public void Initialize(BottleCollections bottleCollections) { }

	// RVA: 0x20E6F58 Offset: 0x20E6F58 VA: 0x20E6F58
	public Tween PlayMagicBottlePillowAnimation(BottleItem bottleItem, int bottleRowCount, int highestBottleCountInOneRow) { }

	// RVA: 0x20E6E80 Offset: 0x20E6E80 VA: 0x20E6E80
	private bool ShouldUseAutomatically() { }

	// RVA: 0x20E6DAC Offset: 0x20E6DAC VA: 0x20E6DAC
	private void UpdateView(bool isInstant = False) { }

	// RVA: 0x20E6EC4 Offset: 0x20E6EC4 VA: 0x20E6EC4
	private void ActivateButton() { }

	// RVA: 0x20E7010 Offset: 0x20E7010 VA: 0x20E7010
	private void OnUseChargerButtonClicked() { }

	// RVA: 0x20E6C64 Offset: 0x20E6C64 VA: 0x20E6C64
	private void TryApplyInitialCharge() { }

	// RVA: 0x20E713C Offset: 0x20E713C VA: 0x20E713C
	public void OnAnyBottleCompleted(ColorId waterColorId) { }

	// RVA: 0x20E75E0 Offset: 0x20E75E0 VA: 0x20E75E0
	public void OnAnyMoveStarted(BottleItem originBottle, BottleItem targetBottle) { }

	// RVA: 0x20E77FC Offset: 0x20E77FC VA: 0x20E77FC
	private bool CheckMoveIsRepetitive(BottleItem originBottle, BottleItem targetBottle) { }

	// RVA: 0x20E7058 Offset: 0x20E7058 VA: 0x20E7058
	private void UseSuperCharger() { }

	// RVA: 0x20E73DC Offset: 0x20E73DC VA: 0x20E73DC
	private bool CountsTowardCharge(ColorId waterColorId) { }

	// RVA: 0x20E78F4 Offset: 0x20E78F4 VA: 0x20E78F4
	public void IncreaseSuperChargerUseCount() { }

	// RVA: 0x20E79D8 Offset: 0x20E79D8 VA: 0x20E79D8
	public void OnSuperChargerUsed() { }

	// RVA: 0x20E6AB0 Offset: 0x20E6AB0 VA: 0x20E6AB0
	private bool TryCreateStrategy() { }

	// RVA: 0x20E7344 Offset: 0x20E7344 VA: 0x20E7344
	private bool IsEnabled() { }

	// RVA: 0x20E7BB0 Offset: 0x20E7BB0 VA: 0x20E7BB0
	private void ResetSelectionHistory() { }

	// RVA: 0x20E7BCC Offset: 0x20E7BCC VA: 0x20E7BCC
	private void SendSuperChargerUsedEvent(SuperChargerUseEventDTO dto) { }

	[AsyncStateMachine(typeof(SuperChargerInGameManager.<TryStartTutorial>d__38))]
	// RVA: 0x20E751C Offset: 0x20E751C VA: 0x20E751C
	public void TryStartTutorial(float delay = 0) { }

	// RVA: 0x20E7C3C Offset: 0x20E7C3C VA: 0x20E7C3C
	private bool HasRainbowWaterOnBoard() { }

	// RVA: 0x20E8068 Offset: 0x20E8068 VA: 0x20E8068
	private bool HasSortKeyOnBoard() { }

	// RVA: 0x20E84D0 Offset: 0x20E84D0 VA: 0x20E84D0
	private ChargeableBottleItem GetChargeableBottleItem() { }

	// RVA: 0x20E8918 Offset: 0x20E8918 VA: 0x20E8918 Slot: 4
	public void Dispose() { }

	// RVA: 0x20E8C80 Offset: 0x20E8C80 VA: 0x20E8C80
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x20E8C88 Offset: 0x20E8C88 VA: 0x20E8C88
	private void <TryStartTutorial>b__38_0() { }
}

// Namespace: 
[CompilerGenerated]