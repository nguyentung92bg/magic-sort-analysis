/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$InitializeData
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__InitializeData (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$InitializeData
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__InitializeData
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__InitializeData_34642f4
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryFetchCurrentEvent_346423c
            ();
  if ((bRam0000000005c3266a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3266a = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  uStack_30 = 0;
  uStack_28 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) {
    uStack_28 = *(undefined8 *)(lVar4 + 0x20);
    uStack_30 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar4);
    }
    iVar2 = System_DateTime__get_DayOfYear_2100200(&uStack_28,0);
    iVar3 = System_DateTime__get_DayOfYear_2100200(&uStack_30,0);
    if (iVar2 == iVar3) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar2 = System_DateTime__get_Year_21007a4(&uStack_28,0);
      iVar3 = System_DateTime__get_Year_21007a4(&uStack_30,0);
      if (iVar2 == iVar3) {
        return;
      }
    }
    lVar4 = *(long *)(param_1 + 0x18);
    if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x18), lVar5 != 0)) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = uStack_30;
      *(undefined1 *)(lVar4 + 0x20) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

