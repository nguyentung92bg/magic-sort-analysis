/* IL2CPP: Modules.Contexts.Home.BoatRush.Scripts.UI.BoatRushAnimationConfig$$set_ProgressBarDisappearCurve
void Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig__set_ProgressBarDisappearCurve (Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.BoatRush.Scripts.UI.BoatRushAnimationConfig$$set_ProgressBarDisappearCurve
   void 
   Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig__set_ProgressBarDisappearCurve
   (Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig__set_ProgressBarDisappearCurve_40f5678
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x130) = param_2;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x130U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x130U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

