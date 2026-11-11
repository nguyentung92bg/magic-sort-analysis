public class PlayButtonContainer : MonoBehaviour // TypeDefIndex: 2894
{
	// Fields
	[SerializeField]
	private PlayButton _button; // 0x18
	[SerializeField]
	private PlayButtonAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private DifficultySpriteConfig _difficultySpriteConfig; // 0x28
	[SerializeField]
	private Transform _buttonContainer; // 0x30
	[SerializeField]
	private SpriteRenderer _backgroundSpriteRenderer; // 0x38
	[SerializeField]
	private SpriteRenderer _backgroundSpriteRenderer2; // 0x40
	[SerializeField]
	private SpriteRenderer _frameSpriteRenderer; // 0x48
	[SerializeField]
	private SpriteRenderer _frameSpriteRenderer2; // 0x50
	[SerializeField]
	private GameObject _tag; // 0x58
	[SerializeField]
	private SpriteRenderer _tagRenderer; // 0x60
	[SerializeField]
	private Transform _tagPivot; // 0x68
	[SerializeField]
	private GameObject _hardLabelArea; // 0x70
	[SerializeField]
	private GameObject _superHardLabelArea; // 0x78
	[SerializeField]
	private TextMeshPro _text; // 0x80
	[SerializeField]
	private TextMeshPro _newText; // 0x88
	[SerializeField]
	private SpriteRenderer _magicBottleSprite; // 0x90
	[SerializeField]
	private ParticleSystem _magicBottleParticleSystem; // 0x98
	[SerializeField]
	private ParticleSystem _magicBottleLoopedParticleSystem; // 0xA0
	[SerializeField]
	private ParticleSystem _hitParticles; // 0xA8
	[SerializeField]
	private ParticleSystem _loadParticles; // 0xB0
	[SerializeField]
	private ParticleSystem _tagHitParticles; // 0xB8
	[SerializeField]
	private ParticleSystem _tagMetalHitParticles; // 0xC0
	[SerializeField]
	private Animation _championsLeagueCrownAnimation; // 0xC8
	[SerializeField]
	private GameObject _championsLeagueAnimationRoot; // 0xD0
	[SerializeField]
	private ParticleSystem _championsLeagueCrownParticle; // 0xD8
	[SerializeField]
	private ParticleSystem _championsLeagueCrownPlayButtonParticle; // 0xE0
	[SerializeField]
	private Transform _championsLeagueCrownScaleTemp; // 0xE8
	[SerializeField]
	private GameObject _championsLeagueCrownStaticGameObject; // 0xF0
	private float _initialPosition; // 0xF8
	private bool _isPlaying; // 0xFC
	private LevelDifficultyType _difficulty; // 0x100
	public static int inc; // 0x0

	// Properties
	private PlayButtonAnimationConfig Anim { get; }

	// Methods

	// RVA: 0x297DDFC Offset: 0x297DDFC VA: 0x297DDFC
	private PlayButtonAnimationConfig get_Anim() { }

	// RVA: 0x297DE04 Offset: 0x297DE04 VA: 0x297DE04
	public void Awake() { }

	// RVA: 0x297DEA4 Offset: 0x297DEA4 VA: 0x297DEA4
	private void OnEnable() { }

	// RVA: 0x297E084 Offset: 0x297E084 VA: 0x297E084
	private void ConfigureViewVisibilityBasedOnDifficulty(LevelDifficultyType difficultyType) { }

	// RVA: 0x297E29C Offset: 0x297E29C VA: 0x297E29C
	private void ActivateHard(bool isJourneyActive) { }

	// RVA: 0x297E500 Offset: 0x297E500 VA: 0x297E500
	private void ActivateSuperHard(bool isJourneyActive) { }

	// RVA: 0x297E764 Offset: 0x297E764 VA: 0x297E764
	private void ActivateRegular(bool isJourneyActive) { }

	[AsyncStateMachine(typeof(PlayButtonContainer.<EnterLevel>d__39))]
	// RVA: 0x297EAA4 Offset: 0x297EAA4 VA: 0x297EAA4
	private void EnterLevel() { }

	// RVA: 0x297E0A8 Offset: 0x297E0A8 VA: 0x297E0A8
	private void SetMagicBottleView() { }

	// RVA: 0x297E184 Offset: 0x297E184 VA: 0x297E184
	public void SetChampionsLeagueCrownView() { }

	// RVA: 0x297EBCC Offset: 0x297EBCC VA: 0x297EBCC
	public void PlayMagicBottle() { }

	// RVA: 0x297EB8C Offset: 0x297EB8C VA: 0x297EB8C
	public void StopMagicBottleParticle() { }

	// RVA: 0x297EB5C Offset: 0x297EB5C VA: 0x297EB5C
	public void ToggleMagicBottleSprite(bool toggle) { }

	// RVA: 0x297ED28 Offset: 0x297ED28 VA: 0x297ED28
	public Vector3 GetMagicBottleSpritePosition() { }

	// RVA: 0x297ED50 Offset: 0x297ED50 VA: 0x297ED50
	public void OnDestroy() { }

	// RVA: 0x297AF98 Offset: 0x297AF98 VA: 0x297AF98
	public Sequence PlayLevelTextChangeAnimations(int level, LevelDifficultyType levelDifficulty, bool shouldPlayCrownAnimation) { }

	// RVA: 0x297EDE4 Offset: 0x297EDE4 VA: 0x297EDE4
	public Sequence PlayCrownAnimation() { }

	// RVA: 0x297EF54 Offset: 0x297EF54 VA: 0x297EF54
	private void SetButton(int level, LevelDifficultyType levelDifficulty) { }

	// RVA: 0x297ACFC Offset: 0x297ACFC VA: 0x297ACFC
	public void Prepare(int level, LevelDifficultyType levelDifficulty) { }

	// RVA: 0x297E9A8 Offset: 0x297E9A8 VA: 0x297E9A8
	private void SetNewText(int level) { }

	// RVA: 0x297F104 Offset: 0x297F104 VA: 0x297F104
	public void DisableCrownStaticView() { }

	// RVA: 0x297F138 Offset: 0x297F138 VA: 0x297F138
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x297F140 Offset: 0x297F140 VA: 0x297F140
	private void <PlayCrownAnimation>b__49_0() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts