public class TMPShineAnimation : MonoBehaviour // TypeDefIndex: 18
{
	// Fields
	[SerializeField]
	[Header("Text")]
	private TextMeshPro _text; // 0x18
	[Header("Shine Parameters")]
	[ColorUsage(True, True)]
	public Color ShineColor; // 0x20
	[Range(0, 5)]
	public float ShineSpeed; // 0x30
	[Range(0, 1)]
	public float ShineWidth; // 0x34
	[Range(0, 5)]
	public float ShineGlow; // 0x38
	[Range(0, 5)]
	public float ShineSpread; // 0x3C
	[Range(0, 1)]
	public float ShineEdgePadding; // 0x40
	[Range(0, 1)]
	public float ShinePosition; // 0x44
	private static readonly int ID_ShineColor; // 0x0
	private static readonly int ID_ShineSpeed; // 0x4
	private static readonly int ID_ShineWidth; // 0x8
	private static readonly int ID_ShineGlow; // 0xC
	private static readonly int ID_ShineSpread; // 0x10
	private static readonly int ID_ShinePosition; // 0x14
	private static readonly int ID_MinX; // 0x18
	private static readonly int ID_MaxX; // 0x1C
	private static readonly int ID_EdgePad; // 0x20
	private Renderer _renderer; // 0x48
	private Material _materialOriginal; // 0x50
	private Material _materialInstance; // 0x58

	// Methods

	// RVA: 0x19EE72C Offset: 0x19EE72C VA: 0x19EE72C
	private void OnEnable() { }

	// RVA: 0x19EEAAC Offset: 0x19EEAAC VA: 0x19EEAAC
	private void OnDisable() { }

	// RVA: 0x19EEB64 Offset: 0x19EEB64 VA: 0x19EEB64
	private void OnDidApplyAnimationProperties() { }

	// RVA: 0x19EE854 Offset: 0x19EE854 VA: 0x19EE854
	private void ApplyAll() { }

	// RVA: 0x19EEB68 Offset: 0x19EEB68 VA: 0x19EEB68
	public void .ctor() { }

	// RVA: 0x19EEB8C Offset: 0x19EEB8C VA: 0x19EEB8C
	private static void .cctor() { }
}

// Namespace: 
[ExecuteInEditMode]