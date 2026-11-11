public abstract class ILocalizeTarget : ScriptableObject // TypeDefIndex: 5461
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool IsValid(Localize cmp);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool CanUseSecondaryTerm();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract bool AllowMainTermToBeRTL();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract bool AllowSecondTermToBeRTL();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract eTermType GetPrimaryTermType(Localize cmp);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract eTermType GetSecondaryTermType(Localize cmp);

	// RVA: 0x13924E4 Offset: 0x13924E4 VA: 0x13924E4
	protected void .ctor() { }
}

// Namespace: I2.Loc