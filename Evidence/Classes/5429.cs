public class TranslationJob_WEB : TranslationJob_WWW // TypeDefIndex: 5429
{
	// Fields
	private Dictionary<string, TranslationQuery> _requests; // 0x20
	private GoogleTranslation.fnOnTranslationReady _OnTranslationReady; // 0x28
	public string mErrorMessage; // 0x30
	private string mCurrentBatch_ToLanguageCode; // 0x38
	private string mCurrentBatch_FromLanguageCode; // 0x40
	private List<string> mCurrentBatch_Text; // 0x48
	private List<KeyValuePair<string, string>> mQueries; // 0x50

	// Methods

	// RVA: 0x19D3E64 Offset: 0x19D3E64 VA: 0x19D3E64
	public void .ctor(Dictionary<string, TranslationQuery> requests, GoogleTranslation.fnOnTranslationReady OnTranslationReady) { }

	// RVA: 0x19D3EB8 Offset: 0x19D3EB8 VA: 0x19D3EB8
	private void FindAllQueries() { }

	// RVA: 0x19D429C Offset: 0x19D429C VA: 0x19D429C
	private void ExecuteNextBatch() { }

	// RVA: 0x19D4670 Offset: 0x19D4670 VA: 0x19D4670 Slot: 5
	public override TranslationJob.eJobState GetState() { }

	// RVA: 0x19D471C Offset: 0x19D471C VA: 0x19D471C
	public void ProcessResult(byte[] bytes, string errorMsg) { }

	// RVA: 0x19D4850 Offset: 0x19D4850 VA: 0x19D4850
	private string ParseTranslationResult(string html, string OriginalText) { }
}

// Namespace: I2.Loc