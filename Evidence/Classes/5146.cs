public class CurrencyShineView : MonoBehaviour // TypeDefIndex: 5146
{
	// Fields
	[SerializeField]
	private SpriteRenderer[] _shineRenderers; // 0x18
	[SerializeField]
	private CurrencyShineAnimationConfig _currencyShineAnimationConfig; // 0x20
	[SerializeField]
	private float _idleShinePosition; // 0x28
	private static readonly int ShinePositionId; // 0x0
	private MaterialPropertyBlock _propertyBlock; // 0x30
	private Tween _tween; // 0x38

	// Methods

	// RVA: 0x1381788 Offset: 0x1381788 VA: 0x1381788
	public Tween Play(float from, float to) { }

	// RVA: 0x1381984 Offset: 0x1381984 VA: 0x1381984
	public void StopShine() { }

	// RVA: 0x1381A04 Offset: 0x1381A04 VA: 0x1381A04
	private void OnDisable() { }

	// RVA: 0x1381A08 Offset: 0x1381A08 VA: 0x1381A08
	private void SetShinePosition(float value) { }

	// RVA: 0x13819E8 Offset: 0x13819E8 VA: 0x13819E8
	private void ResetShinePosition() { }

	// RVA: 0x1381B30 Offset: 0x1381B30 VA: 0x1381B30
	public void .ctor() { }

	// RVA: 0x1381B38 Offset: 0x1381B38 VA: 0x1381B38
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI
[CreateAssetMenu(fileName = "CurrencySo", menuName = "Currency/CurrencySo")]