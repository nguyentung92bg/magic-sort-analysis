/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.ParticleTrigger$$StopParticle
void Modules_Contexts_GamePlay_Boosters_Scripts_ParticleTrigger__StopParticle (Modules_Contexts_GamePlay_Boosters_Scripts_ParticleTrigger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.ParticleTrigger$$StopParticle
   void Modules_Contexts_GamePlay_Boosters_Scripts_ParticleTrigger__StopParticle
   (Modules_Contexts_GamePlay_Boosters_Scripts_ParticleTrigger_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_ParticleTrigger__StopParticle_1e9cb3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (pcRam0000000005c35e38 == (code *)0x0) {
      pcRam0000000005c35e38 = (code *)FUN_012d0d84(&UNK_043e023f,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e38)(lVar1,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

