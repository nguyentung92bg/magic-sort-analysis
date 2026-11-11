/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$HandleSpecialOfferResponse
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__HandleSpecialOfferResponse (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_SpecialOfferResponse__o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$HandleSpecialOfferResponse
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__HandleSpecialOfferResponse
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this,
   Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_SpecialOfferResponse__o*
   response, const MethodInfo* method); */

ulong Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__HandleSpecialOfferResponse_3595a58
                (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  
  if ((bRam0000000005c32e5f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578fe08);
    FUN_012d0dc8(PTR_DAT_0580a398);
    bRam0000000005c32e5f = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar4 = Modules_Contexts_Home_UI_Common_Scripts_LobbyEventController_LobbyEventsService__CanShowService_2982c68
                      (*(long *)(param_1 + 0x58),param_1,0);
    if ((uVar4 & 1) == 0) {
      return uVar4;
    }
    if (param_2 != 0) {
      uVar4 = Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_object___get_Success_1bb3518
                        (param_2,*(undefined8 *)PTR_DAT_0580a398);
      if ((uVar4 & 1) == 0) {
        uVar4 = Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_object___IsNotAvailable_1bb37b8
                          (param_2,*(undefined8 *)PTR_DAT_0578fe08);
        if ((uVar4 & 1) != 0) {
          Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ClearSpecialOfferData_3595c74
                    (param_1);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_03695b28;
          Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__CacheBackendResponse_35941f8
                    (*(long *)(param_1 + 0x10),0);
        }
      }
      else {
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__UpdateAndCacheBackendOfferResponse_3595b2c
                  (param_1,param_2);
      }
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        if ((bRam0000000005c32e6e & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057636d0);
          FUN_012d0dc8(PTR_DAT_0576d548);
          FUN_012d0dc8(PTR_DAT_057b8520);
          bRam0000000005c32e6e = 1;
        }
        if (((*(long *)(lVar5 + 0x10) != 0) &&
            (lVar9 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar9 != 0)) &&
           (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
          lVar12 = *(long *)(lVar9 + 0x18);
          lVar9 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                            (lVar5);
          if (lVar9 != 0) {
            if (*(char *)(lVar9 + 0x10) == '\0') {
              uVar8 = 0;
            }
            else {
              plVar11 = *(long **)(lVar5 + 0x18);
              if (plVar11 == (long *)0x0) goto LAB_036976f8;
              lVar9 = *plVar11;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar4 != 0) {
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_036975d0;
                  }
                  uVar4 = uVar4 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_036975d0:
              iVar3 = (*(code *)*puVar6)(plVar11,puVar6[1]);
              lVar9 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                                (lVar5);
              if (lVar9 == 0) goto LAB_036976f8;
              if (iVar3 < *(int *)(lVar9 + 0x14)) {
                uVar8 = 1;
              }
              else if (lVar12 == 0) {
                uVar8 = 2;
              }
              else {
                if ((*(long *)(lVar5 + 0x10) == 0) ||
                   (*(long *)(*(long *)(lVar5 + 0x10) + 0x10) == 0)) goto LAB_036976f8;
                uVar4 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__IsPurchased_35942ac
                                  ();
                if ((uVar4 & 1) == 0) {
                  if (*(char *)(lVar12 + 0x28) == '\0') {
                    if (*(long *)(lVar5 + 0x10) == 0) goto LAB_036976f8;
                    uVar4 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__NeedToDownloadAssets_35968c4
                                      ();
                    if ((uVar4 & 1) == 0) {
                      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_036976f8;
                      iVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRemainingSeconds_3595f90
                                        ();
                      if (iVar3 < 1) {
                        uVar8 = 4;
                      }
                      else {
                        if (*(long *)(lVar12 + 0x30) == 0) {
                          uVar7 = 0;
                        }
                        else {
                          uVar7 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + 0x20);
                        }
                        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_036976f8;
                        lVar9 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetIAPConfigModel_35963f4
                                          (*(long *)(lVar5 + 0x10),uVar7);
                        uVar8 = 7;
                        if (lVar9 != 0) {
                          uVar8 = 3;
                        }
                      }
                    }
                    else {
                      uVar8 = 8;
                    }
                  }
                  else {
                    uVar8 = 5;
                  }
                }
                else {
                  uVar8 = 6;
                }
              }
            }
            puVar2 = PTR_DAT_057b8520;
            if (*(uint *)(lVar5 + 0x30) != uVar8) {
              *(uint *)(lVar5 + 0x30) = uVar8;
              puVar1 = PTR_DAT_0576d548;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar1);
              if (lVar5 == 0) goto LAB_036976f8;
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
            }
            return (ulong)uVar8;
          }
        }
LAB_036976f8:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
LAB_03695b28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

