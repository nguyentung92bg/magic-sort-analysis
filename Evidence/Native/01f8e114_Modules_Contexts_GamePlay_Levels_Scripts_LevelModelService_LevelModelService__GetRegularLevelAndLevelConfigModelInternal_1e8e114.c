/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetRegularLevelAndLevelConfigModelInternal
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelAndLevelConfigModelInternal (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetRegularLevelAndLevelConfigModelInternal
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelAndLevelConfigModelInternal
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t
   level, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelAndLevelConfigModelInternal_1e8e114
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_64;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if ((bRam0000000005c28118 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057f8ce0);
    FUN_012d0dc8(PTR_DAT_057fea48);
    FUN_012d0dc8(PTR_DAT_057662d8);
    bRam0000000005c28118 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                      (param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),param_2);
    uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetCachedSeed_1e8e3b4
                      (param_1,param_2,&uStack_58);
    uVar7 = uStack_58;
    if ((uVar6 & 1) == 0) {
      uVar7 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig_1e8da80
                        (param_1,uVar5);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                        (*(long *)(param_1 + 0x20),uVar7);
      if (((uVar6 & 1) == 0) ||
         (uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetLevelModelBySeedFromPersistentPath_1e8e360
                            (param_1,uVar7,&uStack_60), uVar8 = uStack_60, (uVar6 & 1) == 0)) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01f8e35c;
        uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInResources_1e8bc08
                          (*(long *)(param_1 + 0x20),uVar7);
        if ((uVar6 & 1) == 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_01f8e35c;
          uVar5 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs_1cb4b88
                            (*(long *)(param_1 + 0x28),0);
          uVar5 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                            (param_1,uVar5,param_2);
          uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig_1e8da80
                            (param_1,uVar5);
          lVar9 = *(long *)(param_1 + 0x20);
          uVar7 = uVar6;
        }
        else {
          lVar9 = *(long *)(param_1 + 0x20);
        }
        if (lVar9 == 0) goto LAB_01f8e35c;
        uVar8 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetDefaultLevelFromResources_1e8b830
                          (uVar6,uVar7);
      }
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f8ce0);
      puVar4 = PTR_DAT_057fea48;
      puVar3 = PTR_DAT_057db748;
      puVar2 = PTR_DAT_057bc5e8;
      puVar1 = PTR_DAT_057662d8;
      if (lVar9 != 0) {
        Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel___ctor_1f1bc6c
                  (lVar9,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar10 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                           (*(undefined8 *)puVar1,0);
        uStack_64 = param_2;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
        uVar11 = System_String__Format_1ec10a8(*(undefined8 *)puVar4,uVar11,0);
        uVar10 = System_String__Concat_1ec3580(uVar10,uVar11,0);
        *(undefined8 *)(lVar9 + 0x10) = uVar10;
        FUN_012d0d74();
        *(undefined8 *)(lVar9 + 0x28) = uVar8;
        FUN_012d0d74((undefined8 *)(lVar9 + 0x28),uVar8);
        *(ulong *)(lVar9 + 0x38) = uVar7;
        FUN_012d0d74((ulong *)(lVar9 + 0x38),uVar7);
        *(undefined8 *)(lVar9 + 0x18) = uVar5;
        FUN_012d0d74((undefined8 *)(lVar9 + 0x18),uVar5);
        return lVar9;
      }
    }
  }
LAB_01f8e35c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

