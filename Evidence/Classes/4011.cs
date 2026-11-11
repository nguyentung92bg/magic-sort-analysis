public class MagicLabChestView : MonoBehaviour // TypeDefIndex: 4011
{
	// Fields
	[SerializeField]
	private ChestView _chestView; // 0x18
	[SerializeField]
	private GameObject _claimedTickGameObject; // 0x20
	[SerializeField]
	private Button _claimButton; // 0x28
	[SerializeField]
	private MagicLabController _magicLabController; // 0x30
	[SerializeField]
	private ParticleSystem _claimFx; // 0x38
	private int _stageId; // 0x40

	// Properties
	public ChestView ChestView { get; }

	// Methods

	// RVA: 0x37569A0 Offset: 0x37569A0 VA: 0x37569A0
	public ChestView get_ChestView() { }

	// RVA: 0x37569A8 Offset: 0x37569A8 VA: 0x37569A8
	public void Initialize(RewardModel rewardModel, MagicLabStageViewModel magicLabStageViewModel) { }

	// RVA: 0x3756ACC Offset: 0x3756ACC VA: 0x3756ACC
	public void SetButtonScale(float scale) { }

	// RVA: 0x3756B0C Offset: 0x3756B0C VA: 0x3756B0C
	public Tween PlayButtonScale() { }

	// RVA: 0x3756BB8 Offset: 0x3756BB8 VA: 0x3756BB8
	public void PlayButtonFx() { }

	// RVA: 0x3756BD4 Offset: 0x3756BD4 VA: 0x3756BD4
	public void Dispose() { }

	// RVA: 0x3756C60 Offset: 0x3756C60 VA: 0x3756C60
	private void ClaimChest() { }

	// RVA: 0x3756DB8 Offset: 0x3756DB8 VA: 0x3756DB8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]