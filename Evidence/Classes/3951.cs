public class MagicPassVaultRewardAnimationView : MonoBehaviour // TypeDefIndex: 3951
{
	// Fields
	[SerializeField]
	private ParticleSystem _coinParticle; // 0x18
	[SerializeField]
	private ParticleSystem _coinShineParticle; // 0x20
	[SerializeField]
	private ParticleSystem _coinFontParticle; // 0x28
	[SerializeField]
	private TextMeshPro _coinText; // 0x30
	[SerializeField]
	private float _coinAnimationDuration; // 0x38
	private int _vaultCoinAmount; // 0x3C

	// Methods

	// RVA: 0x38EBAB8 Offset: 0x38EBAB8 VA: 0x38EBAB8
	public void Initialize(int vaultCoinAmount) { }

	// RVA: 0x38EBAC0 Offset: 0x38EBAC0 VA: 0x38EBAC0
	public void PlayCoinParticle() { }

	// RVA: 0x38EBAF4 Offset: 0x38EBAF4 VA: 0x38EBAF4
	public void PlayCoinShineParticle() { }

	// RVA: 0x38EBB10 Offset: 0x38EBB10 VA: 0x38EBB10
	public void PlayCoinFontParticle() { }

	// RVA: 0x38EBADC Offset: 0x38EBADC VA: 0x38EBADC
	private void PlayParticle(ParticleSystem particleSystem) { }

	// RVA: 0x38EBB2C Offset: 0x38EBB2C VA: 0x38EBB2C
	public void PlayCoinTextAnimation() { }

	// RVA: 0x38EBCE4 Offset: 0x38EBCE4 VA: 0x38EBCE4
	public void PlayAudioClip(SoundType soundType) { }

	// RVA: 0x38EBD74 Offset: 0x38EBD74 VA: 0x38EBD74
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]