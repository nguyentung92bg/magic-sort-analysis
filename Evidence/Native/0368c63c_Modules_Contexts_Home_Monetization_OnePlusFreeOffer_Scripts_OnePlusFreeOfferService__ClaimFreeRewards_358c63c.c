/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ClaimFreeRewards
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClaimFreeRewards (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, bool giveRewardsWithoutAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ClaimFreeRewards
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClaimFreeRewards
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   bool giveRewardsWithoutAnimation, const MethodInfo* method); */

ulong Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ClaimFreeRewards_358c63c
                (long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                    ();
  if ((int)uVar5 != 6) {
                    /* try { // try from 0368c678 to 0378c7c3 has its CatchHandler @ 0368c414 */
    return uVar5;
  }
  uVar1 = *(undefined4 *)(param_1 + 100);
                    /* try { // try from 0368c66c to 0378c677 has its CatchHandler @ 0368c79c */
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0368c7ac:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                    ();
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  uVar6 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetFreeRewards_358c7b0
                    (param_1);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368c7ac;
  uVar7 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsFreeClaimed_358a85c
                    (*(long *)(param_1 + 0x10),1);
  if ((param_2 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x30);
    uVar7 = uVar6;
  }
  else {
    uVar7 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__FilterCollectionRewards_358c858
                      (uVar7,uVar6);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0368c7ac;
    Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyRewards_3ce80dc
              (*(long *)(param_1 + 0x30),0x3e,uVar6,0);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  if (lVar8 == 0) goto LAB_0368c7ac;
  Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
            (lVar8,0x3e,uVar7,0);
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) goto LAB_0368c7ac;
  Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeFreeItemClaimedEvent_1470dfc
            (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),uVar1,0);
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) goto LAB_0368c7ac;
  if ((bRam0000000005c32e12 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057f43c0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c32e12 = 1;
  }
  if (((*(long *)(lVar8 + 0x10) == 0) ||
      (lVar13 = *(long *)(*(long *)(lVar8 + 0x10) + 0x10), lVar13 == 0)) ||
     (*(long *)(lVar13 + 0x18) == 0)) goto LAB_0368e974;
  lVar15 = *(long *)(*(long *)(lVar13 + 0x18) + 0x18);
  lVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                    (lVar8);
  if (lVar9 == 0) goto LAB_0368e974;
  if (*(char *)(lVar9 + 0x10) == '\0') {
LAB_0368e7c4:
    uVar11 = 0;
  }
  else {
    if (*(long *)(lVar8 + 0x38) == 0) goto LAB_0368e974;
    uVar5 = Modules_Contexts_Application_Ads_Scripts_AdService__IsOnePlusFreeOfferDisabled_1b5f83c
                      (*(long *)(lVar8 + 0x38),0);
    if ((uVar5 & 1) != 0) goto LAB_0368e7c4;
    plVar14 = *(long **)(lVar8 + 0x18);
    if (plVar14 == (long *)0x0) goto LAB_0368e974;
    lVar9 = *plVar14;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar10 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0368e880;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_0368e880:
    iVar4 = (*(code *)*puVar10)(plVar14,puVar10[1]);
    lVar9 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                      (lVar8);
    if (lVar9 == 0) goto LAB_0368e974;
    if (iVar4 < *(int *)(lVar9 + 0x14)) {
      uVar11 = 1;
    }
    else if (lVar15 == 0) {
      uVar11 = 2;
    }
    else {
      uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                        (lVar13);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                            (lVar13), (uVar5 & 1) != 0)) {
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0368e974;
        iVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                          ();
        if (0 < iVar4) {
          uVar11 = 7;
          goto LAB_0368e7c8;
        }
      }
      if (*(char *)(lVar15 + 0x30) == '\0') {
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0368e974;
        uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__NeedToDownloadAssets_358bb78
                          ();
        if ((uVar5 & 1) == 0) {
          uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                            (lVar13);
          if (((uVar5 & 1) == 0) ||
             (uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                                (lVar13), (uVar5 & 1) != 0)) {
            if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0368e974;
            iVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                              ();
            if (iVar4 < 1) {
              uVar11 = 4;
            }
            else {
              if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0368e974;
              uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CheckWrongData_358d778
                                ();
              uVar11 = 8;
              if ((uVar5 & 1) == 0) {
                uVar11 = 3;
              }
            }
          }
          else {
            uVar11 = 6;
          }
        }
        else {
          uVar11 = 9;
        }
      }
      else {
        uVar11 = 5;
      }
    }
  }
LAB_0368e7c8:
  puVar2 = PTR_DAT_057b8520;
  if (*(uint *)(lVar8 + 0x30) != uVar11) {
    *(uint *)(lVar8 + 0x30) = uVar11;
    puVar3 = PTR_DAT_057f43c0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar3);
    if (lVar8 == 0) {
LAB_0368e974:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
  }
  return (ulong)uVar11;
}

