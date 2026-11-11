public class LanguageSource : MonoBehaviour, ISerializationCallbackReceiver, ILanguageSource // TypeDefIndex: 5433
{
	// Fields
	public LanguageSourceData mSource; // 0x18
	public int version; // 0x20
	public bool NeverDestroy; // 0x24
	public bool UserAgreesToHaveItOnTheScene; // 0x25
	public bool UserAgreesToHaveItInsideThePluginsFolder; // 0x26
	public bool GoogleLiveSyncIsUptoDate; // 0x27
	public List<Object> Assets; // 0x28
	public string Google_WebServiceURL; // 0x30
	public string Google_SpreadsheetKey; // 0x38
	public string Google_SpreadsheetName; // 0x40
	public string Google_LastUpdatedVersion; // 0x48
	public LanguageSourceData.eGoogleUpdateFrequency GoogleUpdateFrequency; // 0x50
	public float GoogleUpdateDelay; // 0x54
	[CompilerGenerated]
	private LanguageSource.fnOnSourceUpdated Event_OnSourceUpdateFromGoogle; // 0x58
	public List<LanguageData> mLanguages; // 0x60
	public bool IgnoreDeviceLanguage; // 0x68
	public LanguageSourceData.eAllowUnloadLanguages _AllowUnloadingLanguages; // 0x6C
	public List<TermData> mTerms; // 0x70
	public bool CaseInsensitiveTerms; // 0x78
	public LanguageSourceData.MissingTranslationAction OnMissingTranslation; // 0x7C
	public string mTerm_AppName; // 0x80

	// Properties
	public LanguageSourceData SourceData { get; set; }

	// Methods

	// RVA: 0x19D4FD0 Offset: 0x19D4FD0 VA: 0x19D4FD0 Slot: 6
	public LanguageSourceData get_SourceData() { }

	// RVA: 0x19D4FD8 Offset: 0x19D4FD8 VA: 0x19D4FD8 Slot: 7
	public void set_SourceData(LanguageSourceData value) { }

	[CompilerGenerated]
	// RVA: 0x19D4FE0 Offset: 0x19D4FE0 VA: 0x19D4FE0
	public void add_Event_OnSourceUpdateFromGoogle(LanguageSource.fnOnSourceUpdated value) { }

	[CompilerGenerated]
	// RVA: 0x19D507C Offset: 0x19D507C VA: 0x19D507C
	public void remove_Event_OnSourceUpdateFromGoogle(LanguageSource.fnOnSourceUpdated value) { }

	// RVA: 0x19D5118 Offset: 0x19D5118 VA: 0x19D5118
	private void Awake() { }

	// RVA: 0x19D51B8 Offset: 0x19D51B8 VA: 0x19D51B8
	private void OnDestroy() { }

	// RVA: 0x19D522C Offset: 0x19D522C VA: 0x19D522C
	public string GetSourceName() { }

	// RVA: 0x19D531C Offset: 0x19D531C VA: 0x19D531C Slot: 4
	public void OnBeforeSerialize() { }

	// RVA: 0x19D5328 Offset: 0x19D5328 VA: 0x19D5328 Slot: 5
	public void OnAfterDeserialize() { }

	// RVA: 0x19D5AAC Offset: 0x19D5AAC VA: 0x19D5AAC
	public void .ctor() { }
}

// Namespace: I2.Loc
[CreateAssetMenu(fileName = "I2Languages", menuName = "I2 Localization/LanguageSource", order = 1)]