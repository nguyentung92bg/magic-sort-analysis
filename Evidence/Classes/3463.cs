public class ChooseOneSpecialOfferLobbyButtonAnimationView : MonoBehaviour // TypeDefIndex: 3463
{
	// Fields
	[SerializeField]
	private Transform _saleTextCenterTransform; // 0x18
	[SerializeField]
	private Transform _saleTextLeftPivot; // 0x20
	[SerializeField]
	private Transform _saleTextRightPivot; // 0x28
	[SerializeField]
	private SpecialOfferLobbyButtonAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private Transform _mainIconTransform; // 0x38
	private Vector3 _saleTextStartPosition; // 0x40
	private Sequence _mainSequence; // 0x50

	// Methods

	// RVA: 0x20AFA7C Offset: 0x20AFA7C VA: 0x20AFA7C
	private void Awake() { }

	// RVA: 0x20AFAA8 Offset: 0x20AFAA8 VA: 0x20AFAA8
	private void OnEnable() { }

	// RVA: 0x20AFAAC Offset: 0x20AFAAC VA: 0x20AFAAC
	private void MainLoop() { }

	// RVA: 0x20AFBD0 Offset: 0x20AFBD0 VA: 0x20AFBD0
	private Tween IconScale() { }

	// RVA: 0x20AFC70 Offset: 0x20AFC70 VA: 0x20AFC70
	private Sequence SaleTextSequence() { }

	// RVA: 0x20AFDFC Offset: 0x20AFDFC VA: 0x20AFDFC
	private Tween SampleSaleTextRotation() { }

	// RVA: 0x20AFE9C Offset: 0x20AFE9C VA: 0x20AFE9C
	private Tween SamplePivotRotation(Transform target, float duration, AnimationCurve curve, float multiplier) { }

	// RVA: 0x20AFD5C Offset: 0x20AFD5C VA: 0x20AFD5C
	private Tween SampleSaleTextPosition() { }

	// RVA: 0x20AFFA0 Offset: 0x20AFFA0 VA: 0x20AFFA0
	private void ResetSaleTextTransform() { }

	// RVA: 0x20B00F0 Offset: 0x20B00F0 VA: 0x20B00F0
	private void OnDestroy() { }

	// RVA: 0x20B0108 Offset: 0x20B0108 VA: 0x20B0108
	private void OnDisable() { }

	// RVA: 0x20B0188 Offset: 0x20B0188 VA: 0x20B0188
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x20B0190 Offset: 0x20B0190 VA: 0x20B0190
	private void <IconScale>b__10_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x20B01D0 Offset: 0x20B01D0 VA: 0x20B01D0
	private void <SampleSaleTextRotation>b__12_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x20B0228 Offset: 0x20B0228 VA: 0x20B0228
	private void <SampleSaleTextPosition>b__14_0(float value) { }
}

// Namespace: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI