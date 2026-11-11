/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.UI.PawTouchOfferContainerView$$<Show>b__14_0
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView___Show_b__14_0 (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x021a7908) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.UI.PawTouchOfferContainerView$$<Show>b__14_0
   void 
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView___Show_b__14_0
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView___Show_b__14_0_20a7a3c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = param_1;
  if ((bRam0000000005c294c5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057db6f0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05809250);
    lVar3 = FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c294c5 = 1;
  }
  puVar1 = PTR_DAT_057815e0;
  if (*(char *)(param_1 + 0x71) != '\0') {
    return lVar3;
  }
  *(undefined1 *)(param_1 + 0x71) = 1;
  puVar2 = PTR_DAT_057fc1d0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_057606c8;
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  lVar3 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                    (uVar4,uVar5,*(undefined8 *)puVar2);
  uVar4 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__PlayCardHideAnimation_20a76d4
                    (param_1);
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar3,uVar4,0);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_05809250;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057db6f0,0);
  uVar4 = *(undefined8 *)puVar1;
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    *(long *)(lVar3 + 0x88) = lVar6;
    FUN_012d0d74((long *)(lVar3 + 0x88),lVar6,uVar4);
  }
  return lVar3;
}

