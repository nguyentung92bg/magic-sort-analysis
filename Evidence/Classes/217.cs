public class ColorPaletteView : MonoBehaviour // TypeDefIndex: 217
{
	// Fields
	[SerializeField]
	private Image _image; // 0x18
	[SerializeField]
	private TextMeshProUGUI _usageAmount; // 0x20
	private ColorAndColorId _colorAndColorId; // 0x28

	// Methods

	// RVA: 0x37A0B00 Offset: 0x37A0B00 VA: 0x37A0B00
	public void Awake() { }

	// RVA: 0x37A0C6C Offset: 0x37A0C6C VA: 0x37A0C6C
	public void OnClick() { }

	// RVA: 0x37A0D04 Offset: 0x37A0D04 VA: 0x37A0D04
	public Color GetColor() { }

	// RVA: 0x37A0D24 Offset: 0x37A0D24 VA: 0x37A0D24
	private void SetUsageAmount(Dictionary<Color, int> amountByColors) { }

	// RVA: 0x37A0DF0 Offset: 0x37A0DF0 VA: 0x37A0DF0
	private void SetUsageAmount(int amount) { }

	// RVA: 0x37A0910 Offset: 0x37A0910 VA: 0x37A0910
	public void SetColor(ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A0E38 Offset: 0x37A0E38 VA: 0x37A0E38
	public void OnDestroy() { }

	// RVA: 0x37A0F1C Offset: 0x37A0F1C VA: 0x37A0F1C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x37A0F24 Offset: 0x37A0F24 VA: 0x37A0F24
	private void <Awake>b__3_0() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common