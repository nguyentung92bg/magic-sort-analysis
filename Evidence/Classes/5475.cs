public class LocalizeTarget_UnityStandard_TextMesh : LocalizeTarget<TextMesh> // TypeDefIndex: 5475
{
	// Fields
	private TextAlignment mAlignment_RTL; // 0x20
	private TextAlignment mAlignment_LTR; // 0x24
	private bool mAlignmentWasRTL; // 0x28
	private bool mInitializeAlignment; // 0x29

	// Methods

	// RVA: 0x1394E98 Offset: 0x1394E98 VA: 0x1394E98
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1394E9C Offset: 0x1394E9C VA: 0x1394E9C
	private static void AutoRegister() { }

	// RVA: 0x1394F64 Offset: 0x1394F64 VA: 0x1394F64 Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x1394F6C Offset: 0x1394F6C VA: 0x1394F6C Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x1394F74 Offset: 0x1394F74 VA: 0x1394F74 Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x1394F7C Offset: 0x1394F7C VA: 0x1394F7C Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x1394F84 Offset: 0x1394F84 VA: 0x1394F84 Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x1394F8C Offset: 0x1394F8C VA: 0x1394F8C Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x13950B0 Offset: 0x13950B0 VA: 0x13950B0 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x1395358 Offset: 0x1395358 VA: 0x1395358
	public void .ctor() { }
}

// Namespace: I2.Loc