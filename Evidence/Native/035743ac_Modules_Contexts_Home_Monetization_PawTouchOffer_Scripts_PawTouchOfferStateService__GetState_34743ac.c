/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferStateService$$GetState
int32_t Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetState (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferStateService$$GetState
   int32_t
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetState
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetState_34743ac
               (long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000005c3270e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c3270e = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar2 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__get_Config_34725a8
                        (), lVar2 == 0)) goto LAB_03574550;
  if (*(char *)(lVar2 + 0x10) != '\0') {
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 == (long *)0x0) goto LAB_03574550;
    lVar2 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_03574450;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_03574450:
    iVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar2 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__get_Config_34725a8
                          (*(long *)(param_1 + 0x10)), lVar2 == 0)) goto LAB_03574550;
    if (*(int *)(lVar2 + 0x18) <= iVar1) {
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0))
      goto LAB_03574550;
      uVar5 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__IsShowed_3471270
                        ();
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_03574550;
        iVar1 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetShowRemainingTimeInSeconds_3472ac8
                          ();
        if (0 < iVar1) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0)
             ) goto LAB_03574550;
          uVar5 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__IsPurchased_347121c
                            ();
          if ((uVar5 & 1) == 0) goto LAB_035744f0;
        }
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0))
        goto LAB_03574550;
        uVar5 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__IsClaimSent_3471314
                          ();
        if ((uVar5 & 1) == 0) {
          uVar4 = 2;
          goto LAB_03574484;
        }
      }
LAB_035744f0:
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_03574550:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar1 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetRemainingTimeInSeconds_3472954
                        ();
      if (0 < iVar1) {
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0))
        goto LAB_03574550;
        lVar2 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetEventId_347117c
                          ();
        if (lVar2 != 0) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0)
             ) goto LAB_03574550;
          uVar5 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__IsClaimSent_3471314
                            ();
          uVar4 = 3;
          if ((uVar5 & 1) == 0) {
            uVar4 = 1;
          }
          goto LAB_03574484;
        }
      }
      uVar4 = 4;
      goto LAB_03574484;
    }
  }
  uVar4 = 0;
LAB_03574484:
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  return;
}

