public static class LineCountHelper // TypeDefIndex: 20
{
	// Fields
	private static float _pointSize; // 0x0
	private static float _scale; // 0x4
	private static float _defaultCharWidth; // 0x8
	private static float _defaultEmptyWidth; // 0xC
	private static Dictionary<uint, TMP_Character> _characterLookupTable; // 0x10

	// Methods

	// RVA: 0x19EEE00 Offset: 0x19EEE00 VA: 0x19EEE00
	public static void Initialize(TMP_FontAsset[] fontAssets) { }

	// RVA: 0x19EF0E0 Offset: 0x19EF0E0 VA: 0x19EF0E0
	public static int GetLineCount(string text, float width, float fontSize) { }

	// RVA: 0x19EF1FC Offset: 0x19EF1FC VA: 0x19EF1FC
	private static float GetCharacterWidth(char c) { }

	// RVA: 0x19EF3C0 Offset: 0x19EF3C0 VA: 0x19EF3C0
	private static void .cctor() { }
}

// Namespace: 