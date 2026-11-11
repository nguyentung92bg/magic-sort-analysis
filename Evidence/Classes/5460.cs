public static class LocalizationManager // TypeDefIndex: 5460
{
	// Fields
	private static string mCurrentLanguage; // 0x0
	private static string mLanguageCode; // 0x8
	private static CultureInfo mCurrentCulture; // 0x10
	private static bool mChangeCultureInfo; // 0x18
	public static bool IsRight2Left; // 0x19
	public static bool HasJoinedWords; // 0x1A
	public static List<ILocalizationParamsManager> ParamManagers; // 0x20
	public static LocalizationManager.FnCustomApplyLocalizationParams CustomApplyLocalizationParams; // 0x28
	private static string[] LanguagesRTL; // 0x30
	public static List<LanguageSourceData> Sources; // 0x38
	public static string[] GlobalSources; // 0x40
	public static Func<LanguageSourceData, bool> Callback_AllowSyncFromGoogle; // 0x48
	private static string mCurrentDeviceLanguage; // 0x50
	public static List<ILocalizeTargetDescriptor> mLocalizeTargets; // 0x58
	[CompilerGenerated]
	private static LocalizationManager.OnLocalizeCallback OnLocalizeEvent; // 0x60
	private static bool mLocalizeIsScheduled; // 0x68
	private static bool mLocalizeIsScheduledWithForcedValue; // 0x69
	public static bool HighlightLocalizedTargets; // 0x6A

	// Properties
	public static string CurrentLanguage { get; set; }
	public static string CurrentLanguageCode { get; set; }
	public static string CurrentRegion { get; set; }
	public static string CurrentRegionCode { get; set; }
	public static CultureInfo CurrentCulture { get; }

	// Methods

	// RVA: 0x19CFDEC Offset: 0x19CFDEC VA: 0x19CFDEC
	public static void InitializeIfNeeded() { }

	// RVA: 0x19E32E4 Offset: 0x19E32E4 VA: 0x19E32E4
	public static string GetVersion() { }

	// RVA: 0x19DC590 Offset: 0x19DC590 VA: 0x19DC590
	public static int GetRequiredWebServiceVersion() { }

	// RVA: 0x19CF944 Offset: 0x19CF944 VA: 0x19CF944
	public static string GetWebServiceURL(LanguageSourceData source) { }

	// RVA: 0x19DB2D0 Offset: 0x19DB2D0 VA: 0x19DB2D0
	public static string get_CurrentLanguage() { }

	// RVA: 0x19E1758 Offset: 0x19E1758 VA: 0x19E1758
	public static void set_CurrentLanguage(string value) { }

	// RVA: 0x19E3A34 Offset: 0x19E3A34 VA: 0x19E3A34
	public static string get_CurrentLanguageCode() { }

	// RVA: 0x19E3A90 Offset: 0x19E3A90 VA: 0x19E3A90
	public static void set_CurrentLanguageCode(string value) { }

	// RVA: 0x19E3D20 Offset: 0x19E3D20 VA: 0x19E3D20
	public static string get_CurrentRegion() { }

	// RVA: 0x19E3E94 Offset: 0x19E3E94 VA: 0x19E3E94
	public static void set_CurrentRegion(string value) { }

	// RVA: 0x19E4054 Offset: 0x19E4054 VA: 0x19E4054
	public static string get_CurrentRegionCode() { }

	// RVA: 0x19E4124 Offset: 0x19E4124 VA: 0x19E4124
	public static void set_CurrentRegionCode(string value) { }

	// RVA: 0x19E4228 Offset: 0x19E4228 VA: 0x19E4228
	public static CultureInfo get_CurrentCulture() { }

	// RVA: 0x19E3838 Offset: 0x19E3838 VA: 0x19E3838
	public static void SetLanguageAndCode(string LanguageName, string LanguageCode, bool RememberLanguage = True, bool Force = False) { }

	// RVA: 0x19E4280 Offset: 0x19E4280 VA: 0x19E4280
	private static CultureInfo CreateCultureForCode(string code) { }

	// RVA: 0x19E4470 Offset: 0x19E4470 VA: 0x19E4470
	public static void EnableChangingCultureInfo(bool bEnable) { }

	// RVA: 0x19E4374 Offset: 0x19E4374 VA: 0x19E4374
	private static void SetCurrentCultureInfo() { }

	// RVA: 0x19E2F10 Offset: 0x19E2F10 VA: 0x19E2F10
	private static void SelectStartupLanguage() { }

	// RVA: 0x19E45A0 Offset: 0x19E45A0 VA: 0x19E45A0
	public static bool HasLanguage(string Language, bool AllowDiscartingRegion = True, bool Initialize = True, bool SkipDisabled = True) { }

	// RVA: 0x19E3324 Offset: 0x19E3324 VA: 0x19E3324
	public static string GetSupportedLanguage(string Language, bool ignoreDisabled = False) { }

	// RVA: 0x19E3680 Offset: 0x19E3680 VA: 0x19E3680
	public static string GetLanguageCode(string Language) { }

	// RVA: 0x19E3B58 Offset: 0x19E3B58 VA: 0x19E3B58
	public static string GetLanguageFromCode(string Code, bool exactMatch = True) { }

	// RVA: 0x19E4758 Offset: 0x19E4758 VA: 0x19E4758
	public static List<string> GetAllLanguages(bool SkipDisabled = True) { }

	// RVA: 0x19E49D8 Offset: 0x19E49D8 VA: 0x19E49D8
	public static List<string> GetAllLanguagesCode(bool allowRegions = True, bool SkipDisabled = True) { }

	// RVA: 0x19E4C2C Offset: 0x19E4C2C VA: 0x19E4C2C
	public static bool IsLanguageEnabled(string Language) { }

	// RVA: 0x19E4D20 Offset: 0x19E4D20 VA: 0x19E4D20
	private static void LoadCurrentLanguage() { }

	// RVA: 0x19E4E48 Offset: 0x19E4E48 VA: 0x19E4E48
	public static void PreviewLanguage(string NewLanguage) { }

	// RVA: 0x19E2CAC Offset: 0x19E2CAC VA: 0x19E2CAC
	public static void AutoLoadGlobalParamManagers() { }

	// RVA: 0x19E4F40 Offset: 0x19E4F40 VA: 0x19E4F40
	public static void ApplyLocalizationParams(ref string translation, bool allowLocalizedParameters = True) { }

	// RVA: 0x19E0E7C Offset: 0x19E0E7C VA: 0x19E0E7C
	public static void ApplyLocalizationParams(ref string translation, GameObject root, bool allowLocalizedParameters = True) { }

	// RVA: 0x19E55CC Offset: 0x19E55CC VA: 0x19E55CC
	public static void ApplyLocalizationParams(ref string translation, Dictionary<string, object> parameters, bool allowLocalizedParameters = True) { }

	// RVA: 0x19E5134 Offset: 0x19E5134 VA: 0x19E5134
	public static void ApplyLocalizationParams(ref string translation, LocalizationManager._GetParam getParam, bool allowLocalizedParameters = True) { }

	// RVA: 0x19E581C Offset: 0x19E581C VA: 0x19E581C
	internal static string GetLocalizationParam(string ParamName, GameObject root) { }

	// RVA: 0x19E5AAC Offset: 0x19E5AAC VA: 0x19E5AAC
	private static string GetPluralType(MatchCollection matches, string langCode, LocalizationManager._GetParam getParam) { }

	// RVA: 0x19E1310 Offset: 0x19E1310 VA: 0x19E1310
	public static string ApplyRTLfix(string line) { }

	// RVA: 0x19E0F6C Offset: 0x19E0F6C VA: 0x19E0F6C
	public static string ApplyRTLfix(string line, int maxCharacters, bool ignoreNumbers) { }

	// RVA: 0x19E5C70 Offset: 0x19E5C70 VA: 0x19E5C70
	public static string FixRTL_IfNeeded(string text, int maxCharacters = 0, bool ignoreNumber = False) { }

	// RVA: 0x19E43EC Offset: 0x19E43EC VA: 0x19E43EC
	public static bool IsRTL(string Code) { }

	// RVA: 0x19E2E8C Offset: 0x19E2E8C VA: 0x19E2E8C
	public static bool UpdateSources() { }

	// RVA: 0x19E5D0C Offset: 0x19E5D0C VA: 0x19E5D0C
	private static void UnregisterDeletededSources() { }

	// RVA: 0x19E5FB4 Offset: 0x19E5FB4 VA: 0x19E5FB4
	private static void RegisterSceneSources() { }

	// RVA: 0x19E5E14 Offset: 0x19E5E14 VA: 0x19E5E14
	private static void RegisterSourceInResources() { }

	// RVA: 0x19E6148 Offset: 0x19E6148 VA: 0x19E6148
	private static bool AllowSyncFromGoogle(LanguageSourceData Source) { }

	// RVA: 0x19D5FD0 Offset: 0x19D5FD0 VA: 0x19D5FD0
	internal static void AddSource(LanguageSourceData Source) { }

	[IteratorStateMachine(typeof(LocalizationManager.<Delayed_Import_Google>d__63))]
	// RVA: 0x19E61E8 Offset: 0x19E61E8 VA: 0x19E61E8
	private static IEnumerator Delayed_Import_Google(LanguageSourceData source, float delay, bool justCheck) { }

	// RVA: 0x19D6A1C Offset: 0x19D6A1C VA: 0x19D6A1C
	internal static void RemoveSource(LanguageSourceData Source) { }

	// RVA: 0x19E6280 Offset: 0x19E6280 VA: 0x19E6280
	public static bool IsGlobalSource(string SourceName) { }

	// RVA: 0x19E6304 Offset: 0x19E6304 VA: 0x19E6304
	public static LanguageSourceData GetSourceContaining(string term, bool fallbackToFirst = True) { }

	// RVA: 0x19E64A8 Offset: 0x19E64A8 VA: 0x19E64A8
	public static Object FindAsset(string value) { }

	// RVA: 0x19E65D8 Offset: 0x19E65D8 VA: 0x19E65D8
	public static void ApplyDownloadedDataFromGoogle() { }

	// RVA: 0x19E4504 Offset: 0x19E4504 VA: 0x19E4504
	public static string GetCurrentDeviceLanguage(bool force = False) { }

	// RVA: 0x19E66B4 Offset: 0x19E66B4 VA: 0x19E66B4
	private static void DetectDeviceLanguage() { }

	// RVA: 0x19E6B34 Offset: 0x19E6B34 VA: 0x19E6B34
	public static void RegisterTarget(ILocalizeTargetDescriptor desc) { }

	[CompilerGenerated]
	// RVA: 0x19E1D88 Offset: 0x19E1D88 VA: 0x19E1D88
	public static void add_OnLocalizeEvent(LocalizationManager.OnLocalizeCallback value) { }

	[CompilerGenerated]
	// RVA: 0x19E1FEC Offset: 0x19E1FEC VA: 0x19E1FEC
	public static void remove_OnLocalizeEvent(LocalizationManager.OnLocalizeCallback value) { }

	// RVA: 0x19E0DB8 Offset: 0x19E0DB8 VA: 0x19E0DB8
	public static string GetTranslation(string Term, bool FixForRTL = True, int maxLineLengthForRTL = 0, bool ignoreRTLnumbers = True, bool applyParameters = False, GameObject localParametersRoot, string overrideLanguage, bool allowLocalizedParameters = True) { }

	// RVA: 0x19E6FE0 Offset: 0x19E6FE0 VA: 0x19E6FE0
	public static string GetTermTranslation(string Term, bool FixForRTL = True, int maxLineLengthForRTL = 0, bool ignoreRTLnumbers = True, bool applyParameters = False, GameObject localParametersRoot, string overrideLanguage, bool allowLocalizedParameters = True) { }

	// RVA: 0x19E6DEC Offset: 0x19E6DEC VA: 0x19E6DEC
	public static bool TryGetTranslation(string Term, out string Translation, bool FixForRTL = True, int maxLineLengthForRTL = 0, bool ignoreRTLnumbers = True, bool applyParameters = False, GameObject localParametersRoot, string overrideLanguage, bool allowLocalizedParameters = True) { }

	// RVA: -1 Offset: -1
	public static T GetTranslatedObject<T>(string AssetName, Localize optionalLocComp) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29C23A4 Offset: 0x29C23A4 VA: 0x29C23A4
	|-LocalizationManager.GetTranslatedObject<object>
	*/

	// RVA: -1 Offset: -1
	public static T GetTranslatedObjectByTermName<T>(string Term, Localize optionalLocComp) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29C252C Offset: 0x29C252C VA: 0x29C252C
	|-LocalizationManager.GetTranslatedObjectByTermName<object>
	*/

	// RVA: 0x19E708C Offset: 0x19E708C VA: 0x19E708C
	public static string GetAppName(string languageCode) { }

	// RVA: 0x19D6950 Offset: 0x19D6950 VA: 0x19D6950
	public static void LocalizeAll(bool Force = False) { }

	[IteratorStateMachine(typeof(LocalizationManager.<Coroutine_LocalizeAll>d__88))]
	// RVA: 0x19E73F4 Offset: 0x19E73F4 VA: 0x19E73F4
	private static IEnumerator Coroutine_LocalizeAll() { }

	// RVA: 0x19E727C Offset: 0x19E727C VA: 0x19E727C
	private static void DoLocalizeAll(bool Force = False) { }

	// RVA: 0x19E747C Offset: 0x19E747C VA: 0x19E747C
	public static List<string> GetCategories() { }

	// RVA: 0x19E75A4 Offset: 0x19E75A4 VA: 0x19E75A4
	public static List<string> GetTermsList(string Category) { }

	// RVA: 0x19E77E8 Offset: 0x19E77E8 VA: 0x19E77E8
	public static TermData GetTermData(string term) { }

	// RVA: 0x19E56C4 Offset: 0x19E56C4 VA: 0x19E56C4
	public static TermData GetTermData(string term, out LanguageSourceData source) { }

	// RVA: 0x19E78DC Offset: 0x19E78DC VA: 0x19E78DC
	private static void .cctor() { }
}

// Namespace: I2.Loc