public class StrikeShowLightAnimationController : MonoBehaviour // TypeDefIndex: 2507
{
	// Fields
	[SerializeField]
	private SpriteRenderer[] _lightsA; // 0x18
	[SerializeField]
	private SpriteRenderer[] _lightsB; // 0x20
	[SerializeField]
	private float _fadeDuration; // 0x28
	[SerializeField]
	private float _interval; // 0x2C
	private Sequence _sequence; // 0x30

	// Methods

	[Button]
	// RVA: 0x2AFA7B0 Offset: 0x2AFA7B0 VA: 0x2AFA7B0
	public void PlayAnimation() { }

	// RVA: 0x2AFE3D8 Offset: 0x2AFE3D8 VA: 0x2AFE3D8
	private void StopAnimation() { }

	// RVA: 0x2AFAEB8 Offset: 0x2AFAEB8 VA: 0x2AFAEB8
	public void Dispose() { }

	// RVA: 0x2AFE410 Offset: 0x2AFE410 VA: 0x2AFE410
	private void InsertLightFades(Sequence sequence, float time, bool stateA) { }

	// RVA: 0x2AFE55C Offset: 0x2AFE55C VA: 0x2AFE55C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI
[CreateAssetMenu(fileName = "StrikeShowPromotionAnimationConfig", menuName = "Configs/StrikeShowPromotionAnimationConfig")]