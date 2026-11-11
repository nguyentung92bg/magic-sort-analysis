internal class RTLFixerTool // TypeDefIndex: 5506
{
	// Fields
	internal static bool showTashkeel; // 0x0
	internal static bool useHinduNumbers; // 0x1

	// Methods

	// RVA: 0x139C7B8 Offset: 0x139C7B8 VA: 0x139C7B8
	internal static string RemoveTashkeel(string str, out List<TashkeelLocation> tashkeelLocation) { }

	// RVA: 0x139CCE8 Offset: 0x139CCE8 VA: 0x139CCE8
	internal static char[] ReturnTashkeel(char[] letters, List<TashkeelLocation> tashkeelLocation) { }

	// RVA: 0x1399CA0 Offset: 0x1399CA0 VA: 0x1399CA0
	internal static string FixLine(string str) { }

	// RVA: 0x139CF10 Offset: 0x139CF10 VA: 0x139CF10
	internal static bool IsIgnoredCharacter(char ch) { }

	// RVA: 0x139D4E0 Offset: 0x139D4E0 VA: 0x139D4E0
	internal static bool IsLeadingLetter(char[] letters, int index) { }

	// RVA: 0x139D39C Offset: 0x139D39C VA: 0x139D39C
	internal static bool IsFinishingLetter(char[] letters, int index) { }

	// RVA: 0x139D06C Offset: 0x139D06C VA: 0x139D06C
	internal static bool IsMiddleLetter(char[] letters, int index) { }

	// RVA: 0x139D7CC Offset: 0x139D7CC VA: 0x139D7CC
	public void .ctor() { }

	// RVA: 0x139D7D4 Offset: 0x139D7D4 VA: 0x139D7D4
	private static void .cctor() { }
}

// Namespace: I2.Loc
[AddComponentMenu("I2/Localization/SetLanguage Button")]