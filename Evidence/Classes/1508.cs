public class BottleCompleteAnimationController : MonoBehaviour // TypeDefIndex: 1508
{
	// Fields
	[SerializeField]
	private BottleCompleteAnimationController.WinParticleByHeight[] _winParticleByHeight; // 0x18
	[SerializeField]
	private WinParticle _winParticle; // 0x20
	[SerializeField]
	private BottleFillAnimationConfig _bottleFillAnimationConfig; // 0x28
	[SerializeField]
	private BottleStopperView _bottleStopperView; // 0x30
	[SerializeField]
	private Transform _root; // 0x38
	private SpriteRenderer _stopperGlowRenderer; // 0x40

	// Methods

	// RVA: 0x24920A8 Offset: 0x24920A8 VA: 0x24920A8
	public Sequence PlayStopperAnimation(int bottleHeight, bool hasAnimationBlockingBlocker) { }

	// RVA: 0x24923C0 Offset: 0x24923C0 VA: 0x24923C0
	public void PlayWinParticles(int bottleHeight, ColorAndColorId winParticleColor) { }

	// RVA: 0x2492294 Offset: 0x2492294 VA: 0x2492294
	public Sequence PlayDefaultCompleteAnimation(int bottleHeight) { }

	// RVA: 0x24920BC Offset: 0x24920BC VA: 0x24920BC
	public Sequence PlayVariantCompleteAnimation(int bottleHeight, bool hasAnimationBlockingBlocker) { }

	// RVA: 0x2492600 Offset: 0x2492600 VA: 0x2492600
	private float GetStopperDelay(int bottleHeight) { }

	// RVA: 0x249262C Offset: 0x249262C VA: 0x249262C
	private Sequence CreateTwitchSequence() { }

	// RVA: 0x249289C Offset: 0x249289C VA: 0x249289C
	private Tween CreateInitialRiseTween(float startY) { }

	// RVA: 0x2492984 Offset: 0x2492984 VA: 0x2492984
	private Sequence CreateMoveAndScaleSequence(float startY, bool hasAnimationBlockingBlocker) { }

	// RVA: 0x2492D3C Offset: 0x2492D3C VA: 0x2492D3C
	private void PlayBottleEndFeedback() { }

	// RVA: 0x2492E08 Offset: 0x2492E08 VA: 0x2492E08
	private void ResetRotation() { }

	// RVA: 0x2492C28 Offset: 0x2492C28 VA: 0x2492C28
	private Sequence CreateStopperCallbackSequence(bool useNewParticles) { }

	// RVA: 0x2492E70 Offset: 0x2492E70 VA: 0x2492E70
	public void SetStopperGlowRenderer(SpriteRenderer stopperGlowRenderer) { }

	// RVA: 0x2492E78 Offset: 0x2492E78 VA: 0x2492E78
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle
[CreateAssetMenu(fileName = "BottleFillAnimationConfig", menuName = "Configs/BottleFillAnimationConfig")]