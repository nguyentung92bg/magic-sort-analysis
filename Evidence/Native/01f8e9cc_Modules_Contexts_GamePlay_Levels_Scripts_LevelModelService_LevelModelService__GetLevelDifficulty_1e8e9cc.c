/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetLevelDifficulty
int32_t Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelDifficulty (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetLevelDifficulty
   int32_t
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelDifficulty
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t
   level, const MethodInfo* method); */

undefined1
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelDifficulty_1e8e9cc
          (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                      (param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),param_2);
    uVar2 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig_1e8da80
                      (param_1,lVar1);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                        (*(long *)(param_1 + 0x20),uVar2);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01f8ea90;
        uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInResources_1e8bc08
                          (*(long *)(param_1 + 0x20),uVar2);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(param_1 + 0x28) != 0) {
            uVar2 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs_1cb4b88
                              (*(long *)(param_1 + 0x28),0);
            lVar1 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                              (param_1,uVar2,param_2);
            if (lVar1 != 0) {
              if (*(char *)(lVar1 + 0x31) != '\0') {
                return 2;
              }
              return *(undefined1 *)(lVar1 + 0x30);
            }
          }
          goto LAB_01f8ea90;
        }
      }
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x31) != '\0') {
          return 2;
        }
        return *(undefined1 *)(lVar1 + 0x30);
      }
    }
  }
LAB_01f8ea90:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

