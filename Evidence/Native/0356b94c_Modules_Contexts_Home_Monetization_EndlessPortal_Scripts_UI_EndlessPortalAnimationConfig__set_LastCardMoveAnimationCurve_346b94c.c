/* IL2CPP: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalAnimationConfig$$set_LastCardMoveAnimationCurve
void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalAnimationConfig__set_LastCardMoveAnimationCurve (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalAnimationConfig_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalAnimationConfig$$set_LastCardMoveAnimationCurve
   void 
   Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalAnimationConfig__set_LastCardMoveAnimationCurve
   (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalAnimationConfig_o*
   __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalAnimationConfig__set_LastCardMoveAnimationCurve_346b94c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0356b948 with catch @ 0356b94c
                       try { // try from 0356b94c to 0366b96f has its CatchHandler @ 0356b724 */
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_2;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0356b944 with catch @ 0356b950
                        */
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

