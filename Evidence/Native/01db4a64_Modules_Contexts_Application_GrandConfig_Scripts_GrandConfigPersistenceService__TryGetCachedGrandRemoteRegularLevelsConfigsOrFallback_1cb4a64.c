/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$TryGetCachedGrandRemoteRegularLevelsConfigsOrFallback
bool Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__TryGetCachedGrandRemoteRegularLevelsConfigsOrFallback (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this, Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o** remoteRegularLevelsConfigs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$TryGetCachedGrandRemoteRegularLevelsConfigsOrFallback
   bool 
   Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__TryGetCachedGrandRemoteRegularLevelsConfigsOrFallback
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this,
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o**
   remoteRegularLevelsConfigs, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__TryGetCachedGrandRemoteRegularLevelsConfigsOrFallback_1cb4a64
          (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_05797638;
  uVar2 = param_1;
  if ((bRam0000000005c27733 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057662e8);
                    /* try { // try from 01db4aa0 to 01eb4adf has its CatchHandler @ 01db50ec */
    uVar2 = FUN_012d0dc8(PTR_DAT_05797638);
    bRam0000000005c27733 = 1;
  }
  uVar3 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__IsCached_1cb4b3c
                    (uVar2,*(undefined8 *)puVar1);
  if (((uVar3 & 1) != 0) &&
     (lVar4 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__LoadCachedConfig_object__2391208
                        (param_1,*(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_057662e8), lVar4 != 0)
     ) {
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    uVar2 = UnityEngine_Application__get_version_383aa68(0);
                    /* try { // try from 01db4aec to 01eb4b03 has its CatchHandler @ 01db50cc */
    uVar3 = System_String__op_Equality_1ec12e0(uVar5,uVar2,0);
    if ((uVar3 & 1) != 0) {
      *param_2 = lVar4;
      FUN_012d0d74(param_2,lVar4);
      return 1;
    }
  }
  lVar4 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs_1cb4b88
                    (param_1);
                    /* try { // try from 01db4b1c to 01eb4b5b has its CatchHandler @ 01db50e8 */
  *param_2 = lVar4;
  FUN_012d0d74(param_2,lVar4);
  return 0;
}

