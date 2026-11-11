public class CurrencyAnimationConfig : ScriptableObject // TypeDefIndex: 5140
{
	// Fields
	[SerializeField]
	private float _totalAnimationDuration; // 0x18
	[SerializeField]
	private Vector3 _APoint; // 0x1C
	[SerializeField]
	private Vector3 _BPoint; // 0x28
	[SerializeField]
	private Vector3 _CPoint; // 0x34
	[SerializeField]
	private Vector3 _DPoint; // 0x40
	[SerializeField]
	private Vector3 _middleOffset; // 0x4C
	[SerializeField]
	private AnimationCurve _animationCurve; // 0x58
	[SerializeField]
	private Vector3 _spawnPoint; // 0x60
	[SerializeField]
	private Vector2 _randomSpawnDistance; // 0x6C
	[SerializeField]
	private bool _useTriangularWaveForSpawn; // 0x74
	[SerializeField]
	private MaxMin _flipAnimationSpeed; // 0x78
	[SerializeField]
	private MaxMin _delayBetweenRewards; // 0x80
	[SerializeField]
	private float _fadeDuration; // 0x88
	[SerializeField]
	private float _spawnScaleDuration; // 0x8C
	[SerializeField]
	private AnimationCurve _spawnScaleAnimationCurve; // 0x90
	[SerializeField]
	private int _seed; // 0x98
	[SerializeField]
	private int _requiredAmoutForEachCoin; // 0x9C
	[SerializeField]
	private int _minCoinCount; // 0xA0
	[SerializeField]
	private int _maxCoinCount; // 0xA4

	// Properties
	public float TotalAnimationDuration { get; }
	public Vector3 APoint { get; }
	public Vector3 BPoint { get; }
	public Vector3 CPoint { get; }
	public Vector3 DPoint { get; }
	public Vector3 MiddleOffset { get; }
	public AnimationCurve AnimationCurve { get; }
	public Vector3 SpawnPoint { get; }
	public Vector2 RandomSpawnDistance { get; }
	public MaxMin FlipAnimationSpeed { get; }
	public float GetRandomDelayBetweenRewards { get; }
	public float FadeDuration { get; }
	public float SpawnScaleDuration { get; }
	public bool UseTriangularWaveForSpawn { get; }
	public AnimationCurve SpawnScaleAnimationCurve { get; }
	public int Seed { get; }
	public int RequiredAmoutForEachCoin { get; }
	public int MinCoinCount { get; }
	public int MaxCoinCount { get; }

	// Methods

	// RVA: 0x13806CC Offset: 0x13806CC VA: 0x13806CC
	public float get_TotalAnimationDuration() { }

	// RVA: 0x13806D4 Offset: 0x13806D4 VA: 0x13806D4
	public Vector3 get_APoint() { }

	// RVA: 0x13806E0 Offset: 0x13806E0 VA: 0x13806E0
	public Vector3 get_BPoint() { }

	// RVA: 0x13806EC Offset: 0x13806EC VA: 0x13806EC
	public Vector3 get_CPoint() { }

	// RVA: 0x13806F8 Offset: 0x13806F8 VA: 0x13806F8
	public Vector3 get_DPoint() { }

	// RVA: 0x1380704 Offset: 0x1380704 VA: 0x1380704
	public Vector3 get_MiddleOffset() { }

	// RVA: 0x1380710 Offset: 0x1380710 VA: 0x1380710
	public AnimationCurve get_AnimationCurve() { }

	// RVA: 0x1380718 Offset: 0x1380718 VA: 0x1380718
	public Vector3 get_SpawnPoint() { }

	// RVA: 0x1380724 Offset: 0x1380724 VA: 0x1380724
	public Vector2 get_RandomSpawnDistance() { }

	// RVA: 0x138072C Offset: 0x138072C VA: 0x138072C
	public MaxMin get_FlipAnimationSpeed() { }

	// RVA: 0x1380734 Offset: 0x1380734 VA: 0x1380734
	public float get_GetRandomDelayBetweenRewards() { }

	// RVA: 0x1380740 Offset: 0x1380740 VA: 0x1380740
	public float get_FadeDuration() { }

	// RVA: 0x1380748 Offset: 0x1380748 VA: 0x1380748
	public float get_SpawnScaleDuration() { }

	// RVA: 0x1380750 Offset: 0x1380750 VA: 0x1380750
	public bool get_UseTriangularWaveForSpawn() { }

	// RVA: 0x1380758 Offset: 0x1380758 VA: 0x1380758
	public AnimationCurve get_SpawnScaleAnimationCurve() { }

	// RVA: 0x1380760 Offset: 0x1380760 VA: 0x1380760
	public int get_Seed() { }

	// RVA: 0x1380768 Offset: 0x1380768 VA: 0x1380768
	public int get_RequiredAmoutForEachCoin() { }

	// RVA: 0x1380770 Offset: 0x1380770 VA: 0x1380770
	public int get_MinCoinCount() { }

	// RVA: 0x1380778 Offset: 0x1380778 VA: 0x1380778
	public int get_MaxCoinCount() { }

	// RVA: 0x1380780 Offset: 0x1380780 VA: 0x1380780
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI