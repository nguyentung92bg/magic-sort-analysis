/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetDailyLevelAndLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyLevelAndLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo_o dailyLevelInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetDailyLevelAndLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyLevelAndLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo_o dailyLevelInfo, const MethodInfo* method);
    */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyLevelAndLevelConfigModel_1e8ec44
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  if ((bRam0000000005c28120 & 1) == 0) {
    lVar2 = FUN_012d0dc8(PTR_DAT_057f8ce0);
    bRam0000000005c28120 = 1;
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyLevelConfigModel_1e8edd4
                      (lVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),param_2,0);
    uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailySeedIdFromConfig_1e8ef54
                      (uVar3,uVar3);
    puVar1 = PTR_DAT_057f8ce0;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                        (*(long *)(param_1 + 0x20),uVar4);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetLevelModelBySeedFromPersistentPath_1e8e360
                            (param_1,uVar4,&uStack_38), (uVar5 & 1) == 0)) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01f8edd0;
        uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInResources_1e8bc08
                          (*(long *)(param_1 + 0x20),uVar4);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_01f8edd0;
          uVar3 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultDailyLevelsConfigs_1cb4ca0
                            (*(long *)(param_1 + 0x28),0);
          uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyLevelConfigModel_1e8edd4
                            (uVar3,uVar3,param_2,1);
          uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailySeedIdFromConfig_1e8ef54
                            (uVar3,uVar3);
          lVar2 = *(long *)(param_1 + 0x20);
          uVar5 = uVar4;
        }
        else {
          lVar2 = *(long *)(param_1 + 0x20);
        }
        if (lVar2 == 0) goto LAB_01f8edd0;
        uVar7 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetDefaultLevelFromResources_1e8b830
                          (uVar5,uVar4);
        uVar6 = *(undefined8 *)puVar1;
      }
      else {
        uVar6 = *(undefined8 *)puVar1;
        uVar7 = uStack_38;
      }
      lVar2 = thunk_FUN_01320e48(uVar6);
      if (lVar2 != 0) {
        Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel___ctor_1f1bc6c
                  (lVar2,0);
        uVar6 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTimeWithYear_3de71c0
                          (param_2,0);
        *(undefined8 *)(lVar2 + 0x10) = uVar6;
        FUN_012d0d74();
        *(undefined8 *)(lVar2 + 0x28) = uVar7;
        FUN_012d0d74((undefined8 *)(lVar2 + 0x28),uVar7);
        *(ulong *)(lVar2 + 0x38) = uVar4;
        FUN_012d0d74((ulong *)(lVar2 + 0x38),uVar4);
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        FUN_012d0d74((undefined8 *)(lVar2 + 0x20),uVar3);
        *(undefined8 *)(lVar2 + 0x40) = param_2;
        return lVar2;
      }
    }
  }
LAB_01f8edd0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

