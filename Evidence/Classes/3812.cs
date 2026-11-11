public class MagicStreakAreYouSureView : AreYouSureContainer // TypeDefIndex: 3812
{
	// Fields
	[SerializeField]
	private MagicStreakTournamentProgressAnimationView _magicStreakProgressAnimationView; // 0x28
	private MagicStreakService _magicStreakService; // 0x30

	// Methods

	// RVA: 0x3E190E4 Offset: 0x3E190E4 VA: 0x3E190E4 Slot: 5
	public override void Initialize() { }

	// RVA: 0x3E19168 Offset: 0x3E19168 VA: 0x3E19168 Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(MagicStreakAreYouSureView.<Show>d__4))]
	// RVA: 0x3E19184 Offset: 0x3E19184 VA: 0x3E19184 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x3E19298 Offset: 0x3E19298 VA: 0x3E19298 Slot: 8
	public override void Hide() { }

	// RVA: 0x3E192FC Offset: 0x3E192FC VA: 0x3E192FC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner
[CreateAssetMenu(fileName = "MagicStreakTournamentBannerAnimationConfig", menuName = "Configs/MagicStreakTournamentBannerAnimationConfig", order = 1)]