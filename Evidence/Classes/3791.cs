public class MagicStreakTournamentLobbyButtonRewardView : MonoBehaviour // TypeDefIndex: 3791
{
	// Fields
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x18
	[SerializeField]
	private MagicStreakTournamentLobbyButtonAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private SpriteRenderer _backBar; // 0x28
	[SerializeField]
	private SpriteRenderer _frontBar; // 0x30
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x38
	private readonly List<CurrencyView> _usingCurrencyViews; // 0x40
	private Sequence _sequence; // 0x48
	private CurrencyView _activeCurrencyView; // 0x50

	// Methods

	// RVA: 0x3E139E0 Offset: 0x3E139E0 VA: 0x3E139E0
	private void Awake() { }

	// RVA: 0x3E12EDC Offset: 0x3E12EDC VA: 0x3E12EDC
	public void ShowRewards(List<RewardModel> rewards, float initialPercentage, float lastRewardPercentage, Action onCompleteAction) { }

	// RVA: 0x3E1414C Offset: 0x3E1414C VA: 0x3E1414C
	private void ToggleFrontBar(bool isActive) { }

	// RVA: 0x3E1417C Offset: 0x3E1417C VA: 0x3E1417C
	private void ToggleBackBar(bool isActive) { }

	// RVA: 0x3E141AC Offset: 0x3E141AC VA: 0x3E141AC
	private void SetFrontBarZero() { }

	// RVA: 0x3E141DC Offset: 0x3E141DC VA: 0x3E141DC
	private void SetBackBarZero() { }

	// RVA: 0x3E1420C Offset: 0x3E1420C VA: 0x3E1420C
	private Tween OpenBackBar() { }

	// RVA: 0x3E14344 Offset: 0x3E14344 VA: 0x3E14344
	private Tween CloseBackBar() { }

	// RVA: 0x3E14478 Offset: 0x3E14478 VA: 0x3E14478
	private Tween MoveCurrencyView(CurrencyView currencyView, Vector3 position, float duration, AnimationCurve curve) { }

	// RVA: 0x3E14514 Offset: 0x3E14514 VA: 0x3E14514
	private void SetCurrencyViewPosition(CurrencyView currencyView, Vector3 position) { }

	// RVA: 0x3E14564 Offset: 0x3E14564 VA: 0x3E14564
	private Tween FillFrontBar(float percentage) { }

	// RVA: 0x3E146B4 Offset: 0x3E146B4 VA: 0x3E146B4
	private Tween FillFrontBarLeftOverValue(float percentage) { }

	// RVA: 0x3E14804 Offset: 0x3E14804 VA: 0x3E14804
	private Tween CloseFrontBar() { }

	// RVA: 0x3E14938 Offset: 0x3E14938 VA: 0x3E14938
	private Tween ScaleOutCurrencyView(CurrencyView currencyView) { }

	// RVA: 0x3E149F4 Offset: 0x3E149F4 VA: 0x3E149F4
	private Tween ScaleInCurrencyView(CurrencyView currencyView) { }

	// RVA: 0x3E14A78 Offset: 0x3E14A78 VA: 0x3E14A78
	private void PlayParticle(Vector3 position) { }

	// RVA: 0x3E14ADC Offset: 0x3E14ADC VA: 0x3E14ADC
	private Tween PlayParticleDelayed(Vector3 position) { }

	// RVA: 0x3E14BDC Offset: 0x3E14BDC VA: 0x3E14BDC
	private void ResetFrontBarFillValue() { }

	// RVA: 0x3E14C0C Offset: 0x3E14C0C VA: 0x3E14C0C
	private void ResetBackBarFillValue() { }

	// RVA: 0x3E13AB0 Offset: 0x3E13AB0 VA: 0x3E13AB0
	private Sequence GenerateOrderedRewardSequence(List<RewardModel> rewards, float initialPercentage, float lastRewardPercentage, Action onCompleteAction) { }

	// RVA: 0x3E14C4C Offset: 0x3E14C4C VA: 0x3E14C4C
	private CurrencyView GetCurrency(List<RewardModel> rewards, int index) { }

	// RVA: 0x3E14E2C Offset: 0x3E14E2C VA: 0x3E14E2C
	private void ReturnCurrencyViews() { }

	// RVA: 0x3E15058 Offset: 0x3E15058 VA: 0x3E15058
	public void OnPlayButtonClicked() { }

	// RVA: 0x3E1505C Offset: 0x3E1505C VA: 0x3E1505C
	private void OnDisable() { }

	// RVA: 0x3E15090 Offset: 0x3E15090 VA: 0x3E15090
	private void OnDestroy() { }

	// RVA: 0x3E15180 Offset: 0x3E15180 VA: 0x3E15180
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3E15208 Offset: 0x3E15208 VA: 0x3E15208
	private float <OpenBackBar>b__14_0() { }

	[CompilerGenerated]
	// RVA: 0x3E15224 Offset: 0x3E15224 VA: 0x3E15224
	private void <OpenBackBar>b__14_1(float x) { }

	[CompilerGenerated]
	// RVA: 0x3E15260 Offset: 0x3E15260 VA: 0x3E15260
	private float <CloseBackBar>b__15_0() { }

	[CompilerGenerated]
	// RVA: 0x3E1527C Offset: 0x3E1527C VA: 0x3E1527C
	private void <CloseBackBar>b__15_1(float x) { }

	[CompilerGenerated]
	// RVA: 0x3E152B8 Offset: 0x3E152B8 VA: 0x3E152B8
	private float <FillFrontBar>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x3E152D4 Offset: 0x3E152D4 VA: 0x3E152D4
	private void <FillFrontBar>b__18_1(float x) { }

	[CompilerGenerated]
	// RVA: 0x3E15310 Offset: 0x3E15310 VA: 0x3E15310
	private float <FillFrontBarLeftOverValue>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x3E1532C Offset: 0x3E1532C VA: 0x3E1532C
	private void <FillFrontBarLeftOverValue>b__19_1(float x) { }

	[CompilerGenerated]
	// RVA: 0x3E15368 Offset: 0x3E15368 VA: 0x3E15368
	private float <CloseFrontBar>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x3E15384 Offset: 0x3E15384 VA: 0x3E15384
	private void <CloseFrontBar>b__20_1(float x) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton