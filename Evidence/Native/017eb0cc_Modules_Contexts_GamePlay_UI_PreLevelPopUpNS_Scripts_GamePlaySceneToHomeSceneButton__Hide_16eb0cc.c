/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.GamePlaySceneToHomeSceneButton$$Hide
void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__Hide (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.GamePlaySceneToHomeSceneButton$$Hide
   void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__Hide
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__Hide_16eb0cc
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x38),0,0);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

