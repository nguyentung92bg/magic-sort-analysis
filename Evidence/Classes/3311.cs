public class SpecialOfferLobbyButtonAnimationView : MonoBehaviour // TypeDefIndex: 3311
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

	// RVA: 0x35997E4 Offset: 0x35997E4 VA: 0x35997E4
	private void Awake() { }

	// RVA: 0x3599810 Offset: 0x3599810 VA: 0x3599810
	private void OnEnable() { }

	// RVA: 0x3599814 Offset: 0x3599814 VA: 0x3599814
	private void MainLoop() { }

	// RVA: 0x3599974 Offset: 0x3599974 VA: 0x3599974
	private Tween IconScale() { }

	// RVA: 0x3599A14 Offset: 0x3599A14 VA: 0x3599A14
	private Sequence SaleTextSequence() { }

	// RVA: 0x3599BA0 Offset: 0x3599BA0 VA: 0x3599BA0
	private Tween SampleSaleTextRotation() { }

	// RVA: 0x3599C40 Offset: 0x3599C40 VA: 0x3599C40
	private Tween SamplePivotRotation(Transform target, float duration, AnimationCurve curve, float multiplier) { }

	// RVA: 0x3599B00 Offset: 0x3599B00 VA: 0x3599B00
	private Tween SampleSaleTextPosition() { }

	// RVA: 0x3599D44 Offset: 0x3599D44 VA: 0x3599D44
	private void ResetSaleTextTransform() { }

	// RVA: 0x3599E94 Offset: 0x3599E94 VA: 0x3599E94
	private void OnDestroy() { }

	// RVA: 0x3599EAC Offset: 0x3599EAC VA: 0x3599EAC
	private void OnDisable() { }

	// RVA: 0x3599F2C Offset: 0x3599F2C VA: 0x3599F2C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3599F34 Offset: 0x3599F34 VA: 0x3599F34
	private void <IconScale>b__10_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x3599F74 Offset: 0x3599F74 VA: 0x3599F74
	private void <SampleSaleTextRotation>b__12_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x3599FCC Offset: 0x3599FCC VA: 0x3599FCC
	private void <SampleSaleTextPosition>b__14_0(float value) { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI