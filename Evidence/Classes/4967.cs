public class VibrationService : IService, IInitializable, IDisposable, ILateUpdate, IInitializeForNewDownload // TypeDefIndex: 4967
{
	// Fields
	private ISaveLoad<VibrationModel> _saveLoad; // 0x10
	private VibrationModel _model; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private bool _isMarkedForLateUpdate; // 0x28
	private VibrationConfigs _vibrationConfigs; // 0x30
	private FeedbackRunner _feedbackRunner; // 0x38

	// Methods

	// RVA: 0x3E27C90 Offset: 0x3E27C90 VA: 0x3E27C90
	public void .ctor(SaveLoad<VibrationModel> saveLoad, RemoteConfigs remoteConfigs, VibrationConfigs vibrationConfigs) { }

	// RVA: 0x3E27CF0 Offset: 0x3E27CF0 VA: 0x3E27CF0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E27F50 Offset: 0x3E27F50 VA: 0x3E27F50 Slot: 7
	public void InitializeForNewDownload() { }

	// RVA: 0x3E27F54 Offset: 0x3E27F54 VA: 0x3E27F54
	private void OnVibrationPreferenceChanged(bool isOn) { }

	// RVA: 0x3E27FE4 Offset: 0x3E27FE4 VA: 0x3E27FE4
	public bool IsVibrationSupported() { }

	// RVA: 0x3E27FEC Offset: 0x3E27FEC VA: 0x3E27FEC
	private void OnPlayVibration(VibrationType vibrationType) { }

	// RVA: 0x3E28078 Offset: 0x3E28078 VA: 0x3E28078
	public bool GetVibrationPreference() { }

	// RVA: 0x3E28094 Offset: 0x3E28094 VA: 0x3E28094 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E28214 Offset: 0x3E28214 VA: 0x3E28214 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3E27FD8 Offset: 0x3E27FD8 VA: 0x3E27FD8
	private void MarkDataForLateUpdate() { }
}

// Namespace: Modules.Contexts.Application.Vibration.Scripts
[Serializable]