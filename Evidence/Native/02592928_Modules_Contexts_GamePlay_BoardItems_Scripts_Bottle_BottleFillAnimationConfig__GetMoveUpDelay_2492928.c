/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleFillAnimationConfig$$GetMoveUpDelay
float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetMoveUpDelay (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig_o* __this, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleFillAnimationConfig$$GetMoveUpDelay
   float 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetMoveUpDelay
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig_o* __this, int32_t
   height, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetMoveUpDelay_2492928
          (long param_1,int param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      lVar2 = 0;
      do {
        lVar4 = *(long *)(lVar3 + 0x20 + lVar2 * 8);
        if (lVar4 == 0) goto LAB_02592980;
        if (*(int *)(lVar4 + 0x10) == param_2) {
          puVar1 = (undefined4 *)(lVar4 + 0x1c);
          goto LAB_02592974;
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)(lVar3 + 0x18));
    }
    puVar1 = (undefined4 *)(param_1 + 0x6c);
LAB_02592974:
    return *puVar1;
  }
LAB_02592980:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

