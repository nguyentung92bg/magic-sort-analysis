/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$get_FallBackDailyLevelsConfigs
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_GrandRemoteDailyLevelsConfig_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__get_FallBackDailyLevelsConfigs (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$get_FallBackDailyLevelsConfigs
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_GrandRemoteDailyLevelsConfig_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__get_FallBackDailyLevelsConfigs
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__get_FallBackDailyLevelsConfigs_1e8d414
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c27735 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790af0,0);
    FUN_012d0dc8(PTR_DAT_0580ab10);
    FUN_012d0dc8(PTR_DAT_057cd9a0);
    bRam0000000005c27735 = 1;
  }
  lVar3 = *(long *)(lVar5 + 0x18);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0580ab10);
    puVar2 = PTR_DAT_057cd9a0;
    puVar1 = PTR_DAT_05790af0;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_GrandRemoteDailyLevelsConfig___ctor_1e8d360
              (lVar3,0);
    uVar4 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultConfig_object__23910f8
                      (lVar5,*(undefined8 *)puVar2,lVar3,*(undefined8 *)puVar1);
    *(undefined8 *)(lVar5 + 0x18) = uVar4;
    FUN_012d0d74((long *)(lVar5 + 0x18),uVar4);
    lVar3 = *(long *)(lVar5 + 0x18);
  }
  return lVar3;
}

