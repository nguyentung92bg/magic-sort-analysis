/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.FirebaseConfigPersistenceService$$GetDefaultConfigs
Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o* Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__GetDefaultConfigs (Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.FirebaseConfigPersistenceService$$GetDefaultConfigs
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o*
   Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__GetDefaultConfigs
   (Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__GetDefaultConfigs_1cc1334
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__LoadDefaultConfigs_1cc19d4
                      (param_1);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    FUN_012d0d74((long *)(param_1 + 0x10),uVar2);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return lVar1;
}

