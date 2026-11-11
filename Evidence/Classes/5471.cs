public class LocalizeTarget_UnityStandard_MeshRenderer : LocalizeTarget<MeshRenderer> // TypeDefIndex: 5471
{
	// Methods

	// RVA: 0x1394100 Offset: 0x1394100 VA: 0x1394100
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1394104 Offset: 0x1394104 VA: 0x1394104
	private static void AutoRegister() { }

	// RVA: 0x13941CC Offset: 0x13941CC VA: 0x13941CC Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x13941D4 Offset: 0x13941D4 VA: 0x13941D4 Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x13941DC Offset: 0x13941DC VA: 0x13941DC Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x13941E4 Offset: 0x13941E4 VA: 0x13941E4 Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x13941EC Offset: 0x13941EC VA: 0x13941EC Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x13941F4 Offset: 0x13941F4 VA: 0x13941F4 Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x13943EC Offset: 0x13943EC VA: 0x13943EC Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x13945B8 Offset: 0x13945B8 VA: 0x13945B8
	public void .ctor() { }
}

// Namespace: I2.Loc