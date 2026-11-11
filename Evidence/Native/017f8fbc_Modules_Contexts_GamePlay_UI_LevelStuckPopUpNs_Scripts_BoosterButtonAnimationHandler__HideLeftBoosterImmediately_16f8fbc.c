/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideLeftBoosterImmediately
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideLeftBoosterImmediately (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideLeftBoosterImmediately
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideLeftBoosterImmediately
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideLeftBoosterImmediately_16f8fbc
               (long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0xa8) + 0x54);
    uStack_2c = *(undefined4 *)(param_1 + 0xbc);
    uStack_28 = *(undefined4 *)(param_1 + 0xc0);
    if (iVar1 - 2U < 2) {
      uStack_30 = *(undefined4 *)(param_1 + 0x48);
    }
    else if (iVar1 == 1) {
      uStack_30 = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      uStack_30 = *(undefined4 *)(param_1 + 0xb8);
      if (iVar1 == 0) {
        uStack_2c = *(undefined4 *)(param_1 + 0x34);
      }
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      if (pcRam0000000005c3a620 == (code *)0x0) {
        pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
      }
      (*pcRam0000000005c3a620)(lVar2,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

