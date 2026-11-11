/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.FirebaseConfigPersistenceService$$GetRemoteConfigs
Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o* Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__GetRemoteConfigs (Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.FirebaseConfigPersistenceService$$GetRemoteConfigs
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o*
   Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__GetRemoteConfigs
   (Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__GetRemoteConfigs_1cc12a4
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c2778f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dd8b0);
    bRam0000000005c2778f = 1;
  }
  uVar1 = Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__IsCached_1cc1978
                    ();
  if (((uVar1 & 1) != 0) &&
     (lVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__LoadCachedConfig_object__2381d50
                        (param_1,*(undefined8 *)PTR_DAT_057dd8b0), lVar2 != 0)) {
    uVar4 = *(undefined8 *)(lVar2 + 0xe0);
    uVar3 = UnityEngine_Application__get_version_383aa68(0);
    uVar1 = System_String__op_Equality_1ec12e0(uVar4,uVar3,0);
    if ((uVar1 & 1) != 0) {
      return lVar2;
    }
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__LoadDefaultConfigs_1cc19d4
                      (param_1);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    FUN_012d0d74((long *)(param_1 + 0x10),uVar3);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  return lVar2;
}

