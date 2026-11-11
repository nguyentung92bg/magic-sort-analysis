public class LocalizationReader // TypeDefIndex: 5444
{
	// Methods

	// RVA: 0x19DEC0C Offset: 0x19DEC0C VA: 0x19DEC0C
	public static Dictionary<string, string> ReadTextAsset(TextAsset asset) { }

	// RVA: 0x19DEE78 Offset: 0x19DEE78 VA: 0x19DEE78
	public static bool TextAsset_ReadLine(string line, out string key, out string value, out string category, out string comment, out string termType) { }

	// RVA: 0x19DF308 Offset: 0x19DF308 VA: 0x19DF308
	public static string ReadCSVfile(string Path, Encoding encoding) { }

	// RVA: 0x19D980C Offset: 0x19D980C VA: 0x19D980C
	public static List<string[]> ReadCSV(string Text, char Separator = '\x2c') { }

	// RVA: 0x19DF52C Offset: 0x19DF52C VA: 0x19DF52C
	private static string[] ParseCSVline(string Line, ref int iStart, char Separator) { }

	// RVA: 0x19DF718 Offset: 0x19DF718 VA: 0x19DF718
	private static void AddCSVtoken(ref List<string> list, ref string Line, int iEnd, ref int iWordStart) { }

	// RVA: 0x19DA62C Offset: 0x19DA62C VA: 0x19DA62C
	public static List<string[]> ReadI2CSV(string Text) { }

	// RVA: 0x19DF260 Offset: 0x19DF260 VA: 0x19DF260
	public static void ValidateFullTerm(ref string Term) { }

	// RVA: 0x19DF8A4 Offset: 0x19DF8A4 VA: 0x19DF8A4
	public static string EncodeString(string str) { }

	// RVA: 0x19DF1B8 Offset: 0x19DF1B8 VA: 0x19DF1B8
	public static string DecodeString(string str) { }

	// RVA: 0x19DF99C Offset: 0x19DF99C VA: 0x19DF99C
	public void .ctor() { }
}

// Namespace: 