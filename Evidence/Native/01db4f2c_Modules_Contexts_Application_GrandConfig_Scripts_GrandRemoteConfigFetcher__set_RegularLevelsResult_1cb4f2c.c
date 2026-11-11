/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigFetcher$$set_RegularLevelsResult
void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__set_RegularLevelsResult (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher_o* __this, Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigResponse_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigFetcher$$set_RegularLevelsResult
   void 
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__set_RegularLevelsResult
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher_o* __this,
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigResponse_o* value, const
   MethodInfo* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher__set_RegularLevelsResult_1cb4f2c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 01db4f2c to 01eb4f6b has its CatchHandler @ 01db50dc */
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_2;
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

