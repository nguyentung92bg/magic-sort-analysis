/* IL2CPP: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI.SkyJumpWithStageAnimationConfig$$set_UserCountScaleInCurve
void Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageAnimationConfig__set_UserCountScaleInCurve (Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI.SkyJumpWithStageAnimationConfig$$set_UserCountScaleInCurve
   void 
   Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageAnimationConfig__set_UserCountScaleInCurve
   (Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageAnimationConfig__set_UserCountScaleInCurve_2339d60
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x200) = param_2;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x200U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x200U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

