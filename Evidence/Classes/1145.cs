public class GamePlayInputHistory // TypeDefIndex: 1145
{
	// Fields
	private int _falseClickCount; // 0x10
	private List<int> _bottleClickHistory; // 0x18

	// Methods

	// RVA: 0x1611430 Offset: 0x1611430 VA: 0x1611430
	public void .ctor() { }

	// RVA: 0x16114BC Offset: 0x16114BC VA: 0x16114BC
	public void AddBottleClick(int bottleId) { }

	// RVA: 0x1611564 Offset: 0x1611564 VA: 0x1611564
	public string GetBottleClickHistoryShorten() { }

	// RVA: 0x1611758 Offset: 0x1611758 VA: 0x1611758
	public void AddFalseClick() { }

	// RVA: 0x1611768 Offset: 0x1611768 VA: 0x1611768
	public int GetFalseClickCount() { }

	// RVA: 0x1611770 Offset: 0x1611770 VA: 0x1611770
	public void ClearHistory() { }
}

// Namespace: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS