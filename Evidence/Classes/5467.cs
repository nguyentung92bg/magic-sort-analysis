public class LocalizeTarget_TextMeshPro_UGUI : LocalizeTarget<TextMeshProUGUI> // TypeDefIndex: 5467
{
	// Fields
	public TextAlignmentOptions mAlignment_RTL; // 0x20
	public TextAlignmentOptions mAlignment_LTR; // 0x24
	public bool mAlignmentWasRTL; // 0x28
	public bool mInitializeAlignment; // 0x29

	// Methods

	// RVA: 0x13932E8 Offset: 0x13932E8 VA: 0x13932E8
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x13932EC Offset: 0x13932EC VA: 0x13932EC
	private static void AutoRegister() { }

	// RVA: 0x13933B4 Offset: 0x13933B4 VA: 0x13933B4 Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x13933BC Offset: 0x13933BC VA: 0x13933BC Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x13933C4 Offset: 0x13933C4 VA: 0x13933C4 Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x13933CC Offset: 0x13933CC VA: 0x13933CC Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x13933D4 Offset: 0x13933D4 VA: 0x13933D4 Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x13933DC Offset: 0x13933DC VA: 0x13933DC Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x13934F8 Offset: 0x13934F8 VA: 0x13934F8 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x13939BC Offset: 0x13939BC VA: 0x13939BC
	public void .ctor() { }
}

// Namespace: I2.Loc