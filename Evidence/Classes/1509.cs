public class BottleFillAnimationConfig : ScriptableObject // TypeDefIndex: 1509
{
	// Fields
	[SerializeField]
	private float _delayBeforeShrink; // 0x18
	[SerializeField]
	private Vector3 _shrink; // 0x1C
	[SerializeField]
	private Vector3 _stretch; // 0x28
	[SerializeField]
	private float _shrinkDuration; // 0x34
	[SerializeField]
	private float _stretchDuration; // 0x38
	[SerializeField]
	private AnimationCurve _stretchAnimationCurve; // 0x40
	[SerializeField]
	private AnimationCurve _shrinkAnimationCurve; // 0x48
	[SerializeField]
	private float _returnToNormalScaleDuration; // 0x50
	[SerializeField]
	private AnimationCurve _returnToNormalScaleAnimationCurve; // 0x58
	[SerializeField]
	private float _animationDelay; // 0x60
	[SerializeField]
	private float _oldAnimationDelay; // 0x64
	[SerializeField]
	private float _particleDelay; // 0x68
	[SerializeField]
	private float _moveUpDelay; // 0x6C
	[SerializeField]
	private AnimationCurve _moveUpCurve; // 0x70
	[SerializeField]
	private AnimationCurve _moveDownCurve; // 0x78
	[SerializeField]
	private float _moveUpDuration; // 0x80
	[SerializeField]
	private float _moveDownDuration; // 0x84
	[SerializeField]
	private float _moveUpOffset; // 0x88
	[SerializeField]
	private AnimationDelayByBottleHeight[] _animationDelayByBottleHeights; // 0x90

	// Properties
	public float MoveUpOffset { get; }
	public float MoveUpDuration { get; }
	public float MoveDownDuration { get; }
	public AnimationCurve MoveUpCurve { get; }
	public AnimationCurve MoveDownCurve { get; }
	public float MoveUpDelay { get; }
	public float ParticleDelay { get; }
	public Vector3 Shrink { get; }
	public Vector3 Stretch { get; }
	public float ShrinkDuration { get; }
	public float StretchDuration { get; }
	public AnimationCurve StretchAnimationCurve { get; }
	public AnimationCurve ShrinkAnimationCurve { get; }
	public float ReturnToNormalScaleDuration { get; }
	public AnimationCurve ReturnToNormalScaleAnimationCurve { get; }
	public float DelayBeforeShrink { get; }
	public float AnimationDelay { get; }
	public float OldAnimationDelay { get; }
	public float DailyAnimationDelay { get; }

	// Methods

	// RVA: 0x24932A4 Offset: 0x24932A4 VA: 0x24932A4
	public float get_MoveUpOffset() { }

	// RVA: 0x24932AC Offset: 0x24932AC VA: 0x24932AC
	public float get_MoveUpDuration() { }

	// RVA: 0x24932B4 Offset: 0x24932B4 VA: 0x24932B4
	public float get_MoveDownDuration() { }

	// RVA: 0x24932BC Offset: 0x24932BC VA: 0x24932BC
	public AnimationCurve get_MoveUpCurve() { }

	// RVA: 0x24932C4 Offset: 0x24932C4 VA: 0x24932C4
	public AnimationCurve get_MoveDownCurve() { }

	// RVA: 0x24932CC Offset: 0x24932CC VA: 0x24932CC
	public float get_MoveUpDelay() { }

	// RVA: 0x24932D4 Offset: 0x24932D4 VA: 0x24932D4
	public float get_ParticleDelay() { }

	// RVA: 0x24932DC Offset: 0x24932DC VA: 0x24932DC
	public Vector3 get_Shrink() { }

	// RVA: 0x24932E8 Offset: 0x24932E8 VA: 0x24932E8
	public Vector3 get_Stretch() { }

	// RVA: 0x24932F4 Offset: 0x24932F4 VA: 0x24932F4
	public float get_ShrinkDuration() { }

	// RVA: 0x24932FC Offset: 0x24932FC VA: 0x24932FC
	public float get_StretchDuration() { }

	// RVA: 0x2493304 Offset: 0x2493304 VA: 0x2493304
	public AnimationCurve get_StretchAnimationCurve() { }

	// RVA: 0x249330C Offset: 0x249330C VA: 0x249330C
	public AnimationCurve get_ShrinkAnimationCurve() { }

	// RVA: 0x2493314 Offset: 0x2493314 VA: 0x2493314
	public float get_ReturnToNormalScaleDuration() { }

	// RVA: 0x249331C Offset: 0x249331C VA: 0x249331C
	public AnimationCurve get_ReturnToNormalScaleAnimationCurve() { }

	// RVA: 0x2493324 Offset: 0x2493324 VA: 0x2493324
	public float get_DelayBeforeShrink() { }

	// RVA: 0x249332C Offset: 0x249332C VA: 0x249332C
	public float get_AnimationDelay() { }

	// RVA: 0x2493334 Offset: 0x2493334 VA: 0x2493334
	public float get_OldAnimationDelay() { }

	// RVA: 0x249333C Offset: 0x249333C VA: 0x249333C
	public float get_DailyAnimationDelay() { }

	// RVA: 0x24925A4 Offset: 0x24925A4 VA: 0x24925A4
	public float GetStopperDelay(int height) { }

	// RVA: 0x2492840 Offset: 0x2492840 VA: 0x2492840
	public float GetParticleDelay(int height) { }

	// RVA: 0x2492928 Offset: 0x2492928 VA: 0x2492928
	public float GetMoveUpDelay(int height) { }

	// RVA: 0x2493344 Offset: 0x2493344 VA: 0x2493344
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle
[Serializable]