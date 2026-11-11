/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideBoosterButtonsImmediately
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsImmediately (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideBoosterButtonsImmediately
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsImmediately
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideBoosterButtonsImmediately_16f88ac
               (long param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideLeftBoosterImmediately_16f8fbc
            ();
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideMiddleBoosterImmediately_16f9018
            (param_1);
  if (*(long *)(param_1 + 0xa8) != 0) {
    uStack_30 = *(undefined4 *)(param_1 + 0xc4);
    uStack_2c = *(undefined4 *)(param_1 + 200);
    uStack_28 = *(undefined4 *)(param_1 + 0xcc);
    switch(*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x54)) {
    case 0:
      uStack_2c = *(undefined4 *)(param_1 + 0x34);
      break;
    case 1:
    case 3:
      uStack_30 = *(undefined4 *)(param_1 + 0x3c);
      break;
    case 2:
      uStack_30 = *(undefined4 *)(param_1 + 0x48);
    }
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a620 == (code *)0x0) {
        pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
      }
      (*pcRam0000000005c3a620)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

