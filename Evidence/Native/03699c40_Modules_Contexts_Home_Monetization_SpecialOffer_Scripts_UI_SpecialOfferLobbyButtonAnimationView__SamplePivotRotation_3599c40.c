/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$SamplePivotRotation
DG_Tweening_Tween_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SamplePivotRotation (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o* __this, UnityEngine_Transform_o* target, float duration, UnityEngine_AnimationCurve_o* curve, float multiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$SamplePivotRotation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SamplePivotRotation
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o*
   __this, UnityEngine_Transform_o* target, float duration, UnityEngine_AnimationCurve_o* curve,
   float multiplier, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SamplePivotRotation_3599c40
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_057a8640;
  if ((bRam0000000005c32e88 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057ddd30);
    FUN_012d0dc8(PTR_DAT_057a8640);
    bRam0000000005c32e88 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057cc518;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_4;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x10),param_4);
    *(undefined8 *)(lVar4 + 0x18) = param_5;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x18),param_5);
    *(undefined4 *)(lVar4 + 0x20) = param_2;
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      DG_Tweening_TweenCallback_float____ctor_341f244(lVar5,lVar4,*(undefined8 *)PTR_DAT_057ddd30,0)
      ;
      puVar1 = PTR_DAT_05774140;
      if ((bRam0000000005c28455 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05791030,0);
        FUN_012d0dc8(PTR_DAT_057a1538);
        FUN_012d0dc8(PTR_DAT_057815e0);
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_057954e0);
        FUN_012d0dc8(PTR_DAT_057e5750);
        FUN_012d0dc8(PTR_DAT_05806ea8);
        FUN_012d0dc8(PTR_DAT_0579ec48);
        FUN_012d0dc8(PTR_DAT_05774140);
        bRam0000000005c28455 = 1;
      }
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_05791030;
      if (lVar4 != 0) {
        System_Object___ctor_23dfe5c(lVar4,0);
        *(long *)(lVar4 + 0x18) = lVar5;
        FUN_012d0d74((long *)(lVar4 + 0x18),lVar5);
        *(undefined4 *)(lVar4 + 0x10) = 0;
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_057a1538;
        if (lVar5 != 0) {
          DG_Tweening_Core_DOGetter_float____ctor_156d324
                    (lVar5,lVar4,*(undefined8 *)PTR_DAT_057e5750,0);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057815e0;
          puVar1 = PTR_DAT_057606c8;
          if (lVar3 != 0) {
            DG_Tweening_Core_DOSetter_float____ctor_156e614
                      (lVar3,lVar4,*(undefined8 *)PTR_DAT_05806ea8,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar5 = DG_Tweening_DOTween__To_1ed84a4(0x3f800000,param_1,lVar5,lVar3);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_057954e0;
            if (lVar3 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,lVar4,*(undefined8 *)PTR_DAT_0579ec48);
              uVar6 = *(undefined8 *)puVar1;
              if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
                *(long *)(lVar5 + 0x70) = lVar3;
                FUN_012d0d74((long *)(lVar5 + 0x70),lVar3,uVar6);
              }
              return lVar5;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

