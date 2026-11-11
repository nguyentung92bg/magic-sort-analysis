/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$HandleChooseOneSpecialOfferResponse
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__HandleChooseOneSpecialOfferResponse (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_ChooseOneSpecialOfferResponse__o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$HandleChooseOneSpecialOfferResponse
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__HandleChooseOneSpecialOfferResponse
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this,
   Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_ChooseOneSpecialOfferResponse__o*
   response, const MethodInfo* method); */

ulong Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__HandleChooseOneSpecialOfferResponse_20acc14
                (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  
  if ((bRam0000000005c294ff & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fa500);
    FUN_012d0dc8(PTR_DAT_0579fe30);
    bRam0000000005c294ff = 1;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_021acce4:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = Modules_Contexts_Home_UI_Common_Scripts_LobbyEventController_LobbyEventsService__CanShowService_2982c68
                    (*(long *)(param_1 + 0x48),param_1,0);
  if ((uVar4 & 1) == 0) {
    return uVar4;
  }
  if (param_2 == 0) goto LAB_021acce4;
  uVar4 = Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_object___get_Success_1bb3518
                    (param_2,*(undefined8 *)PTR_DAT_0579fe30);
  if ((uVar4 & 1) == 0) {
    uVar4 = Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_object___IsNotAvailable_1bb37b8
                      (param_2,*(undefined8 *)PTR_DAT_057fa500);
    if ((uVar4 & 1) != 0) {
      Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ClearChooseOneSpecialOfferData_20acdf0
                (param_1);
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_021acce4;
      Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService__CacheBackendResponse_20ab7f0
                (*(long *)(param_1 + 0x10),0);
    }
  }
  else {
    Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__UpdateAndCacheBackendOfferResponse_20acce8
              (param_1,param_2);
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) goto LAB_021acce4;
  if ((bRam0000000005c2950d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057c67e0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2950d = 1;
  }
  if (((*(long *)(lVar5 + 0x10) == 0) ||
      (lVar8 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar8 == 0)) ||
     (lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0)) goto LAB_021ae82c;
  lVar11 = *(long *)(lVar8 + 0x18);
  lVar8 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetConfig_20ae620
                    (lVar5);
  if (lVar8 == 0) goto LAB_021ae82c;
  if (*(char *)(lVar8 + 0x10) == '\0') {
LAB_021ae6cc:
    uVar7 = 0;
  }
  else {
    if (*(long *)(lVar5 + 0x38) == 0) goto LAB_021ae82c;
    uVar4 = Modules_Contexts_Application_Ads_Scripts_AdService__IsChooseOneSpecialOfferDisabled_1b5f814
                      (*(long *)(lVar5 + 0x38),0);
    if ((uVar4 & 1) != 0) goto LAB_021ae6cc;
    plVar10 = *(long **)(lVar5 + 0x18);
    if (plVar10 == (long *)0x0) goto LAB_021ae82c;
    lVar8 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_021ae784;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_021ae784:
    iVar3 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    lVar8 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetConfig_20ae620
                      (lVar5);
    if (lVar8 == 0) goto LAB_021ae82c;
    if (iVar3 < *(int *)(lVar8 + 0x14)) {
      uVar7 = 1;
    }
    else if (lVar11 == 0) {
      uVar7 = 2;
    }
    else {
      if ((*(long *)(lVar5 + 0x10) == 0) || (*(long *)(*(long *)(lVar5 + 0x10) + 0x10) == 0))
      goto LAB_021ae82c;
      uVar4 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService__IsPurchased_20ab8a4
                        ();
      if ((uVar4 & 1) == 0) {
        if (*(char *)(lVar11 + 0x28) == '\0') {
          if (*(long *)(lVar5 + 0x10) == 0) goto LAB_021ae82c;
          iVar3 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRemainingSeconds_20acff4
                            ();
          if (iVar3 < 1) {
            uVar7 = 4;
          }
          else {
            if (*(long *)(lVar5 + 0x10) == 0) goto LAB_021ae82c;
            uVar4 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__CheckWrongData_20adb54
                              ();
            uVar7 = 7;
            if ((uVar4 & 1) == 0) {
              uVar7 = 3;
            }
          }
        }
        else {
          uVar7 = 5;
        }
      }
      else {
        uVar7 = 6;
      }
    }
  }
  puVar1 = PTR_DAT_057b8520;
  if (*(uint *)(lVar5 + 0x30) != uVar7) {
    *(uint *)(lVar5 + 0x30) = uVar7;
    puVar2 = PTR_DAT_057c67e0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar5 == 0) {
LAB_021ae82c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
  }
  return (ulong)uVar7;
}

