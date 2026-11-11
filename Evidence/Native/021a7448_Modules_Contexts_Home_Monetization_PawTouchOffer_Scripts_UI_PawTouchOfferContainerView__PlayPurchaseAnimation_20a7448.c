/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.UI.PawTouchOfferContainerView$$PlayPurchaseAnimation
DG_Tweening_Sequence_o* Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__PlayPurchaseAnimation (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.UI.PawTouchOfferContainerView$$PlayPurchaseAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__PlayPurchaseAnimation
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView_o*
   __this, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__PlayPurchaseAnimation_20a7448
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000005c294c3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057ad570);
    FUN_012d0dc8(PTR_DAT_05764e48);
    FUN_012d0dc8(PTR_DAT_05818cd8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c294c3 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x50),0);
    lVar6 = *(long *)(param_1 + 0x60);
    if ((lVar6 != 0) && (lVar3 != 0)) {
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                 *(undefined4 *)(lVar6 + 0x30),lVar3,0);
      puVar2 = PTR_DAT_057815e0;
      lVar3 = *(long *)(param_1 + 0x60);
      if ((lVar3 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar3 + 0x50),*(undefined4 *)(lVar3 + 0x54),
                   *(undefined4 *)(lVar3 + 0x58),*(long *)(param_1 + 0x48),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
        if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x50) != 0)) {
          uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x18);
          uVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x50),0);
          lVar3 = *(long *)(param_1 + 0x60);
          if (lVar3 != 0) {
            uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                              (*(undefined4 *)(lVar3 + 0x34),*(undefined4 *)(lVar3 + 0x38),
                               *(undefined4 *)(lVar3 + 0x3c),*(undefined4 *)(lVar3 + 0x1c),uVar5,0);
            puVar2 = PTR_DAT_057874c0;
            if (*(long *)(param_1 + 0x60) != 0) {
              uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),
                                 *(undefined8 *)PTR_DAT_057874c0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar7,uVar4,uVar5,0);
              puVar1 = PTR_DAT_057606c8;
              lVar3 = *(long *)(param_1 + 0x60);
              if (lVar3 != 0) {
                fVar8 = *(float *)(lVar3 + 0x18);
                fVar9 = *(float *)(lVar3 + 0x1c);
                lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                if (lVar3 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar3,param_1,*(undefined8 *)PTR_DAT_057ad570,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                            (fVar8 + fVar9,uVar4,lVar3,0);
                  if (*(long *)(param_1 + 0x60) != 0) {
                    uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x40);
                    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar3 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar3,param_1,*(undefined8 *)PTR_DAT_05764e48,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar7,uVar4,lVar3,0);
                      lVar3 = *(long *)(param_1 + 0x60);
                      if (lVar3 != 0) {
                        uVar7 = *(undefined4 *)(lVar3 + 0x40);
                        uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                          (*(undefined4 *)(lVar3 + 0x5c),
                                           *(undefined4 *)(lVar3 + 0x60),
                                           *(undefined4 *)(lVar3 + 100),
                                           *(undefined4 *)(lVar3 + 0x44),
                                           *(undefined8 *)(param_1 + 0x48),0);
                        if (*(long *)(param_1 + 0x60) != 0) {
                          uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                            (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x48)
                                             ,*(undefined8 *)puVar2);
                          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar7,uVar4,uVar5,0);
                          if (*(long *)(param_1 + 0x60) != 0) {
                            uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x68);
                            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                            if (lVar3 != 0) {
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar3,param_1,*(undefined8 *)PTR_DAT_05818cd8,0);
                              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                        (uVar7,uVar4,lVar3,0);
                              return uVar4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

