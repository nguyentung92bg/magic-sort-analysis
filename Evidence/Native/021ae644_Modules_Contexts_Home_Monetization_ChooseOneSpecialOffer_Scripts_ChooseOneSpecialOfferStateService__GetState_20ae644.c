/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferStateService$$GetState
int32_t Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferStateService$$GetState
   int32_t
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService_o*
   __this, const MethodInfo* method); */

int Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState_20ae644
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  
  if ((bRam0000000005c2950d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057c67e0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2950d = 1;
  }
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar6 == 0)) ||
     (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) goto LAB_021ae82c;
  lVar9 = *(long *)(lVar6 + 0x18);
  lVar6 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetConfig_20ae620
                    (param_1);
  if (lVar6 == 0) goto LAB_021ae82c;
  if (*(char *)(lVar6 + 0x10) == '\0') {
LAB_021ae6cc:
    iVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_021ae82c;
    uVar4 = Modules_Contexts_Application_Ads_Scripts_AdService__IsChooseOneSpecialOfferDisabled_1b5f814
                      (*(long *)(param_1 + 0x38),0);
    if ((uVar4 & 1) != 0) goto LAB_021ae6cc;
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar8 == (long *)0x0) goto LAB_021ae82c;
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_021ae784;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_021ae784:
    iVar3 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    lVar6 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetConfig_20ae620
                      (param_1);
    if (lVar6 == 0) goto LAB_021ae82c;
    if (iVar3 < *(int *)(lVar6 + 0x14)) {
      iVar3 = 1;
    }
    else if (lVar9 == 0) {
      iVar3 = 2;
    }
    else {
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0))
      goto LAB_021ae82c;
      uVar4 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferDataService__IsPurchased_20ab8a4
                        ();
      if ((uVar4 & 1) == 0) {
        if (*(char *)(lVar9 + 0x28) == '\0') {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_021ae82c;
          iVar3 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetRemainingSeconds_20acff4
                            ();
          if (iVar3 < 1) {
            iVar3 = 4;
          }
          else {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_021ae82c;
            uVar4 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__CheckWrongData_20adb54
                              ();
            iVar3 = 7;
            if ((uVar4 & 1) == 0) {
              iVar3 = 3;
            }
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
  puVar1 = PTR_DAT_057b8520;
  if (*(int *)(param_1 + 0x30) != iVar3) {
    *(int *)(param_1 + 0x30) = iVar3;
    puVar2 = PTR_DAT_057c67e0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar6 == 0) {
LAB_021ae82c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
  }
  return iVar3;
}

