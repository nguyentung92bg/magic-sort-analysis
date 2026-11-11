/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$HideLevelTextImmediately
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__HideLevelTextImmediately (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$HideLevelTextImmediately
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__HideLevelTextImmediately
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__HideLevelTextImmediately_16fa10c
               (long param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    UnityEngine_Transform__set_localPosition_4092ce0
              (*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x78),*(long *)(param_1 + 0x40),0);
    if (*(long *)(param_1 + 0x48) != 0) {
      UnityEngine_Transform__set_localPosition_4092ce0
                (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c),*(long *)(param_1 + 0x48),0);
      lVar1 = *(long *)(param_1 + 0x50);
      if (lVar1 != 0) {
        uStack_2c = *(undefined4 *)(param_1 + 0x34);
        uStack_28 = *(undefined4 *)(param_1 + 0x38);
        uStack_30 = *(undefined4 *)(param_1 + 0x30);
        if (pcRam0000000005c3a620 == (code *)0x0) {
          pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
        }
        (*pcRam0000000005c3a620)(lVar1,&uStack_30);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

