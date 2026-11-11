public class JourneyUnlockPopup : APopup // TypeDefIndex: 4284
{
	// Fields
	[SerializeField]
	private JourneyUnlockAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private SpriteRenderer _background; // 0x28
	[SerializeField]
	private Button _continueButton; // 0x30
	[SerializeField]
	private TextSequenceAnimator _perfectText; // 0x38
	[SerializeField]
	private Transform _perfectTextRoot; // 0x40
	[SerializeField]
	private Transform _cardRoot; // 0x48
	[SerializeField]
	private Transform _posterParent; // 0x50
	[SerializeField]
	private Transform _buttonRoot; // 0x58
	[SerializeField]
	private ParticleSystem _particles; // 0x60
	[SerializeField]
	private ParticleSystem _congratsParticles; // 0x68
	[SerializeField]
	private ParticleSystem _sunParticle; // 0x70
	[SerializeField]
	private TextMeshPro _titleText; // 0x78
	[SerializeField]
	private TextMeshPro _levelText; // 0x80
	private string _posterId; // 0x88
	private bool _isContinueClicked; // 0x90
	private bool _autoSelectJourneyPoster; // 0x91

	// Properties
	private JourneyUnlockAnimationConfig Anim { get; }

	// Methods

	// RVA: 0x1C721CC Offset: 0x1C721CC VA: 0x1C721CC
	private JourneyUnlockAnimationConfig get_Anim() { }

	// RVA: 0x1C721D4 Offset: 0x1C721D4 VA: 0x1C721D4 Slot: 8
	public override void Show(PopUpArguments popupArguments) { }

	// RVA: 0x1C72664 Offset: 0x1C72664 VA: 0x1C72664
	private void PlayShowAnimation() { }

	// RVA: 0x1C72CEC Offset: 0x1C72CEC VA: 0x1C72CEC
	private void OnClickContinue() { }

	// RVA: 0x1C72F94 Offset: 0x1C72F94 VA: 0x1C72F94
	private Sequence CardScale() { }

	// RVA: 0x1C7257C Offset: 0x1C7257C VA: 0x1C7257C
	private string GetLevelRangeString(int startLevel, int levelRange) { }

	// RVA: 0x1C73308 Offset: 0x1C73308 VA: 0x1C73308
	private void OnDestroy() { }

	// RVA: 0x1C73394 Offset: 0x1C73394 VA: 0x1C73394
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1C7339C Offset: 0x1C7339C VA: 0x1C7339C
	private void <PlayShowAnimation>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x1C73458 Offset: 0x1C73458 VA: 0x1C73458
	private void <PlayShowAnimation>b__19_1() { }

	[CompilerGenerated]
	// RVA: 0x1C73484 Offset: 0x1C73484 VA: 0x1C73484
	private void <PlayShowAnimation>b__19_2() { }

	[CompilerGenerated]
	// RVA: 0x1C734B0 Offset: 0x1C734B0 VA: 0x1C734B0
	private void <PlayShowAnimation>b__19_3() { }

	[CompilerGenerated]
	// RVA: 0x1C7355C Offset: 0x1C7355C VA: 0x1C7355C
	private void <OnClickContinue>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x1C73578 Offset: 0x1C73578 VA: 0x1C73578
	private void <OnClickContinue>b__20_1() { }

	[CompilerGenerated]
	// RVA: 0x1C7368C Offset: 0x1C7368C VA: 0x1C7368C
	private void <CardScale>b__21_0() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts