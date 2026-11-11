public class MagicStreakTournamentLastRewardView : MonoBehaviour // TypeDefIndex: 3763
{
	// Fields
	[SerializeField]
	private GameObject _toolTipContainer; // 0x18
	[SerializeField]
	private Transform _rewardContainer; // 0x20
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x28
	[SerializeField]
	private Button _rewardsListOpenButton; // 0x30
	[SerializeField]
	private float _lastRewardContainerScaleDuration; // 0x38
	[SerializeField]
	private AnimationCurve _scaleInCurve; // 0x40
	[SerializeField]
	private AnimationCurve _scaleOutCurve; // 0x48
	private Tween _scaleTween; // 0x50
	private CurrencyView _currentCurrencyView; // 0x58

	// Methods

	// RVA: 0x3E0F5C8 Offset: 0x3E0F5C8 VA: 0x3E0F5C8
	private void Awake() { }

	// RVA: 0x3E0ED04 Offset: 0x3E0ED04 VA: 0x3E0ED04
	public void Show(RewardModel rewardModel) { }

	[Button]
	// RVA: 0x3E0F808 Offset: 0x3E0F808 VA: 0x3E0F808
	public void TestShow() { }

	// RVA: 0x3E0F6B4 Offset: 0x3E0F6B4 VA: 0x3E0F6B4
	public void Hide() { }

	// RVA: 0x3E0F5E8 Offset: 0x3E0F5E8 VA: 0x3E0F5E8
	private void RecycleCurrentCurrencyView() { }

	// RVA: 0x3E0F540 Offset: 0x3E0F540 VA: 0x3E0F540
	public void Dispose() { }

	// RVA: 0x3E0FAF0 Offset: 0x3E0FAF0 VA: 0x3E0FAF0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3E0FB04 Offset: 0x3E0FB04 VA: 0x3E0FB04
	private void <Hide>b__12_0() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI