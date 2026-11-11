public class Vibration : ScriptableObject // TypeDefIndex: 4959
{
	// Fields
	[SerializeField]
	private AndroidFeedbackConfig _androidFeedbackConfig; // 0x18
	[SerializeField]
	private IosFeedbackConfig _iosFeedbackConfig; // 0x20

	// Properties
	public AndroidFeedbackConfig AndroidFeedbackConfig { get; }
	public IosFeedbackConfig IosFeedbackConfig { get; }

	// Methods

	// RVA: 0x3E26E9C Offset: 0x3E26E9C VA: 0x3E26E9C
	public AndroidFeedbackConfig get_AndroidFeedbackConfig() { }

	// RVA: 0x3E26EA4 Offset: 0x3E26EA4 VA: 0x3E26EA4
	public IosFeedbackConfig get_IosFeedbackConfig() { }

	// RVA: 0x3E26EAC Offset: 0x3E26EAC VA: 0x3E26EAC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Vibration.Scripts