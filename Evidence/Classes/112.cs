public class EclipseAnimationConfig : ScriptableObject // TypeDefIndex: 112
{
	// Fields
	[SerializeField]
	private float _speed; // 0x18
	[SerializeField]
	private float _transitionStartDuration; // 0x1C
	[SerializeField]
	private float _transitionEndEndDuration; // 0x20
	[SerializeField]
	private float _transitionEndDurationDecreased; // 0x24
	[SerializeField]
	private float _aboveWaveLength; // 0x28
	[SerializeField]
	private float _aboveWaveHeightStart; // 0x2C
	[SerializeField]
	private float _aboveWaveHeightEnd; // 0x30
	[SerializeField]
	private float _aboveWaveDirectionX; // 0x34
	[SerializeField]
	private float _aboveWaveDirectionY; // 0x38
	[SerializeField]
	private float _belowWaveLength; // 0x3C
	[SerializeField]
	private float _belowWaveHeightStart; // 0x40
	[SerializeField]
	private float _belowWaveHeightEnd; // 0x44
	[SerializeField]
	private float _belowWaveDirectionX; // 0x48
	[SerializeField]
	private float _belowWaveDirectionY; // 0x4C
	[SerializeField]
	private float _belowWaveCustomTime; // 0x50
	[SerializeField]
	private float _belowAditionalWaveHeight; // 0x54
	[SerializeField]
	private float _customFirstHalfDuration; // 0x58
	[SerializeField]
	private float _customSecondHalfDuration; // 0x5C

	// Properties
	public float Speed { get; }
	public float AboveWaveLength { get; }
	public float AboveWaveHeightStart { get; }
	public float AboveWaveHeightEnd { get; }
	public float AboveWaveDirectionX { get; }
	public float AboveWaveDirectionY { get; }
	public float BelowWaveLength { get; }
	public float BelowWaveHeightStart { get; }
	public float BelowWaveHeightEnd { get; }
	public float BelowWaveDirectionX { get; }
	public float BelowWaveDirectionY { get; }
	public float TransitionEndDuration { get; }
	public float TransitionEndDurationDecreased { get; }
	public float TransitionStartDuration { get; }
	public float BelowWaveCustomTime { get; }
	public float BelowAditionalWaveHeight { get; }
	public float CustomFirstHalfDuration { get; }
	public float CustomSecondHalfDuration { get; }

	// Methods

	// RVA: 0x3AF551C Offset: 0x3AF551C VA: 0x3AF551C
	public float get_Speed() { }

	// RVA: 0x3AF5524 Offset: 0x3AF5524 VA: 0x3AF5524
	public float get_AboveWaveLength() { }

	// RVA: 0x3AF552C Offset: 0x3AF552C VA: 0x3AF552C
	public float get_AboveWaveHeightStart() { }

	// RVA: 0x3AF5534 Offset: 0x3AF5534 VA: 0x3AF5534
	public float get_AboveWaveHeightEnd() { }

	// RVA: 0x3AF553C Offset: 0x3AF553C VA: 0x3AF553C
	public float get_AboveWaveDirectionX() { }

	// RVA: 0x3AF5544 Offset: 0x3AF5544 VA: 0x3AF5544
	public float get_AboveWaveDirectionY() { }

	// RVA: 0x3AF554C Offset: 0x3AF554C VA: 0x3AF554C
	public float get_BelowWaveLength() { }

	// RVA: 0x3AF5554 Offset: 0x3AF5554 VA: 0x3AF5554
	public float get_BelowWaveHeightStart() { }

	// RVA: 0x3AF555C Offset: 0x3AF555C VA: 0x3AF555C
	public float get_BelowWaveHeightEnd() { }

	// RVA: 0x3AF5564 Offset: 0x3AF5564 VA: 0x3AF5564
	public float get_BelowWaveDirectionX() { }

	// RVA: 0x3AF556C Offset: 0x3AF556C VA: 0x3AF556C
	public float get_BelowWaveDirectionY() { }

	// RVA: 0x3AF5574 Offset: 0x3AF5574 VA: 0x3AF5574
	public float get_TransitionEndDuration() { }

	// RVA: 0x3AF557C Offset: 0x3AF557C VA: 0x3AF557C
	public float get_TransitionEndDurationDecreased() { }

	// RVA: 0x3AF5584 Offset: 0x3AF5584 VA: 0x3AF5584
	public float get_TransitionStartDuration() { }

	// RVA: 0x3AF558C Offset: 0x3AF558C VA: 0x3AF558C
	public float get_BelowWaveCustomTime() { }

	// RVA: 0x3AF5594 Offset: 0x3AF5594 VA: 0x3AF5594
	public float get_BelowAditionalWaveHeight() { }

	// RVA: 0x3AF559C Offset: 0x3AF559C VA: 0x3AF559C
	public float get_CustomFirstHalfDuration() { }

	// RVA: 0x3AF55A4 Offset: 0x3AF55A4 VA: 0x3AF55A4
	public float get_CustomSecondHalfDuration() { }

	// RVA: 0x3AF55AC Offset: 0x3AF55AC VA: 0x3AF55AC
	public void .ctor() { }
}

// Namespace: BakedFluid
[CreateAssetMenu(fileName = "BottleAnimationConfig", menuName = "Configs/BottleAnimationConfig")]