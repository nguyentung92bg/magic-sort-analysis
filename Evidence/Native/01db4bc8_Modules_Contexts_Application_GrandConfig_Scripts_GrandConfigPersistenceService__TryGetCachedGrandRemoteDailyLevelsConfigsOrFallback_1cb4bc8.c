/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$TryGetCachedGrandRemoteDailyLevelsConfigsOrFallback
bool Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__TryGetCachedGrandRemoteDailyLevelsConfigsOrFallback (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_GrandRemoteDailyLevelsConfig_o** remoteConfigs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$TryGetCachedGrandRemoteDailyLevelsConfigsOrFallback
   bool 
   Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__TryGetCachedGrandRemoteDailyLevelsConfigsOrFallback
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_GrandRemoteDailyLevelsConfig_o**
   remoteConfigs, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__TryGetCachedGrandRemoteDailyLevelsConfigsOrFallback_1cb4bc8
          (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* try { // try from 01db4bc8 to 01eb4c8f has its CatchHandler @ 01db50f0 */
  puVar1 = PTR_DAT_0578c5d0;
  uVar2 = param_1;
  if ((bRam0000000005c27734 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758080);
    uVar2 = FUN_012d0dc8(PTR_DAT_0578c5d0);
    bRam0000000005c27734 = 1;
  }
  uVar3 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__IsCached_1cb4b3c
                    (uVar2,*(undefined8 *)puVar1);
  if (((uVar3 & 1) != 0) &&
     (lVar4 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__LoadCachedConfig_object__2391208
                        (param_1,*(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_05758080), lVar4 != 0)
     ) {
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    uVar2 = UnityEngine_Application__get_version_383aa68(0);
    uVar3 = System_String__op_Equality_1ec12e0(uVar5,uVar2,0);
    if ((uVar3 & 1) != 0) {
      *param_2 = lVar4;
      FUN_012d0d74(param_2,lVar4);
      return 1;
    }
  }
  lVar4 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultDailyLevelsConfigs_1cb4ca0
                    (param_1);
  *param_2 = lVar4;
  FUN_012d0d74(param_2,lVar4);
                    /* try { // try from 01db4c9c to 01eb4cbf has its CatchHandler @ 01db50f4 */
  return 0;
}

