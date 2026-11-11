public class LobbyIconCollectibleAnimationConfig : ScriptableObject // TypeDefIndex: 2029
{
	// Fields
	[SerializeField]
	private Vector3 _initialScale; // 0x18
	[SerializeField]
	private Vector3 _spawnScale; // 0x24
	[SerializeField]
	private float _spawnScaleDuration; // 0x30
	[SerializeField]
	private AnimationCurve _spawnScaleAnimationCurve; // 0x38
	[SerializeField]
	private float _fadeInDuration; // 0x40
	[SerializeField]
	private float _idleDuration; // 0x44
	[SerializeField]
	private Vector3 _jumpScale; // 0x48
	[FormerlySerializedAs("_jumpDuration")]
	[SerializeField]
	private float _jumpScaleDuration; // 0x54
	[FormerlySerializedAs("_jumpAnimationCurve")]
	[SerializeField]
	private AnimationCurve _jumpScaleAnimationCurve; // 0x58
	[SerializeField]
	private float _moveDuration; // 0x60
	[SerializeField]
	private float _lobbyIconScaleUpDuration; // 0x64
	[SerializeField]
	private Vector3 _lobbyIconScaleAmount; // 0x68
	[SerializeField]
	private float _lobbyIconScaleDownDuration; // 0x74
	[SerializeField]
	private AnimationCurve _moveAnimationCurve; // 0x78

	// Properties
	public Vector3 InitialScale { get; }
	public float FadeInDuration { get; }
	public float IdleDuration { get; }
	public Vector3 JumpScale { get; }
	public float JumpScaleDuration { get; }
	public float MoveDuration { get; }
	public float LobbyIconScaleUpDuration { get; }
	public Vector3 LobbyIconScaleAmount { get; }
	public float LobbyIconScaleDownDuration { get; }
	public AnimationCurve MoveAnimationCurve { get; }
	public Vector3 SpawnScale { get; }
	public float SpawnScaleDuration { get; }
	public AnimationCurve SpawnScaleAnimationCurve { get; }
	public AnimationCurve JumpScaleAnimationCurve { get; }

	// Methods

	// RVA: 0x32E561C Offset: 0x32E561C VA: 0x32E561C
	public Vector3 get_InitialScale() { }

	// RVA: 0x32E5628 Offset: 0x32E5628 VA: 0x32E5628
	public float get_FadeInDuration() { }

	// RVA: 0x32E5630 Offset: 0x32E5630 VA: 0x32E5630
	public float get_IdleDuration() { }

	// RVA: 0x32E5638 Offset: 0x32E5638 VA: 0x32E5638
	public Vector3 get_JumpScale() { }

	// RVA: 0x32E5644 Offset: 0x32E5644 VA: 0x32E5644
	public float get_JumpScaleDuration() { }

	// RVA: 0x32E564C Offset: 0x32E564C VA: 0x32E564C
	public float get_MoveDuration() { }

	// RVA: 0x32E5654 Offset: 0x32E5654 VA: 0x32E5654
	public float get_LobbyIconScaleUpDuration() { }

	// RVA: 0x32E565C Offset: 0x32E565C VA: 0x32E565C
	public Vector3 get_LobbyIconScaleAmount() { }

	// RVA: 0x32E5668 Offset: 0x32E5668 VA: 0x32E5668
	public float get_LobbyIconScaleDownDuration() { }

	// RVA: 0x32E5670 Offset: 0x32E5670 VA: 0x32E5670
	public AnimationCurve get_MoveAnimationCurve() { }

	// RVA: 0x32E5678 Offset: 0x32E5678 VA: 0x32E5678
	public Vector3 get_SpawnScale() { }

	// RVA: 0x32E5684 Offset: 0x32E5684 VA: 0x32E5684
	public float get_SpawnScaleDuration() { }

	// RVA: 0x32E568C Offset: 0x32E568C VA: 0x32E568C
	public AnimationCurve get_SpawnScaleAnimationCurve() { }

	// RVA: 0x32E5694 Offset: 0x32E5694 VA: 0x32E5694
	public AnimationCurve get_JumpScaleAnimationCurve() { }

	// RVA: 0x32E569C Offset: 0x32E569C VA: 0x32E569C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]