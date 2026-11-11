/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$Init
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__Init (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this, Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_GameUIViewConfig_o* viewConfig, Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o* animationConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$Init
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__Init
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this,
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_GameUIViewConfig_o* viewConfig,
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o*
   animationConfig, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__Init_16f9610
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x68) = param_2;
  FUN_012d0d74();
  puVar4 = (undefined8 *)(param_1 + 0x60);
  *puVar4 = param_3;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

