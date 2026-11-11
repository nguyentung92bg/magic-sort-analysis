/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetDailyTutorialLevelAndLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyTutorialLevelAndLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo_o dailyLevelInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetDailyTutorialLevelAndLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyTutorialLevelAndLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo_o dailyLevelInfo, const MethodInfo* method);
    */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailyTutorialLevelAndLevelConfigModel_1e8ea94
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  
  if ((bRam0000000005c2811f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f8ce0);
    FUN_012d0dc8(PTR_DAT_0576cd98);
    bRam0000000005c2811f = 1;
  }
  puVar1 = PTR_DAT_0576cd98;
  uStack_38 = 0;
  if ((((*(long *)(param_1 + 0x10) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar8 != 0)) &&
      (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) && (*(long *)(lVar8 + 0x10) != 0)) {
    uVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(lVar8 + 0x10),0,*(undefined8 *)PTR_DAT_0576cd98);
    puVar2 = PTR_DAT_057f8ce0;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                        (*(long *)(param_1 + 0x20),uVar3);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetLevelModelBySeedFromPersistentPath_1e8e360
                            (param_1,uVar3,&uStack_38), (uVar4 & 1) == 0)) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01f8ec40;
        uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInResources_1e8bc08
                          (*(long *)(param_1 + 0x20),uVar3);
        if ((uVar4 & 1) == 0) {
          if (((*(long *)(param_1 + 0x28) == 0) ||
              (lVar8 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultDailyLevelsConfigs_1cb4ca0
                                 (*(long *)(param_1 + 0x28),0), lVar8 == 0)) ||
             ((lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0 || (*(long *)(lVar8 + 0x10) == 0))))
          goto LAB_01f8ec40;
          uVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(lVar8 + 0x10),0,*(undefined8 *)puVar1);
          lVar7 = *(long *)(param_1 + 0x20);
          uVar4 = uVar3;
        }
        else {
          lVar7 = *(long *)(param_1 + 0x20);
        }
        if (lVar7 == 0) goto LAB_01f8ec40;
        uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetDefaultLevelFromResources_1e8b830
                          (uVar4,uVar3);
        uVar5 = *(undefined8 *)puVar2;
      }
      else {
        uVar5 = *(undefined8 *)puVar2;
        uVar6 = uStack_38;
      }
      lVar7 = thunk_FUN_01320e48(uVar5);
      if (lVar7 != 0) {
        Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel___ctor_1f1bc6c
                  (lVar7,0);
        uVar5 = Modules_Infrastructure_Utils_TimeFormatter__LocalizeDateTimeWithYear_3de71c0
                          (param_2,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar5;
        FUN_012d0d74();
        *(undefined8 *)(lVar7 + 0x28) = uVar6;
        FUN_012d0d74((undefined8 *)(lVar7 + 0x28),uVar6);
        *(ulong *)(lVar7 + 0x38) = uVar3;
        FUN_012d0d74((ulong *)(lVar7 + 0x38),uVar3);
        *(long *)(lVar7 + 0x20) = lVar8;
        FUN_012d0d74((long *)(lVar7 + 0x20),lVar8);
        *(undefined8 *)(lVar7 + 0x40) = param_2;
        return lVar7;
      }
    }
  }
LAB_01f8ec40:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

