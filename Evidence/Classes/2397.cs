public class TeamArenaStepRewardView : BasicView // TypeDefIndex: 2397
{
	// Fields
	[SerializeField]
	private BasicUIElement _uiElement; // 0x28
	[SerializeField]
	private TeamArenaLeaderboardRewardView _rewardView; // 0x30
	[SerializeField]
	private GameObject _finalRewardContainer; // 0x38
	[SerializeField]
	private GameObject _claimedRewardContainer; // 0x40
	[SerializeField]
	private GameObject _defaultRewardContainer; // 0x48
	[SerializeField]
	private GameObject _tickContainer; // 0x50
	[SerializeField]
	private GameObject _lockContainer; // 0x58
	[SerializeField]
	private GameObject _shineVfxContainer; // 0x60
	[SerializeField]
	private GameObject _bottomStick; // 0x68
	[SerializeField]
	private GameObject _topStick; // 0x70
	[SerializeField]
	private GameObject _rankBgDefault; // 0x78
	[SerializeField]
	private GameObject _rankBgLocked; // 0x80
	[SerializeField]
	private GameObject _rewardContainer; // 0x88
	[SerializeField]
	private TMP_Text _rankText; // 0x90
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x98

	// Properties
	public Vector3 Size { get; }
	public override int Id { get; set; }

	// Methods

	// RVA: 0x296A9D4 Offset: 0x296A9D4 VA: 0x296A9D4
	public Vector3 get_Size() { }

	[CompilerGenerated]
	// RVA: 0x296A9FC Offset: 0x296A9FC VA: 0x296A9FC Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x296AA04 Offset: 0x296AA04 VA: 0x296AA04 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x296AA0C Offset: 0x296AA0C VA: 0x296AA0C Slot: 7
	public override void Initialize() { }

	// RVA: 0x296AA10 Offset: 0x296AA10 VA: 0x296AA10 Slot: 8
	public override void Recycle() { }

	// RVA: 0x296AA5C Offset: 0x296AA5C VA: 0x296AA5C
	public void SetViewModel(TeamArenaStepRewardViewModel viewModel) { }

	// RVA: 0x296AC6C Offset: 0x296AC6C VA: 0x296AC6C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups.StepRewardsScrollBar