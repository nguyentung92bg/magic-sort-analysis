public class MagicLabStageView : MonoBehaviour // TypeDefIndex: 4031
{
	// Fields
	[SerializeField]
	private ParticleSystem _chestParticle; // 0x18
	[SerializeField]
	private MagicLabPopUpConfig _animationConfig; // 0x20
	[SerializeField]
	private int _stageId; // 0x28
	[SerializeField]
	private List<MagicLabTaskView> _magicLabTaskViews; // 0x30
	[SerializeField]
	private ChestView _chestView; // 0x38
	[SerializeField]
	private MagicLabStageButton _button; // 0x40
	private MagicLabController _magicLabController; // 0x48
	private int _reachedMaxStageId; // 0x50
	private MagicLabCauldronView _magicLabCauldronView; // 0x58

	// Properties
	public int StageId { get; }
	public List<MagicLabTaskView> MagicLabTaskViews { get; }
	public ChestView ChestView { get; }

	// Methods

	// RVA: 0x375B9B8 Offset: 0x375B9B8 VA: 0x375B9B8
	public int get_StageId() { }

	// RVA: 0x375B9C0 Offset: 0x375B9C0 VA: 0x375B9C0
	public List<MagicLabTaskView> get_MagicLabTaskViews() { }

	// RVA: 0x375B9C8 Offset: 0x375B9C8 VA: 0x375B9C8
	public ChestView get_ChestView() { }

	// RVA: 0x3757180 Offset: 0x3757180 VA: 0x3757180
	public void Initialize(MagicLabController magicLabController, MagicLabStageViewModel magicLabStage, int lastSeenStageId, int reachedMaxStageId, MagicLabCauldronView cauldronView) { }

	// RVA: 0x3758D30 Offset: 0x3758D30 VA: 0x3758D30
	public void Dispose() { }

	// RVA: 0x375C068 Offset: 0x375C068 VA: 0x375C068
	private void OpenStageUsingLabController() { }

	// RVA: 0x3758F2C Offset: 0x3758F2C VA: 0x3758F2C
	public void OpenStage() { }

	// RVA: 0x3758F64 Offset: 0x3758F64 VA: 0x3758F64
	public void Close() { }

	[Button]
	// RVA: 0x37583C0 Offset: 0x37583C0 VA: 0x37583C0
	public Sequence PlayStageCompleteAnimation(MagicLabViewModel viewModel) { }

	[Button]
	// RVA: 0x3758118 Offset: 0x3758118 VA: 0x3758118
	public Sequence ShowTaskPopUpAnimations() { }

	// RVA: 0x375C1D4 Offset: 0x375C1D4 VA: 0x375C1D4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts.UI