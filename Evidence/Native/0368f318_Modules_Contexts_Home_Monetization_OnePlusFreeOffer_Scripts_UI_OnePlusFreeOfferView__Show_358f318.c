/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$Show
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__Show (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this, Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferViewModel_o* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$Show
   void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__Show
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this,
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferViewModel_o*
   viewModel, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__Show_358f318
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x1;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
                    /* try { // try from 0368f334 to 0378f347 has its CatchHandler @ 0368f86c */
  if ((bRam0000000005c32e2a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c32e2a = 1;
  }
  lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  puVar1 = PTR_DAT_0576c200;
  if (lVar3 != 0) {
                    /* try { // try from 0368f368 to 0378f37b has its CatchHandler @ 0368f868 */
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    *(long *)(param_1 + 0xa8) = param_2;
    FUN_012d0d74((long *)(param_1 + 0xa8),param_2);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 0368f390 to 0378f3a3 has its CatchHandler @ 0368f894 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar8,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_2 == 0) goto LAB_0368f408;
    }
    else {
                    /* try { // try from 0368f3b4 to 0378f3b7 has its CatchHandler @ 0368f884 */
      if ((param_2 == 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_0368f408;
                    /* try { // try from 0368f3c0 to 0378f3cf has its CatchHandler @ 0368f880 */
      Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                (*(long *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x20),0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Show_358fd6c
                (*(long *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 0368f3e0 to 0378f3e7 has its CatchHandler @ 0368f864 */
      if (*(long *)(param_1 + 0x28) != 0) {
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Show_358fd6c
                  (*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x18));
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__UpdateStepStates_35906d4
                  (param_1);
                    /* try { // try from 0368f3f4 to 0378f403 has its CatchHandler @ 0368f860 */
        if ((bRam0000000005c32e2d & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057bc5e8);
          FUN_012d0dc8(PTR_DAT_057771d8);
          FUN_012d0dc8(PTR_DAT_057c9ca0);
          FUN_012d0dc8(PTR_DAT_057606c8);
          FUN_012d0dc8(PTR_DAT_0577bc68);
          FUN_012d0dc8(PTR_DAT_0579c288);
          bRam0000000005c32e2d = 1;
        }
        lVar3 = *(long *)(param_1 + 0xa8);
        if (lVar3 != 0) {
          if (*(char *)(lVar3 + 0x29) == '\0') {
            *(undefined1 *)(lVar3 + 0x29) = 1;
            if (*(long *)(param_1 + 0x80) != 0) {
              UnityEngine_Animation__Play_1f7a100
                        (*(long *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),0);
              puVar1 = PTR_DAT_057606c8;
              if (*(long *)(param_1 + 0x98) != 0) {
                Modules_Infrastructure_Utils_TextSequenceAnimator__SetText_3de58d4
                          (*(long *)(param_1 + 0x98),
                           **(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8),0,0);
                lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_0577bc68;
                if (lVar3 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar3,param_1,*(undefined8 *)PTR_DAT_057771d8,0);
                  lVar3 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04359fc8,lVar3,1,0);
                  uVar8 = *(undefined8 *)puVar1;
                  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
                    *(long *)(lVar3 + 0x30) = param_1;
                    FUN_012d0d74((long *)(lVar3 + 0x30),param_1,uVar8);
                  }
                  return lVar3;
                }
              }
            }
          }
          else if (*(long *)(param_1 + 0x80) != 0) {
            UnityEngine_Animation__Play_1f7a100
                      (*(long *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x90),0);
            puVar2 = PTR_DAT_057bc5e8;
            puVar1 = PTR_DAT_0579c288;
            if (*(long *)(param_1 + 0xa0) != 0) {
              Modules_Contexts_Home_Monetization_WebShop_Scripts_PopupAnimationController__PlayIntroAnimation_3161de8
                        (*(long *)(param_1 + 0xa0),0);
              lVar3 = *(long *)(param_1 + 0x98);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                                (*(undefined8 *)puVar1,0);
              puVar1 = PTR_DAT_05815110;
              if (lVar3 != 0) {
                if ((bRam0000000005c37e94 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_057974a0,lVar5,0,0);
                  FUN_012d0dc8(PTR_DAT_057af350);
                  FUN_012d0dc8(PTR_DAT_0580dff8);
                  FUN_012d0dc8(PTR_DAT_05776118);
                  FUN_012d0dc8(PTR_DAT_057faca0);
                  FUN_012d0dc8(PTR_DAT_058167f8);
                  FUN_012d0dc8(PTR_DAT_057de400);
                  FUN_012d0dc8(PTR_DAT_05815110);
                  bRam0000000005c37e94 = 1;
                }
                uStack_48 = 0;
                plStack_40 = (long *)0x0;
                uStack_50 = 0;
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_058167f8;
                if (lVar6 != 0) {
                  System_Object___ctor_23dfe5c(lVar6,0);
                  *(undefined4 *)(lVar6 + 0x10) = 0;
                  lVar9 = *(long *)(lVar3 + 0x30);
                  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if ((lVar7 != 0) &&
                     (System_Predicate_TextSequenceFonts____ctor_30fe928
                                (lVar7,lVar6,*(undefined8 *)PTR_DAT_057de400,0), lVar9 != 0)) {
                    System_Collections_Generic_List_TextSequenceFonts___Find_24fde88
                              (lVar9,lVar7,*(undefined8 *)PTR_DAT_05776118);
                    plVar10 = (long *)(lVar3 + 0x38);
                    *plVar10 = extraout_x1;
                    FUN_012d0d74(plVar10);
                    puVar2 = PTR_DAT_057af350;
                    puVar1 = PTR_DAT_057974a0;
                    if (*plVar10 != 0) {
                      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                (&uStack_68,*plVar10,*(undefined8 *)PTR_DAT_057faca0);
                      uStack_48 = uStack_60;
                      uStack_50 = uStack_68;
                      plStack_40 = plStack_58;
                      while( true ) {
                        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                          (&uStack_50,*(undefined8 *)puVar2);
                        plVar10 = plStack_40;
                        if ((uVar4 & 1) == 0) {
                          lVar3 = System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                            (&uStack_50,*(undefined8 *)puVar1);
                          return lVar3;
                        }
                        if (plStack_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        lVar6 = UnityEngine_Component__get_gameObject_408b480(plStack_40,0);
                        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
                        (**(code **)(*plVar10 + 0x558))
                                  (plVar10,lVar5,*(undefined8 *)(*plVar10 + 0x560));
                        if (lVar5 == 0) break;
                        Modules_Infrastructure_Utils_TextSequenceAnimator__WarpText_3de5b44
                                  (lVar3,plVar10,*(undefined4 *)(lVar5 + 0x10));
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
LAB_0368f408:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

