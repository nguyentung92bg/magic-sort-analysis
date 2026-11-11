/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$LoadCachedConfig<object>
Il2CppObject* Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__LoadCachedConfig_object_ (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o* __this, System_String_o* fileName, const MethodInfo_239051C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$LoadCachedConfig<object>
   Il2CppObject*
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__LoadCachedConfig_object_
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o*
   __this, System_String_o* fileName, const MethodInfo_239051C* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__LoadCachedConfig_object__239051c
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_057c9238;
  if ((bRam0000000005c2aabb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057c9238);
    bRam0000000005c2aabb = 1;
  }
  uStack_28 = 0;
  Modules_Infrastructure_Persistence_PersistentData__TryLoad_3d1e890
            (*(undefined8 *)puVar1,param_2,&uStack_28,0);
  uVar2 = uStack_28;
  if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  (**(code **)(**(long **)(param_3 + 0x38) + 8))(uVar2);
  return;
}

