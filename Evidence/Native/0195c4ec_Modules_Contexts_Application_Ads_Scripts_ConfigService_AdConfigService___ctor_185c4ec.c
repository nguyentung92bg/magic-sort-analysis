/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$.ctor
void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService___ctor (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigRemoteService_o* adConfigRemoteService, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$.ctor
   void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService___ctor
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this,
   Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigRemoteService_o*
   adConfigRemoteService, Modules_Contexts_Application_Player_Scripts_IPlayerService_o*
   playerService, const MethodInfo* method); */

void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService___ctor_185c4ec
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_3);
  puVar4 = (undefined8 *)(param_1 + 0x10);
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

