public class LanguageSourceData // TypeDefIndex: 5442
{
	// Fields
	public ILanguageSource owner; // 0x10
	public bool UserAgreesToHaveItOnTheScene; // 0x18
	public bool UserAgreesToHaveItInsideThePluginsFolder; // 0x19
	public bool GoogleLiveSyncIsUptoDate; // 0x1A
	public bool mIsGlobalSource; // 0x1B
	public List<TermData> mTerms; // 0x20
	public bool CaseInsensitiveTerms; // 0x28
	public Dictionary<string, TermData> mDictionary; // 0x30
	public LanguageSourceData.MissingTranslationAction OnMissingTranslation; // 0x38
	public string mTerm_AppName; // 0x40
	public List<LanguageData> mLanguages; // 0x48
	public bool IgnoreDeviceLanguage; // 0x50
	public LanguageSourceData.eAllowUnloadLanguages _AllowUnloadingLanguages; // 0x54
	public string Google_WebServiceURL; // 0x58
	public string Google_SpreadsheetKey; // 0x60
	public string Google_SpreadsheetName; // 0x68
	public string Google_LastUpdatedVersion; // 0x70
	public LanguageSourceData.eGoogleUpdateFrequency GoogleUpdateFrequency; // 0x78
	public LanguageSourceData.eGoogleUpdateFrequency GoogleInEditorCheckFrequency; // 0x7C
	public LanguageSourceData.eGoogleUpdateSynchronization GoogleUpdateSynchronization; // 0x80
	public float GoogleUpdateDelay; // 0x84
	[CompilerGenerated]
	private LanguageSource.fnOnSourceUpdated Event_OnSourceUpdateFromGoogle; // 0x88
	public List<Object> Assets; // 0x90
	public Dictionary<string, Object> mAssetDictionary; // 0x98
	private string mDelayedGoogleData; // 0xA0
	public static string EmptyCategory; // 0x0
	public static char[] CategorySeparators; // 0x8

	// Properties
	public Object ownerObject { get; }

	// Methods

	// RVA: 0x19D5EB8 Offset: 0x19D5EB8 VA: 0x19D5EB8
	public Object get_ownerObject() { }

	[CompilerGenerated]
	// RVA: 0x19D5A10 Offset: 0x19D5A10 VA: 0x19D5A10
	public void add_Event_OnSourceUpdateFromGoogle(LanguageSource.fnOnSourceUpdated value) { }

	[CompilerGenerated]
	// RVA: 0x19D5F34 Offset: 0x19D5F34 VA: 0x19D5F34
	public void remove_Event_OnSourceUpdateFromGoogle(LanguageSource.fnOnSourceUpdated value) { }

	// RVA: 0x19D5148 Offset: 0x19D5148 VA: 0x19D5148
	public void Awake() { }

	// RVA: 0x19D51D8 Offset: 0x19D51D8 VA: 0x19D51D8
	public void OnDestroy() { }

	// RVA: 0x19D6A9C Offset: 0x19D6A9C VA: 0x19D6A9C
	public bool IsEqualTo(LanguageSourceData Source) { }

	// RVA: 0x19D7004 Offset: 0x19D7004 VA: 0x19D7004
	internal bool ManagerHasASimilarSource() { }

	// RVA: 0x19D710C Offset: 0x19D710C VA: 0x19D710C
	public void ClearAllData() { }

	// RVA: 0x19D71F0 Offset: 0x19D71F0 VA: 0x19D71F0
	public bool IsGlobalSource() { }

	// RVA: 0x19D71F8 Offset: 0x19D71F8 VA: 0x19D71F8
	public void Editor_SetDirty() { }

	// RVA: 0x19D6538 Offset: 0x19D6538 VA: 0x19D6538
	public void UpdateAssetDictionary() { }

	// RVA: 0x19D71FC Offset: 0x19D71FC VA: 0x19D71FC
	public Object FindAsset(string Name) { }

	// RVA: 0x19D72D0 Offset: 0x19D72D0 VA: 0x19D72D0
	public bool HasAsset(Object Obj) { }

	// RVA: 0x19D7328 Offset: 0x19D7328 VA: 0x19D7328
	public void AddAsset(Object Obj) { }

	// RVA: 0x19D7414 Offset: 0x19D7414 VA: 0x19D7414
	private string Export_Language_to_Cache(int langIndex, bool fillTermWithFallback) { }

	// RVA: 0x19D7968 Offset: 0x19D7968 VA: 0x19D7968
	public string Export_I2CSV(string Category, char Separator = '\x2c', bool specializationsAsRows = True, bool sortRows = True) { }

	// RVA: 0x19D8098 Offset: 0x19D8098 VA: 0x19D8098
	private static void AppendI2Term(StringBuilder Builder, int nLanguages, string Term, TermData termData, char Separator, string forceSpecialization) { }

	// RVA: 0x19D82F4 Offset: 0x19D82F4 VA: 0x19D82F4
	private static void AppendI2Text(StringBuilder Builder, string text) { }

	// RVA: 0x19D83C8 Offset: 0x19D83C8 VA: 0x19D83C8
	public string Export_CSV(string Category, char Separator = '\x2c', bool specializationsAsRows = True, bool sortRows = True) { }

	// RVA: 0x19D8D20 Offset: 0x19D8D20 VA: 0x19D8D20
	private static void AppendTerm(StringBuilder Builder, int nLanguages, string Term, TermData termData, string specialization, char Separator) { }

	// RVA: 0x19D8B94 Offset: 0x19D8B94 VA: 0x19D8B94
	private static void AppendString(StringBuilder Builder, string Text, char Separator) { }

	// RVA: 0x19D8F80 Offset: 0x19D8F80 VA: 0x19D8F80
	private static void AppendTranslation(StringBuilder Builder, string Text, char Separator, string tags) { }

	// RVA: 0x19D912C Offset: 0x19D912C VA: 0x19D912C
	public UnityWebRequest Export_Google_CreateWWWcall(eSpreadsheetUpdateMode UpdateMode = 1) { }

	// RVA: 0x19D92F0 Offset: 0x19D92F0 VA: 0x19D92F0
	private string Export_Google_CreateData() { }

	// RVA: 0x19D97D0 Offset: 0x19D97D0 VA: 0x19D97D0
	public string Import_CSV(string Category, string CSVstring, eSpreadsheetUpdateMode UpdateMode = 1, char Separator = '\x2c') { }

	// RVA: 0x19DA5F4 Offset: 0x19DA5F4 VA: 0x19DA5F4
	public string Import_I2CSV(string Category, string I2CSVstring, eSpreadsheetUpdateMode UpdateMode = 1) { }

	// RVA: 0x19D9934 Offset: 0x19D9934 VA: 0x19D9934
	public string Import_CSV(string Category, List<string[]> CSV, eSpreadsheetUpdateMode UpdateMode = 1) { }

	// RVA: 0x19DA878 Offset: 0x19DA878 VA: 0x19DA878
	private bool ArrayContains(string MainText, string[] texts) { }

	// RVA: 0x19DAC20 Offset: 0x19DAC20 VA: 0x19DAC20
	public static eTermType GetTermType(string type) { }

	// RVA: 0x19DAF34 Offset: 0x19DAF34 VA: 0x19DAF34
	private void Import_Language_from_Cache(int langIndex, string langData, bool useFallback, bool onlyCurrentSpecialization) { }

	// RVA: 0x19DB16C Offset: 0x19DB16C VA: 0x19DB16C
	public static void FreeUnusedLanguages() { }

	// RVA: 0x19DB32C Offset: 0x19DB32C VA: 0x19DB32C
	public void Import_Google_FromCache() { }

	// RVA: 0x19DB760 Offset: 0x19DB760 VA: 0x19DB760
	private bool IsNewerVersion(string currentVersion, string newVersion) { }

	// RVA: 0x19DBE1C Offset: 0x19DBE1C VA: 0x19DBE1C
	public void Import_Google(bool ForceUpdate, bool justCheck) { }

	// RVA: 0x19DB5A0 Offset: 0x19DB5A0 VA: 0x19DB5A0
	private string GetSourcePlayerPrefName() { }

	[IteratorStateMachine(typeof(LanguageSourceData.<Import_Google_Coroutine>d__65))]
	// RVA: 0x19DC0C4 Offset: 0x19DC0C4 VA: 0x19DC0C4
	private IEnumerator Import_Google_Coroutine(bool forceUpdate, bool JustCheck) { }

	// RVA: 0x19DC180 Offset: 0x19DC180 VA: 0x19DC180
	private void ApplyDownloadedDataOnSceneLoaded(Scene scene, LoadSceneMode mode) { }

	// RVA: 0x19DC22C Offset: 0x19DC22C VA: 0x19DC22C
	public void ApplyDownloadedDataFromGoogle() { }

	// RVA: 0x19DC38C Offset: 0x19DC38C VA: 0x19DC38C
	public UnityWebRequest Import_Google_CreateWWWcall(bool ForceUpdate, bool justCheck) { }

	// RVA: 0x19DC500 Offset: 0x19DC500 VA: 0x19DC500
	public bool HasGoogleSpreadsheet() { }

	// RVA: 0x19DB7F0 Offset: 0x19DB7F0 VA: 0x19DB7F0
	public string Import_Google_Result(string JsonString, eSpreadsheetUpdateMode UpdateMode, bool saveInPlayerPrefs = False) { }

	// RVA: 0x19D6BFC Offset: 0x19D6BFC VA: 0x19D6BFC
	public int GetLanguageIndex(string language, bool AllowDiscartingRegion = True, bool SkipDisabled = True) { }

	// RVA: 0x19DC754 Offset: 0x19DC754 VA: 0x19DC754
	public LanguageData GetLanguageData(string language, bool AllowDiscartingRegion = True) { }

	// RVA: 0x19DC7E4 Offset: 0x19DC7E4 VA: 0x19DC7E4
	public bool IsCurrentLanguage(int languageIndex) { }

	// RVA: 0x19DA908 Offset: 0x19DA908 VA: 0x19DA908
	public int GetLanguageIndexFromCode(string Code, bool exactMatch = True, bool ignoreDisabled = False) { }

	// RVA: 0x19DC598 Offset: 0x19DC598 VA: 0x19DC598
	public static int GetCommonWordInLanguageNames(string Language1, string Language2) { }

	// RVA: 0x19DC888 Offset: 0x19DC888 VA: 0x19DC888
	public static bool AreTheSameLanguage(string Language1, string Language2) { }

	// RVA: 0x19DC914 Offset: 0x19DC914 VA: 0x19DC914
	public static string GetLanguageWithoutRegion(string Language) { }

	// RVA: 0x19DC9AC Offset: 0x19DC9AC VA: 0x19DC9AC
	public void AddLanguage(string LanguageName) { }

	// RVA: 0x19DCA24 Offset: 0x19DCA24 VA: 0x19DCA24
	public void AddLanguage(string LanguageName, string LanguageCode) { }

	// RVA: 0x19DCC20 Offset: 0x19DCC20 VA: 0x19DCC20
	public void RemoveLanguage(string LanguageName) { }

	// RVA: 0x19DCEF0 Offset: 0x19DCEF0 VA: 0x19DCEF0
	public List<string> GetLanguages(bool skipDisabled = True) { }

	// RVA: 0x19DD068 Offset: 0x19DD068 VA: 0x19DD068
	public List<string> GetLanguagesCode(bool allowRegions = True, bool skipDisabled = True) { }

	// RVA: 0x19DD260 Offset: 0x19DD260 VA: 0x19DD260
	public bool IsLanguageEnabled(string Language) { }

	// RVA: 0x19DD2EC Offset: 0x19DD2EC VA: 0x19DD2EC
	public void EnableLanguage(string Language, bool bEnabled) { }

	// RVA: 0x19DD388 Offset: 0x19DD388 VA: 0x19DD388
	public bool AllowUnloadingLanguages() { }

	// RVA: 0x19DD398 Offset: 0x19DD398 VA: 0x19DD398
	private string GetSavedLanguageFileName(int languageIndex) { }

	// RVA: 0x19DD5E0 Offset: 0x19DD5E0 VA: 0x19DD5E0
	public void LoadLanguage(int languageIndex, bool UnloadOtherLanguages, bool useFallback, bool onlyCurrentSpecialization, bool forceLoad) { }

	// RVA: 0x19DD9AC Offset: 0x19DD9AC VA: 0x19DD9AC
	public void LoadAllLanguages(bool forceLoad = False) { }

	// RVA: 0x19DD744 Offset: 0x19DD744 VA: 0x19DD744
	public void UnloadLanguage(int languageIndex) { }

	// RVA: 0x19DAD50 Offset: 0x19DAD50 VA: 0x19DAD50
	public void SaveLanguages(bool unloadAll, PersistentStorage.eFileType fileLocation = 2) { }

	// RVA: 0x19DACB8 Offset: 0x19DACB8 VA: 0x19DACB8
	public bool HasUnloadedLanguages() { }

	// RVA: 0x19D9508 Offset: 0x19D9508 VA: 0x19D9508
	public List<string> GetCategories(bool OnlyMainCategory = False, List<string> Categories) { }

	// RVA: 0x19DDAF8 Offset: 0x19DDAF8 VA: 0x19DDAF8
	public static string GetKeyFromFullTerm(string FullTerm, bool OnlyMainCategory = False) { }

	// RVA: 0x19DDA30 Offset: 0x19DDA30 VA: 0x19DDA30
	public static string GetCategoryFromFullTerm(string FullTerm, bool OnlyMainCategory = False) { }

	// RVA: 0x19DDBA4 Offset: 0x19DDBA4 VA: 0x19DDBA4
	public static void DeserializeFullTerm(string FullTerm, out string Key, out string Category, bool OnlyMainCategory = False) { }

	// RVA: 0x19D6230 Offset: 0x19D6230 VA: 0x19D6230
	public void UpdateDictionary(bool force = False) { }

	// RVA: 0x19DDCBC Offset: 0x19DDCBC VA: 0x19DDCBC
	public string GetTranslation(string term, string overrideLanguage, string overrideSpecialization, bool skipDisabled = False, bool allowCategoryMistmatch = False) { }

	// RVA: 0x19DDCF0 Offset: 0x19DDCF0 VA: 0x19DDCF0
	public bool TryGetTranslation(string term, out string Translation, string overrideLanguage, string overrideSpecialization, bool skipDisabled = False, bool allowCategoryMistmatch = False) { }

	// RVA: 0x19D76C8 Offset: 0x19D76C8 VA: 0x19D76C8
	private bool TryGetFallbackTranslation(TermData termData, out string Translation, int langIndex, string overrideSpecialization, bool skipDisabled = False) { }

	// RVA: 0x19DE01C Offset: 0x19DE01C VA: 0x19DE01C
	public TermData AddTerm(string term) { }

	// RVA: 0x19D6DAC Offset: 0x19D6DAC VA: 0x19D6DAC
	public TermData GetTermData(string term, bool allowCategoryMistmatch = False) { }

	// RVA: 0x19DE278 Offset: 0x19DE278 VA: 0x19DE278
	public bool ContainsTerm(string term) { }

	// RVA: 0x19DE294 Offset: 0x19DE294 VA: 0x19DE294
	public List<string> GetTermsList(string Category) { }

	// RVA: 0x19DE028 Offset: 0x19DE028 VA: 0x19DE028
	public TermData AddTerm(string NewTerm, eTermType termType, bool SaveSource = True) { }

	// RVA: 0x19DE4E4 Offset: 0x19DE4E4 VA: 0x19DE4E4
	public void RemoveTerm(string term) { }

	// RVA: 0x19DAA7C Offset: 0x19DAA7C VA: 0x19DAA7C
	public static void ValidateFullTerm(ref string Term) { }

	// RVA: 0x19D5770 Offset: 0x19D5770 VA: 0x19D5770
	public void .ctor() { }

	// RVA: 0x19DE5FC Offset: 0x19DE5FC VA: 0x19DE5FC
	private static void .cctor() { }
}

// Namespace: I2.Loc