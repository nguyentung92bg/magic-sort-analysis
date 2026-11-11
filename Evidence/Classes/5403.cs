public class RealTimeTranslation : MonoBehaviour // TypeDefIndex: 5403
{
	// Fields
	private string OriginalText; // 0x18
	private string TranslatedText; // 0x20
	private bool IsTranslating; // 0x28

	// Methods

	// RVA: 0x1862A60 Offset: 0x1862A60 VA: 0x1862A60
	public void OnGUI() { }

	// RVA: 0x1862FA0 Offset: 0x1862FA0 VA: 0x1862FA0
	public void StartTranslating(string fromCode, string toCode) { }

	// RVA: 0x1863248 Offset: 0x1863248 VA: 0x1863248
	private void OnTranslationReady(string Translation, string errorMsg) { }

	// RVA: 0x18632D4 Offset: 0x18632D4 VA: 0x18632D4
	public void ExampleMultiTranslations_Blocking() { }

	// RVA: 0x1863074 Offset: 0x1863074 VA: 0x1863074
	public void ExampleMultiTranslations_Async() { }

	// RVA: 0x1863548 Offset: 0x1863548 VA: 0x1863548
	private void OnMultitranslationReady(Dictionary<string, TranslationQuery> dict, string errorMsg) { }

	// RVA: 0x18637C0 Offset: 0x18637C0 VA: 0x18637C0
	public bool IsWaitingForTranslation() { }

	// RVA: 0x18637C8 Offset: 0x18637C8 VA: 0x18637C8
	public string GetTranslatedText() { }

	// RVA: 0x18637D0 Offset: 0x18637D0 VA: 0x18637D0
	public void SetOriginalText(string text) { }

	// RVA: 0x18637D8 Offset: 0x18637D8 VA: 0x18637D8
	public void .ctor() { }
}

// Namespace: I2.Loc