public class PopUpService : MonoBehaviour, IPopUpService, IService, IInitializable, IDisposable, IHomeIdleInterrupter // TypeDefIndex: 637
{
	// Fields
	[SerializeField]
	private PopUpConfigs _popUpConfigs; // 0x18
	private List<IPopUp> _popUps; // 0x20
	private List<string> _willPreloadPopUpNames; // 0x28
	private Dictionary<string, IPopUp> _persistentPopupsByName; // 0x30
	private AssetManager _assetManager; // 0x38

	// Methods

	// RVA: 0x400E5C0 Offset: 0x400E5C0 VA: 0x400E5C0 Slot: 10
	public void Initialize() { }

	// RVA: 0x400EB94 Offset: 0x400EB94 VA: 0x400EB94 Slot: 9
	public void PreloadPopUps() { }

	// RVA: 0x400EB98 Offset: 0x400EB98 VA: 0x400EB98
	private void RequestPreloadPopups() { }

	// RVA: 0x400EB9C Offset: 0x400EB9C VA: 0x400EB9C
	private void PreInstantiatePopups() { }

	// RVA: 0x400EEEC Offset: 0x400EEEC VA: 0x400EEEC
	private void OpenPopUp(PopUpArguments popUpArguments) { }

	// RVA: 0x400F5F0 Offset: 0x400F5F0 VA: 0x400F5F0 Slot: 4
	public Task OpenPopupAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x400FA08 Offset: 0x400FA08 VA: 0x400FA08 Slot: 7
	public bool IsPopUpOpen(string popUpName) { }

	// RVA: -1 Offset: -1 Slot: 8
	public T GetPopUp<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26745B0 Offset: 0x26745B0 VA: 0x26745B0
	|-PopUpService.GetPopUp<object>
	*/

	// RVA: 0x400F370 Offset: 0x400F370 VA: 0x400F370
	private void Scale(GameObject popup, bool forceScaleDisabledObjects) { }

	// RVA: 0x400FBC4 Offset: 0x400FBC4 VA: 0x400FBC4
	private void ClosePopUp() { }

	[AsyncStateMachine(typeof(PopUpService.<ClosePopUpAsync>d__15))]
	// RVA: 0x400FBC8 Offset: 0x400FBC8 VA: 0x400FBC8 Slot: 5
	public Task ClosePopUpAsync() { }

	[AsyncStateMachine(typeof(PopUpService.<ClosePopupByNameAsync>d__16))]
	// RVA: 0x400FCB4 Offset: 0x400FCB4 VA: 0x400FCB4 Slot: 6
	public Task ClosePopupByNameAsync(string closePopupName) { }

	// RVA: 0x400FDB4 Offset: 0x400FDB4 VA: 0x400FDB4
	private void CloseAllPopUps() { }

	// RVA: 0x401009C Offset: 0x401009C VA: 0x401009C Slot: 11
	public void Dispose() { }

	// RVA: 0x4010274 Offset: 0x4010274 VA: 0x4010274 Slot: 12
	public bool IsInterrupting() { }

	// RVA: 0x400F29C Offset: 0x400F29C VA: 0x400F29C
	private bool IsPopupReadyToShow(GameObject popUpGameObjectPrefab) { }

	// RVA: 0x40102C4 Offset: 0x40102C4 VA: 0x40102C4
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.NativeKeyboard