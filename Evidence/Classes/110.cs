public class GameNotificationsPlatform : IDisposable // TypeDefIndex: 110
{
	// Fields
	[CompilerGenerated]
	private Action<GameNotification> NotificationReceived; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3AF4DB0 Offset: 0x3AF4DB0 VA: 0x3AF4DB0
	public void add_NotificationReceived(Action<GameNotification> value) { }

	[CompilerGenerated]
	// RVA: 0x3AF4E60 Offset: 0x3AF4E60 VA: 0x3AF4E60
	public void remove_NotificationReceived(Action<GameNotification> value) { }

	// RVA: 0x3AF4F10 Offset: 0x3AF4F10 VA: 0x3AF4F10
	public void .ctor(NotificationCenterArgs args) { }

	// RVA: 0x3AF4F44 Offset: 0x3AF4F44 VA: 0x3AF4F44
	public NotificationsPermissionRequest RequestNotificationPermission() { }

	// RVA: 0x3AF4F4C Offset: 0x3AF4F4C VA: 0x3AF4F4C
	public GameNotification CreateNotification() { }

	// RVA: 0x3AF4FD0 Offset: 0x3AF4FD0 VA: 0x3AF4FD0
	public void ScheduleNotification(GameNotification gameNotification, DateTime deliveryTime) { }

	// RVA: 0x3AF5100 Offset: 0x3AF5100 VA: 0x3AF5100
	public void CancelNotification(int notificationId) { }

	// RVA: 0x3AF510C Offset: 0x3AF510C VA: 0x3AF510C
	public void DismissNotification(int notificationId) { }

	// RVA: 0x3AF5118 Offset: 0x3AF5118 VA: 0x3AF5118
	public void CancelAllScheduledNotifications() { }

	// RVA: 0x3AF5120 Offset: 0x3AF5120 VA: 0x3AF5120
	public void DismissAllDisplayedNotifications() { }

	// RVA: 0x3AF5128 Offset: 0x3AF5128 VA: 0x3AF5128
	public GameNotification GetLastNotification() { }

	// RVA: 0x3AF5228 Offset: 0x3AF5228 VA: 0x3AF5228
	public void OnForeground() { }

	// RVA: 0x3AF5230 Offset: 0x3AF5230 VA: 0x3AF5230
	public void OnBackground() { }

	// RVA: 0x3AF5234 Offset: 0x3AF5234 VA: 0x3AF5234 Slot: 4
	public void Dispose() { }

	// RVA: 0x3AF5238 Offset: 0x3AF5238 VA: 0x3AF5238
	private void OnLocalNotificationReceived(Notification notification) { }
}

// Namespace: Tests