public class InputService : IFrameUpdate, IHomeIdleInterrupter // TypeDefIndex: 507
{
	// Fields
	[CompilerGenerated]
	private IInputSystem <CurrentInputSystem>k__BackingField; // 0x10
	private readonly UIRaycaster _uiRaycaster; // 0x18
	private readonly CameraService _cameraService; // 0x20
	private List<IUIRoot> _activeUIRoots; // 0x28
	private List<UITouchableElement> _touchDownUIElements; // 0x30
	private List<UITouchableElement> _rayCastedUITouchableElements; // 0x38
	private List<UITouchableElement> _canceledTouchDownUIElements; // 0x40
	private bool _isActive; // 0x48
	private bool _isDragging; // 0x49
	private bool _isTouching; // 0x4A
	private Vector3 _touchDownPosition; // 0x4C
	private float _dragThreshold; // 0x58
	private IDraggable _draggingTouchElement; // 0x60
	private IPopUpService _popUpService; // 0x68
	private InputHistory _inputHistory; // 0x70
	private float _lastUpdateTime; // 0x78
	private RemoteConfigs _remoteConfigs; // 0x80

	// Properties
	public bool IsActive { get; }
	public IInputSystem CurrentInputSystem { get; set; }

	// Methods

	// RVA: 0x3D2B4A8 Offset: 0x3D2B4A8 VA: 0x3D2B4A8
	public bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x3D2B4B0 Offset: 0x3D2B4B0 VA: 0x3D2B4B0
	public IInputSystem get_CurrentInputSystem() { }

	[CompilerGenerated]
	// RVA: 0x3D2B4B8 Offset: 0x3D2B4B8 VA: 0x3D2B4B8
	public void set_CurrentInputSystem(IInputSystem value) { }

	// RVA: 0x3D2B4C0 Offset: 0x3D2B4C0 VA: 0x3D2B4C0
	public void .ctor(UIRaycaster uiRaycaster, CameraService cameraService, IPopUpService popUpService) { }

	// RVA: 0x3D2B520 Offset: 0x3D2B520 VA: 0x3D2B520
	public void SetRemoteConfigs(RemoteConfigs remoteConfigs) { }

	// RVA: 0x3D2B528 Offset: 0x3D2B528 VA: 0x3D2B528
	public void Initialize() { }

	// RVA: 0x3D2B8A8 Offset: 0x3D2B8A8 VA: 0x3D2B8A8
	private void Refresh() { }

	// RVA: 0x3D2BAC0 Offset: 0x3D2BAC0 VA: 0x3D2BAC0
	private void ActivateAfterDisableInteraction() { }

	// RVA: 0x3D2BB48 Offset: 0x3D2BB48 VA: 0x3D2BB48
	private void ActivateOnlyForPlayButtonAfterDisableInteraction() { }

	// RVA: 0x3D2BC14 Offset: 0x3D2BC14 VA: 0x3D2BC14
	private void ActivateOnlyForDailyPlayButtonAfterDisableInteraction() { }

	// RVA: 0x3D2BCE0 Offset: 0x3D2BCE0 VA: 0x3D2BCE0
	public void Deactivate() { }

	// RVA: 0x3D2BD08 Offset: 0x3D2BD08 VA: 0x3D2BD08
	private void TouchDown(Vector3 position) { }

	// RVA: 0x3D2C0A0 Offset: 0x3D2C0A0 VA: 0x3D2C0A0
	private void MouseMove(Vector3 position) { }

	// RVA: 0x3D2C19C Offset: 0x3D2C19C VA: 0x3D2C19C
	private void TouchMove(Vector3 position) { }

	// RVA: 0x3D2CBF0 Offset: 0x3D2CBF0 VA: 0x3D2CBF0
	private void CancelTouchedElementsExceptDragging(Vector3 worldPosition) { }

	// RVA: 0x3D2C688 Offset: 0x3D2C688 VA: 0x3D2C688
	private void CancelTouchDownElementsIfPointerIsNotOverThem(Vector3 position, Vector3 worldPosition) { }

	// RVA: 0x3D2CE1C Offset: 0x3D2CE1C VA: 0x3D2CE1C
	private void TouchUp(Vector3 position) { }

	// RVA: 0x3D2C07C Offset: 0x3D2C07C VA: 0x3D2C07C
	private Vector3 GetWorldPosition(Vector3 screenPosition) { }

	// RVA: 0x3D2D01C Offset: 0x3D2D01C VA: 0x3D2D01C Slot: 4
	public void FrameUpdate(float elapsedSeconds) { }

	// RVA: 0x3D2D03C Offset: 0x3D2D03C VA: 0x3D2D03C
	private void UpdateSystem() { }

	// RVA: 0x3D2D2F4 Offset: 0x3D2D2F4 VA: 0x3D2D2F4
	private bool HasInternetConnection() { }

	// RVA: 0x3D2D310 Offset: 0x3D2D310 VA: 0x3D2D310
	public void Dispose() { }

	// RVA: 0x3D2D5AC Offset: 0x3D2D5AC VA: 0x3D2D5AC
	public string GetInputHistory() { }

	// RVA: 0x3D2D944 Offset: 0x3D2D944 VA: 0x3D2D944 Slot: 5
	public bool IsInterrupting() { }
}

// Namespace: Modules.Infrastructure.FiniteStateMachine