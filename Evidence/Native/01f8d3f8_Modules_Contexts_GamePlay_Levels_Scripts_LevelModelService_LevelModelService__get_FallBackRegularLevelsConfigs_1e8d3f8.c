/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$get_FallBackRegularLevelsConfigs
Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__get_FallBackRegularLevelsConfigs (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$get_FallBackRegularLevelsConfigs
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__get_FallBackRegularLevelsConfigs
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__get_FallBackRegularLevelsConfigs_1e8d3f8
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar1 = *(long *)(lVar3 + 0x10);
    if (lVar1 == 0) {
      uVar2 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__LoadDefaultRegularConfigs_1cb4d60
                        (lVar3,0);
      *(undefined8 *)(lVar3 + 0x10) = uVar2;
      FUN_012d0d74((long *)(lVar3 + 0x10),uVar2);
      lVar1 = *(long *)(lVar3 + 0x10);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

