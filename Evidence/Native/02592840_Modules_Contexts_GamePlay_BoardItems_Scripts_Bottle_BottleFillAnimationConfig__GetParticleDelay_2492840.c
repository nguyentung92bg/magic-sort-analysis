/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleFillAnimationConfig$$GetParticleDelay
float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetParticleDelay (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig_o* __this, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleFillAnimationConfig$$GetParticleDelay
   float 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetParticleDelay
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig_o* __this, int32_t
   height, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleFillAnimationConfig__GetParticleDelay_2492840
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
        if (lVar4 == 0) goto LAB_02592898;
        if (*(int *)(lVar4 + 0x10) == param_2) {
          puVar1 = (undefined4 *)(lVar4 + 0x18);
          goto LAB_0259288c;
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)(lVar3 + 0x18));
    }
    puVar1 = (undefined4 *)(param_1 + 0x68);
LAB_0259288c:
    return *puVar1;
  }
LAB_02592898:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

