public class MagicBottleCongratsPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4047
{
	// Fields
	[SerializeField]
	private SpriteRenderer _bottleSprite; // 0x18
	[SerializeField]
	private SpriteRenderer _backgroundSprite; // 0x20
	[SerializeField]
	private MagicBottleCongratsAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x30
	[SerializeField]
	private TextMeshPro _descriptionText; // 0x38
	[SerializeField]
	private TextMeshPro _tapToContinueText; // 0x40
	[SerializeField]
	private Button _tapToContinueButton; // 0x48
	[SerializeField]
	private ParticleSystem _startParticleSystem; // 0x50
	[SerializeField]
	private ParticleSystem _firstHitParticleSystem; // 0x58
	private CurrencyRewardTarget _currencyRewardTarget; // 0x60
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x68
	private PlayButtonContainer _playButton; // 0x70
	private Sequence _firstSequence; // 0x78
	private Sequence _secondSequence; // 0x80

	// Methods

	// RVA: 0x375DF48 Offset: 0x375DF48 VA: 0x375DF48
	private void Awake() { }

	// RVA: 0x375E078 Offset: 0x375E078 VA: 0x375E078 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x375E874 Offset: 0x375E874 VA: 0x375E874 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x375E9A8 Offset: 0x375E9A8 VA: 0x375E9A8
	private void OnTapToContinueButtonClick() { }

	// RVA: 0x375E10C Offset: 0x375E10C VA: 0x375E10C
	private void PlayCongratsFirstPart(Vector3 bottleStartPosition) { }

	// RVA: 0x375E9AC Offset: 0x375E9AC VA: 0x375E9AC
	private void PlayCongratsSecondPart() { }

	// RVA: 0x375EECC Offset: 0x375EECC VA: 0x375EECC
	private Vector3[] GetBottleFirstPath(Vector3 targetCenterPosition) { }

	// RVA: 0x375EF5C Offset: 0x375EF5C VA: 0x375EF5C Slot: 6
	public Task Hide() { }

	// RVA: 0x375F024 Offset: 0x375F024 VA: 0x375F024 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x375F02C Offset: 0x375F02C VA: 0x375F02C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x375F034 Offset: 0x375F034 VA: 0x375F034
	private void <PlayCongratsFirstPart>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x375F050 Offset: 0x375F050 VA: 0x375F050
	private void <PlayCongratsFirstPart>b__18_1() { }

	[CompilerGenerated]
	// RVA: 0x375F06C Offset: 0x375F06C VA: 0x375F06C
	private void <PlayCongratsSecondPart>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x375F08C Offset: 0x375F08C VA: 0x375F08C
	private void <PlayCongratsSecondPart>b__19_1() { }

	[CompilerGenerated]
	// RVA: 0x375F0A8 Offset: 0x375F0A8 VA: 0x375F0A8
	private void <PlayCongratsSecondPart>b__19_2() { }
}

// Namespace: Modules.Contexts.Home.MagicBottle.Scripts.UI