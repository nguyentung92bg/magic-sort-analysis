/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$GetState
int32_t Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$GetState
   int32_t
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o*
   __this, const MethodInfo* method); */

int Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
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
  
                    /* try { // try from 0368e750 to 0378e757 has its CatchHandler @ 0368e7e0 */
  if ((bRam0000000005c32e12 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 0368e764 to 0378e77b has its CatchHandler @ 0368e7f4 */
    FUN_012d0dc8(PTR_DAT_057f43c0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c32e12 = 1;
  }
                    /* try { // try from 0368e780 to 0378e787 has its CatchHandler @ 0368e854 */
                    /* try { // try from 0368e788 to 0378e78b has its CatchHandler @ 0368e7d8 */
                    /* try { // try from 0368e78c to 0378e78f has its CatchHandler @ 0368e7d4 */
                    /* try { // try from 0368e790 to 0378e793 has its CatchHandler @ 0368e860 */
                    /* try { // try from 0368e794 to 0378e797 has its CatchHandler @ 0368e854 */
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x18) == 0)) goto LAB_0368e974;
                    /* try { // try from 0368e798 to 0378e79b has its CatchHandler @ 0368e7d0 */
  lVar10 = *(long *)(*(long *)(lVar8 + 0x18) + 0x18);
                    /* try { // try from 0368e79c to 0378e79f has its CatchHandler @ 0368e848 */
                    /* try { // try from 0368e7a0 to 0378e7a3 has its CatchHandler @ 0368e7cc */
  lVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                    (param_1);
                    /* try { // try from 0368e7a4 to 0378e7a7 has its CatchHandler @ 0368e7c8 */
  if (lVar4 == 0) goto LAB_0368e974;
                    /* try { // try from 0368e7a8 to 0378e7ab has its CatchHandler @ 0368e7c4 */
                    /* try { // try from 0368e7ac to 0378e7af has its CatchHandler @ 0368e7c0 */
  if (*(char *)(lVar4 + 0x10) == '\0') {
LAB_0368e7c4:
                    /* catch() { ... } // from try @ 0368e7a8 with catch @ 0368e7c4 */
    iVar3 = 0;
  }
  else {
                    /* try { // try from 0368e7b0 to 0378e7b3 has its CatchHandler @ 0368e818 */
                    /* try { // try from 0368e7b4 to 0378e7b7 has its CatchHandler @ 0368e7bc */
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0368e974;
                    /* try { // try from 0368e7b8 to 0378e7bb has its CatchHandler @ 0368e810 */
                    /* catch() { ... } // from try @ 0368e7b4 with catch @ 0368e7bc
                       try { // try from 0368e7bc to 0378e88f has its CatchHandler @ 0368e358 */
    uVar5 = Modules_Contexts_Application_Ads_Scripts_AdService__IsOnePlusFreeOfferDisabled_1b5f83c
                      (*(long *)(param_1 + 0x38),0);
                    /* catch() { ... } // from try @ 0368e7ac with catch @ 0368e7c0 */
    if ((uVar5 & 1) != 0) goto LAB_0368e7c4;
                    /* catch() { ... } // from try @ 0368e618 with catch @ 0368e820 */
    plVar9 = *(long **)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 0368e6f4 with catch @ 0368e824 */
    if (plVar9 == (long *)0x0) goto LAB_0368e974;
                    /* catch() { ... } // from try @ 0368e5f8 with catch @ 0368e828 */
                    /* catch() { ... } // from try @ 0368e6b8 with catch @ 0368e82c */
    lVar4 = *plVar9;
                    /* catch() { ... } // from try @ 0368e6cc with catch @ 0368e830 */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 0368e530 with catch @ 0368e840 */
                    /* catch() { ... } // from try @ 0368e520 with catch @ 0368e844 */
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0368e514 with catch @ 0368e848
                       catch() { ... } // from try @ 0368e79c with catch @ 0368e848 */
                    /* catch() { ... } // from try @ 0368e42c with catch @ 0368e84c */
                    /* catch() { ... } // from try @ 0368e440 with catch @ 0368e850 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* catch() { ... } // from try @ 0368e4a8 with catch @ 0368e874
                       catch() { ... } // from try @ 0368e540 with catch @ 0368e874 */
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0368e880;
        }
                    /* catch() { ... } // from try @ 0368e560 with catch @ 0368e854
                       catch() { ... } // from try @ 0368e780 with catch @ 0368e854
                       catch() { ... } // from try @ 0368e794 with catch @ 0368e854 */
        uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 0368e40c with catch @ 0368e858 */
        piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0368e3fc with catch @ 0368e85c */
      } while (uVar5 != 0);
    }
                    /* catch() { ... } // from try @ 0368e3f0 with catch @ 0368e860
                       catch() { ... } // from try @ 0368e790 with catch @ 0368e860 */
                    /* catch() { ... } // from try @ 0368e470 with catch @ 0368e864 */
                    /* catch() { ... } // from try @ 0368e3cc with catch @ 0368e868 */
    puVar6 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_0368e880:
    iVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
                    /* try { // try from 0368e890 to 0378e893 has its CatchHandler @ 0368e968 */
    lVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetConfig_358e714
                      (param_1);
    if (lVar4 == 0) goto LAB_0368e974;
    if (iVar3 < *(int *)(lVar4 + 0x14)) {
      iVar3 = 1;
    }
    else {
                    /* try { // try from 0368e8b0 to 0378e8b7 has its CatchHandler @ 0368e988 */
      if (lVar10 == 0) {
        iVar3 = 2;
      }
      else {
                    /* try { // try from 0368e8b8 to 0378e8cf has its CatchHandler @ 0368e358 */
        uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsPurchased_358a7e4
                          (lVar8);
        if (((uVar5 & 1) != 0) &&
           (uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                              (lVar8), (uVar5 & 1) != 0)) {
                    /* try { // try from 0368e8d0 to 0378e8e7 has its CatchHandler @ 0368e978 */
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368e974;
          iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetRemainingSeconds_358c200
                            ();
          if (0 < iVar3) {
            iVar3 = 7;
            goto LAB_0368e7c8;
          }
        }
                    /* try { // try from 0368e8e8 to 0378e94b has its CatchHandler @ 0368e358 */
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
                    /* catch() { ... } // from try @ 0368e890 with catch @ 0368e968 */
              }
              else {
                if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368e974;
                    /* try { // try from 0368e94c to 0378e95b has its CatchHandler @ 0368e978 */
                uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CheckWrongData_358d778
                                  ();
                iVar3 = 8;
                    /* try { // try from 0368e95c to 0378e97f has its CatchHandler @ 0368e988 */
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
  }
LAB_0368e7c8:
  puVar1 = PTR_DAT_057b8520;
                    /* catch() { ... } // from try @ 0368e7a4 with catch @ 0368e7c8 */
                    /* catch() { ... } // from try @ 0368e7a0 with catch @ 0368e7cc */
                    /* catch() { ... } // from try @ 0368e798 with catch @ 0368e7d0 */
  if (*(int *)(param_1 + 0x30) != iVar3) {
                    /* catch() { ... } // from try @ 0368e78c with catch @ 0368e7d4 */
                    /* catch() { ... } // from try @ 0368e788 with catch @ 0368e7d8 */
                    /* catch() { ... } // from try @ 0368e674 with catch @ 0368e7dc */
    *(int *)(param_1 + 0x30) = iVar3;
    puVar2 = PTR_DAT_057f43c0;
                    /* catch() { ... } // from try @ 0368e750 with catch @ 0368e7e0 */
                    /* catch() { ... } // from try @ 0368e688 with catch @ 0368e7e4 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0368e764 with catch @ 0368e7f4 */
      thunk_FUN_0130472c();
    }
    lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar8 == 0) {
LAB_0368e974:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
                    /* catch() { ... } // from try @ 0368e650 with catch @ 0368e804 */
                    /* catch() { ... } // from try @ 0368e640 with catch @ 0368e808 */
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
  }
                    /* catch() { ... } // from try @ 0368e72c with catch @ 0368e80c */
                    /* catch() { ... } // from try @ 0368e638 with catch @ 0368e810
                       catch() { ... } // from try @ 0368e7b8 with catch @ 0368e810 */
                    /* catch() { ... } // from try @ 0368e71c with catch @ 0368e814 */
                    /* catch() { ... } // from try @ 0368e714 with catch @ 0368e818
                       catch() { ... } // from try @ 0368e7b0 with catch @ 0368e818 */
                    /* catch() { ... } // from try @ 0368e600 with catch @ 0368e81c */
  return iVar3;
}

