public class ResourceManager : MonoBehaviour // TypeDefIndex: 5499
{
	// Fields
	private static ResourceManager mInstance; // 0x0
	public List<IResourceManager_Bundles> mBundleManagers; // 0x18
	public Object[] Assets; // 0x20
	private readonly Dictionary<string, Object> mResourcesCache; // 0x28

	// Properties
	public static ResourceManager pInstance { get; }

	// Methods

	// RVA: 0x13990B4 Offset: 0x13990B4 VA: 0x13990B4
	public static ResourceManager get_pInstance() { }

	// RVA: 0x1399490 Offset: 0x1399490 VA: 0x1399490
	public static void MyOnLevelWasLoaded(Scene scene, LoadSceneMode mode) { }

	// RVA: -1 Offset: -1
	public T GetAsset<T>(string Name) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x267A074 Offset: 0x267A074 VA: 0x267A074
	|-ResourceManager.GetAsset<object>
	*/

	// RVA: 0x1399558 Offset: 0x1399558 VA: 0x1399558
	private Object FindAsset(string Name) { }

	// RVA: 0x139967C Offset: 0x139967C VA: 0x139967C
	public bool HasAsset(Object Obj) { }

	// RVA: -1 Offset: -1
	public T LoadFromResources<T>(string Path) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x267A3D4 Offset: 0x267A3D4 VA: 0x267A3D4
	|-ResourceManager.LoadFromResources<object>
	*/

	// RVA: -1 Offset: -1
	public T LoadFromBundle<T>(string path) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x267A19C Offset: 0x267A19C VA: 0x267A19C
	|-ResourceManager.LoadFromBundle<object>
	*/

	// RVA: 0x13994EC Offset: 0x13994EC VA: 0x13994EC
	public void CleanResourceCache(bool unloadResources = False) { }

	// RVA: 0x13996DC Offset: 0x13996DC VA: 0x13996DC
	public void .ctor() { }
}

// Namespace: I2.Loc