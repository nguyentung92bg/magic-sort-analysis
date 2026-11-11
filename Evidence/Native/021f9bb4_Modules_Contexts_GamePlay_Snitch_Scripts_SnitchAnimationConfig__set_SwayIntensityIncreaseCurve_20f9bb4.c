/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$set_SwayIntensityIncreaseCurve
void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SwayIntensityIncreaseCurve (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$set_SwayIntensityIncreaseCurve
   void 
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SwayIntensityIncreaseCurve
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SwayIntensityIncreaseCurve_20f9bb4
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x2d0) = param_2;
                    /* try { // try from 021f9bc0 to 022f9bd7 has its CatchHandler @ 021f9b3c */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x2d0U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x2d0U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

