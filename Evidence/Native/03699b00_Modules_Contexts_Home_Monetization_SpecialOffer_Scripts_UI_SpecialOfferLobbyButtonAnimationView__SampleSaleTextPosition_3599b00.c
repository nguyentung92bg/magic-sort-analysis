/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$SampleSaleTextPosition
DG_Tweening_Tween_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SampleSaleTextPosition (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$SampleSaleTextPosition
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SampleSaleTextPosition
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView__SampleSaleTextPosition_3599b00
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((bRam0000000005c32e89 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f4600);
    FUN_012d0dc8(PTR_DAT_057cc518);
    bRam0000000005c32e89 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
    if (lVar5 != 0) {
      DG_Tweening_TweenCallback_float____ctor_341f244
                (lVar5,param_1,*(undefined8 *)PTR_DAT_057f4600,0);
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
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_05791030;
      if (lVar3 != 0) {
        System_Object___ctor_23dfe5c(lVar3,0);
        *(long *)(lVar3 + 0x18) = lVar5;
        FUN_012d0d74((long *)(lVar3 + 0x18),lVar5);
        *(undefined4 *)(lVar3 + 0x10) = 0;
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_057a1538;
        if (lVar5 != 0) {
          DG_Tweening_Core_DOGetter_float____ctor_156d324
                    (lVar5,lVar3,*(undefined8 *)PTR_DAT_057e5750,0);
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057815e0;
          puVar1 = PTR_DAT_057606c8;
          if (lVar4 != 0) {
            DG_Tweening_Core_DOSetter_float____ctor_156e614
                      (lVar4,lVar3,*(undefined8 *)PTR_DAT_05806ea8,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar5 = DG_Tweening_DOTween__To_1ed84a4(0x3f800000,uVar7,lVar5,lVar4);
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_057954e0;
            if (lVar4 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_0579ec48);
              uVar6 = *(undefined8 *)puVar1;
              if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
                *(long *)(lVar5 + 0x70) = lVar4;
                FUN_012d0d74((long *)(lVar5 + 0x70),lVar4,uVar6);
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

