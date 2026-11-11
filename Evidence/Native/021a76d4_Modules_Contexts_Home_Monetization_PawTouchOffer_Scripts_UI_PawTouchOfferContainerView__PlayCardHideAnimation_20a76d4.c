/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.UI.PawTouchOfferContainerView$$PlayCardHideAnimation
DG_Tweening_Sequence_o* Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__PlayCardHideAnimation (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.UI.PawTouchOfferContainerView$$PlayCardHideAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__PlayCardHideAnimation
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView_o*
   __this, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__PlayCardHideAnimation_20a76d4
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000005c294c4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05783ff8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c294c4 = 1;
  }
  lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
  puVar1 = PTR_DAT_057815e0;
  lVar5 = *(long *)(param_1 + 0x60);
  if ((lVar5 != 0) && (lVar2 != 0)) {
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar5 + 0x80),*(undefined4 *)(lVar5 + 0x84),
               *(undefined4 *)(lVar5 + 0x88),lVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
    if (*(long *)(param_1 + 0x60) != 0) {
      DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                (*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x6c),uVar3,0);
      uVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
      lVar2 = *(long *)(param_1 + 0x60);
      if (lVar2 != 0) {
        uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(undefined4 *)(lVar2 + 0x8c),*(undefined4 *)(lVar2 + 0x90),
                           *(undefined4 *)(lVar2 + 0x94),*(undefined4 *)(lVar2 + 0x70),uVar4,0);
        puVar1 = PTR_DAT_057606c8;
        if (*(long *)(param_1 + 0x60) != 0) {
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x78),
                             *(undefined8 *)PTR_DAT_057874c0);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
          lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar2,param_1,*(undefined8 *)PTR_DAT_05783ff8,0);
            DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar3,lVar2,0);
            return uVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

