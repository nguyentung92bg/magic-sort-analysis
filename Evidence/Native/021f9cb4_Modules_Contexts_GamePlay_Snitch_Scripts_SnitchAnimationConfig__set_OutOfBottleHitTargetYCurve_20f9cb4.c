/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$set_OutOfBottleHitTargetYCurve
void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_OutOfBottleHitTargetYCurve (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$set_OutOfBottleHitTargetYCurve
   void 
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_OutOfBottleHitTargetYCurve
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__set_OutOfBottleHitTargetYCurve_20f9cb4
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x318) = param_2;
                    /* catch() { ... } // from try @ 021f9c38 with catch @ 021f9cbc
                       catch() { ... } // from try @ 021f9cac with catch @ 021f9cbc */
                    /* try { // try from 021f9cc0 to 022f9cc3 has its CatchHandler @ 021f9ccc */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x318U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x318U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

