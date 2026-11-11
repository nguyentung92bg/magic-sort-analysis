public class JourneyProgressIndicatorController : MonoBehaviour // TypeDefIndex: 16
{
	// Fields
	[SerializeField]
	private TextMeshPro _levelValueText; // 0x18
	[SerializeField]
	private float _positionOffset; // 0x20
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x28
	[Header("Animation")]
	[SerializeField]
	private float _xOffset; // 0x30
	[SerializeField]
	private FloatOptions _moveOptions; // 0x38
	[SerializeField]
	private FloatOptions _fadeOptions; // 0x40
	[SerializeField]
	private PunchOptions _scalePunchOptions; // 0x48

	// Methods

	// RVA: 0x19EE2CC Offset: 0x19EE2CC VA: 0x19EE2CC
	public void DisableView() { }

	// RVA: 0x19EE2F0 Offset: 0x19EE2F0 VA: 0x19EE2F0
	public void UpdateView(float positionY, int level) { }

	[Button]
	// RVA: 0x19EE3BC Offset: 0x19EE3BC VA: 0x19EE3BC
	public Tween EnableViewAnimated() { }

	// RVA: 0x19EE54C Offset: 0x19EE54C VA: 0x19EE54C
	public void .ctor() { }
}

// Namespace: 
[RequireComponent(typeof(Renderer))]