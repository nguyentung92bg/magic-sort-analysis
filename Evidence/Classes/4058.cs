public class MagicBottlePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4058
{
	// Fields
	private MagicBottleService _magicBottleService; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	[SerializeField]
	private MagicBottleProgressView _progressView; // 0x28

	// Methods

	// RVA: 0x37607E0 Offset: 0x37607E0 VA: 0x37607E0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3760914 Offset: 0x3760914 VA: 0x3760914 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3760D2C Offset: 0x3760D2C VA: 0x3760D2C
	private void MarkEventIntroduced() { }

	[AsyncStateMachine(typeof(MagicBottlePopUp.<PlayFirstShowEverAnimations>d__6))]
	// RVA: 0x3760AAC Offset: 0x3760AAC VA: 0x3760AAC
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(MagicBottlePopUp.<OpenAutomaticallyInfoPopUp>d__7))]
	// RVA: 0x3760D44 Offset: 0x3760D44 VA: 0x3760D44
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x3760E14 Offset: 0x3760E14 VA: 0x3760E14 Slot: 6
	public Task Hide() { }

	// RVA: 0x3760F6C Offset: 0x3760F6C VA: 0x3760F6C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3760F74 Offset: 0x3760F74 VA: 0x3760F74
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicBottle.Scripts.UI