public class CustomUpdater : MonoBehaviour // TypeDefIndex: 513
{
	// Fields
	private readonly List<IFrameUpdate> _updateEachFrames; // 0x18
	private readonly List<ISecondUpdate> _secondUpdates; // 0x20
	private readonly List<ILateUpdate> _lateUpdates; // 0x28
	private readonly List<IFocusChanged> _focusChangeds; // 0x30
	private readonly List<IntervalUpdateRequest> _intervalUpdateRequests; // 0x38
	private readonly List<CustomIntervalUpdater> _customIntervalUpdater; // 0x40
	private float _secondsUpdateTimeSinceLastUpdate; // 0x48
	private readonly float _secondsUpdateInterval; // 0x4C
	private float _backendUpdateTimeSinceLastUpdate; // 0x50
	private float _backendUpdateInterval; // 0x54
	private readonly List<DelayedAction> _oneTimeUpdates; // 0x58

	// Methods

	// RVA: 0x3D2D964 Offset: 0x3D2D964 VA: 0x3D2D964
	public void AddDelayedAction(Action action, float delay) { }

	// RVA: 0x3D2DA74 Offset: 0x3D2DA74 VA: 0x3D2DA74
	public void AddFrameUpdate(IFrameUpdate frameUpdate) { }

	// RVA: 0x3D2DB24 Offset: 0x3D2DB24 VA: 0x3D2DB24
	public void AddSecondUpdate(ISecondUpdate secondUpdate) { }

	// RVA: 0x3D2DBD4 Offset: 0x3D2DBD4 VA: 0x3D2DBD4
	public void RemoveFrameUpdate(IFrameUpdate frameUpdate) { }

	// RVA: 0x3D2DC2C Offset: 0x3D2DC2C VA: 0x3D2DC2C
	public void RemoveSecondUpdate(ISecondUpdate secondUpdate) { }

	// RVA: 0x3D2DC84 Offset: 0x3D2DC84 VA: 0x3D2DC84
	public void AddLateUpdate(ILateUpdate lateUpdate) { }

	// RVA: 0x3D2DD34 Offset: 0x3D2DD34 VA: 0x3D2DD34
	public void RemoveLateUpdate(ILateUpdate lateUpdate) { }

	// RVA: 0x3D24448 Offset: 0x3D24448 VA: 0x3D24448
	public void AddIntervalUpdate(IIntervalUpdate intervalUpdate, float interval) { }

	// RVA: 0x3D247A4 Offset: 0x3D247A4 VA: 0x3D247A4
	public void RemoveIntervalUpdate(IIntervalUpdate intervalUpdate) { }

	// RVA: 0x3D2DD8C Offset: 0x3D2DD8C VA: 0x3D2DD8C
	public void AddCustomIntervalUpdate(CustomIntervalUpdater customIntervalUpdater) { }

	// RVA: 0x3D2DE3C Offset: 0x3D2DE3C VA: 0x3D2DE3C
	public void RemoveCustomIntervalUpdate(CustomIntervalUpdater customIntervalUpdater) { }

	// RVA: 0x3D2DE94 Offset: 0x3D2DE94 VA: 0x3D2DE94
	public void AddFocusChanged(IFocusChanged focusChanged) { }

	// RVA: 0x3D2DF44 Offset: 0x3D2DF44 VA: 0x3D2DF44
	public void RemoveFocusChanged(IFocusChanged focusChanged) { }

	// RVA: 0x3D2DF9C Offset: 0x3D2DF9C VA: 0x3D2DF9C
	public void SetBackendUpdateInterval(float interval) { }

	// RVA: 0x3D2DFA4 Offset: 0x3D2DFA4 VA: 0x3D2DFA4
	public void Update() { }

	// RVA: 0x3D2E500 Offset: 0x3D2E500 VA: 0x3D2E500
	private void LateUpdate() { }

	// RVA: 0x3D2E294 Offset: 0x3D2E294 VA: 0x3D2E294
	private void SecondUpdate() { }

	// RVA: 0x3D2E3B4 Offset: 0x3D2E3B4 VA: 0x3D2E3B4
	private void CommunicateWithBackend() { }

	// RVA: 0x3D2E6B0 Offset: 0x3D2E6B0 VA: 0x3D2E6B0
	private void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x3D2E864 Offset: 0x3D2E864 VA: 0x3D2E864
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]