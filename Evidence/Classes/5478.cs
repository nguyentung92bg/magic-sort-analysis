public class LocalizeTarget_UnityUI_RawImage : LocalizeTarget<RawImage> // TypeDefIndex: 5478
{
	// Methods

	// RVA: 0x1395B08 Offset: 0x1395B08 VA: 0x1395B08
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1395B0C Offset: 0x1395B0C VA: 0x1395B0C
	private static void AutoRegister() { }

	// RVA: 0x1395BD4 Offset: 0x1395BD4 VA: 0x1395BD4 Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x1395BDC Offset: 0x1395BDC VA: 0x1395BDC Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x1395BE4 Offset: 0x1395BE4 VA: 0x1395BE4 Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x1395BEC Offset: 0x1395BEC VA: 0x1395BEC Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x1395BF4 Offset: 0x1395BF4 VA: 0x1395BF4 Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x1395BFC Offset: 0x1395BFC VA: 0x1395BFC Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x1395CEC Offset: 0x1395CEC VA: 0x1395CEC Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x1395DDC Offset: 0x1395DDC VA: 0x1395DDC
	public void .ctor() { }
}

// Namespace: I2.Loc