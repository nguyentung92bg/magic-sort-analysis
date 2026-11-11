/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$CreateInitialRiseTween
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateInitialRiseTween (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, float startY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$CreateInitialRiseTween
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateInitialRiseTween
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   float startY, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__CreateInitialRiseTween_249289c
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam0000000005c2b2b9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c2b2b9 = 1;
  }
  puVar1 = PTR_DAT_05770998;
  if (*(long *)(param_2 + 0x28) != 0) {
    lVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                      (*(float *)(*(long *)(param_2 + 0x28) + 0x88) * _UNK_04339cd0 + param_1,
                       _UNK_04321760,*(undefined8 *)(param_2 + 0x38),0,0);
    uVar4 = *(undefined8 *)puVar1;
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
      *(undefined4 *)(lVar3 + 0xb4) = 5;
      uVar2 = DG_Tweening_Core_Easing_EaseManager__IsFlashEase_333605c(5,0,uVar4);
      if ((uVar2 & 1) != 0) {
        fVar5 = -2.1474836e+09;
        if (*(float *)(lVar3 + 0xc0) != INFINITY) {
          fVar5 = (float)(int)*(float *)(lVar3 + 0xc0);
        }
        *(float *)(lVar3 + 0xc0) = fVar5;
      }
      *(undefined8 *)(lVar3 + 0xb8) = 0;
      FUN_012d0d74((undefined8 *)(lVar3 + 0xb8),0);
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

