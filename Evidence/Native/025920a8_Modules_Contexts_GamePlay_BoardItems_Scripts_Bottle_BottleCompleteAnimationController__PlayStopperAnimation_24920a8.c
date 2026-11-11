/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$PlayStopperAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayStopperAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, int32_t bottleHeight, bool hasAnimationBlockingBlocker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$PlayStopperAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayStopperAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   int32_t bottleHeight, bool hasAnimationBlockingBlocker, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayStopperAnimation_24920a8
          (undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_057f6518;
  puVar2 = PTR_DAT_057815e0;
  if (param_4 != 4) {
    if ((bRam0000000005c2b2b6 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057815e0);
      FUN_012d0dc8(PTR_DAT_057606c8);
      FUN_012d0dc8(PTR_DAT_05803048);
      FUN_012d0dc8(PTR_DAT_057f6518);
      bRam0000000005c2b2b6 = 1;
    }
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      System_Object___ctor_23dfe5c(lVar5,0);
      *(long *)(lVar5 + 0x18) = param_3;
      FUN_012d0d74((long *)(lVar5 + 0x18),param_3);
      puVar2 = PTR_DAT_057815e0;
      lVar6 = *(long *)(param_3 + 0x28);
      if (lVar6 != 0) {
        if (param_4 == 0xc) {
          uVar7 = *(undefined4 *)(lVar6 + 0x60);
        }
        else {
          uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetStopperDelay_24925a4
                            (lVar6,param_4);
        }
        *(undefined4 *)(lVar5 + 0x10) = uVar7;
        puVar1 = PTR_DAT_057606c8;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar6 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar5,*(undefined8 *)PTR_DAT_05803048,0);
          DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar8,lVar6,0);
          return uVar8;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b2b7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cec18);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b2b7 = 1;
  }
  uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__GetStopperDelay_2492600
                    (param_3,4);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_3 + 0x38) == 0) goto LAB_02592290;
  UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_3 + 0x38),0);
  if ((param_5 & 1) == 0) {
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateTwitchSequence_249262c
                      (param_3);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_02592290;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetParticleDelay_2492840
              (*(long *)(param_3 + 0x28),4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar3,uVar4,0);
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateInitialRiseTween_249289c
                      (param_2,param_3);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_02592290;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetParticleDelay_2492840
              (*(long *)(param_3 + 0x28),4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar3,uVar4,0);
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
  if (lVar5 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_3,*(undefined8 *)PTR_DAT_057cec18,0);
    DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar3,lVar5,0);
    if (*(long *)(param_3 + 0x28) != 0) {
      uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetMoveUpDelay_2492928
                        (*(long *)(param_3 + 0x28),4);
      uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateMoveAndScaleSequence_2492984
                        (param_2,param_3,param_5 & 1);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar9,uVar3,uVar4,0);
      uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateStopperCallbackSequence_2492c28
                        (param_3,1);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar8,uVar3,uVar4,0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(_UNK_0438e938,uVar3,0);
      return uVar3;
    }
  }
LAB_02592290:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

