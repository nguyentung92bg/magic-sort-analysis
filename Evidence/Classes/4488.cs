public class DailyRewardLobbyButton : MonoBehaviour // TypeDefIndex: 4488
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private GameObject _root; // 0x20
	[SerializeField]
	private Timer _timer; // 0x28
	private DailyRewardService _service; // 0x30

	// Methods

	// RVA: 0x38D4F0C Offset: 0x38D4F0C VA: 0x38D4F0C
	private void Awake() { }

	// RVA: 0x38D5128 Offset: 0x38D5128 VA: 0x38D5128
	private void OnDestroy() { }

	// RVA: 0x38D52D8 Offset: 0x38D52D8 VA: 0x38D52D8
	private void OnEnable() { }

	// RVA: 0x38D52DC Offset: 0x38D52DC VA: 0x38D52DC
	private void UpdateState() { }

	[AsyncStateMachine(typeof(DailyRewardLobbyButton.<OnButtonClick>d__8))]
	// RVA: 0x38D53C0 Offset: 0x38D53C0 VA: 0x38D53C0
	private void OnButtonClick() { }

	// RVA: 0x38D5478 Offset: 0x38D5478 VA: 0x38D5478
	private void OnTimeIsUp() { }

	// RVA: 0x38D547C Offset: 0x38D547C VA: 0x38D547C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DailyReward.Scripts.UI