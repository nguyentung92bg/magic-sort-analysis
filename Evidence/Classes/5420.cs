public static class GoogleTranslation // TypeDefIndex: 5420
{
	// Fields
	private static List<UnityWebRequest> mCurrentTranslations; // 0x0
	private static List<TranslationJob> mTranslationJobs; // 0x8

	// Methods

	// RVA: 0x19CF8A0 Offset: 0x19CF8A0 VA: 0x19CF8A0
	public static bool CanTranslate() { }

	// RVA: 0x19CFAD8 Offset: 0x19CFAD8 VA: 0x19CFAD8
	public static void Translate(string text, string LanguageCodeFrom, string LanguageCodeTo, GoogleTranslation.fnOnTranslated OnTranslationReady) { }

	// RVA: 0x19D0294 Offset: 0x19D0294 VA: 0x19D0294
	public static string ForceTranslate(string text, string LanguageCodeFrom, string LanguageCodeTo) { }

	// RVA: 0x19D0200 Offset: 0x19D0200 VA: 0x19D0200
	public static void Translate(Dictionary<string, TranslationQuery> requests, GoogleTranslation.fnOnTranslationReady OnTranslationReady, bool usePOST = True) { }

	// RVA: 0x19D0A44 Offset: 0x19D0A44 VA: 0x19D0A44
	public static bool ForceTranslate(Dictionary<string, TranslationQuery> requests, bool usePOST = True) { }

	// RVA: 0x19D0AC0 Offset: 0x19D0AC0 VA: 0x19D0AC0
	public static List<string> ConvertTranslationRequest(Dictionary<string, TranslationQuery> requests, bool encodeGET) { }

	// RVA: 0x19D0924 Offset: 0x19D0924 VA: 0x19D0924
	private static void AddTranslationJob(TranslationJob job) { }

	[IteratorStateMachine(typeof(GoogleTranslation.<WaitForTranslations>d__11))]
	// RVA: 0x19D10EC Offset: 0x19D10EC VA: 0x19D10EC
	private static IEnumerator WaitForTranslations() { }

	// RVA: 0x19D1174 Offset: 0x19D1174 VA: 0x19D1174
	public static string ParseTranslationResult(string html, Dictionary<string, TranslationQuery> requests) { }

	// RVA: 0x19D18E0 Offset: 0x19D18E0 VA: 0x19D18E0
	public static bool IsTranslating() { }

	// RVA: 0x19D1994 Offset: 0x19D1994 VA: 0x19D1994
	public static void CancelCurrentGoogleTranslations() { }

	// RVA: 0x19CFEB0 Offset: 0x19CFEB0 VA: 0x19CFEB0
	public static void CreateQueries(string text, string LanguageCodeFrom, string LanguageCodeTo, Dictionary<string, TranslationQuery> dict) { }

	// RVA: 0x19D1B9C Offset: 0x19D1B9C VA: 0x19D1B9C
	private static void CreateQueries_Plurals(string text, string LanguageCodeFrom, string LanguageCodeTo, Dictionary<string, TranslationQuery> dict) { }

	// RVA: 0x19D044C Offset: 0x19D044C VA: 0x19D044C
	public static void AddQuery(string text, string LanguageCodeFrom, string LanguageCodeTo, Dictionary<string, TranslationQuery> dict) { }

	// RVA: 0x19D2668 Offset: 0x19D2668 VA: 0x19D2668
	private static string GetTranslation(string text, string LanguageCodeTo, Dictionary<string, TranslationQuery> dict) { }

	// RVA: 0x19D1660 Offset: 0x19D1660 VA: 0x19D1660
	private static TranslationQuery FindQueryFromOrigText(string origText, Dictionary<string, TranslationQuery> dict) { }

	// RVA: 0x19D1DEC Offset: 0x19D1DEC VA: 0x19D1DEC
	public static bool HasParameters(string text) { }

	// RVA: 0x19D1FC0 Offset: 0x19D1FC0 VA: 0x19D1FC0
	public static string GetPluralParameter(string text, bool forceTag) { }

	// RVA: 0x19D1E88 Offset: 0x19D1E88 VA: 0x19D1E88
	public static string GetPluralText(string text, string pluralType) { }

	// RVA: 0x19D2768 Offset: 0x19D2768 VA: 0x19D2768
	private static int FindClosingTag(string tag, MatchCollection matches, int startIndex) { }

	// RVA: 0x19D1830 Offset: 0x19D1830 VA: 0x19D1830
	private static string GetGoogleNoTranslateTag(int tagNumber) { }

	// RVA: 0x19D20B0 Offset: 0x19D20B0 VA: 0x19D20B0
	private static void ParseNonTranslatableElements(ref TranslationQuery query) { }

	// RVA: 0x19D080C Offset: 0x19D080C VA: 0x19D080C
	public static string GetQueryResult(string text, string LanguageCodeTo, Dictionary<string, TranslationQuery> dict) { }

	// RVA: 0x19D2830 Offset: 0x19D2830 VA: 0x19D2830
	public static string RebuildTranslation(string text, Dictionary<string, TranslationQuery> dict, string LanguageCodeTo) { }

	// RVA: 0x19D2B48 Offset: 0x19D2B48 VA: 0x19D2B48
	private static string RebuildTranslation_Plural(string text, Dictionary<string, TranslationQuery> dict, string LanguageCodeTo) { }

	// RVA: 0x19D2EB0 Offset: 0x19D2EB0 VA: 0x19D2EB0
	public static string UppercaseFirst(string s) { }

	// RVA: 0x19D1038 Offset: 0x19D1038 VA: 0x19D1038
	public static string TitleCase(string s) { }

	// RVA: 0x19D2F98 Offset: 0x19D2F98 VA: 0x19D2F98
	private static void .cctor() { }
}

// Namespace: I2.Loc