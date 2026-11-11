public class ProfileImageView : MonoBehaviour // TypeDefIndex: 2895
{
	// Fields
	[SerializeField]
	private SpriteRenderer SpriteRenderer; // 0x18
	[SerializeField]
	private string _userId; // 0x20
	[SerializeField]
	private string _pictureId; // 0x28
	[SerializeField]
	private bool _isMe; // 0x30

	// Methods

	// RVA: 0x297FB3C Offset: 0x297FB3C VA: 0x297FB3C
	private void OnEnable() { }

	// RVA: 0x297FD14 Offset: 0x297FD14 VA: 0x297FD14
	private void OnDisable() { }

	// RVA: 0x297FDF8 Offset: 0x297FDF8 VA: 0x297FDF8
	private void OnProfileImageChanged(string userId, string pictureId) { }

	// RVA: 0x297FC40 Offset: 0x297FC40 VA: 0x297FC40
	public void ShowOthersProfileImage(string userId, string pictureId) { }

	// RVA: 0x297FE5C Offset: 0x297FE5C VA: 0x297FE5C
	public void ShowOwnProfileImage() { }

	// RVA: 0x297FF38 Offset: 0x297FF38 VA: 0x297FF38
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts