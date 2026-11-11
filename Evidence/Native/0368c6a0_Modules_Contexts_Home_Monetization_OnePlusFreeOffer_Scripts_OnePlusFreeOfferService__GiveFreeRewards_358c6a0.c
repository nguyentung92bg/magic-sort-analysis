/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GiveFreeRewards
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GiveFreeRewards (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, int32_t source, bool giveRewardsWithoutAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GiveFreeRewards
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GiveFreeRewards
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   int32_t source, bool giveRewardsWithoutAnimation, const MethodInfo* method); */

ulong Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GiveFreeRewards_358c6a0
                (long param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0368c7ac:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                    ();
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetFreeRewards_358c7b0
                    (param_1);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368c7ac;
  uVar6 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetIsFreeClaimed_358a85c
                    (*(long *)(param_1 + 0x10),1);
  if ((param_3 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x30);
    uVar6 = uVar5;
  }
  else {
    uVar6 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__FilterCollectionRewards_358c858
                      (uVar6,uVar5);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0368c7ac;
    Modules_Contexts_Application_Reward_Scripts_RewardService__GiveDirectlyRewards_3ce80dc
              (*(long *)(param_1 + 0x30),0x3e,uVar5,0);
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (lVar7 == 0) goto LAB_0368c7ac;
  Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkRewards_3ce9494
            (lVar7,0x3e,uVar6,0);
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) goto LAB_0368c7ac;
  Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeFreeItemClaimedEvent_1470dfc
            (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),param_2,0);
  lVar7 = *(long *)(param_1 + 0x18);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368c594 with catch @ 0368c798
                        */
  if (lVar7 == 0) goto LAB_0368c7ac;
  if ((bRam0000000005c32e12 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057f43c0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c32e12 = 1;
  }
  if (((*(long *)(lVar7 + 0x10) == 0) ||
      (lVar12 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar12 == 0)) ||
     (*(long *)(lVar12 + 0x18) == 0)) goto LAB_0368e974;
  lVar14 = *(long *)(*(long *)(lVar12 + 0x18) + 0x18);
  lVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                    (lVar7);
  if (lVar8 == 0) goto LAB_0368e974;
  if (*(char *)(lVar8 + 0x10) == '\0') {
LAB_0368e7c4:
    uVar10 = 0;
  }
  else {
    if (*(long *)(lVar7 + 0x38) == 0) goto LAB_0368e974;
    uVar4 = Modules_Contexts_Application_Ads_Scripts_AdService__IsOnePlusFreeOfferDisabled_1b5f83c
                      (*(long *)(lVar7 + 0x38),0);
    if ((uVar4 & 1) != 0) goto LAB_0368e7c4;
    plVar13 = *(long **)(lVar7 + 0x18);
    if (plVar13 == (long *)0x0) goto LAB_0368e974;
    lVar8 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0368e880;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_0368e880:
    iVar3 = (*(code *)*puVar9)(plVar13,puVar9[1]);
    lVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                      (lVar7);
    if (lVar8 == 0) goto LAB_0368e974;
    if (iVar3 < *(int *)(lVar8 + 0x14)) {
      uVar10 = 1;
    }
    else if (lVar14 == 0) {
      uVar10 = 2;
    }
    else {
      uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                        (lVar12);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                            (lVar12), (uVar4 & 1) != 0)) {
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0368e974;
        iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                          ();
        if (0 < iVar3) {
          uVar10 = 7;
          goto LAB_0368e7c8;
        }
      }
      if (*(char *)(lVar14 + 0x30) == '\0') {
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0368e974;
        uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__NeedToDownloadAssets_358bb78
                          ();
        if ((uVar4 & 1) == 0) {
          uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                            (lVar12);
          if (((uVar4 & 1) == 0) ||
             (uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                                (lVar12), (uVar4 & 1) != 0)) {
            if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0368e974;
            iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                              ();
            if (iVar3 < 1) {
              uVar10 = 4;
            }
            else {
              if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0368e974;
              uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CheckWrongData_358d778
                                ();
              uVar10 = 8;
              if ((uVar4 & 1) == 0) {
                uVar10 = 3;
              }
            }
          }
          else {
            uVar10 = 6;
          }
        }
        else {
          uVar10 = 9;
        }
      }
      else {
        uVar10 = 5;
      }
    }
  }
LAB_0368e7c8:
  puVar1 = PTR_DAT_057b8520;
  if (*(uint *)(lVar7 + 0x30) != uVar10) {
    *(uint *)(lVar7 + 0x30) = uVar10;
    puVar2 = PTR_DAT_057f43c0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar7 == 0) {
LAB_0368e974:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar7,0);
  }
  return (ulong)uVar10;
}

