public class TeamsBadgeConfig : ScriptableObject // TypeDefIndex: 2214
{
	// Fields
	[SerializeField]
	private TeamsBadgeConfig.BadgeConfig[] _configs; // 0x18
	[SerializeField]
	private Sprite[] _sprite; // 0x20

	// Methods

	// RVA: 0x2EFA8D0 Offset: 0x2EFA8D0 VA: 0x2EFA8D0
	public bool TryGetBadgeSprite(int id, out Sprite sprite) { }

	// RVA: 0x2F007D4 Offset: 0x2F007D4 VA: 0x2F007D4
	public int GetBadgeCount() { }

	[Button]
	// RVA: 0x2F007F0 Offset: 0x2F007F0 VA: 0x2F007F0
	private void UpdateConfig() { }

	// RVA: 0x2F00950 Offset: 0x2F00950 VA: 0x2F00950
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI