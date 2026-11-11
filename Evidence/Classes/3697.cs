private struct MergeStuckChecker.MergeUnit // TypeDefIndex: 3697
{
	// Fields
	public readonly IMergeable Mergeable; // 0x0
	public readonly bool CanMerge; // 0x8
	public readonly bool CanMove; // 0x9

	// Properties
	public static MergeStuckChecker.MergeUnit Empty { get; }

	// Methods

	// RVA: 0x4119F78 Offset: 0x4119F78 VA: 0x4119F78
	private void .ctor(IMergeable mergeable, bool canMerge, bool canMove) { }

	// RVA: 0x4119CE0 Offset: 0x4119CE0 VA: 0x4119CE0
	public static MergeStuckChecker.MergeUnit get_Empty() { }

	// RVA: 0x4119D70 Offset: 0x4119D70 VA: 0x4119D70
	public MergeStuckChecker.MergeUnit With(IMergeable identity, bool canMerge, bool canMove) { }

	// RVA: 0x4119C80 Offset: 0x4119C80 VA: 0x4119C80
	public MergeStuckChecker.MergeUnit Combine(MergeStuckChecker.MergeUnit other) { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board