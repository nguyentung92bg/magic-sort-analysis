public class LocalizeTarget_UnityStandard_SpriteRenderer : LocalizeTarget<SpriteRenderer> // TypeDefIndex: 5474
{
	// Methods

	// RVA: 0x1394B80 Offset: 0x1394B80 VA: 0x1394B80
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1394B84 Offset: 0x1394B84 VA: 0x1394B84
	private static void AutoRegister() { }

	// RVA: 0x1394C4C Offset: 0x1394C4C VA: 0x1394C4C Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x1394C54 Offset: 0x1394C54 VA: 0x1394C54 Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x1394C5C Offset: 0x1394C5C VA: 0x1394C5C Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x1394C64 Offset: 0x1394C64 VA: 0x1394C64 Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x1394C6C Offset: 0x1394C6C VA: 0x1394C6C Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x1394C74 Offset: 0x1394C74 VA: 0x1394C74 Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x1394D54 Offset: 0x1394D54 VA: 0x1394D54 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x1394E50 Offset: 0x1394E50 VA: 0x1394E50
	public void .ctor() { }
}

// Namespace: I2.Loc