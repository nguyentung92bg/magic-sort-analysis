public class DailyProgressRewardStepView : MonoBehaviour // TypeDefIndex: 4934
{
	// Fields
	[SerializeField]
	private Transform _rewardPosition; // 0x18
	[SerializeField]
	private SpriteRenderer _greenTickSprite; // 0x20
	[SerializeField]
	private SpriteRenderer _separator; // 0x28
	[SerializeField]
	private ParticleSystem _claimRewardParticle; // 0x30
	[SerializeField]
	private DailyAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private DailySpriteConfig _spriteConfig; // 0x40
	[SerializeField]
	private TextMeshPro _dateText; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private bool <IsStartStep>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private int <StepDate>k__BackingField; // 0x54
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x58
	private CurrencyView _currentCurrencyView; // 0x60
	private Sequence _unlockSequence; // 0x68

	// Properties
	public bool IsStartStep { get; set; }
	public int StepDate { get; set; }
	public bool IsClaimed { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3E21E6C Offset: 0x3E21E6C VA: 0x3E21E6C
	public bool get_IsStartStep() { }

	[CompilerGenerated]
	// RVA: 0x3E21E74 Offset: 0x3E21E74 VA: 0x3E21E74
	private void set_IsStartStep(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3E21E80 Offset: 0x3E21E80 VA: 0x3E21E80
	public int get_StepDate() { }

	[CompilerGenerated]
	// RVA: 0x3E21E88 Offset: 0x3E21E88 VA: 0x3E21E88
	public void set_StepDate(int value) { }

	[CompilerGenerated]
	// RVA: 0x3E21E90 Offset: 0x3E21E90 VA: 0x3E21E90
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x3E21E98 Offset: 0x3E21E98 VA: 0x3E21E98
	private void set_IsClaimed(bool value) { }

	// RVA: 0x3E21128 Offset: 0x3E21128 VA: 0x3E21128
	public void SetRewardStepView(CurrencyView currencyView, int currentDate) { }

	// RVA: 0x3E21218 Offset: 0x3E21218 VA: 0x3E21218
	public void ScaleCurrency(float scale) { }

	// RVA: 0x3E21B7C Offset: 0x3E21B7C VA: 0x3E21B7C
	public void SetDateText(string date) { }

	// RVA: 0x3E21A98 Offset: 0x3E21A98 VA: 0x3E21A98
	public void SetClaimedView() { }

	// RVA: 0x3E21B08 Offset: 0x3E21B08 VA: 0x3E21B08
	public void SetUnclaimedView() { }

	// RVA: 0x3E21F3C Offset: 0x3E21F3C VA: 0x3E21F3C
	private void PlayRewardParticle() { }

	// RVA: 0x3E21F58 Offset: 0x3E21F58 VA: 0x3E21F58
	private void GreenTickPrepare() { }

	// RVA: 0x3E21FE4 Offset: 0x3E21FE4 VA: 0x3E21FE4
	private Tween PlayRewardStep() { }

	// RVA: 0x3E218DC Offset: 0x3E218DC VA: 0x3E218DC
	public Sequence UnlockStepSequence() { }

	// RVA: 0x3E21EA4 Offset: 0x3E21EA4 VA: 0x3E21EA4
	private void SetSeparatorSprite(Sprite sprite) { }

	// RVA: 0x3E212A0 Offset: 0x3E212A0 VA: 0x3E212A0
	public void Dispose() { }

	// RVA: 0x3E22060 Offset: 0x3E22060 VA: 0x3E22060
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3E22068 Offset: 0x3E22068 VA: 0x3E22068
	private void <UnlockStepSequence>b__29_0() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI