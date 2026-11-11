public enum WeeklyTournamentStateType // TypeDefIndex: 1979
{
	// Fields
	public int value__; // 0x0
	public const WeeklyTournamentStateType InProgress = 0;
	public const WeeklyTournamentStateType Result = 1;
	public const WeeklyTournamentStateType Disable = 2;
	public const WeeklyTournamentStateType InsufficientLevel = 3;
	public const WeeklyTournamentStateType NoCachedTournament = 4;
	public const WeeklyTournamentStateType NotFinishedAtBackendResponseButTimeIsUp = 5;
	public const WeeklyTournamentStateType FinishedAtBackendResponseButTimeIsNotUp = 6;
	public const WeeklyTournamentStateType ResultIntroduced = 7;
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts