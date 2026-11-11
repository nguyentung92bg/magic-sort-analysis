/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.TargetBreakParticleController$$ApplySeed
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__ApplySeed (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController_o* __this, UnityEngine_ParticleSystem_o* ps, uint32_t seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.TargetBreakParticleController$$ApplySeed
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__ApplySeed
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController_o* __this,
   UnityEngine_ParticleSystem_o* ps, uint32_t seed, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__ApplySeed_274b238
               (undefined8 param_1,long param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    UnityEngine_ParticleSystem__Stop_3abc6a4(param_2,0);
    UnityEngine_ParticleSystem__set_useAutoRandomSeed_3abc440(param_2,0,0);
    if (pcRam0000000005c35e18 == (code *)0x0) {
      pcRam0000000005c35e18 = (code *)FUN_012d0d84(&UNK_043e0128);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e18)(param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

