public class LocalizeTarget_UnityUI_Image : LocalizeTarget<Image> // TypeDefIndex: 5477
{
	// Methods

	// RVA: 0x13956C8 Offset: 0x13956C8 VA: 0x13956C8
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x13956CC Offset: 0x13956CC VA: 0x13956CC
	private static void AutoRegister() { }

	// RVA: 0x1395794 Offset: 0x1395794 VA: 0x1395794 Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x139579C Offset: 0x139579C VA: 0x139579C Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x13957A4 Offset: 0x13957A4 VA: 0x13957A4 Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x13957AC Offset: 0x13957AC VA: 0x13957AC Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x139582C Offset: 0x139582C VA: 0x139582C Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x1395834 Offset: 0x1395834 VA: 0x1395834 Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x13959D0 Offset: 0x13959D0 VA: 0x13959D0 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x1395AC0 Offset: 0x1395AC0 VA: 0x1395AC0
	public void .ctor() { }
}

// Namespace: I2.Loc