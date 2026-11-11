public class BottlesAnimationManager : MonoBehaviour // TypeDefIndex: 2910
{
	// Fields
	[SerializeField]
	private List<BottleAnimationController> _bottleAnimationControllers4; // 0x18
	[SerializeField]
	private List<BottleAnimationController> _bottleAnimationControllers6; // 0x20
	[SerializeField]
	private List<BottleAnimationController> _bottleAnimationControllers8; // 0x28
	[SerializeField]
	private List<BottleAnimationController> _bottleAnimationControllers; // 0x30
	[SerializeField]
	private float _delayBetweenBottles; // 0x38
	[SerializeField]
	private ParticleSystem _cauldronParticleSystem; // 0x40
	[SerializeField]
	private ParticleSystem _cauldronSmokeParticleSystem; // 0x48

	// Methods

	[Button]
	// RVA: 0x2983394 Offset: 0x2983394 VA: 0x2983394
	public Tween PlayBottleAnimations(int bottleCount) { }

	// RVA: 0x298369C Offset: 0x298369C VA: 0x298369C
	private List<BottleAnimationController> GetBottleAnimationControllers(int bottleCount) { }

	// RVA: 0x29836C8 Offset: 0x29836C8 VA: 0x29836C8
	private void SetIdle() { }

	[Button]
	// RVA: 0x2983810 Offset: 0x2983810 VA: 0x2983810
	public void PlaySmokeForRegularLevels() { }

	[Button]
	// RVA: 0x298382C Offset: 0x298382C VA: 0x298382C
	public void PlaySmokeForSuperHardAndHardLevels() { }

	// RVA: 0x298390C Offset: 0x298390C VA: 0x298390C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts.Cauldron