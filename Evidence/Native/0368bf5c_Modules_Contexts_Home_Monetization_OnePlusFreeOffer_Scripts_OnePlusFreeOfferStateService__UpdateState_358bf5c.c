/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$UpdateState
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__UpdateState (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$UpdateState
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__UpdateState
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o*
   __this, const MethodInfo* method); */

int Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__UpdateState_358bf5c
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if ((bRam0000000005c32e12 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057f43c0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c32e12 = 1;
  }
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x18) == 0)) goto LAB_0368e974;
  lVar10 = *(long *)(*(long *)(lVar8 + 0x18) + 0x18);
  lVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                    (param_1);
  if (lVar4 == 0) goto LAB_0368e974;
  if (*(char *)(lVar4 + 0x10) == '\0') {
LAB_0368e7c4:
    iVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0368e974;
    uVar5 = Modules_Contexts_Application_Ads_Scripts_AdService__IsOnePlusFreeOfferDisabled_1b5f83c
                      (*(long *)(param_1 + 0x38),0);
    if ((uVar5 & 1) != 0) goto LAB_0368e7c4;
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) goto LAB_0368e974;
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0368e880;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_0368e880:
    iVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    lVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                      (param_1);
    if (lVar4 == 0) goto LAB_0368e974;
    if (iVar3 < *(int *)(lVar4 + 0x14)) {
      iVar3 = 1;
    }
    else if (lVar10 == 0) {
      iVar3 = 2;
    }
    else {
      uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                        (lVar8);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                            (lVar8), (uVar5 & 1) != 0)) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368e974;
        iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                          ();
        if (0 < iVar3) {
          iVar3 = 7;
          goto LAB_0368e7c8;
        }
      }
      if (*(char *)(lVar10 + 0x30) == '\0') {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368e974;
        uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__NeedToDownloadAssets_358bb78
                          ();
        if ((uVar5 & 1) == 0) {
          uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                            (lVar8);
          if (((uVar5 & 1) == 0) ||
             (uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                                (lVar8), (uVar5 & 1) != 0)) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368e974;
            iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                              ();
            if (iVar3 < 1) {
              iVar3 = 4;
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368e974;
              uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CheckWrongData_358d778
                                ();
              iVar3 = 8;
              if ((uVar5 & 1) == 0) {
                iVar3 = 3;
              }
            }
          }
          else {
            iVar3 = 6;
          }
        }
        else {
          iVar3 = 9;
        }
      }
      else {
        iVar3 = 5;
      }
    }
  }
LAB_0368e7c8:
  puVar1 = PTR_DAT_057b8520;
  if (*(int *)(param_1 + 0x30) != iVar3) {
    *(int *)(param_1 + 0x30) = iVar3;
    puVar2 = PTR_DAT_057f43c0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar8 == 0) {
LAB_0368e974:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
  }
  return iVar3;
}

