public class MagicStreakGaeAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 3836
{
	// Fields
	[SerializeField]
	private MagicStreakTournamentProgressAnimationView _magicStreakProgressAnimationView; // 0x28
	private MagicStreakGaeService _magicStreakGaeService; // 0x30

	// Methods

	// RVA: 0x3CF2DF0 Offset: 0x3CF2DF0 VA: 0x3CF2DF0 Slot: 5
	public override void Initialize() { }

	// RVA: 0x3CF2E74 Offset: 0x3CF2E74 VA: 0x3CF2E74 Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(MagicStreakGaeAreYouSureContainer.<Show>d__4))]
	// RVA: 0x3CF2EF8 Offset: 0x3CF2EF8 VA: 0x3CF2EF8 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x3CF300C Offset: 0x3CF300C VA: 0x3CF300C Slot: 8
	public override void Hide() { }

	// RVA: 0x3CF3044 Offset: 0x3CF3044 VA: 0x3CF3044
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts