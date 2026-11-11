/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferTitle$$SetUpperText
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle_o* __this, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferTitle$$SetUpperText
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle_o* __this,
   System_String_o* text, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText_346654c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if ((bRam0000000005c3267a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057974a0);
    FUN_012d0dc8(PTR_DAT_057af350);
    FUN_012d0dc8(PTR_DAT_0580dff8);
    FUN_012d0dc8(PTR_DAT_057faca0);
    bRam0000000005c3267a = 1;
  }
  puVar2 = PTR_DAT_057af350;
  puVar1 = PTR_DAT_057974a0;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uStack_38 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057faca0);
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_38,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      (**(code **)(*plStack_28 + 0x558))(plStack_28,param_2,*(undefined8 *)(*plStack_28 + 0x560));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar1);
  }
  return;
}

