/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$SetParentInitialPositions
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__SetParentInitialPositions (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this, int32_t bottleRowCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$SetParentInitialPositions
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__SetParentInitialPositions
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this,
   int32_t bottleRowCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__SetParentInitialPositions_16f9640
               (long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (lVar1 == 0) goto LAB_017f96b8;
    if (param_2 == 3) {
      uVar3 = *(undefined4 *)(lVar1 + 0x38);
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
    }
    else {
      uVar3 = *(undefined4 *)(lVar1 + 0x2c);
      uVar2 = *(undefined8 *)(lVar1 + 0x24);
    }
    *(undefined4 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  else {
    if (lVar1 == 0) {
LAB_017f96b8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar1 + 0x44);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  return;
}

