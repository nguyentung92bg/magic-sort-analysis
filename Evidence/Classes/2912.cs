public class CauldronLevelText : MonoBehaviour // TypeDefIndex: 2912
{
	// Fields
	[SerializeField]
	private GameObject _levelGameObject; // 0x18
	[SerializeField]
	private GameObject _hardLevelGameObject; // 0x20
	[SerializeField]
	private GameObject _superHardLevelGameObject; // 0x28
	[SerializeField]
	private TextMeshPro _levelTextFront; // 0x30
	[SerializeField]
	private TextMeshPro _levelTextBack; // 0x38
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x40

	// Methods

	[Button]
	// RVA: 0x2983C9C Offset: 0x2983C9C VA: 0x2983C9C
	public void PlayLevelText(string level, LevelDifficultyType levelDifficultyType) { }

	[Button]
	// RVA: 0x2983D5C Offset: 0x2983D5C VA: 0x2983D5C
	public void SetLevelText(string level, LevelDifficultyType levelDifficultyType) { }

	// RVA: 0x2983E28 Offset: 0x2983E28 VA: 0x2983E28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts.Cauldron