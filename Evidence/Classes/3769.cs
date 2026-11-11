public class MagicStreakTournamentPopupProgressBarView : MonoBehaviour // TypeDefIndex: 3769
{
	// Fields
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x18
	[SerializeField]
	private Transform _rewardContainer; // 0x20
	[SerializeField]
	private SpriteRenderer _progressBar; // 0x28
	[SerializeField]
	private TextMeshPro _progressText; // 0x30
	[SerializeField]
	private GameObject _completedTick; // 0x38
	[SerializeField]
	private float _minFillRatio; // 0x40
	private CurrencyView _currentCurrencyView; // 0x48
	private Vector2 _progressBarSize; // 0x50

	// Methods

	// RVA: 0x3E10654 Offset: 0x3E10654 VA: 0x3E10654
	private void Awake() { }

	// RVA: 0x3E0F5BC Offset: 0x3E0F5BC VA: 0x3E0F5BC
	public void Dispose() { }

	// RVA: 0x3E1067C Offset: 0x3E1067C VA: 0x3E1067C
	private void RecycleCurrentCurrencyView() { }

	// RVA: 0x3E0E8E4 Offset: 0x3E0E8E4 VA: 0x3E0E8E4
	public void Show(RewardModel rewardModel, int currentHat, int maxHat) { }

	// RVA: 0x3E10748 Offset: 0x3E10748 VA: 0x3E10748
	private void ShowInProgress() { }

	// RVA: 0x3E109C8 Offset: 0x3E109C8 VA: 0x3E109C8
	private void ShowCompleted() { }

	[Button]
	// RVA: 0x3E108B8 Offset: 0x3E108B8 VA: 0x3E108B8
	private void FillProgressBar(int currentHat, int maxHat) { }

	// RVA: 0x3E1078C Offset: 0x3E1078C VA: 0x3E1078C
	private void ShowReward(RewardModel rewardModel) { }

	// RVA: 0x3E10A0C Offset: 0x3E10A0C VA: 0x3E10A0C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI