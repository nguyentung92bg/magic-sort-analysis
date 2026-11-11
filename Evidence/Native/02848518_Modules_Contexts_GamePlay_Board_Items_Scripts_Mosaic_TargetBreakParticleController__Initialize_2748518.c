/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.TargetBreakParticleController$$Initialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__Initialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.TargetBreakParticleController$$Initialize
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__Initialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController_o* __this,
   UnityEngine_Color_o color, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__Initialize_2748518
               (long param_1)

{
  long lVar1;
  
  Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SetColor_274ae8c
            ();
  Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SyncSeeds_274b0a4
            (param_1);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a310 == (code *)0x0) {
      pcRam0000000005c3a310 = (code *)FUN_012d0d84(&UNK_043edb77);
    }
                    /* WARNING: Could not recover jumptable at 0x0418d7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a310)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

