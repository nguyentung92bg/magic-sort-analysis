public class AnimationPlayer : SimpleAnimation // TypeDefIndex: 14
{
	// Fields
	[SerializeField]
	private Animation _animation; // 0x18
	[SerializeField]
	private string _animationName; // 0x20
	[SerializeField]
	private float _speed; // 0x28
	[SerializeField]
	private bool _pingPong; // 0x2C
	private bool _isReversed; // 0x2D

	// Methods

	[Button]
	// RVA: 0x19EDBF8 Offset: 0x19EDBF8 VA: 0x19EDBF8 Slot: 4
	public override void PlayAnimation() { }

	// RVA: 0x19EDC24 Offset: 0x19EDC24 VA: 0x19EDC24
	private void PlayInternal(bool isReversed) { }

	// RVA: 0x19EDCD4 Offset: 0x19EDCD4 VA: 0x19EDCD4
	public void Reset() { }

	// RVA: 0x19EDD18 Offset: 0x19EDD18 VA: 0x19EDD18
	public void .ctor() { }
}

// Namespace: 