/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$HandleOnePlusFreeOfferResponse
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__HandleOnePlusFreeOfferResponse (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_OnePlusOneOfferResponse__o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$HandleOnePlusFreeOfferResponse
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__HandleOnePlusFreeOfferResponse
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_OnePlusOneOfferResponse__o*
   response, const MethodInfo* method); */

ulong Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__HandleOnePlusFreeOfferResponse_358bcf8
                (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  if ((bRam0000000005c32df7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05779138);
    FUN_012d0dc8(PTR_DAT_05759108);
    bRam0000000005c32df7 = 1;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_0368bdc8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = Modules_Contexts_Home_UI_Common_Scripts_LobbyEventController_LobbyEventsService__CanShowService_2982c68
                    (*(long *)(param_1 + 0x48),param_1,0);
  if ((uVar4 & 1) == 0) {
    return uVar4;
  }
  if (param_2 == 0) goto LAB_0368bdc8;
  uVar4 = Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_object___get_Success_1bb3518
                    (param_2,*(undefined8 *)PTR_DAT_05759108);
  if ((uVar4 & 1) == 0) {
    uVar4 = Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_object___IsNotAvailable_1bb37b8
                      (param_2,*(undefined8 *)PTR_DAT_05779138);
    if ((uVar4 & 1) != 0) {
      Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClearOnePlusFreeOfferData_358bf08
                (param_1);
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368bdc8;
      Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__UpdateEventCache_358a728
                (*(long *)(param_1 + 0x10),0);
    }
  }
  else {
    Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__UpdateAndCacheBackendOfferResponse_358bdcc
              (param_1,param_2);
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) goto LAB_0368bdc8;
  if ((bRam0000000005c32e12 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057f43c0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c32e12 = 1;
  }
  if (((*(long *)(lVar5 + 0x10) == 0) ||
      (lVar10 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar10 == 0)) ||
     (*(long *)(lVar10 + 0x18) == 0)) goto LAB_0368e974;
  lVar12 = *(long *)(*(long *)(lVar10 + 0x18) + 0x18);
  lVar6 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                    (lVar5);
  if (lVar6 == 0) goto LAB_0368e974;
  if (*(char *)(lVar6 + 0x10) == '\0') {
LAB_0368e7c4:
    uVar8 = 0;
  }
  else {
    if (*(long *)(lVar5 + 0x38) == 0) goto LAB_0368e974;
    uVar4 = Modules_Contexts_Application_Ads_Scripts_AdService__IsOnePlusFreeOfferDisabled_1b5f83c
                      (*(long *)(lVar5 + 0x38),0);
    if ((uVar4 & 1) != 0) goto LAB_0368e7c4;
    plVar11 = *(long **)(lVar5 + 0x18);
    if (plVar11 == (long *)0x0) goto LAB_0368e974;
    lVar6 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0368e880;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0368e880:
    iVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    lVar6 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                      (lVar5);
    if (lVar6 == 0) goto LAB_0368e974;
    if (iVar3 < *(int *)(lVar6 + 0x14)) {
      uVar8 = 1;
    }
    else if (lVar12 == 0) {
      uVar8 = 2;
    }
    else {
      uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                        (lVar10);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                            (lVar10), (uVar4 & 1) != 0)) {
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_0368e974;
        iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                          ();
        if (0 < iVar3) {
          uVar8 = 7;
          goto LAB_0368e7c8;
        }
      }
      if (*(char *)(lVar12 + 0x30) == '\0') {
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_0368e974;
        uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__NeedToDownloadAssets_358bb78
                          ();
        if ((uVar4 & 1) == 0) {
          uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                            (lVar10);
          if (((uVar4 & 1) == 0) ||
             (uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                                (lVar10), (uVar4 & 1) != 0)) {
            if (*(long *)(lVar5 + 0x10) == 0) goto LAB_0368e974;
            iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                              ();
            if (iVar3 < 1) {
              uVar8 = 4;
            }
            else {
              if (*(long *)(lVar5 + 0x10) == 0) goto LAB_0368e974;
              uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CheckWrongData_358d778
                                ();
              uVar8 = 8;
              if ((uVar4 & 1) == 0) {
                uVar8 = 3;
              }
            }
          }
          else {
            uVar8 = 6;
          }
        }
        else {
          uVar8 = 9;
        }
      }
      else {
        uVar8 = 5;
      }
    }
  }
LAB_0368e7c8:
  puVar1 = PTR_DAT_057b8520;
  if (*(uint *)(lVar5 + 0x30) != uVar8) {
    *(uint *)(lVar5 + 0x30) = uVar8;
    puVar2 = PTR_DAT_057f43c0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar5 == 0) {
LAB_0368e974:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
  }
  return (ulong)uVar8;
}

