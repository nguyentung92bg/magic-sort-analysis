public class Container : IDisposable, IAsyncInitializable // TypeDefIndex: 548
{
	// Fields
	private readonly Dictionary<Type, object> _singletons; // 0x10
	private readonly Dictionary<ValueTuple<Type, string>, object> _singletonsWithId; // 0x18
	private readonly Dictionary<Type, Type> _transients; // 0x20
	private readonly Dictionary<UnresolvedType, object> _singletonsWaitingForResolve; // 0x28
	private readonly Dictionary<ValueTuple<UnresolvedType, string>, object> _singletonsWaitingForResolveWithId; // 0x30
	private List<InstanceInfo> _allInstances; // 0x38
	[CompilerGenerated]
	private Container <ChildContainer>k__BackingField; // 0x40
	[CompilerGenerated]
	private Container <ParentContainer>k__BackingField; // 0x48

	// Properties
	public Container ChildContainer { get; set; }
	public Container ParentContainer { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D30FB8 Offset: 0x3D30FB8 VA: 0x3D30FB8
	public Container get_ChildContainer() { }

	[CompilerGenerated]
	// RVA: 0x3D30FC0 Offset: 0x3D30FC0 VA: 0x3D30FC0
	public void set_ChildContainer(Container value) { }

	[CompilerGenerated]
	// RVA: 0x3D30FC8 Offset: 0x3D30FC8 VA: 0x3D30FC8
	public Container get_ParentContainer() { }

	[CompilerGenerated]
	// RVA: 0x3D30FD0 Offset: 0x3D30FD0 VA: 0x3D30FD0
	public void set_ParentContainer(Container value) { }

	// RVA: 0x3D30FD8 Offset: 0x3D30FD8 VA: 0x3D30FD8
	public void RegisterSingleton(Type asType, Type realType, bool autoInitialize = True) { }

	// RVA: 0x3D31198 Offset: 0x3D31198 VA: 0x3D31198
	public void RegisterSingletonWithId(Type asType, object instance, string id, bool autoInitialize = True) { }

	// RVA: -1 Offset: -1
	public void RegisterSingletonUsingInstance<T>(T instance, bool autoInitialize = True) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27220D4 Offset: 0x27220D4 VA: 0x27220D4
	|-Container.RegisterSingletonUsingInstance<object>
	*/

	// RVA: -1 Offset: -1
	public void RegisterTransient<T>(Type type) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2722248 Offset: 0x2722248 VA: 0x2722248
	|-Container.RegisterTransient<object>
	*/

	[AsyncStateMachine(typeof(Container.<InitializeAsync>d__18))]
	// RVA: 0x3D30BBC Offset: 0x3D30BBC VA: 0x3D30BBC Slot: 5
	public Task InitializeAsync() { }

	// RVA: 0x3D31300 Offset: 0x3D31300 VA: 0x3D31300
	public void InitializeDataInitializables() { }

	// RVA: 0x3D314E0 Offset: 0x3D314E0 VA: 0x3D314E0
	public void InitializeLateInitializables() { }

	// RVA: 0x3D316C0 Offset: 0x3D316C0 VA: 0x3D316C0
	public void ResolveInstance(object instance) { }

	// RVA: 0x3D31858 Offset: 0x3D31858 VA: 0x3D31858
	public void ResolveMono(object instance) { }

	// RVA: 0x3D31764 Offset: 0x3D31764 VA: 0x3D31764
	private void ResolveInstance(UnresolvedType unResolvedType, object instance) { }

	// RVA: 0x3D31E8C Offset: 0x3D31E8C VA: 0x3D31E8C
	private void ResolveWithConstructor(ConstructorInfo constructorInfo, UnresolvedType unResolvedType, object instance) { }

	// RVA: 0x3D318FC Offset: 0x3D318FC VA: 0x3D318FC
	private void ResolveWithFieldsAndProperties(UnresolvedType unResolvedType, object instance) { }

	// RVA: 0x3D32794 Offset: 0x3D32794 VA: 0x3D32794
	private static void SetResolvedObjectsToFieldsAndProperties(UnresolvedType unResolvedType, object instance, List<ResolvedObject> resolvedObjects) { }

	// RVA: 0x3D32944 Offset: 0x3D32944 VA: 0x3D32944
	private bool CanResolveWithoutId(Type type) { }

	// RVA: 0x3D3240C Offset: 0x3D3240C VA: 0x3D3240C
	private object ResolveWithoutId(Type type) { }

	// RVA: 0x3D329D8 Offset: 0x3D329D8 VA: 0x3D329D8
	private bool CanResolveWithId(Type type, string key) { }

	// RVA: 0x3D3265C Offset: 0x3D3265C VA: 0x3D3265C
	private object ResolveWithId(Type type, string key) { }

	// RVA: -1 Offset: -1
	public T GetInstance<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2721D78 Offset: 0x2721D78 VA: 0x2721D78
	|-Container.GetInstance<object>
	*/

	// RVA: -1 Offset: -1
	public object GetInstanceByKey<T>(string key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2721E3C Offset: 0x2721E3C VA: 0x2721E3C
	|-Container.GetInstanceByKey<object>
	*/

	// RVA: 0x3D32A7C Offset: 0x3D32A7C VA: 0x3D32A7C Slot: 4
	public void Dispose() { }

	// RVA: -1 Offset: -1
	public List<T> GetInstancesByInterfaceType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2721EC0 Offset: 0x2721EC0 VA: 0x2721EC0
	|-Container.GetInstancesByInterfaceType<object>
	*/

	// RVA: 0x3D32C54 Offset: 0x3D32C54 VA: 0x3D32C54
	public void UpdateServices() { }

	// RVA: 0x3D33070 Offset: 0x3D33070 VA: 0x3D33070
	public void UpdateLateLoginServices() { }

	// RVA: 0x3D3348C Offset: 0x3D3348C VA: 0x3D3348C
	public void InitializeServicesForNewDownload() { }

	// RVA: 0x3D33658 Offset: 0x3D33658 VA: 0x3D33658
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.DI.Injection