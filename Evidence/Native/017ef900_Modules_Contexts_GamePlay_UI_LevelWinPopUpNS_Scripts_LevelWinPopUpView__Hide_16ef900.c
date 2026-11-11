/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUpView$$Hide
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Hide (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUpView$$Hide
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Hide
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Hide_16ef900
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xb0) + 0x88);
    if (lVar1 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar1,0,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__Hide_16f0ab0();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinContinueOrQuitButton__Hide_16edf18
                ();
      lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar1 != 0) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

