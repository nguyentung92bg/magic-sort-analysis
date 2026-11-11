public class JourneyProgressBarController : MonoBehaviour // TypeDefIndex: 4102
{
	// Fields
	[SerializeField]
	private SpriteRenderer _innerProgressBarSpriteRenderer; // 0x18
	[SerializeField]
	private SpriteRenderer _innerProgressBarTopSpriteRenderer; // 0x20
	[SerializeField]
	private float _innerProgressBarInitialPositionBuffer; // 0x28
	[SerializeField]
	private FloatOptions _progressBarSizeYOptions; // 0x30
	[SerializeField]
	private FloatOptions _progressBarTopMoveYOptions; // 0x38
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x40
	private float _startYPos; // 0x48

	// Methods

	// RVA: 0x3A7E908 Offset: 0x3A7E908 VA: 0x3A7E908
	public void SetFirstElementPosition(Vector3 position, Vector3 size) { }

	[Button]
	// RVA: 0x3A7E91C Offset: 0x3A7E91C VA: 0x3A7E91C
	public void Reset() { }

	// RVA: 0x3A7D974 Offset: 0x3A7D974 VA: 0x3A7D974
	public void SetProgressBarPosition(Vector3 position) { }

	[Button]
	// RVA: 0x3A7DE50 Offset: 0x3A7DE50 VA: 0x3A7DE50
	public Tween SetProgressBarPositionTween(Vector3 position) { }

	// RVA: 0x3A809D4 Offset: 0x3A809D4 VA: 0x3A809D4
	public float GetCurrentYPos() { }

	// RVA: 0x3A7EA68 Offset: 0x3A7EA68 VA: 0x3A7EA68
	public float GetInnerProgressBarTopYPosition() { }

	// RVA: 0x3A809F8 Offset: 0x3A809F8 VA: 0x3A809F8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A80A00 Offset: 0x3A80A00 VA: 0x3A80A00
	private void <SetProgressBarPositionTween>b__10_0() { }
}

// Namespace: 
[CompilerGenerated]