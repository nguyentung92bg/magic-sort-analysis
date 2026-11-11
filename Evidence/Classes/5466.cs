public class LocalizeTarget_TextMeshPro_Label : LocalizeTarget<TextMeshPro> // TypeDefIndex: 5466
{
	// Fields
	private TextAlignmentOptions mAlignment_RTL; // 0x20
	private TextAlignmentOptions mAlignment_LTR; // 0x24
	private bool mAlignmentWasRTL; // 0x28
	private bool mInitializeAlignment; // 0x29

	// Methods

	// RVA: 0x13924F4 Offset: 0x13924F4 VA: 0x13924F4
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x13924F8 Offset: 0x13924F8 VA: 0x13924F8
	private static void AutoRegister() { }

	// RVA: 0x13925C0 Offset: 0x13925C0 VA: 0x13925C0 Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x13925C8 Offset: 0x13925C8 VA: 0x13925C8 Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x13925D0 Offset: 0x13925D0 VA: 0x13925D0 Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x13925D8 Offset: 0x13925D8 VA: 0x13925D8 Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x13925E0 Offset: 0x13925E0 VA: 0x13925E0 Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x13925E8 Offset: 0x13925E8 VA: 0x13925E8 Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x1392704 Offset: 0x1392704 VA: 0x1392704 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x1392C90 Offset: 0x1392C90 VA: 0x1392C90
	internal static TMP_FontAsset GetTMPFontFromMaterial(Localize cmp, string matName) { }

	// RVA: 0x1392EF8 Offset: 0x1392EF8 VA: 0x1392EF8
	internal static void InitAlignment_TMPro(bool isRTL, TextAlignmentOptions alignment, out TextAlignmentOptions alignLTR, out TextAlignmentOptions alignRTL) { }

	// RVA: 0x1392BB0 Offset: 0x1392BB0 VA: 0x1392BB0
	internal static void SetFont(TMP_Text label, TMP_FontAsset newFont) { }

	// RVA: 0x1392DF8 Offset: 0x1392DF8 VA: 0x1392DF8
	internal static void SetMaterial(TMP_Text label, Material newMat) { }

	// RVA: 0x139328C Offset: 0x139328C VA: 0x139328C
	public void .ctor() { }
}

// Namespace: I2.Loc