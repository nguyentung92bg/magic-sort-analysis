public static class I2Utils // TypeDefIndex: 5491
{
	// Fields
	public const string ValidChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
	public const string NumberChars = "0123456789";
	public const string ValidNameSymbols = ".-_$#@*()[]{}+:?!&\',^=<>~`";

	// Methods

	// RVA: 0x13930E0 Offset: 0x13930E0 VA: 0x13930E0
	public static string ReverseText(string source) { }

	// RVA: 0x139773C Offset: 0x139773C VA: 0x139773C
	public static string GetValidTermName(string text, bool allowCategory = False) { }

	// RVA: 0x1397A14 Offset: 0x1397A14 VA: 0x1397A14
	public static string SplitLine(string line, int maxCharacters) { }

	// RVA: 0x1397CB8 Offset: 0x1397CB8 VA: 0x1397CB8
	public static bool FindNextTag(string line, int iStart, out int tagStart, out int tagEnd) { }

	// RVA: 0x1397E3C Offset: 0x1397E3C VA: 0x1397E3C
	public static string RemoveTags(string text) { }

	// RVA: 0x1397EC4 Offset: 0x1397EC4 VA: 0x1397EC4
	public static bool RemoveResourcesPath(ref string sPath) { }

	// RVA: 0x1398168 Offset: 0x1398168 VA: 0x1398168
	public static bool IsPlaying() { }

	[Extension]
	// RVA: 0x1398170 Offset: 0x1398170 VA: 0x1398170
	public static string GetPath(Transform tr) { }

	// RVA: 0x1398240 Offset: 0x1398240 VA: 0x1398240
	public static Transform FindObject(string objectPath) { }

	// RVA: 0x13982A0 Offset: 0x13982A0 VA: 0x13982A0
	public static Transform FindObject(Scene scene, string objectPath) { }

	// RVA: 0x13983E0 Offset: 0x13983E0 VA: 0x13983E0
	public static Transform FindObject(Transform root, string objectPath) { }

	// RVA: -1 Offset: -1
	public static H FindInParents<H>(Transform tr) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29AEBC4 Offset: 0x29AEBC4 VA: 0x29AEBC4
	|-I2Utils.FindInParents<object>
	*/

	// RVA: 0x1398508 Offset: 0x1398508 VA: 0x1398508
	public static string GetCaptureMatch(Match match) { }

	// RVA: 0x13985B4 Offset: 0x13985B4 VA: 0x13985B4
	public static void SendWebRequest(UnityWebRequest www) { }

	[CompilerGenerated]
	// RVA: 0x13976B8 Offset: 0x13976B8 VA: 0x13976B8
	internal static void <ReverseText>g__Reverse|3_0(int start, int end, ref I2Utils.<>c__DisplayClass3_0 ) { }
}

// Namespace: I2.Loc