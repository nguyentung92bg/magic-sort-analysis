public class EndlessPortalLobbyButtonAnimationView : MonoBehaviour // TypeDefIndex: 3385
{
	// Fields
	[SerializeField]
	private List<Transform> _coinOutwardsPositions; // 0x18
	[SerializeField]
	private List<Transform> _coinTransforms; // 0x20
	[SerializeField]
	private List<SpriteRenderer> _coinSpriteRenderers; // 0x28
	[SerializeField]
	private EndlessPortalLobbyButtonAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private Transform _portalCenterPoint; // 0x38
	[SerializeField]
	private Transform _outerPortal; // 0x40
	[SerializeField]
	private Transform _innerPortal; // 0x48
	[SerializeField]
	private Transform _portalParent; // 0x50
	[SerializeField]
	private Transform _saleTextCenterTransform; // 0x58
	[SerializeField]
	private Transform _saleTextLeftPivot; // 0x60
	[SerializeField]
	private Transform _saleTextRightPivot; // 0x68
	private List<Vector3> _coinInitialLocalPositions; // 0x70
	private Vector3 _saleTextStartPosition; // 0x78
	private Sequence _spawnSequence; // 0x88
	private Sequence _hideSequence; // 0x90
	private Sequence _mainSequence; // 0x98
	private Tween _portalRotateTween; // 0xA0
	private Sequence _moveInOutSequence; // 0xA8
	private Sequence _moveOutSequence; // 0xB0

	// Methods

	// RVA: 0x346D8A4 Offset: 0x346D8A4 VA: 0x346D8A4
	private void Awake() { }

	// RVA: 0x346DAF4 Offset: 0x346DAF4 VA: 0x346DAF4
	private void OnEnable() { }

	// RVA: 0x346DC64 Offset: 0x346DC64 VA: 0x346DC64
	private void ResetCoinTransform() { }

	// RVA: 0x346DE0C Offset: 0x346DE0C VA: 0x346DE0C
	private void ResetSaleTextTransform() { }

	// RVA: 0x346DF5C Offset: 0x346DF5C VA: 0x346DF5C
	private void ResetPortalRotation() { }

	// RVA: 0x346DFE8 Offset: 0x346DFE8 VA: 0x346DFE8
	private Tween PortalRotate() { }

	// RVA: 0x346DAF8 Offset: 0x346DAF8 VA: 0x346DAF8
	public void MainLoop() { }

	[Button]
	// RVA: 0x346E468 Offset: 0x346E468 VA: 0x346E468
	public Sequence CoinSpawnSequence() { }

	// RVA: 0x346EAEC Offset: 0x346EAEC VA: 0x346EAEC
	private Tween CoinHideScaleOut(Transform target) { }

	// RVA: 0x346EB94 Offset: 0x346EB94 VA: 0x346EB94
	private Tween CoinScaleIn(Transform target) { }

	// RVA: 0x346E814 Offset: 0x346E814 VA: 0x346E814
	private Tween CoinFadeIn(SpriteRenderer target) { }

	// RVA: 0x346E83C Offset: 0x346E83C VA: 0x346E83C
	private Tween CoinFall(Transform target, int index) { }

	// RVA: 0x346E8E4 Offset: 0x346E8E4 VA: 0x346E8E4
	private Tween CoinShrinkStart(Transform target) { }

	// RVA: 0x346E958 Offset: 0x346E958 VA: 0x346E958
	private Tween CoinShrinkBack(Transform target) { }

	// RVA: 0x346EA00 Offset: 0x346EA00 VA: 0x346EA00
	private Sequence SaleTextSequence() { }

	// RVA: 0x346EC3C Offset: 0x346EC3C VA: 0x346EC3C
	private Tween SampleSaleTextPosition() { }

	// RVA: 0x346ECDC Offset: 0x346ECDC VA: 0x346ECDC
	private Tween SampleSaleTextRotation() { }

	// RVA: 0x346ED7C Offset: 0x346ED7C VA: 0x346ED7C
	private Tween SamplePivotRotation(Transform target, float duration, AnimationCurve curve, float multiplier) { }

	[Button]
	// RVA: 0x346E060 Offset: 0x346E060 VA: 0x346E060
	public Sequence CoinMoveIn() { }

	[Button]
	// RVA: 0x346E1FC Offset: 0x346E1FC VA: 0x346E1FC
	public Sequence CoinMoveOut() { }

	// RVA: 0x346F07C Offset: 0x346F07C VA: 0x346F07C
	private Tween RotateCoinOutwards(Transform target) { }

	// RVA: 0x346F0F8 Offset: 0x346F0F8 VA: 0x346F0F8
	private Tween RotateCoinInwards(Transform target) { }

	// RVA: 0x346EE80 Offset: 0x346EE80 VA: 0x346EE80
	private Tween MoveCoinOutwards(Transform target, int index) { }

	// RVA: 0x346EF50 Offset: 0x346EF50 VA: 0x346EF50
	private Tween MoveCoinInwards(Transform target) { }

	// RVA: 0x346EFD4 Offset: 0x346EFD4 VA: 0x346EFD4
	private Tween MoveCoinToInitialPosition(Transform target, int index) { }

	// RVA: 0x346F174 Offset: 0x346F174 VA: 0x346F174
	private void OnDisable() { }

	// RVA: 0x346F210 Offset: 0x346F210 VA: 0x346F210
	private void OnDestroy() { }

	// RVA: 0x346F29C Offset: 0x346F29C VA: 0x346F29C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x346F2A4 Offset: 0x346F2A4 VA: 0x346F2A4
	private void <SampleSaleTextPosition>b__34_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x346F324 Offset: 0x346F324 VA: 0x346F324
	private void <SampleSaleTextRotation>b__35_0(float value) { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI