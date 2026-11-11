/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$PlayIntroAnimationIfNeeded
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__PlayIntroAnimationIfNeeded (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$PlayIntroAnimationIfNeeded
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__PlayIntroAnimationIfNeeded
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__PlayIntroAnimationIfNeeded_35907f4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x1;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if ((bRam0000000005c32e2d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057771d8);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0577bc68);
    FUN_012d0dc8(PTR_DAT_0579c288);
    bRam0000000005c32e2d = 1;
  }
  lVar8 = *(long *)(param_1 + 0xa8);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x29) == '\0') {
      *(undefined1 *)(lVar8 + 0x29) = 1;
      if (*(long *)(param_1 + 0x80) != 0) {
        UnityEngine_Animation__Play_1f7a100
                  (*(long *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),0);
        puVar1 = PTR_DAT_057606c8;
        if (*(long *)(param_1 + 0x98) != 0) {
          Modules_Infrastructure_Utils_TextSequenceAnimator__SetText_3de58d4
                    (*(long *)(param_1 + 0x98),**(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8),0
                     ,0);
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0577bc68;
          if (lVar8 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar8,param_1,*(undefined8 *)PTR_DAT_057771d8,0);
            lVar8 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04359fc8,lVar8,1,0);
            uVar7 = *(undefined8 *)puVar1;
            if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
              *(long *)(lVar8 + 0x30) = param_1;
              FUN_012d0d74((long *)(lVar8 + 0x30),param_1,uVar7);
            }
            return lVar8;
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
        lVar8 = *(long *)(param_1 + 0x98);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar3 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                          (*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_05815110;
        if (lVar8 != 0) {
          if ((bRam0000000005c37e94 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057974a0,lVar3,0,0);
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
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_058167f8;
          if (lVar4 != 0) {
            System_Object___ctor_23dfe5c(lVar4,0);
            *(undefined4 *)(lVar4 + 0x10) = 0;
            lVar9 = *(long *)(lVar8 + 0x30);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if ((lVar5 != 0) &&
               (System_Predicate_TextSequenceFonts____ctor_30fe928
                          (lVar5,lVar4,*(undefined8 *)PTR_DAT_057de400,0), lVar9 != 0)) {
              System_Collections_Generic_List_TextSequenceFonts___Find_24fde88
                        (lVar9,lVar5,*(undefined8 *)PTR_DAT_05776118);
              plVar10 = (long *)(lVar8 + 0x38);
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
                  uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_50,*(undefined8 *)puVar2);
                  plVar10 = plStack_40;
                  if ((uVar6 & 1) == 0) {
                    lVar8 = System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                      (&uStack_50,*(undefined8 *)puVar1);
                    return lVar8;
                  }
                  if (plStack_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar4 = UnityEngine_Component__get_gameObject_408b480(plStack_40,0);
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
                  (**(code **)(*plVar10 + 0x558))(plVar10,lVar3,*(undefined8 *)(*plVar10 + 0x560));
                  if (lVar3 == 0) break;
                  Modules_Infrastructure_Utils_TextSequenceAnimator__WarpText_3de5b44
                            (lVar8,plVar10,*(undefined4 *)(lVar3 + 0x10));
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

