/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$TryGetCachedGameEconomyConfig
bool Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__TryGetCachedGameEconomyConfig (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o* __this, Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_CachedGameEconomyConfigModel_o** cachedGameEconomyConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$TryGetCachedGameEconomyConfig
   bool 
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__TryGetCachedGameEconomyConfig
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o*
   __this,
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_CachedGameEconomyConfigModel_o**
   cachedGameEconomyConfigModel, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__TryGetCachedGameEconomyConfig_1cc5804
          (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_05818c20;
  if ((bRam0000000005c277a0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813108);
    FUN_012d0dc8(PTR_DAT_05818c20);
    bRam0000000005c277a0 = 1;
  }
  *param_2 = 0;
  uVar2 = FUN_012d0d74(param_2,0);
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__IsCached_1cc5da8
                    (uVar2,*(undefined8 *)puVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__LoadCachedConfig_object__239051c
                      (param_1,*(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_05813108);
    if (lVar4 == 0) {
      return 0;
    }
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      uVar2 = UnityEngine_Application__get_version_383aa68(0);
      uVar3 = System_String__op_Equality_1ec12e0(uVar5,uVar2,0);
      if ((uVar3 & 1) != 0) {
        *param_2 = lVar4;
        FUN_012d0d74(param_2,lVar4);
        return 1;
      }
    }
  }
  return 0;
}

