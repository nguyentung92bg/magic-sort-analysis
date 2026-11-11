public class LobbyIconCollectibleAnimationConfig : ScriptableObject // TypeDefIndex: 4807
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
	[SerializeField]
	[FormerlySerializedAs("_jumpDuration")]
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

	// RVA: 0x3FCB11C Offset: 0x3FCB11C VA: 0x3FCB11C
	public Vector3 get_InitialScale() { }

	// RVA: 0x3FCB128 Offset: 0x3FCB128 VA: 0x3FCB128
	public float get_FadeInDuration() { }

	// RVA: 0x3FCB130 Offset: 0x3FCB130 VA: 0x3FCB130
	public float get_IdleDuration() { }

	// RVA: 0x3FCB138 Offset: 0x3FCB138 VA: 0x3FCB138
	public Vector3 get_JumpScale() { }

	// RVA: 0x3FCB144 Offset: 0x3FCB144 VA: 0x3FCB144
	public float get_JumpScaleDuration() { }

	// RVA: 0x3FCB14C Offset: 0x3FCB14C VA: 0x3FCB14C
	public float get_MoveDuration() { }

	// RVA: 0x3FCB154 Offset: 0x3FCB154 VA: 0x3FCB154
	public float get_LobbyIconScaleUpDuration() { }

	// RVA: 0x3FCB15C Offset: 0x3FCB15C VA: 0x3FCB15C
	public Vector3 get_LobbyIconScaleAmount() { }

	// RVA: 0x3FCB168 Offset: 0x3FCB168 VA: 0x3FCB168
	public float get_LobbyIconScaleDownDuration() { }

	// RVA: 0x3FCB170 Offset: 0x3FCB170 VA: 0x3FCB170
	public AnimationCurve get_MoveAnimationCurve() { }

	// RVA: 0x3FCB178 Offset: 0x3FCB178 VA: 0x3FCB178
	public Vector3 get_SpawnScale() { }

	// RVA: 0x3FCB184 Offset: 0x3FCB184 VA: 0x3FCB184
	public float get_SpawnScaleDuration() { }

	// RVA: 0x3FCB18C Offset: 0x3FCB18C VA: 0x3FCB18C
	public AnimationCurve get_SpawnScaleAnimationCurve() { }

	// RVA: 0x3FCB194 Offset: 0x3FCB194 VA: 0x3FCB194
	public AnimationCurve get_JumpScaleAnimationCurve() { }

	// RVA: 0x3FCB19C Offset: 0x3FCB19C VA: 0x3FCB19C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts
[Serializable]