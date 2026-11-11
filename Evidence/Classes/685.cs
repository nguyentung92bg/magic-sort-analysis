public class CameraService : IService, IInitializable, IDisposable // TypeDefIndex: 685
{
	// Fields
	[CompilerGenerated]
	private Camera <ApplicationContextCamera>k__BackingField; // 0x10
	[CompilerGenerated]
	private Camera <HomeContextCamera>k__BackingField; // 0x18
	[CompilerGenerated]
	private Camera <GamePlayContextCamera>k__BackingField; // 0x20
	[CompilerGenerated]
	private Camera <DailyContextCamera>k__BackingField; // 0x28
	[CompilerGenerated]
	private Camera <EditorContextCamera>k__BackingField; // 0x30
	[CompilerGenerated]
	private Camera <CurrentCamera>k__BackingField; // 0x38

	// Properties
	public Camera ApplicationContextCamera { get; set; }
	public Camera HomeContextCamera { get; set; }
	public Camera GamePlayContextCamera { get; set; }
	public Camera DailyContextCamera { get; set; }
	public Camera EditorContextCamera { get; set; }
	public Camera CurrentCamera { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40E247C Offset: 0x40E247C VA: 0x40E247C
	public Camera get_ApplicationContextCamera() { }

	[CompilerGenerated]
	// RVA: 0x40E2484 Offset: 0x40E2484 VA: 0x40E2484
	public void set_ApplicationContextCamera(Camera value) { }

	[CompilerGenerated]
	// RVA: 0x40E248C Offset: 0x40E248C VA: 0x40E248C
	public Camera get_HomeContextCamera() { }

	[CompilerGenerated]
	// RVA: 0x40E2494 Offset: 0x40E2494 VA: 0x40E2494
	public void set_HomeContextCamera(Camera value) { }

	[CompilerGenerated]
	// RVA: 0x40E249C Offset: 0x40E249C VA: 0x40E249C
	public Camera get_GamePlayContextCamera() { }

	[CompilerGenerated]
	// RVA: 0x40E24A4 Offset: 0x40E24A4 VA: 0x40E24A4
	public void set_GamePlayContextCamera(Camera value) { }

	[CompilerGenerated]
	// RVA: 0x40E24AC Offset: 0x40E24AC VA: 0x40E24AC
	public Camera get_DailyContextCamera() { }

	[CompilerGenerated]
	// RVA: 0x40E24B4 Offset: 0x40E24B4 VA: 0x40E24B4
	public void set_DailyContextCamera(Camera value) { }

	[CompilerGenerated]
	// RVA: 0x40E24BC Offset: 0x40E24BC VA: 0x40E24BC
	public Camera get_EditorContextCamera() { }

	[CompilerGenerated]
	// RVA: 0x40E24C4 Offset: 0x40E24C4 VA: 0x40E24C4
	public void set_EditorContextCamera(Camera value) { }

	[CompilerGenerated]
	// RVA: 0x40E24CC Offset: 0x40E24CC VA: 0x40E24CC
	public Camera get_CurrentCamera() { }

	[CompilerGenerated]
	// RVA: 0x40E24D4 Offset: 0x40E24D4 VA: 0x40E24D4
	private void set_CurrentCamera(Camera value) { }

	// RVA: 0x40E24DC Offset: 0x40E24DC VA: 0x40E24DC Slot: 4
	public void Initialize() { }

	// RVA: 0x40E24E0 Offset: 0x40E24E0 VA: 0x40E24E0 Slot: 5
	public void Dispose() { }

	// RVA: 0x40E24E4 Offset: 0x40E24E4 VA: 0x40E24E4
	public void ShowApplicationCameraAndShowLoadingView() { }

	// RVA: 0x40E268C Offset: 0x40E268C VA: 0x40E268C
	public void ShowGameplayCameraAndEnableInput() { }

	// RVA: 0x40E28F0 Offset: 0x40E28F0 VA: 0x40E28F0
	public void ShowDailyCameraAndEnableInput() { }

	// RVA: 0x40E2B08 Offset: 0x40E2B08 VA: 0x40E2B08
	public void ShowHomeCameraAndEnableInput() { }

	// RVA: 0x40E2D20 Offset: 0x40E2D20 VA: 0x40E2D20
	public void ShowEditorCameraAndEnableInput() { }

	// RVA: 0x40E2EF0 Offset: 0x40E2EF0 VA: 0x40E2EF0
	private float GetOrthoSize(Bounds bounds, bool is3Row, BottleCollectionCameraConfig bottleCollectionCameraConfig) { }

	// RVA: 0x40E2FE0 Offset: 0x40E2FE0 VA: 0x40E2FE0
	public float GetWidth() { }

	// RVA: 0x40E3024 Offset: 0x40E3024 VA: 0x40E3024
	public void UpdateInGameCamera(Bounds bounds, bool is3Row, BottleCollectionCameraConfig bottleCollectionCameraConfig) { }

	// RVA: 0x40E316C Offset: 0x40E316C VA: 0x40E316C
	public void UpdateInGameCamera(Bounds bounds, bool is3Row, BottleCollectionCameraConfig bottleCollectionCameraConfig, float duration, float delay) { }

	// RVA: 0x40E3344 Offset: 0x40E3344 VA: 0x40E3344
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts