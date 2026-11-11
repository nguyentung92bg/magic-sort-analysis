/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$CacheGameEconomyConfig
void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__CacheGameEconomyConfig (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o* __this, Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel_o* gameEconomyModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$CacheGameEconomyConfig
   void 
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__CacheGameEconomyConfig
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o*
   __this, Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel_o* gameEconomyModel,
   const MethodInfo* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__CacheGameEconomyConfig_1cc5ce0
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_057605a8;
  if ((bRam0000000005c2779f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605a8);
    FUN_012d0dc8(PTR_DAT_057c9ea0);
    FUN_012d0dc8(PTR_DAT_05818c20);
    bRam0000000005c2779f = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_05818c20;
  puVar1 = PTR_DAT_057c9ea0;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x10),param_2);
    uVar5 = UnityEngine_Application__get_version_383aa68(0);
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    FUN_012d0d74();
    puVar2 = PTR_DAT_058031d8;
    uVar5 = *(undefined8 *)puVar3;
    if ((bRam0000000005c2aaba & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_058031d8,lVar4,uVar5,*(undefined8 *)puVar1);
      FUN_012d0dc8(PTR_DAT_057c9238);
      bRam0000000005c2aaba = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(lVar4,0);
    Modules_Infrastructure_Persistence_PersistentData__Save_3d1e52c
              (uVar6,*(undefined8 *)PTR_DAT_057c9238,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

