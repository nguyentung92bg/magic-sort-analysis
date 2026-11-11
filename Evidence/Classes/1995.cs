public class WeeklyTournamentLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 1995
{
	// Fields
	[SerializeField]
	private WeeklyTournamentLeaderboardViewFactory _factory; // 0x20
	private List<WeeklyTournamentLeaderboardPlayerViewModel> _viewModels; // 0x28
	[CompilerGenerated]
	private bool <IsInitialized>k__BackingField; // 0x30

	// Properties
	public override int Count { get; }
	public bool IsInitialized { get; set; }

	// Methods

	// RVA: 0x32DF488 Offset: 0x32DF488 VA: 0x32DF488 Slot: 5
	public override int get_Count() { }

	[CompilerGenerated]
	// RVA: 0x32DF4D0 Offset: 0x32DF4D0 VA: 0x32DF4D0
	public bool get_IsInitialized() { }

	[CompilerGenerated]
	// RVA: 0x32DF4D8 Offset: 0x32DF4D8 VA: 0x32DF4D8
	private void set_IsInitialized(bool value) { }

	// RVA: 0x32DF4E4 Offset: 0x32DF4E4 VA: 0x32DF4E4 Slot: 7
	public override void Initialize() { }

	// RVA: 0x32DF4E8 Offset: 0x32DF4E8 VA: 0x32DF4E8
	public void SetViewModels(List<WeeklyTournamentLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x32DF4F0 Offset: 0x32DF4F0 VA: 0x32DF4F0 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x32DF53C Offset: 0x32DF53C VA: 0x32DF53C Slot: 11
	public override void UpdateView(BasicView basicView, int index) { }

	// RVA: 0x32DF5FC Offset: 0x32DF5FC VA: 0x32DF5FC Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x32DF6D0 Offset: 0x32DF6D0 VA: 0x32DF6D0 Slot: 13
	public override void Reverse() { }

	// RVA: 0x32DF720 Offset: 0x32DF720 VA: 0x32DF720 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x32DF78C Offset: 0x32DF78C VA: 0x32DF78C
	private void Awake() { }

	// RVA: 0x32DF790 Offset: 0x32DF790 VA: 0x32DF790
	private void OnDestroy() { }

	// RVA: 0x32DF794 Offset: 0x32DF794 VA: 0x32DF794
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts.UI
[CreateAssetMenu(fileName = "WeeklyTournamentLeaderboardViewFactory", menuName = "Factory/WeeklyTournamentLeaderboardViewFactory")]