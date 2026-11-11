/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$PlayVariantCompleteAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayVariantCompleteAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, int32_t bottleHeight, bool hasAnimationBlockingBlocker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$PlayVariantCompleteAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayVariantCompleteAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   int32_t bottleHeight, bool hasAnimationBlockingBlocker, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayVariantCompleteAnimation_24920bc
          (undefined1 param_1 [16],undefined8 param_2,long param_3,undefined4 param_4,uint param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b2b7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cec18);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b2b7 = 1;
  }
  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__GetStopperDelay_2492600
                    (param_3,param_4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_3 + 0x38) == 0) goto LAB_02592290;
  UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_3 + 0x38),0);
  if ((param_5 & 1) == 0) {
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateTwitchSequence_249262c
                      (param_3);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_02592290;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetParticleDelay_2492840
              (*(long *)(param_3 + 0x28),param_4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar2,uVar3,0);
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateInitialRiseTween_249289c
                      (param_2,param_3);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_02592290;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetParticleDelay_2492840
              (*(long *)(param_3 + 0x28),param_4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar2,uVar3,0);
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_3,*(undefined8 *)PTR_DAT_057cec18,0);
    DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar2,lVar4,0);
    if (*(long *)(param_3 + 0x28) != 0) {
      uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetMoveUpDelay_2492928
                        (*(long *)(param_3 + 0x28),param_4);
      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateMoveAndScaleSequence_2492984
                        (param_2,param_3,param_5 & 1);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar6,uVar2,uVar3,0);
      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateStopperCallbackSequence_2492c28
                        (param_3,1);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar5,uVar2,uVar3,0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(_UNK_0438e938,uVar2,0);
      return uVar2;
    }
  }
LAB_02592290:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

