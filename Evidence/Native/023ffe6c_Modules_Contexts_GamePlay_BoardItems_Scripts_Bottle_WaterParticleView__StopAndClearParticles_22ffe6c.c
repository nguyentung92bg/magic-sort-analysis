/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WaterParticleView$$StopAndClearParticles
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__StopAndClearParticles (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WaterParticleView$$StopAndClearParticles
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__StopAndClearParticles
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__StopAndClearParticles_22ffe6c
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    UnityEngine_ParticleSystem__Stop_3abc608(*(long *)(param_1 + 0x18),1,0,0);
    if (*(long *)(param_1 + 0x40) != 0) {
      UnityEngine_ParticleSystem__Stop_3abc608(*(long *)(param_1 + 0x40),1,0,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_ParticleSystem__Stop_3abc608(*(long *)(param_1 + 0x28),1,0,0);
        lVar1 = *(long *)(param_1 + 0x50);
        if (lVar1 != 0) {
          if (pcRam0000000005c35e38 == (code *)0x0) {
            pcRam0000000005c35e38 = (code *)FUN_012d0d84(&UNK_043e023f,1,0);
          }
                    /* WARNING: Could not recover jumptable at 0x03bbc658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c35e38)(lVar1,1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

