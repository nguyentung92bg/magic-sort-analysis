/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetTutorialLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetTutorialLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetTutorialLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetTutorialLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t
   level, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetTutorialLevelConfigModel_1e8d7c0
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c28115 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05772548);
    FUN_012d0dc8(PTR_DAT_0579d7b0);
    FUN_012d0dc8(PTR_DAT_057d4c28);
    FUN_012d0dc8(PTR_DAT_0576c990);
    bRam0000000005c28115 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                         (param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),param_2),
      puVar2 = PTR_DAT_0579d7b0, puVar1 = PTR_DAT_05772548, lVar3 != 0)) &&
     (*(long *)(lVar3 + 0x10) != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_0576c990);
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar1);
        return lVar3;
      }
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                        (*(long *)(param_1 + 0x20),uStack_38);
    } while ((uVar4 & 1) != 0);
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar5 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs_1cb4b88
                        (*(long *)(param_1 + 0x28),0);
      lVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                        (param_1,uVar5,param_2);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

