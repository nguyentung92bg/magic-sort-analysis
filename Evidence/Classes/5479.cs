public class LocalizeTarget_UnityUI_Text : LocalizeTarget<Text> // TypeDefIndex: 5479
{
	// Fields
	private TextAnchor mAlignment_RTL; // 0x20
	private TextAnchor mAlignment_LTR; // 0x24
	private bool mAlignmentWasRTL; // 0x28
	private bool mInitializeAlignment; // 0x29

	// Methods

	// RVA: 0x1395E24 Offset: 0x1395E24 VA: 0x1395E24
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1395E28 Offset: 0x1395E28 VA: 0x1395E28
	private static void AutoRegister() { }

	// RVA: 0x1395EF0 Offset: 0x1395EF0 VA: 0x1395EF0 Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x1395EF8 Offset: 0x1395EF8 VA: 0x1395EF8 Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x1395F00 Offset: 0x1395F00 VA: 0x1395F00 Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x1395F08 Offset: 0x1395F08 VA: 0x1395F08 Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x1395F10 Offset: 0x1395F10 VA: 0x1395F10 Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x1395F18 Offset: 0x1395F18 VA: 0x1395F18 Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x1396044 Offset: 0x1396044 VA: 0x1396044 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x13962EC Offset: 0x13962EC VA: 0x13962EC
	private void InitAlignment(bool isRTL, TextAnchor alignment, out TextAnchor alignLTR, out TextAnchor alignRTL) { }

	// RVA: 0x13963A4 Offset: 0x13963A4 VA: 0x13963A4
	public void .ctor() { }
}

// Namespace: I2.Loc