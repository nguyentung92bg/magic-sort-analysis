public abstract class BoatRushStageView : MonoBehaviour // TypeDefIndex: 4880
{
	// Fields
	[SerializeField]
	private Transform _pivotTransform; // 0x18
	[SerializeField]
	private int _stageIndex; // 0x20
	[SerializeField]
	private int _localStageIndex; // 0x24
	[SerializeField]
	private int _jumpConfigIndex; // 0x28
	[SerializeField]
	protected BoatRushAnimationConfig _animationConfig; // 0x30
	private bool _isCompleted; // 0x38

	// Properties
	public Transform PivotTransform { get; }
	public int StageIndex { get; }
	public bool IsCompleted { get; }
	protected int LocalStageIndex { get; }
	public int JumpConfigIndex { get; }

	// Methods

	// RVA: 0x40FE1BC Offset: 0x40FE1BC VA: 0x40FE1BC
	public Transform get_PivotTransform() { }

	// RVA: 0x40FE1C4 Offset: 0x40FE1C4 VA: 0x40FE1C4
	public int get_StageIndex() { }

	// RVA: 0x40FE1CC Offset: 0x40FE1CC VA: 0x40FE1CC
	public bool get_IsCompleted() { }

	// RVA: 0x40FE1D4 Offset: 0x40FE1D4 VA: 0x40FE1D4
	protected int get_LocalStageIndex() { }

	// RVA: 0x40FE1DC Offset: 0x40FE1DC VA: 0x40FE1DC
	public int get_JumpConfigIndex() { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract Sequence PlayCompletedAnimation();

	// RVA: 0x40FE1E4 Offset: 0x40FE1E4 VA: 0x40FE1E4 Slot: 5
	public virtual void Initialize(bool isCompleted) { }

	// RVA: 0x40F7F78 Offset: 0x40F7F78 VA: 0x40F7F78
	protected void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]