public class GamePlayUI : UIRoot, IInitializable // TypeDefIndex: 1127
{
	// Fields
	[SerializeField]
	private TextMeshPro _hapticName; // 0x40
	[SerializeField]
	private LevelTextAnimationHandler _levelTextParent; // 0x48
	[SerializeField]
	private BoosterButtonAnimationHandler _boostersParent; // 0x50
	[SerializeField]
	private InLevelTextView _inLevelTextView; // 0x58
	[SerializeField]
	private InLevelBackgroundController _inLevelBackgroundController; // 0x60
	[SerializeField]
	private DailyInLevelTimer _dailInLevelTimer; // 0x68
	[SerializeField]
	private FingerView _fingerView; // 0x70
	[SerializeField]
	private WandView _wandView; // 0x78
	[SerializeField]
	private InLevelSettingsController _inLevelSettingsController; // 0x80
	[SerializeField]
	private List<SpriteSetterByDifficultyType> _spriteSetters; // 0x88
	private LevelStats _levelStats; // 0x90

	// Properties
	public InLevelTextView InLevelTextView { get; }
	public InLevelSettingsController InLevelSettingsController { get; }
	public DailyInLevelTimer DailyInLevelTimer { get; }
	public InLevelBackgroundController InLevelBackgroundController { get; }

	// Methods

	// RVA: 0x160C490 Offset: 0x160C490 VA: 0x160C490
	public InLevelTextView get_InLevelTextView() { }

	// RVA: 0x160C498 Offset: 0x160C498 VA: 0x160C498
	public InLevelSettingsController get_InLevelSettingsController() { }

	// RVA: 0x160C4A0 Offset: 0x160C4A0 VA: 0x160C4A0
	public DailyInLevelTimer get_DailyInLevelTimer() { }

	// RVA: 0x160C4A8 Offset: 0x160C4A8 VA: 0x160C4A8
	public InLevelBackgroundController get_InLevelBackgroundController() { }

	// RVA: 0x160C4B0 Offset: 0x160C4B0 VA: 0x160C4B0 Slot: 13
	public override void Awake() { }

	// RVA: 0x160C4F0 Offset: 0x160C4F0 VA: 0x160C4F0 Slot: 11
	public override void Initialize() { }

	// RVA: 0x160C714 Offset: 0x160C714 VA: 0x160C714
	public void SetSpritesByDifficulty(LevelDifficultyType difficultyType) { }

	// RVA: 0x160C868 Offset: 0x160C868 VA: 0x160C868 Slot: 12
	public override void Dispose() { }

	// RVA: 0x160C86C Offset: 0x160C86C VA: 0x160C86C
	public void OnEnable() { }

	// RVA: 0x160C928 Offset: 0x160C928 VA: 0x160C928
	public void SetHapticUrl(string url) { }

	// RVA: 0x160C94C Offset: 0x160C94C VA: 0x160C94C Slot: 14
	public override void Show() { }

	// RVA: 0x160C970 Offset: 0x160C970 VA: 0x160C970 Slot: 15
	public override void Hide() { }

	// RVA: 0x160C994 Offset: 0x160C994 VA: 0x160C994
	public Tween PlayWandAnimation(Vector3 hitPosition, Action revealAction) { }

	// RVA: 0x160C9B0 Offset: 0x160C9B0 VA: 0x160C9B0
	public void PlayFingerSpawnAndClickAnimation(Vector3 inLevelPosition) { }

	// RVA: 0x160CAF0 Offset: 0x160CAF0 VA: 0x160CAF0
	public void HideFinger() { }

	// RVA: 0x160CB48 Offset: 0x160CB48 VA: 0x160CB48
	public void OnDestroy() { }

	// RVA: 0x160CB54 Offset: 0x160CB54 VA: 0x160CB54
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.Common.Scripts