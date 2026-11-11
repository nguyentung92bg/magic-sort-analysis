public class TranslationJob_GET : TranslationJob_WWW // TypeDefIndex: 5425
{
	// Fields
	private Dictionary<string, TranslationQuery> _requests; // 0x20
	private GoogleTranslation.fnOnTranslationReady _OnTranslationReady; // 0x28
	private List<string> mQueries; // 0x30
	public string mErrorMessage; // 0x38

	// Methods

	// RVA: 0x19D3518 Offset: 0x19D3518 VA: 0x19D3518
	public void .ctor(Dictionary<string, TranslationQuery> requests, GoogleTranslation.fnOnTranslationReady OnTranslationReady) { }

	// RVA: 0x19D35CC Offset: 0x19D35CC VA: 0x19D35CC
	private void ExecuteNextQuery() { }

	// RVA: 0x19D36FC Offset: 0x19D36FC VA: 0x19D36FC Slot: 5
	public override TranslationJob.eJobState GetState() { }

	// RVA: 0x19D37A8 Offset: 0x19D37A8 VA: 0x19D37A8
	public void ProcessResult(byte[] bytes, string errorMsg) { }
}

// Namespace: I2.Loc