/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideBoosterButtonsImmediatelyAndKillTweens
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsImmediatelyAndKillTweens (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideBoosterButtonsImmediatelyAndKillTweens
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsImmediatelyAndKillTweens
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsImmediatelyAndKillTweens_16f911c
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x118) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x118),0,0);
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x110),0,0);
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x120),0,0);
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x128),0,0);
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  FUN_012d0d74(param_1 + 0x118,0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_012d0d74(param_1 + 0x110,0);
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_012d0d74(param_1 + 0x120,0);
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_012d0d74(param_1 + 0x128,0);
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideLeftBoosterImmediately_16f8fbc
            ();
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideMiddleBoosterImmediately_16f9018
            (param_1);
  if (*(long *)(param_1 + 0xa8) != 0) {
    switch(*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x54)) {
    case 0:
      break;
    case 1:
    case 3:
      break;
    case 2:
    }
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a620 == (code *)0x0) {
        pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
      }
      (*pcRam0000000005c3a620)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

