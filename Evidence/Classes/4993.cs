public class SoundService : MonoBehaviour, IService, IInitializable, IDisposable // TypeDefIndex: 4993
{
	// Fields
	[SerializeField]
	private SoundConfig _soundConfig; // 0x18
	[SerializeField]
	private List<AudioSource> _sfxAudioSources; // 0x20
	[SerializeField]
	private List<AudioSource> _loopingAudioSources; // 0x28
	[SerializeField]
	private AudioMixer _audioMixer; // 0x30
	[SerializeField]
	private AudioSource _oneShotAudioSource; // 0x38
	[SerializeField]
	private AudioSource _musicSource; // 0x40
	private ISaveLoad<SoundModel> _soundSaveLoad; // 0x48
	private SoundModel _soundModel; // 0x50
	private readonly Dictionary<int, List<SoundType>> pourAmountToSoundTypes; // 0x58
	private readonly List<SoundType> _iceSounds; // 0x60

	// Methods

	// RVA: 0x3E2AE94 Offset: 0x3E2AE94 VA: 0x3E2AE94 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E2B588 Offset: 0x3E2B588 VA: 0x3E2B588
	private void OnSoundEffectPreferenceChanged(bool isOn) { }

	// RVA: 0x3E2B690 Offset: 0x3E2B690 VA: 0x3E2B690
	private void OnMusicPreferenceChanged(bool isOn) { }

	// RVA: 0x3E2B9EC Offset: 0x3E2B9EC VA: 0x3E2B9EC
	public bool GetSoundEffectPreference() { }

	// RVA: 0x3E2BA08 Offset: 0x3E2BA08 VA: 0x3E2BA08
	public bool GetMusicPreference() { }

	// RVA: 0x3E2BA24 Offset: 0x3E2BA24 VA: 0x3E2BA24
	private SoundType GetRandomSoundForPouring(int pourAmount) { }

	// RVA: 0x3E2BAEC Offset: 0x3E2BAEC VA: 0x3E2BAEC
	private SoundType GetRandomSoundForIce() { }

	// RVA: 0x3E2BB68 Offset: 0x3E2BB68 VA: 0x3E2BB68
	private void PlayLoopingSoundEffect(SoundType soundType) { }

	// RVA: 0x3E2BEF4 Offset: 0x3E2BEF4 VA: 0x3E2BEF4
	private void StopLoopingSoundEffect(SoundType soundType) { }

	// RVA: 0x3E2C158 Offset: 0x3E2C158 VA: 0x3E2C158
	private void PlayRandomSoundEffect(int pourAmount) { }

	// RVA: 0x3E2C470 Offset: 0x3E2C470 VA: 0x3E2C470
	private void PlayRandomIceSoundEffect() { }

	// RVA: 0x3E2C218 Offset: 0x3E2C218 VA: 0x3E2C218
	private void PlaySoundEffect(SoundType soundType) { }

	// RVA: 0x3E2B80C Offset: 0x3E2B80C VA: 0x3E2B80C
	private void PlayMusic(MusicType musicType) { }

	// RVA: 0x3E2C650 Offset: 0x3E2C650 VA: 0x3E2C650
	private void StopMusic() { }

	// RVA: 0x3E2C51C Offset: 0x3E2C51C VA: 0x3E2C51C
	private MusicData GetMusicData(MusicType musicType) { }

	// RVA: 0x3E2BDC0 Offset: 0x3E2BDC0 VA: 0x3E2BDC0
	private SoundData GetSoundData(SoundType soundType) { }

	// RVA: 0x3E2C6E4 Offset: 0x3E2C6E4 VA: 0x3E2C6E4
	public void StopAllSounds() { }

	// RVA: 0x3E2C6E8 Offset: 0x3E2C6E8 VA: 0x3E2C6E8
	public void PlayOneShotSFX(SoundType soundType) { }

	// RVA: 0x3E2C730 Offset: 0x3E2C730 VA: 0x3E2C730 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E2CCF0 Offset: 0x3E2CCF0 VA: 0x3E2CCF0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Sound.Scripts
[Serializable]