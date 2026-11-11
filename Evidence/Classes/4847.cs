public class BoatRushAvatarController : MonoBehaviour // TypeDefIndex: 4847
{
	// Fields
	[SerializeField]
	private Transform _rootView; // 0x18
	[SerializeField]
	private ProfileFrameView _frameView; // 0x20
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x28
	[SerializeField]
	private BoatRushAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private Animation _animation; // 0x38
	[SerializeField]
	private AnimationClip _rightShakeClip; // 0x40
	[SerializeField]
	private AnimationClip _leftShakeClip; // 0x48

	// Methods

	// RVA: 0x40F5870 Offset: 0x40F5870 VA: 0x40F5870
	public void Initialize() { }

	// RVA: 0x40F58A0 Offset: 0x40F58A0 VA: 0x40F58A0
	public void Place(Vector3 position) { }

	// RVA: 0x40F58BC Offset: 0x40F58BC VA: 0x40F58BC
	public Sequence JumpToPosition(Vector3 targetPosition, int targetIndex) { }

	// RVA: 0x40F5AD0 Offset: 0x40F5AD0 VA: 0x40F5AD0
	private void FollowBezierPath(Vector3 targetPosition, bool isLeft, int targetIndex) { }

	// RVA: 0x40F5E7C Offset: 0x40F5E7C VA: 0x40F5E7C
	private void PlayShakeClip(bool isLeft) { }

	// RVA: 0x40F5EC4 Offset: 0x40F5EC4 VA: 0x40F5EC4
	public void Dispose() { }

	// RVA: 0x40F5F34 Offset: 0x40F5F34 VA: 0x40F5F34
	public Tween Hide() { }

	// RVA: 0x40F5FC8 Offset: 0x40F5FC8 VA: 0x40F5FC8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI
[CreateAssetMenu(fileName = "BoatRushBannerAnimationConfig", menuName = "Configs/BoatRushBannerAnimationConfig")]