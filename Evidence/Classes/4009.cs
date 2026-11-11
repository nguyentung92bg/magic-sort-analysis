public class MagicLabCauldronView : MonoBehaviour // TypeDefIndex: 4009
{
	// Fields
	[SerializeField]
	private Animation _animation; // 0x18
	[SerializeField]
	private Animation _trailParticleAnimation; // 0x20
	[SerializeField]
	private ParticleSystem _cauldronPourFx; // 0x28
	[SerializeField]
	private SpriteRenderer _cauldronFrontRenderer; // 0x30
	[SerializeField]
	private SpriteRenderer _cauldronBackRenderer; // 0x38
	[SerializeField]
	private Sprite[] _frontCauldrons; // 0x40
	[SerializeField]
	private Sprite[] _backCauldrons; // 0x48

	// Methods

	// RVA: 0x37566F0 Offset: 0x37566F0 VA: 0x37566F0
	public void SetCauldronType(int stageId) { }

	// RVA: 0x3756784 Offset: 0x3756784 VA: 0x3756784
	public void PlayCauldronChange() { }

	// RVA: 0x37567D8 Offset: 0x37567D8 VA: 0x37567D8
	public void PlayClaimFx(int stageId) { }

	// RVA: 0x3756878 Offset: 0x3756878 VA: 0x3756878
	public void PlayCauldronPourFx() { }

	// RVA: 0x3756894 Offset: 0x3756894 VA: 0x3756894
	public void SetHandlePositions(int cauldronType) { }

	// RVA: 0x3756898 Offset: 0x3756898 VA: 0x3756898
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts.UI