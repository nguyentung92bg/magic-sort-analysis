/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$set_SitMoveYCurve
void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SitMoveYCurve (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$set_SitMoveYCurve
   void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SitMoveYCurve
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SitMoveYCurve_20f98a4
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
                    /* try { // try from 021f98a4 to 022f98d3 has its CatchHandler @ 021f991c */
  *(undefined8 *)(param_1 + 0x1e0) = param_2;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x1e0U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x1e0U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

