/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.DuckFestivalProgressAnimationConfig$$set_FirstShowPopupScrollCurve
void Modules_Contexts_Home_DuckFestival_Scripts_UI_DuckFestivalProgressAnimationConfig__set_FirstShowPopupScrollCurve (Modules_Contexts_Home_DuckFestival_Scripts_UI_DuckFestivalProgressAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.DuckFestivalProgressAnimationConfig$$set_FirstShowPopupScrollCurve
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_DuckFestivalProgressAnimationConfig__set_FirstShowPopupScrollCurve
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_DuckFestivalProgressAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_DuckFestivalProgressAnimationConfig__set_FirstShowPopupScrollCurve_1b9d7c4
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x138) = param_2;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x138U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x138U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

