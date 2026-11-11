public class LocalizationParamsManager : MonoBehaviour, ILocalizationParamsManager // TypeDefIndex: 5494
{
	// Fields
	[SerializeField]
	public List<LocalizationParamsManager.ParamValue> _Params; // 0x18
	public bool _IsGlobalManager; // 0x20

	// Methods

	// RVA: 0x139864C Offset: 0x139864C VA: 0x139864C Slot: 4
	public string GetParameterValue(string ParamName) { }

	// RVA: 0x1398710 Offset: 0x1398710 VA: 0x1398710
	public void SetParameterValue(string ParamName, string ParamValue, bool localize = True) { }

	// RVA: 0x13988F0 Offset: 0x13988F0 VA: 0x13988F0
	public void OnLocalize() { }

	// RVA: 0x13989A8 Offset: 0x13989A8 VA: 0x13989A8 Slot: 5
	public virtual void OnEnable() { }

	// RVA: 0x13989B8 Offset: 0x13989B8 VA: 0x13989B8
	public void DoAutoRegister() { }

	// RVA: 0x1398AE8 Offset: 0x1398AE8 VA: 0x1398AE8
	public void OnDisable() { }

	// RVA: 0x1398B68 Offset: 0x1398B68 VA: 0x1398B68
	public void .ctor() { }
}

// Namespace: I2.Loc
[Serializable]