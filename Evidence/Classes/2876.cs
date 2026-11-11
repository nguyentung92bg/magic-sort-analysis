public class HomeController : MonoBehaviour // TypeDefIndex: 2876
{
	// Fields
	[SerializeField]
	private PlayButtonContainer _playButton; // 0x18
	[SerializeField]
	private JourneyHomePosterHandler _journeyHomePosterHandler; // 0x20
	[SerializeField]
	private ChampionsLeaguePosterHandler _championsLeaguePosterHandler; // 0x28
	[SerializeField]
	private Transform _topUi; // 0x30
	[SerializeField]
	private Transform _iconsLeft; // 0x38
	[SerializeField]
	private Transform _iconsRight; // 0x40
	[SerializeField]
	private Transform _playButtonRoot; // 0x48
	[SerializeField]
	private Transform _magicStreakGae; // 0x50
	private HomeAnimationsConfig _homeAnimationsConfig; // 0x58
	private Vector3 _topUiInitialPosition; // 0x60
	private Vector3 _iconsLeftInitialPosition; // 0x6C
	private Vector3 _iconsRightInitialPosition; // 0x78
	private Vector3 _magicStreakGaeProgressbarInitialPosition; // 0x84
	private Vector3 _playButtonRootInitialPosition; // 0x90

	// Properties
	public PlayButtonContainer PlayButton { get; }

	// Methods

	// RVA: 0x297A068 Offset: 0x297A068 VA: 0x297A068
	public PlayButtonContainer get_PlayButton() { }

	// RVA: 0x297A070 Offset: 0x297A070 VA: 0x297A070
	public void Initialize() { }

	// RVA: 0x297A3AC Offset: 0x297A3AC VA: 0x297A3AC
	public void Dispose() { }

	// RVA: 0x297A518 Offset: 0x297A518 VA: 0x297A518
	private void ChampionsLeaguePosterSelectionUpdated(bool isSelected) { }

	// RVA: 0x297A294 Offset: 0x297A294 VA: 0x297A294
	private void UpdateHomeBackground() { }

	// RVA: 0x297A51C Offset: 0x297A51C VA: 0x297A51C
	public Sequence HideUI() { }

	// RVA: 0x297A910 Offset: 0x297A910 VA: 0x297A910
	public Sequence ShowUI() { }

	// RVA: 0x297ABE8 Offset: 0x297ABE8 VA: 0x297ABE8
	public void PrepareHomeUi(int level) { }

	// RVA: 0x297AD90 Offset: 0x297AD90 VA: 0x297AD90
	public Sequence PlayLevelTextChangeAnimations() { }

	// RVA: 0x297B7FC Offset: 0x297B7FC VA: 0x297B7FC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts