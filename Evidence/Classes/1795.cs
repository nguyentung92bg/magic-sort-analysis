public class OptimizedGameObject : BasicGameObject // TypeDefIndex: 1795
{
	// Fields
	public const string DefaultName = "OptimizedGameObject";
	[CompilerGenerated]
	private Action<OptimizedGameObject> OnRecycled; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0x2D972DC Offset: 0x2D972DC VA: 0x2D972DC
	public void add_OnRecycled(Action<OptimizedGameObject> value) { }

	[CompilerGenerated]
	// RVA: 0x2D9738C Offset: 0x2D9738C VA: 0x2D9738C
	public void remove_OnRecycled(Action<OptimizedGameObject> value) { }

	// RVA: 0x2D9743C Offset: 0x2D9743C VA: 0x2D9743C
	public void Spawn() { }

	// RVA: 0x2D97440 Offset: 0x2D97440 VA: 0x2D97440
	public void Recycle() { }

	// RVA: 0x2D974B4 Offset: 0x2D974B4 VA: 0x2D974B4
	public void SetParent(ITransform parent) { }

	// RVA: 0x2D97560 Offset: 0x2D97560 VA: 0x2D97560
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x2D9762C Offset: 0x2D9762C VA: 0x2D9762C
	public void SetPosition(Vector3 position) { }

	// RVA: 0x2D976F8 Offset: 0x2D976F8 VA: 0x2D976F8
	public void SetLocalRotation(Quaternion rotation) { }

	// RVA: 0x2D977CC Offset: 0x2D977CC VA: 0x2D977CC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WindQuest.Scripts
[CreateAssetMenu(fileName = "WindQuestAnimationConfig", menuName = "Configs/WindQuestAnimationConfig", order = 1)]