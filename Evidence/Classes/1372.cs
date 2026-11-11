public class LevelEntranceAnimationConfig : ScriptableObject // TypeDefIndex: 1372
{
	// Fields
	[SerializeField]
	private float _moveDuration; // 0x18
	[SerializeField]
	private float _moveDelay; // 0x1C
	[SerializeField]
	private float _boardMoveDelay; // 0x20
	[SerializeField]
	private AnimationCurve _moveAnimationCurve; // 0x28
	[SerializeField]
	private AnimationCurve _shelfAnimationCurve; // 0x30
	[SerializeField]
	private float _waterShakeDelay; // 0x38

	// Properties
	public float MoveDuration { get; }
	public float MoveDelay { get; }
	public float BoardMoveDelay { get; }
	public AnimationCurve MoveAnimationCurve { get; }
	public AnimationCurve ShelfAnimationCurve { get; }
	public float WaterShakeDelay { get; }

	// Methods

	// RVA: 0x1F173F0 Offset: 0x1F173F0 VA: 0x1F173F0
	public float get_MoveDuration() { }

	// RVA: 0x1F173F8 Offset: 0x1F173F8 VA: 0x1F173F8
	public float get_MoveDelay() { }

	// RVA: 0x1F17400 Offset: 0x1F17400 VA: 0x1F17400
	public float get_BoardMoveDelay() { }

	// RVA: 0x1F17408 Offset: 0x1F17408 VA: 0x1F17408
	public AnimationCurve get_MoveAnimationCurve() { }

	// RVA: 0x1F17410 Offset: 0x1F17410 VA: 0x1F17410
	public AnimationCurve get_ShelfAnimationCurve() { }

	// RVA: 0x1F17418 Offset: 0x1F17418 VA: 0x1F17418
	public float get_WaterShakeDelay() { }

	// RVA: 0x1F17420 Offset: 0x1F17420 VA: 0x1F17420
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]