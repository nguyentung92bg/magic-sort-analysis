/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteRegularLevelsConfigResolver$$.ctor
void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver___ctor (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver_o* __this, Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o* firebaseRemoteConfigs, Modules_Infrastructure_Network_Http_HttpProxy_o* httpProxy, Modules_Contexts_Application_ServerCommunication_Scripts_BackendEnvironmentConfig_o* backendEnvironmentConfig, Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* grandConfigPersistenceService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteRegularLevelsConfigResolver$$.ctor
   void 
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver___ctor
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver_o*
   __this, Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o*
   firebaseRemoteConfigs, Modules_Infrastructure_Network_Http_HttpProxy_o* httpProxy,
   Modules_Contexts_Application_ServerCommunication_Scripts_BackendEnvironmentConfig_o*
   backendEnvironmentConfig,
   Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o*
   grandConfigPersistenceService, const MethodInfo* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver___ctor_1cb784c
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar4 = PTR_DAT_0578e1c8;
  if ((bRam0000000005c2774d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057852b0);
    FUN_012d0dc8(PTR_DAT_0578e1c8);
    bRam0000000005c2774d = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_057852b0;
  if (lVar5 != 0) {
    Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRemoteService___ctor_1cb67c8
              (lVar5,param_3,param_4);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar6 != 0) {
      Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigFetcher___ctor_1cb4f44
                (lVar6,param_2,lVar5);
      *(long *)(param_1 + 0x10) = lVar6;
      FUN_012d0d74((long *)(param_1 + 0x10),lVar6);
      puVar7 = (undefined8 *)(param_1 + 0x18);
      *puVar7 = param_5;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

