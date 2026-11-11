/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$GetStopperDelay
float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__GetStopperDelay (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleCompleteAnimationController$$GetStopperDelay
   float 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__GetStopperDelay
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController_o* __this,
   int32_t bottleHeight, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__GetStopperDelay_2492600
          (long param_1,int param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (param_2 == 0xc) {
    return *(undefined4 *)(lVar1 + 0x60);
  }
  lVar4 = *(long *)(lVar1 + 0x90);
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x18)) {
      lVar3 = 0;
      do {
        lVar5 = *(long *)(lVar4 + 0x20 + lVar3 * 8);
        if (lVar5 == 0) goto LAB_025925fc;
        if (*(int *)(lVar5 + 0x10) == param_2) {
          puVar2 = (undefined4 *)(lVar5 + 0x14);
          goto LAB_025925f0;
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(lVar4 + 0x18));
    }
    puVar2 = (undefined4 *)(lVar1 + 0x60);
LAB_025925f0:
    return *puVar2;
  }
LAB_025925fc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

