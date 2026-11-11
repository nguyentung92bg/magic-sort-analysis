public class DuckHouseColorConfig : ScriptableObject // TypeDefIndex: 1723
{
	// Fields
	[SerializeField]
	private DuckHouseCoverData[] _covers; // 0x18
	[SerializeField]
	private DuckHouseColorData[] _colors; // 0x20
	[SerializeField]
	private DuckHouseParticleTextureData[] _particleTextures; // 0x28

	// Methods

	// RVA: 0x2756A10 Offset: 0x2756A10 VA: 0x2756A10
	public bool TryGetDuckCoverConfig(DuckType duckType, out DuckHouseCoverData coverData) { }

	// RVA: 0x2756B10 Offset: 0x2756B10 VA: 0x2756B10
	public bool TryGetDuckColor(DuckType duckType, out DuckHouseColorData colorData) { }

	// RVA: 0x2756904 Offset: 0x2756904 VA: 0x2756904
	public bool TryGetDuckParticleTextures(DuckType duckType, out DuckHouseParticleTextureData textureData) { }

	// RVA: 0x2756BE8 Offset: 0x2756BE8 VA: 0x2756BE8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck