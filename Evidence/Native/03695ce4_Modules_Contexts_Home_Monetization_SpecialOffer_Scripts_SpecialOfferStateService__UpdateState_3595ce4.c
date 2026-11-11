/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferStateService$$UpdateState
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__UpdateState (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferStateService$$UpdateState
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__UpdateState
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService_o* __this,
   const MethodInfo* method); */

int Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__UpdateState_3595ce4
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  if ((bRam0000000005c32e6e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_0576d548);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c32e6e = 1;
  }
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar6 != 0)) &&
     (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    lVar10 = *(long *)(lVar6 + 0x18);
    lVar6 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                      (param_1);
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x10) == '\0') {
        iVar3 = 0;
      }
      else {
        plVar9 = *(long **)(param_1 + 0x18);
        if (plVar9 == (long *)0x0) goto LAB_036976f8;
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_036975d0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_036975d0:
        iVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        lVar6 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                          (param_1);
        if (lVar6 == 0) goto LAB_036976f8;
        if (iVar3 < *(int *)(lVar6 + 0x14)) {
          iVar3 = 1;
        }
        else if (lVar10 == 0) {
          iVar3 = 2;
        }
        else {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0)
             ) goto LAB_036976f8;
          uVar7 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__IsPurchased_35942ac
                            ();
          if ((uVar7 & 1) == 0) {
            if (*(char *)(lVar10 + 0x28) == '\0') {
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_036976f8;
              uVar7 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__NeedToDownloadAssets_35968c4
                                ();
              if ((uVar7 & 1) == 0) {
                if (*(long *)(param_1 + 0x10) == 0) goto LAB_036976f8;
                iVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetRemainingSeconds_3595f90
                                  ();
                if (iVar3 < 1) {
                  iVar3 = 4;
                }
                else {
                  if (*(long *)(lVar10 + 0x30) == 0) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = *(undefined8 *)(*(long *)(lVar10 + 0x30) + 0x20);
                  }
                  if (*(long *)(param_1 + 0x10) == 0) goto LAB_036976f8;
                  lVar6 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetIAPConfigModel_35963f4
                                    (*(long *)(param_1 + 0x10),uVar5);
                  iVar3 = 7;
                  if (lVar6 != 0) {
                    iVar3 = 3;
                  }
                }
              }
              else {
                iVar3 = 8;
              }
            }
            else {
              iVar3 = 5;
            }
          }
          else {
            iVar3 = 6;
          }
        }
      }
      puVar2 = PTR_DAT_057b8520;
      if (*(int *)(param_1 + 0x30) != iVar3) {
        *(int *)(param_1 + 0x30) = iVar3;
        puVar1 = PTR_DAT_0576d548;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        if (lVar6 == 0) goto LAB_036976f8;
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
      }
      return iVar3;
    }
  }
LAB_036976f8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

