public class FireworkInGameManager : IService, IInitializable, IDisposable // TypeDefIndex: 1705
{
	// Fields
	private List<Cell> _targetedCells; // 0x10

	// Methods

	// RVA: 0x2752AF4 Offset: 0x2752AF4 VA: 0x2752AF4 Slot: 4
	public void Initialize() { }

	// RVA: 0x2752B70 Offset: 0x2752B70 VA: 0x2752B70 Slot: 5
	public void Dispose() { }

	// RVA: 0x2752BE0 Offset: 0x2752BE0 VA: 0x2752BE0
	public bool TryAddTargetedCell(Cell cell) { }

	// RVA: 0x2752D04 Offset: 0x2752D04 VA: 0x2752D04
	public void ReleaseTargetedCell(Cell cell) { }

	// RVA: 0x2752CAC Offset: 0x2752CAC VA: 0x2752CAC
	public bool IsTargetedCell(Cell cell) { }

	// RVA: 0x2752D78 Offset: 0x2752D78 VA: 0x2752D78
	public void .ctor() { }
}

// Namespace: 