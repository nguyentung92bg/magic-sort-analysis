private sealed class EventSender.<>c // TypeDefIndex: 5259
{
	// Fields
	public static readonly EventSender.<>c <>9; // 0x0
	public static Func<MagicStreakTournamentLeaderboardPlayerViewModel, bool> <>9__63_0; // 0x8
	public static Func<MagicStreakTournamentLeaderboardPlayerViewModel, bool> <>9__64_0; // 0x10
	public static Func<MagicStreakTournamentLeaderboardPlayerViewModel, bool> <>9__65_0; // 0x18
	public static Func<MagicStreakTournamentLeaderboardPlayerViewModel, bool> <>9__66_0; // 0x20
	public static Func<WeeklyTournamentLeaderboardPlayerViewModel, bool> <>9__80_0; // 0x28
	public static Func<WeeklyTournamentLeaderboardPlayerViewModel, bool> <>9__80_1; // 0x30
	public static Func<WeeklyLeaderBoardPlayer, bool> <>9__81_0; // 0x38
	public static Func<WeeklyLeaderBoardPlayer, bool> <>9__81_1; // 0x40
	public static Converter<WindQuestStepCacheModel, int> <>9__354_0; // 0x48

	// Methods

	// RVA: 0x1CC6518 Offset: 0x1CC6518 VA: 0x1CC6518
	private static void .cctor() { }

	// RVA: 0x1CC6588 Offset: 0x1CC6588 VA: 0x1CC6588
	public void .ctor() { }

	// RVA: 0x1CC6590 Offset: 0x1CC6590 VA: 0x1CC6590
	internal bool <SendStreakTournamentJoinedEvent>b__63_0(MagicStreakTournamentLeaderboardPlayerViewModel user) { }

	// RVA: 0x1CC65A8 Offset: 0x1CC65A8 VA: 0x1CC65A8
	internal bool <SendStreakLeaderBoardImpressionStat>b__64_0(MagicStreakTournamentLeaderboardPlayerViewModel user) { }

	// RVA: 0x1CC65C0 Offset: 0x1CC65C0 VA: 0x1CC65C0
	internal bool <SendStreakTournamentFinishedStat>b__65_0(MagicStreakTournamentLeaderboardPlayerViewModel user) { }

	// RVA: 0x1CC65D8 Offset: 0x1CC65D8 VA: 0x1CC65D8
	internal bool <SendStreakTournamentProgressClaimStat>b__66_0(MagicStreakTournamentLeaderboardPlayerViewModel user) { }

	// RVA: 0x1CC65F0 Offset: 0x1CC65F0 VA: 0x1CC65F0
	internal bool <SendWeeklyTournamentJoinedEvent>b__80_0(WeeklyTournamentLeaderboardPlayerViewModel user) { }

	// RVA: 0x1CC6620 Offset: 0x1CC6620 VA: 0x1CC6620
	internal bool <SendWeeklyTournamentJoinedEvent>b__80_1(WeeklyTournamentLeaderboardPlayerViewModel user) { }

	// RVA: 0x1CC6638 Offset: 0x1CC6638 VA: 0x1CC6638
	internal bool <SendWeeklyTournamentClaimedEvent>b__81_0(WeeklyLeaderBoardPlayer p) { }

	// RVA: 0x1CC6668 Offset: 0x1CC6668 VA: 0x1CC6668
	internal bool <SendWeeklyTournamentClaimedEvent>b__81_1(WeeklyLeaderBoardPlayer p) { }

	// RVA: 0x1CC6680 Offset: 0x1CC6680 VA: 0x1CC6680
	internal int <AddWindQuestCommonData>b__354_0(WindQuestStepCacheModel goal) { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts