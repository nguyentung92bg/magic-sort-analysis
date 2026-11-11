public class InLevelTopLeftUIController : MonoBehaviour // TypeDefIndex: 1132
{
	// Fields
	[SerializeField]
	private InLevelBroomStreakView _inLevelBroomStreakView; // 0x18
	[SerializeField]
	private InLevelTowerWinStreakView _inLevelTowerWinStreakView; // 0x20
	[SerializeField]
	private GameObject _currencyDisplayerController; // 0x28
	[SerializeField]
	private GameObject _currencyDisplayerControllerNewBackground; // 0x30
	[SerializeField]
	private InLevelSuperChargerView _inLevelSuperChargerView; // 0x38
	private GameObject _currentCurrencyDisplayerController; // 0x40
	private BroomStreakService _broomStreakService; // 0x48
	private TowerWinStreakService _towerWinStreakService; // 0x50
	private SuperChargerService _superChargerService; // 0x58

	// Methods

	// RVA: 0x160D244 Offset: 0x160D244 VA: 0x160D244
	private void Awake() { }

	// RVA: 0x160D5A0 Offset: 0x160D5A0 VA: 0x160D5A0
	public void OnDestroy() { }

	// RVA: 0x160D81C Offset: 0x160D81C VA: 0x160D81C
	private void UpdateStateOnLevelEntrance(int bottleRowCount) { }

	// RVA: 0x160D820 Offset: 0x160D820 VA: 0x160D820
	private void UpdateState() { }

	// RVA: 0x160DA58 Offset: 0x160DA58 VA: 0x160DA58
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.Common.Scripts