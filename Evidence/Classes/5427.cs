public class TranslationJob_POST : TranslationJob_WWW // TypeDefIndex: 5427
{
	// Fields
	private Dictionary<string, TranslationQuery> _requests; // 0x20
	private GoogleTranslation.fnOnTranslationReady _OnTranslationReady; // 0x28

	// Methods

	// RVA: 0x19D38C0 Offset: 0x19D38C0 VA: 0x19D38C0
	public void .ctor(Dictionary<string, TranslationQuery> requests, GoogleTranslation.fnOnTranslationReady OnTranslationReady) { }

	// RVA: 0x19D3CE0 Offset: 0x19D3CE0 VA: 0x19D3CE0 Slot: 5
	public override TranslationJob.eJobState GetState() { }

	// RVA: 0x19D3D7C Offset: 0x19D3D7C VA: 0x19D3D7C
	public void ProcessResult(byte[] bytes, string errorMsg) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]