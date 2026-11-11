/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$ParseTimeSpan
System_TimeSpan_o Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ParseTimeSpan (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$ParseTimeSpan
   System_TimeSpan_o
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ParseTimeSpan
   (System_String_o* value, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ParseTimeSpan_358b638
          (undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_28;
  
  if ((bRam0000000005c32df2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c32df2 = 1;
  }
  puVar1 = PTR_DAT_0576c1b8;
  uStack_28 = 0;
  uVar2 = System_String__IsNullOrEmpty_1ed04ac(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0579d5c0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    puVar5 = &uStack_28;
    uVar2 = System_TimeSpan__TryParse_269a1f8(param_1,uVar3,&uStack_28,0);
    if ((uVar2 & 1) != 0) goto LAB_0368b6fc;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
LAB_0368b6fc:
  return *puVar5;
}

