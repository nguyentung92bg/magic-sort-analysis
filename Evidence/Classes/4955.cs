public class FeedbackRunner : ILateUpdate, IInitializable, IDisposable // TypeDefIndex: 4955
{
	// Fields
	private List<Feedback> _runningFeedbacks; // 0x10
	private List<Feedback> _addedThisFrame; // 0x18
	private Pool<Feedback> _feedbackPool; // 0x20
	private AndroidVibration _androidVibration; // 0x28

	// Methods

	// RVA: 0x3E262A4 Offset: 0x3E262A4 VA: 0x3E262A4
	public void .ctor() { }

	// RVA: 0x3E262AC Offset: 0x3E262AC VA: 0x3E262AC Slot: 5
	public void Initialize() { }

	// RVA: 0x3E26418 Offset: 0x3E26418 VA: 0x3E26418
	public void AddAndroidFeedback(AndroidFeedbackConfig androidFeedbackConfig) { }

	// RVA: 0x3E266A8 Offset: 0x3E266A8 VA: 0x3E266A8
	public void AddIosFeedback(IosFeedbackConfig iosFeedbackConfig) { }

	// RVA: 0x3E2645C Offset: 0x3E2645C VA: 0x3E2645C
	private void AddFeedback(FeedbackConfig feedbackConfig) { }

	// RVA: 0x3E266AC Offset: 0x3E266AC VA: 0x3E266AC Slot: 4
	public void LateUpdate() { }

	// RVA: 0x3E26CB0 Offset: 0x3E26CB0 VA: 0x3E26CB0
	private void PerformHapticFeedback(FeedbackConfig feedbackConfig, int indexInConfig) { }

	// RVA: 0x3E26D68 Offset: 0x3E26D68 VA: 0x3E26D68
	private void PerformAndroidHapticFeedback(AndroidHapticFeedback androidHapticFeedback) { }

	// RVA: 0x3E26D84 Offset: 0x3E26D84 VA: 0x3E26D84 Slot: 6
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Application.Vibration.Scripts
[Serializable]