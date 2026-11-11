public class ColorPaletteController : MonoBehaviour // TypeDefIndex: 216
{
	// Fields
	[SerializeField]
	private List<ColorConfig> colorConfigs; // 0x18
	[CompilerGenerated]
	private Color <SelectedColor>k__BackingField; // 0x20
	[SerializeField]
	private ColorPaletteView _colorPaletteViewPrefab; // 0x30
	private List<ColorPaletteView> _colorPaletteViews; // 0x38
	[SerializeField]
	private Transform _paletteTransform; // 0x40

	// Properties
	public Color SelectedColor { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x37A0680 Offset: 0x37A0680 VA: 0x37A0680
	public Color get_SelectedColor() { }

	[CompilerGenerated]
	// RVA: 0x37A068C Offset: 0x37A068C VA: 0x37A068C
	public void set_SelectedColor(Color value) { }

	// RVA: 0x37A0698 Offset: 0x37A0698 VA: 0x37A0698
	public void SelectColor(Color color) { }

	// RVA: 0x37A06A4 Offset: 0x37A06A4 VA: 0x37A06A4
	public void Awake() { }

	// RVA: 0x37A0960 Offset: 0x37A0960 VA: 0x37A0960
	public void OnDestroy() { }

	// RVA: 0x37A0AF8 Offset: 0x37A0AF8 VA: 0x37A0AF8
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.UI.Scripts.ColorPaletteNS