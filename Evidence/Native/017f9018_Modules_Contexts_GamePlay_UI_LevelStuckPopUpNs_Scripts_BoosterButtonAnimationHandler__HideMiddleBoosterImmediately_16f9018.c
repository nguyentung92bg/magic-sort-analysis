/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideMiddleBoosterImmediately
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideMiddleBoosterImmediately (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideMiddleBoosterImmediately
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideMiddleBoosterImmediately
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideMiddleBoosterImmediately_16f9018
               (long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0xd0);
    uVar2 = *(undefined4 *)(param_1 + 0xd4);
    switch(*(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x54)) {
    case 0:
    case 3:
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      break;
    case 1:
      uVar3 = *(undefined4 *)(param_1 + 0x3c);
      break;
    case 2:
      uVar3 = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Transform__set_localPosition_4092ce0
                (uVar3,uVar2,*(undefined4 *)(param_1 + 0xd8),*(long *)(param_1 + 0x20),0);
      lVar1 = *(long *)(param_1 + 0x88);
      if (lVar1 != 0) {
        if (pcRam0000000005c3a620 == (code *)0x0) {
          pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
        }
        (*pcRam0000000005c3a620)(lVar1,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

