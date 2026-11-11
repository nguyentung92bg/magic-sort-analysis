public class MiniGameLobbyButtonParticleController : MonoBehaviour // TypeDefIndex: 3507
{
	// Fields
	[SerializeField]
	private ParticleSystem _waterParticle1; // 0x18
	[SerializeField]
	private ParticleSystem _waterParticle2; // 0x20
	[SerializeField]
	private ParticleSystem _waterParticle3; // 0x28
	private bool _canPlayParticle; // 0x30

	// Methods

	// RVA: 0x20B9F0C Offset: 0x20B9F0C VA: 0x20B9F0C
	private void OnEnable() { }

	// RVA: 0x20BA144 Offset: 0x20BA144 VA: 0x20BA144
	private void OnDisable() { }

	// RVA: 0x20BA37C Offset: 0x20BA37C VA: 0x20BA37C
	private void OnPeekToPage(PageType pageType) { }

	// RVA: 0x20BA3DC Offset: 0x20BA3DC VA: 0x20BA3DC
	private void OnNavigationPageButtonClicked(PageType pageType) { }

	// RVA: 0x20BA3E4 Offset: 0x20BA3E4 VA: 0x20BA3E4
	private void OnSwipeToPageSignal(PageType pageType) { }

	// RVA: 0x20BA3EC Offset: 0x20BA3EC VA: 0x20BA3EC
	private void OnSwipeScreenToIndex(PageType pageType) { }

	// RVA: 0x20BA3FC Offset: 0x20BA3FC VA: 0x20BA3FC
	public void PlayWaterParticle1() { }

	// RVA: 0x20BA430 Offset: 0x20BA430 VA: 0x20BA430
	public void PlayWaterParticle2() { }

	// RVA: 0x20BA438 Offset: 0x20BA438 VA: 0x20BA438
	public void PlayWaterParticle3() { }

	// RVA: 0x20BA404 Offset: 0x20BA404 VA: 0x20BA404
	private void PlayWaterParticle(ParticleSystem particle) { }

	// RVA: 0x20BA384 Offset: 0x20BA384 VA: 0x20BA384
	private void StopWaterParticles() { }

	// RVA: 0x20BA440 Offset: 0x20BA440 VA: 0x20BA440
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI