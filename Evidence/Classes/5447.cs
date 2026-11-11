public class Localize : MonoBehaviour // TypeDefIndex: 5447
{
	// Fields
	public string mTerm; // 0x18
	public string mTermSecondary; // 0x20
	public string FinalTerm; // 0x28
	public string FinalSecondaryTerm; // 0x30
	public Localize.TermModification PrimaryTermModifier; // 0x38
	public Localize.TermModification SecondaryTermModifier; // 0x3C
	public string TermPrefix; // 0x40
	public string TermSuffix; // 0x48
	public bool LocalizeOnAwake; // 0x50
	private string LastLocalizedLanguage; // 0x58
	public bool IgnoreRTL; // 0x60
	public int MaxCharactersInRTL; // 0x64
	public bool IgnoreNumbersInRTL; // 0x68
	public bool CorrectAlignmentForRTL; // 0x69
	public bool AddSpacesToJoinedLanguages; // 0x6A
	public bool AllowLocalizedParameters; // 0x6B
	public bool AllowParameters; // 0x6C
	public List<Object> TranslatedObjects; // 0x70
	public Dictionary<string, Object> mAssetDictionary; // 0x78
	public UnityEvent LocalizeEvent; // 0x80
	public static string MainTranslation; // 0x0
	public static string SecondaryTranslation; // 0x8
	public static string CallBackTerm; // 0x10
	public static string CallBackSecondaryTerm; // 0x18
	public static Localize CurrentLocalizeComponent; // 0x20
	public bool AlwaysForceLocalize; // 0x88
	[SerializeField]
	public EventCallback LocalizeCallBack; // 0x90
	public bool mGUI_ShowReferences; // 0x98
	public bool mGUI_ShowTems; // 0x99
	public bool mGUI_ShowCallback; // 0x9A
	public ILocalizeTarget mLocalizeTarget; // 0xA0
	public string mLocalizeTargetName; // 0xA8

	// Properties
	public string Term { get; set; }
	public string SecondaryTerm { get; set; }

	// Methods

	// RVA: 0x19DF9A4 Offset: 0x19DF9A4 VA: 0x19DF9A4
	public string get_Term() { }

	// RVA: 0x19DF9AC Offset: 0x19DF9AC VA: 0x19DF9AC
	public void set_Term(string value) { }

	// RVA: 0x19DFA04 Offset: 0x19DFA04 VA: 0x19DFA04
	public string get_SecondaryTerm() { }

	// RVA: 0x19DFA0C Offset: 0x19DFA0C VA: 0x19DFA0C
	public void set_SecondaryTerm(string value) { }

	// RVA: 0x19DFA90 Offset: 0x19DFA90 VA: 0x19DFA90
	private void Awake() { }

	// RVA: 0x19E0BCC Offset: 0x19E0BCC VA: 0x19E0BCC
	private void OnEnable() { }

	// RVA: 0x19E0BD4 Offset: 0x19E0BD4 VA: 0x19E0BD4
	public bool HasCallback() { }

	// RVA: 0x19E02DC Offset: 0x19E02DC VA: 0x19E02DC
	public void OnLocalize(bool Force = False) { }

	// RVA: 0x19DFE2C Offset: 0x19DFE2C VA: 0x19DFE2C
	public bool FindTarget() { }

	// RVA: 0x19E0C1C Offset: 0x19E0C1C VA: 0x19E0C1C
	public void GetFinalTerms(out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x19E136C Offset: 0x19E136C VA: 0x19E136C
	public string GetMainTargetsText() { }

	// RVA: 0x19E1434 Offset: 0x19E1434 VA: 0x19E1434
	public void SetFinalTerms(string Main, string Secondary, out string primaryTerm, out string secondaryTerm, bool RemoveNonASCII) { }

	// RVA: 0x19DF9B0 Offset: 0x19DF9B0 VA: 0x19DF9B0
	public void SetTerm(string primary) { }

	// RVA: 0x19DFA18 Offset: 0x19DFA18 VA: 0x19DFA18
	public void SetTerm(string primary, string secondary) { }

	// RVA: -1 Offset: -1
	internal T GetSecondaryTranslatedObj<T>(ref string mainTranslation, ref string secondaryTranslation) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29C29B4 Offset: 0x29C29B4 VA: 0x29C29B4
	|-Localize.GetSecondaryTranslatedObj<object>
	*/

	// RVA: 0x19DFAC4 Offset: 0x19DFAC4 VA: 0x19DFAC4
	public void UpdateAssetDictionary() { }

	// RVA: -1 Offset: -1
	internal T GetObject<T>(string Translation) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29C2960 Offset: 0x29C2960 VA: 0x29C2960
	|-Localize.GetObject<object>
	*/

	// RVA: -1 Offset: -1
	private T GetTranslatedObject<T>(string Translation) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29C2AF4 Offset: 0x29C2AF4 VA: 0x29C2AF4
	|-Localize.GetTranslatedObject<object>
	*/

	// RVA: 0x19E1484 Offset: 0x19E1484 VA: 0x19E1484
	private void DeserializeTranslation(string translation, out string value, out string secondary) { }

	// RVA: -1 Offset: -1
	public T FindTranslatedObject<T>(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29C25C8 Offset: 0x29C25C8 VA: 0x29C25C8
	|-Localize.FindTranslatedObject<object>
	*/

	// RVA: 0x19E1594 Offset: 0x19E1594 VA: 0x19E1594
	public bool HasTranslatedObject(Object Obj) { }

	// RVA: 0x19E1618 Offset: 0x19E1618 VA: 0x19E1618
	public void AddTranslatedObject(Object Obj) { }

	// RVA: 0x19E1704 Offset: 0x19E1704 VA: 0x19E1704
	public void SetGlobalLanguage(string Language) { }

	// RVA: 0x19E1828 Offset: 0x19E1828 VA: 0x19E1828
	public void .ctor() { }
}

// Namespace: I2.Loc
[AddComponentMenu("I2/Localization/Localize Dropdown")]