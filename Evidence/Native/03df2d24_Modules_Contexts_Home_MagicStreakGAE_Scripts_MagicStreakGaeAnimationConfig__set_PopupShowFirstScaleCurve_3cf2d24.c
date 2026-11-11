/* IL2CPP: Modules.Contexts.Home.MagicStreakGAE.Scripts.MagicStreakGaeAnimationConfig$$set_PopupShowFirstScaleCurve
void Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeAnimationConfig__set_PopupShowFirstScaleCurve (Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakGAE.Scripts.MagicStreakGaeAnimationConfig$$set_PopupShowFirstScaleCurve
   void 
   Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeAnimationConfig__set_PopupShowFirstScaleCurve
   (Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeAnimationConfig_o* __this,
   UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeAnimationConfig__set_PopupShowFirstScaleCurve_3cf2d24
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df2bbc with catch @ 03df2d24
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df2b8c with catch @ 03df2d28
                        */
  *(undefined8 *)(param_1 + 0x160) = param_2;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df2b68 with catch @ 03df2d2c
                        */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x160U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x160U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

