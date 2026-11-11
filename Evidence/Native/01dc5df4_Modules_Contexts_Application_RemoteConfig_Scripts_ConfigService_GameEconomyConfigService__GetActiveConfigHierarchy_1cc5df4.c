/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$GetActiveConfigHierarchy
int64_t Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetActiveConfigHierarchy (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$GetActiveConfigHierarchy
   int64_t
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetActiveConfigHierarchy
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o*
   __this, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetActiveConfigHierarchy_1cc5df4
          (long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (((*plVar1 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (*(char *)(*(long *)(param_1 + 0x20) + 0x10) == '\0')) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  if (*plVar1 != 0) {
    return *(undefined8 *)(*plVar1 + 0x70);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

