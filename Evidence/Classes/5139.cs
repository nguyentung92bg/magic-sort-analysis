public class BulkRewardAnimationConfig : ScriptableObject // TypeDefIndex: 5139
{
	// Fields
	[SerializeField]
	[Header("BottomTextScaleIn")]
	[CompilerGenerated]
	private float <BottomTextScaleInTime>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private float <BottomTextScaleInDuration>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BottomTextScaleInCurve>k__BackingField; // 0x20
	[CompilerGenerated]
	[Header("TopTextScaleOut")]
	[SerializeField]
	private float <TopTextScaleOutTime>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private float <TopTextScaleOutDuration>k__BackingField; // 0x2C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <TopTextScaleOutCurve>k__BackingField; // 0x30
	[SerializeField]
	[CompilerGenerated]
	[Header("BottomTextScaleOut")]
	private float <BotTextScaleOutTime>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private float <BottomTextScaleOutDuration>k__BackingField; // 0x3C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BottomTextScaleOutCurve>k__BackingField; // 0x40
	[SerializeField]
	[Header("BackgroundFadeIn")]
	[CompilerGenerated]
	private float <BackgroundFadeInTime>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private float <BackgroundFadeInValue>k__BackingField; // 0x4C
	[CompilerGenerated]
	[SerializeField]
	private float <BackgroundFadeInDuration>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <BackgroundFadeInCurve>k__BackingField; // 0x58
	[SerializeField]
	[CompilerGenerated]
	[Header("BackgroundFadeOut")]
	private float <BackgroundFadeOutTime>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private float <BackgroundFadeOutDuration>k__BackingField; // 0x64
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <BackgroundFadeOutCurve>k__BackingField; // 0x68
	[CompilerGenerated]
	[Header("RevealRewards")]
	[SerializeField]
	private float <RevealRewardsTime>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private float <RevealDelayConsecutive>k__BackingField; // 0x74
	[CompilerGenerated]
	[SerializeField]
	private float <ParticleSpawnDelay>k__BackingField; // 0x78
	[SerializeField]
	[CompilerGenerated]
	[Header("GatherRewards")]
	private float <GatherDelayConsecutive>k__BackingField; // 0x7C
	[CompilerGenerated]
	[SerializeField]
	private float <GatherRewardsTime>k__BackingField; // 0x80
	[CompilerGenerated]
	[SerializeField]
	private float <CoinSpawnDelayConsecutive>k__BackingField; // 0x84
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <CoinSpawnRandomRange>k__BackingField; // 0x88
	[SerializeField]
	[CompilerGenerated]
	private int <MinCoinSpawnCount>k__BackingField; // 0x90
	[SerializeField]
	[CompilerGenerated]
	private int <MaxCoinSpawnCount>k__BackingField; // 0x94
	[CompilerGenerated]
	[SerializeField]
	private int <RequiredAmountForEachCoin>k__BackingField; // 0x98
	[SerializeField]
	[CompilerGenerated]
	[Header("CongratsText")]
	private float <CongratsTextTime>k__BackingField; // 0x9C
	[CompilerGenerated]
	[SerializeField]
	private float <CongratsTextDelayConsecutive>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CongratsTextScaleCurve>k__BackingField; // 0xA8
	[CompilerGenerated]
	[SerializeField]
	private float <CongratsTextScaleDuration>k__BackingField; // 0xB0
	[CompilerGenerated]
	[Header("CoinAmountText")]
	[SerializeField]
	private float <CoinAmountTextFadeDuration>k__BackingField; // 0xB4
	[CompilerGenerated]
	[SerializeField]
	private float <CoinAmountTextFadeInTime>k__BackingField; // 0xB8
	[SerializeField]
	[CompilerGenerated]
	private float <CoinAmountTextFadeOutTime>k__BackingField; // 0xBC
	[SerializeField]
	[CompilerGenerated]
	private float <CoinAmountTextMoveDuration>k__BackingField; // 0xC0
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <CoinAmountTextOffset>k__BackingField; // 0xC4
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CoinAmountTextCurve>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private float <CoinAmountTextScaleDuration>k__BackingField; // 0xD8
	[SerializeField]
	[Header("CoinAmounts")]
	[CompilerGenerated]
	[Header("Input")]
	private Vector2Int <MinMaxCoinRewardAmount>k__BackingField; // 0xDC
	[CompilerGenerated]
	[SerializeField]
	private Vector2Int <MinMaxCoinViewAmount>k__BackingField; // 0xE4

	// Properties
	public float BottomTextScaleInTime { get; set; }
	public float BottomTextScaleInDuration { get; set; }
	public AnimationCurve BottomTextScaleInCurve { get; set; }
	public float TopTextScaleOutTime { get; set; }
	public float TopTextScaleOutDuration { get; set; }
	public AnimationCurve TopTextScaleOutCurve { get; set; }
	public float BotTextScaleOutTime { get; set; }
	public float BottomTextScaleOutDuration { get; set; }
	public AnimationCurve BottomTextScaleOutCurve { get; set; }
	public float BackgroundFadeInTime { get; set; }
	public float BackgroundFadeInValue { get; set; }
	public float BackgroundFadeInDuration { get; set; }
	public AnimationCurve BackgroundFadeInCurve { get; set; }
	public float BackgroundFadeOutTime { get; set; }
	public float BackgroundFadeOutDuration { get; set; }
	public AnimationCurve BackgroundFadeOutCurve { get; set; }
	public float RevealRewardsTime { get; set; }
	public float RevealDelayConsecutive { get; set; }
	public float ParticleSpawnDelay { get; set; }
	public float GatherDelayConsecutive { get; set; }
	public float GatherRewardsTime { get; set; }
	public float CoinSpawnDelayConsecutive { get; set; }
	public Vector2 CoinSpawnRandomRange { get; set; }
	public int MinCoinSpawnCount { get; set; }
	public int MaxCoinSpawnCount { get; set; }
	public int RequiredAmountForEachCoin { get; set; }
	public float CongratsTextTime { get; set; }
	public float CongratsTextDelayConsecutive { get; set; }
	public AnimationCurve CongratsTextScaleCurve { get; set; }
	public float CongratsTextScaleDuration { get; set; }
	public float CoinAmountTextFadeDuration { get; set; }
	public float CoinAmountTextFadeInTime { get; set; }
	public float CoinAmountTextFadeOutTime { get; set; }
	public float CoinAmountTextMoveDuration { get; set; }
	public Vector3 CoinAmountTextOffset { get; set; }
	public AnimationCurve CoinAmountTextCurve { get; set; }
	public float CoinAmountTextScaleDuration { get; set; }
	public Vector2Int MinMaxCoinRewardAmount { get; set; }
	public Vector2Int MinMaxCoinViewAmount { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x138044C Offset: 0x138044C VA: 0x138044C
	public float get_BottomTextScaleInTime() { }

	[CompilerGenerated]
	// RVA: 0x1380454 Offset: 0x1380454 VA: 0x1380454
	private void set_BottomTextScaleInTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x138045C Offset: 0x138045C VA: 0x138045C
	public float get_BottomTextScaleInDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380464 Offset: 0x1380464 VA: 0x1380464
	private void set_BottomTextScaleInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138046C Offset: 0x138046C VA: 0x138046C
	public AnimationCurve get_BottomTextScaleInCurve() { }

	[CompilerGenerated]
	// RVA: 0x1380474 Offset: 0x1380474 VA: 0x1380474
	private void set_BottomTextScaleInCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x138047C Offset: 0x138047C VA: 0x138047C
	public float get_TopTextScaleOutTime() { }

	[CompilerGenerated]
	// RVA: 0x1380484 Offset: 0x1380484 VA: 0x1380484
	private void set_TopTextScaleOutTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x138048C Offset: 0x138048C VA: 0x138048C
	public float get_TopTextScaleOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380494 Offset: 0x1380494 VA: 0x1380494
	private void set_TopTextScaleOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138049C Offset: 0x138049C VA: 0x138049C
	public AnimationCurve get_TopTextScaleOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x13804A4 Offset: 0x13804A4 VA: 0x13804A4
	private void set_TopTextScaleOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x13804AC Offset: 0x13804AC VA: 0x13804AC
	public float get_BotTextScaleOutTime() { }

	[CompilerGenerated]
	// RVA: 0x13804B4 Offset: 0x13804B4 VA: 0x13804B4
	private void set_BotTextScaleOutTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x13804BC Offset: 0x13804BC VA: 0x13804BC
	public float get_BottomTextScaleOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x13804C4 Offset: 0x13804C4 VA: 0x13804C4
	private void set_BottomTextScaleOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x13804CC Offset: 0x13804CC VA: 0x13804CC
	public AnimationCurve get_BottomTextScaleOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x13804D4 Offset: 0x13804D4 VA: 0x13804D4
	private void set_BottomTextScaleOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x13804DC Offset: 0x13804DC VA: 0x13804DC
	public float get_BackgroundFadeInTime() { }

	[CompilerGenerated]
	// RVA: 0x13804E4 Offset: 0x13804E4 VA: 0x13804E4
	private void set_BackgroundFadeInTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x13804EC Offset: 0x13804EC VA: 0x13804EC
	public float get_BackgroundFadeInValue() { }

	[CompilerGenerated]
	// RVA: 0x13804F4 Offset: 0x13804F4 VA: 0x13804F4
	private void set_BackgroundFadeInValue(float value) { }

	[CompilerGenerated]
	// RVA: 0x13804FC Offset: 0x13804FC VA: 0x13804FC
	public float get_BackgroundFadeInDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380504 Offset: 0x1380504 VA: 0x1380504
	private void set_BackgroundFadeInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138050C Offset: 0x138050C VA: 0x138050C
	public AnimationCurve get_BackgroundFadeInCurve() { }

	[CompilerGenerated]
	// RVA: 0x1380514 Offset: 0x1380514 VA: 0x1380514
	private void set_BackgroundFadeInCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x138051C Offset: 0x138051C VA: 0x138051C
	public float get_BackgroundFadeOutTime() { }

	[CompilerGenerated]
	// RVA: 0x1380524 Offset: 0x1380524 VA: 0x1380524
	private void set_BackgroundFadeOutTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x138052C Offset: 0x138052C VA: 0x138052C
	public float get_BackgroundFadeOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380534 Offset: 0x1380534 VA: 0x1380534
	private void set_BackgroundFadeOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138053C Offset: 0x138053C VA: 0x138053C
	public AnimationCurve get_BackgroundFadeOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x1380544 Offset: 0x1380544 VA: 0x1380544
	private void set_BackgroundFadeOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x138054C Offset: 0x138054C VA: 0x138054C
	public float get_RevealRewardsTime() { }

	[CompilerGenerated]
	// RVA: 0x1380554 Offset: 0x1380554 VA: 0x1380554
	private void set_RevealRewardsTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x138055C Offset: 0x138055C VA: 0x138055C
	public float get_RevealDelayConsecutive() { }

	[CompilerGenerated]
	// RVA: 0x1380564 Offset: 0x1380564 VA: 0x1380564
	private void set_RevealDelayConsecutive(float value) { }

	[CompilerGenerated]
	// RVA: 0x138056C Offset: 0x138056C VA: 0x138056C
	public float get_ParticleSpawnDelay() { }

	[CompilerGenerated]
	// RVA: 0x1380574 Offset: 0x1380574 VA: 0x1380574
	private void set_ParticleSpawnDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x138057C Offset: 0x138057C VA: 0x138057C
	public float get_GatherDelayConsecutive() { }

	[CompilerGenerated]
	// RVA: 0x1380584 Offset: 0x1380584 VA: 0x1380584
	private void set_GatherDelayConsecutive(float value) { }

	[CompilerGenerated]
	// RVA: 0x138058C Offset: 0x138058C VA: 0x138058C
	public float get_GatherRewardsTime() { }

	[CompilerGenerated]
	// RVA: 0x1380594 Offset: 0x1380594 VA: 0x1380594
	private void set_GatherRewardsTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x138059C Offset: 0x138059C VA: 0x138059C
	public float get_CoinSpawnDelayConsecutive() { }

	[CompilerGenerated]
	// RVA: 0x13805A4 Offset: 0x13805A4 VA: 0x13805A4
	private void set_CoinSpawnDelayConsecutive(float value) { }

	[CompilerGenerated]
	// RVA: 0x13805AC Offset: 0x13805AC VA: 0x13805AC
	public Vector2 get_CoinSpawnRandomRange() { }

	[CompilerGenerated]
	// RVA: 0x13805B4 Offset: 0x13805B4 VA: 0x13805B4
	private void set_CoinSpawnRandomRange(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x13805BC Offset: 0x13805BC VA: 0x13805BC
	public int get_MinCoinSpawnCount() { }

	[CompilerGenerated]
	// RVA: 0x13805C4 Offset: 0x13805C4 VA: 0x13805C4
	private void set_MinCoinSpawnCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x13805CC Offset: 0x13805CC VA: 0x13805CC
	public int get_MaxCoinSpawnCount() { }

	[CompilerGenerated]
	// RVA: 0x13805D4 Offset: 0x13805D4 VA: 0x13805D4
	private void set_MaxCoinSpawnCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x13805DC Offset: 0x13805DC VA: 0x13805DC
	public int get_RequiredAmountForEachCoin() { }

	[CompilerGenerated]
	// RVA: 0x13805E4 Offset: 0x13805E4 VA: 0x13805E4
	private void set_RequiredAmountForEachCoin(int value) { }

	[CompilerGenerated]
	// RVA: 0x13805EC Offset: 0x13805EC VA: 0x13805EC
	public float get_CongratsTextTime() { }

	[CompilerGenerated]
	// RVA: 0x13805F4 Offset: 0x13805F4 VA: 0x13805F4
	private void set_CongratsTextTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x13805FC Offset: 0x13805FC VA: 0x13805FC
	public float get_CongratsTextDelayConsecutive() { }

	[CompilerGenerated]
	// RVA: 0x1380604 Offset: 0x1380604 VA: 0x1380604
	private void set_CongratsTextDelayConsecutive(float value) { }

	[CompilerGenerated]
	// RVA: 0x138060C Offset: 0x138060C VA: 0x138060C
	public AnimationCurve get_CongratsTextScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x1380614 Offset: 0x1380614 VA: 0x1380614
	private void set_CongratsTextScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x138061C Offset: 0x138061C VA: 0x138061C
	public float get_CongratsTextScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380624 Offset: 0x1380624 VA: 0x1380624
	private void set_CongratsTextScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138062C Offset: 0x138062C VA: 0x138062C
	public float get_CoinAmountTextFadeDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380634 Offset: 0x1380634 VA: 0x1380634
	private void set_CoinAmountTextFadeDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138063C Offset: 0x138063C VA: 0x138063C
	public float get_CoinAmountTextFadeInTime() { }

	[CompilerGenerated]
	// RVA: 0x1380644 Offset: 0x1380644 VA: 0x1380644
	private void set_CoinAmountTextFadeInTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x138064C Offset: 0x138064C VA: 0x138064C
	public float get_CoinAmountTextFadeOutTime() { }

	[CompilerGenerated]
	// RVA: 0x1380654 Offset: 0x1380654 VA: 0x1380654
	private void set_CoinAmountTextFadeOutTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x138065C Offset: 0x138065C VA: 0x138065C
	public float get_CoinAmountTextMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x1380664 Offset: 0x1380664 VA: 0x1380664
	private void set_CoinAmountTextMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x138066C Offset: 0x138066C VA: 0x138066C
	public Vector3 get_CoinAmountTextOffset() { }

	[CompilerGenerated]
	// RVA: 0x1380678 Offset: 0x1380678 VA: 0x1380678
	private void set_CoinAmountTextOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x1380684 Offset: 0x1380684 VA: 0x1380684
	public AnimationCurve get_CoinAmountTextCurve() { }

	[CompilerGenerated]
	// RVA: 0x138068C Offset: 0x138068C VA: 0x138068C
	private void set_CoinAmountTextCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x1380694 Offset: 0x1380694 VA: 0x1380694
	public float get_CoinAmountTextScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x138069C Offset: 0x138069C VA: 0x138069C
	private void set_CoinAmountTextScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x13806A4 Offset: 0x13806A4 VA: 0x13806A4
	public Vector2Int get_MinMaxCoinRewardAmount() { }

	[CompilerGenerated]
	// RVA: 0x13806AC Offset: 0x13806AC VA: 0x13806AC
	private void set_MinMaxCoinRewardAmount(Vector2Int value) { }

	[CompilerGenerated]
	// RVA: 0x13806B4 Offset: 0x13806B4 VA: 0x13806B4
	public Vector2Int get_MinMaxCoinViewAmount() { }

	[CompilerGenerated]
	// RVA: 0x13806BC Offset: 0x13806BC VA: 0x13806BC
	private void set_MinMaxCoinViewAmount(Vector2Int value) { }

	// RVA: 0x13806C4 Offset: 0x13806C4 VA: 0x13806C4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI
[CreateAssetMenu(fileName = "CurrencyAnimationConfig", menuName = "Configs/CurrencyAnimationConfig")]