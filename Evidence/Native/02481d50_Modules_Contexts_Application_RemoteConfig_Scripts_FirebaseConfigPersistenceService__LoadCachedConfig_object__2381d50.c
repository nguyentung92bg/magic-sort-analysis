/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.FirebaseConfigPersistenceService$$LoadCachedConfig<object>
Il2CppObject* Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__LoadCachedConfig_object_ (Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService_o* __this, const MethodInfo_2381D50* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.FirebaseConfigPersistenceService$$LoadCachedConfig<object>
   Il2CppObject*
   Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__LoadCachedConfig_object_
   (Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService_o* __this,
   const MethodInfo_2381D50* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__LoadCachedConfig_object__2381d50
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_058031d8;
  puVar2 = PTR_DAT_057cca38;
  puVar1 = PTR_DAT_0579ece0;
  if ((bRam0000000005c2aa7a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_0579ece0);
    FUN_012d0dc8(PTR_DAT_057cca38);
    bRam0000000005c2aa7a = 1;
  }
  uStack_38 = 0;
  Modules_Infrastructure_Persistence_PersistentData__TryLoad_3d1e890
            (*(undefined8 *)puVar2,*(undefined8 *)puVar1,&uStack_38,0);
  uVar4 = uStack_38;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  (**(code **)(**(long **)(param_2 + 0x38) + 8))(uVar4);
  return;
}

