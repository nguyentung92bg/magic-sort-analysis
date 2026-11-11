/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$GetLevelSeedsBetweenLevelsIncluded
System_Collections_Generic_HashSet_string__o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetLevelSeedsBetweenLevelsIncluded (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, int32_t fromLevel, int32_t toLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$GetLevelSeedsBetweenLevelsIncluded
   System_Collections_Generic_HashSet_string__o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetLevelSeedsBetweenLevelsIncluded
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, int32_t fromLevel, int32_t toLevel, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetLevelSeedsBetweenLevelsIncluded_1e8b124
               (undefined8 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_057a8368;
  if ((bRam0000000005c28102 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057618d8);
    FUN_012d0dc8(PTR_DAT_05770510);
    FUN_012d0dc8(PTR_DAT_057c6e48);
    FUN_012d0dc8(PTR_DAT_057a8368);
    bRam0000000005c28102 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Collections_Generic_HashSet_object____ctor_200a670(lVar3,*(undefined8 *)PTR_DAT_057c6e48)
    ;
    puVar2 = PTR_DAT_05770510;
    puVar1 = PTR_DAT_057618d8;
    for (; param_2 <= param_3; param_2 = param_2 + 1) {
      if ((5 < param_2) &&
         (lVar4 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetLevelConfigModelAtLevel_1e8b694
                            (param_1,param_2), lVar4 != 0)) {
        if (*(long *)(lVar4 + 0x10) != 0) {
          System_Collections_Generic_HashSet_object___UnionWith_200b840
                    (lVar3,*(long *)(lVar4 + 0x10),*(undefined8 *)puVar2);
        }
        if (*(long *)(lVar4 + 0x18) != 0) {
          System_Collections_Generic_HashSet_object___UnionWith_200b840
                    (lVar3,*(long *)(lVar4 + 0x18),*(undefined8 *)puVar2);
        }
        uVar5 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(lVar4 + 0x28),0);
        if ((uVar5 & 1) == 0) {
          System_Collections_Generic_HashSet_object___Add_200b82c
                    (lVar3,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)puVar1);
        }
      }
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

