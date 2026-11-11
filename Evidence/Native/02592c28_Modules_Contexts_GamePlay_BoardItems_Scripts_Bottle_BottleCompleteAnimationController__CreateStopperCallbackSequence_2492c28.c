/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$CreateStopperCallbackSequence
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateStopperCallbackSequence (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, bool useNewParticles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$CreateStopperCallbackSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateStopperCallbackSequence
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   bool useNewParticles, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateStopperCallbackSequence_2492c28
               (undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057cc2a8;
  if ((bRam0000000005c2b2bc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579b9a0);
    FUN_012d0dc8(PTR_DAT_057cc2a8);
    bRam0000000005c2b2bc = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_1;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x10),param_1);
    *(byte *)(lVar4 + 0x18) = param_2 & 1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_0579b9a0,0);
      uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar5,0,1);
      if ((lVar6 != 0) && ((uVar3 & 1) != 0)) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        DG_Tweening_Sequence__DoInsertCallback_1edffe8(*(undefined4 *)(lVar5 + 0xa0),lVar5,lVar6);
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

