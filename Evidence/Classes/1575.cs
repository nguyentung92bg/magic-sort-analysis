public class ColorService : MonoBehaviour, IService, IInitializable, IDisposable // TypeDefIndex: 1575
{
	// Fields
	[SerializeField]
	private ColorPalette _colorPalettes; // 0x18
	[SerializeField]
	private ColorPalette _colorPalettesVariantA; // 0x20
	[SerializeField]
	private ColorPalette _colorPalettesVariantB; // 0x28
	private ColorPalette _currentColorPalette; // 0x30

	// Methods

	// RVA: 0x2307B28 Offset: 0x2307B28 VA: 0x2307B28 Slot: 4
	public void Initialize() { }

	// RVA: 0x2307BE4 Offset: 0x2307BE4 VA: 0x2307BE4
	public ColorAndColorId GetColorAndColorId(int index) { }

	// RVA: 0x2307D70 Offset: 0x2307D70 VA: 0x2307D70
	public ColorAndColorId GetColorAndColorId(ColorId colorId) { }

	// RVA: 0x2307E58 Offset: 0x2307E58 VA: 0x2307E58
	public ColorAndColorId GetBlackColorAndColorId() { }

	// RVA: 0x2307E60 Offset: 0x2307E60 VA: 0x2307E60 Slot: 5
	public void Dispose() { }

	// RVA: 0x2307E64 Offset: 0x2307E64 VA: 0x2307E64
	public List<ColorId> GetAvailableColorsForEditorMode(List<ColorId> colorsInLevel, int blackColorToDistributeToDifferentColor) { }

	// RVA: 0x2308138 Offset: 0x2308138 VA: 0x2308138
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItemParts.Scripts.WaterLine
[CreateAssetMenu(fileName = "WaterLineAnimationConfig", menuName = "Configs/WaterLineAnimationConfig")]