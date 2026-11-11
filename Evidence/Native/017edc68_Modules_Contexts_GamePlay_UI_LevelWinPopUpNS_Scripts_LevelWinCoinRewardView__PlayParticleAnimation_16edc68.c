/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinCoinRewardView$$PlayParticleAnimation
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__PlayParticleAnimation (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinCoinRewardView$$PlayParticleAnimation
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__PlayParticleAnimation
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__PlayParticleAnimation_16edc68
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000005c35e30 == (code *)0x0) {
      pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e30)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

