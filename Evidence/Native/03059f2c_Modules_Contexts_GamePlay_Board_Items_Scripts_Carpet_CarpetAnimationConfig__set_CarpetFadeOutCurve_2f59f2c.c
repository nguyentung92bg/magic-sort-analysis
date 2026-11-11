/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetAnimationConfig$$set_CarpetFadeOutCurve
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetAnimationConfig__set_CarpetFadeOutCurve (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetAnimationConfig$$set_CarpetFadeOutCurve
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetAnimationConfig__set_CarpetFadeOutCurve
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetAnimationConfig__set_CarpetFadeOutCurve_2f59f2c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x168) = param_2;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x168U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x168U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

