public class LocalizeTarget_UnityStandard_Child : LocalizeTarget<GameObject> // TypeDefIndex: 5470
{
	// Methods

	// RVA: 0x1393E1C Offset: 0x1393E1C VA: 0x1393E1C
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1393E20 Offset: 0x1393E20 VA: 0x1393E20
	private static void AutoRegister() { }

	// RVA: 0x1393ED0 Offset: 0x1393ED0 VA: 0x1393ED0 Slot: 4
	public override bool IsValid(Localize cmp) { }

	// RVA: 0x1393F04 Offset: 0x1393F04 VA: 0x1393F04 Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x1393F0C Offset: 0x1393F0C VA: 0x1393F0C Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x1393F14 Offset: 0x1393F14 VA: 0x1393F14 Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x1393F1C Offset: 0x1393F1C VA: 0x1393F1C Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x1393F24 Offset: 0x1393F24 VA: 0x1393F24 Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x1393F2C Offset: 0x1393F2C VA: 0x1393F2C Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x1393F78 Offset: 0x1393F78 VA: 0x1393F78 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x13940B8 Offset: 0x13940B8 VA: 0x13940B8
	public void .ctor() { }
}

// Namespace: I2.Loc