/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$Initialize
void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__Initialize (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$Initialize
   void 
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__Initialize
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__Initialize_1cc57c0
               (long param_1)

{
  ulong uVar1;
  long lStack_18;
  
  lStack_18 = 0;
  uVar1 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__TryGetCachedGameEconomyConfig_1cc5804
                    (param_1,&lStack_18);
  if ((uVar1 & 1) != 0) {
    if (lStack_18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lStack_18 + 0x10);
    FUN_012d0d74((undefined8 *)(param_1 + 0x10));
  }
  return;
}

