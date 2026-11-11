/* IL2CPP: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.EndlessPortalV2ConfigModel$$set_FallbackSteps
void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel__set_FallbackSteps (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel_o* __this, System_Collections_Generic_List_EndlessPortalRewardStepModel__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.EndlessPortalV2ConfigModel$$set_FallbackSteps
   void 
   Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel__set_FallbackSteps
   (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel_o* __this,
   System_Collections_Generic_List_EndlessPortalRewardStepModel__o* value, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalV2ConfigModel__set_FallbackSteps_3466d5c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03566d50 with catch @ 03566d5c
                        */
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_2;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03566bf4 with catch @ 03566d60
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

