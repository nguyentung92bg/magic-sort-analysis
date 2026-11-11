public class MiniGameTridentView : MonoBehaviour // TypeDefIndex: 3558
{
	// Fields
	[SerializeField]
	private Transform _viewParent; // 0x18
	[SerializeField]
	private Animator _animator; // 0x20
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x28
	private static readonly int _hitTrigger; // 0x0
	private static readonly int _lastHitTrigger; // 0x4
	private bool _isAvailable; // 0x30

	// Methods

	// RVA: 0x2191124 Offset: 0x2191124 VA: 0x2191124
	public void PlayHitAnimation(Vector3 hitPosition, bool isLastHit) { }

	// RVA: 0x21915FC Offset: 0x21915FC VA: 0x21915FC
	public void SetAvailable(bool isAvailable) { }

	// RVA: 0x2191608 Offset: 0x2191608 VA: 0x2191608
	public bool IsAvailable() { }

	// RVA: 0x2191610 Offset: 0x2191610 VA: 0x2191610
	public void .ctor() { }

	// RVA: 0x2191618 Offset: 0x2191618 VA: 0x2191618
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.Board