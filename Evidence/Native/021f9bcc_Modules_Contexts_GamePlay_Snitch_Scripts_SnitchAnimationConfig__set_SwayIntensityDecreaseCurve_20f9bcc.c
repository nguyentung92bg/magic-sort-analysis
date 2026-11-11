/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$set_SwayIntensityDecreaseCurve
void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SwayIntensityDecreaseCurve (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$set_SwayIntensityDecreaseCurve
   void 
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SwayIntensityDecreaseCurve
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_SwayIntensityDecreaseCurve_20f9bcc
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x2d8) = param_2;
                    /* try { // try from 021f9bd8 to 022f9be3 has its CatchHandler @ 021f9c20 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x2d8U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x2d8U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

