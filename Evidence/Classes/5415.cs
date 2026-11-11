public static class GoogleLanguages // TypeDefIndex: 5415
{
	// Fields
	public static Dictionary<string, GoogleLanguages.LanguageCodeDef> mLanguageDef; // 0x0

	// Methods

	// RVA: 0x18666A8 Offset: 0x18666A8 VA: 0x18666A8
	public static string GetLanguageCode(string Filter, bool ShowWarnings = False) { }

	// RVA: 0x1866AC0 Offset: 0x1866AC0 VA: 0x1866AC0
	public static List<string> GetLanguagesForDropdown(string Filter, string CodesToExclude) { }

	// RVA: 0x1866974 Offset: 0x1866974 VA: 0x1866974
	private static bool LanguageMatchesFilter(string Language, string[] Filters) { }

	// RVA: 0x1867050 Offset: 0x1867050 VA: 0x1867050
	public static string GetFormatedLanguageName(string Language) { }

	// RVA: 0x186719C Offset: 0x186719C VA: 0x186719C
	public static string GetCodedLanguage(string Language, string code) { }

	// RVA: 0x186726C Offset: 0x186726C VA: 0x186726C
	public static void UnPackCodeFromLanguageName(string CodedLanguage, out string Language, out string code) { }

	// RVA: 0x18673F8 Offset: 0x18673F8 VA: 0x18673F8
	public static string GetGoogleLanguageCode(string InternationalCode) { }

	// RVA: 0x18675F4 Offset: 0x18675F4 VA: 0x18675F4
	public static string GetLanguageName(string code, bool useParenthesesForRegion = False, bool allowDiscardRegion = True) { }

	// RVA: 0x18678F4 Offset: 0x18678F4 VA: 0x18678F4
	public static List<string> GetAllInternationalCodes() { }

	// RVA: 0x1867B84 Offset: 0x1867B84 VA: 0x1867B84
	public static bool LanguageCode_HasJoinedWord(string languageCode) { }

	// RVA: 0x1867D44 Offset: 0x1867D44 VA: 0x1867D44
	private static int GetPluralRule(string langCode) { }

	// RVA: 0x1867F24 Offset: 0x1867F24 VA: 0x1867F24
	public static bool LanguageHasPluralType(string langCode, string pluralType) { }

	// RVA: 0x18680D4 Offset: 0x18680D4 VA: 0x18680D4
	public static ePluralType GetPluralType(string langCode, int n) { }

	// RVA: 0x1868774 Offset: 0x1868774 VA: 0x1868774
	public static int GetPluralTestNumber(string langCode, ePluralType pluralType) { }

	// RVA: 0x186875C Offset: 0x186875C VA: 0x186875C
	private static bool inRange(int amount, int min, int max) { }

	// RVA: 0x1868830 Offset: 0x1868830 VA: 0x1868830
	private static void .cctor() { }
}

// Namespace: 