public class TranslationJob_Main : TranslationJob // TypeDefIndex: 5426
{
	// Fields
	private TranslationJob_WEB mWeb; // 0x18
	private TranslationJob_POST mPost; // 0x20
	private TranslationJob_GET mGet; // 0x28
	private Dictionary<string, TranslationQuery> _requests; // 0x30
	private GoogleTranslation.fnOnTranslationReady _OnTranslationReady; // 0x38
	public string mErrorMessage; // 0x40

	// Methods

	// RVA: 0x19D0764 Offset: 0x19D0764 VA: 0x19D0764
	public void .ctor(Dictionary<string, TranslationQuery> requests, GoogleTranslation.fnOnTranslationReady OnTranslationReady) { }

	// RVA: 0x19D3A6C Offset: 0x19D3A6C VA: 0x19D3A6C Slot: 5
	public override TranslationJob.eJobState GetState() { }

	// RVA: 0x19D3C80 Offset: 0x19D3C80 VA: 0x19D3C80 Slot: 6
	public override void Dispose() { }
}

// Namespace: I2.Loc