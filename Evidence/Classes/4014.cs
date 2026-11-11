public class MagicLabController : MonoBehaviour // TypeDefIndex: 4014
{
	// Fields
	[SerializeField]
	private MagicLabPopUpConfig _magicLabPopUpConfig; // 0x18
	[SerializeField]
	private MagicLabTimer _magicLabTimer; // 0x20
	[SerializeField]
	private MagicLabCauldronView _magicLabCauldronView; // 0x28
	[SerializeField]
	private List<MagicLabStageView> _magicLabStageView; // 0x30
	[SerializeField]
	private List<MagicLabChestView> _chestViews; // 0x38
	[SerializeField]
	private MagicLabChestProgressbar _magicLabChestProgressbar; // 0x40
	private int _lastSeenStageId; // 0x48
	private int _currentStageId; // 0x4C
	private RewardService _rewardService; // 0x50
	private MagicLabService _magicLabService; // 0x58

	// Methods

	// RVA: 0x3756DC0 Offset: 0x3756DC0 VA: 0x3756DC0
	public void Initialize(MagicLabViewModel magicLabViewModel) { }

	// RVA: 0x3757374 Offset: 0x3757374 VA: 0x3757374
	public void TryPlayTasksAndStageCompleteAnimationOfLastSeenStage(MagicLabViewModel magicLabViewModel) { }

	// RVA: 0x3757F94 Offset: 0x3757F94 VA: 0x3757F94
	private Sequence OpenStageWithAnimation(int currentStageId) { }

	// RVA: 0x3757EA8 Offset: 0x3757EA8 VA: 0x3757EA8
	public Sequence PlayStageCompleteAnimation(MagicLabViewModel magicLabViewModel) { }

	// RVA: 0x3758904 Offset: 0x3758904 VA: 0x3758904
	public void Dispose() { }

	// RVA: 0x3758DBC Offset: 0x3758DBC VA: 0x3758DBC
	public void OpenStage(int stageId) { }

	// RVA: 0x3756CE4 Offset: 0x3756CE4 VA: 0x3756CE4
	public void ClaimChest(int stageId) { }

	// RVA: 0x37590F8 Offset: 0x37590F8 VA: 0x37590F8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]