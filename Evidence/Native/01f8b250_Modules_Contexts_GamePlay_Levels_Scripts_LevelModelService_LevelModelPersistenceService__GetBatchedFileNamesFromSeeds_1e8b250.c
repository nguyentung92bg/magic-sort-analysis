/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$GetBatchedFileNamesFromSeeds
System_Collections_Generic_List_LevelBatch__o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetBatchedFileNamesFromSeeds (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, System_Collections_Generic_HashSet_string__o* seeds, int32_t fromLevel, int32_t toLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$GetBatchedFileNamesFromSeeds
   System_Collections_Generic_List_LevelBatch__o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetBatchedFileNamesFromSeeds
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, System_Collections_Generic_HashSet_string__o* seeds, int32_t fromLevel, int32_t toLevel,
   const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetBatchedFileNamesFromSeeds_1e8b250
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar2 = PTR_DAT_057728f8;
  if ((bRam0000000005c28101 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057952d8);
    FUN_012d0dc8(PTR_DAT_05797fe8);
    FUN_012d0dc8(PTR_DAT_057c2a58);
    FUN_012d0dc8(PTR_DAT_057ae560);
    FUN_012d0dc8(PTR_DAT_0577b5b8);
    FUN_012d0dc8(PTR_DAT_057c96c8);
    FUN_012d0dc8(PTR_DAT_057a1ce8);
    FUN_012d0dc8(PTR_DAT_057ee7a8);
    FUN_012d0dc8(PTR_DAT_057c7458);
    FUN_012d0dc8(PTR_DAT_057728f8);
    bRam0000000005c28101 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar9 == 0) ||
     (System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_057ee7a8),
     puVar6 = PTR_DAT_057c96c8, puVar5 = PTR_DAT_057c2a58, puVar4 = PTR_DAT_057a1ce8,
     puVar3 = PTR_DAT_05797fe8, puVar2 = PTR_DAT_057952d8, param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_HashSet_object___GetEnumerator_200b184
            (&uStack_98,param_2,*(undefined8 *)PTR_DAT_0577b5b8);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_70 = uStack_88;
  do {
    do {
      uVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext_3ea8360
                         (&uStack_80,*(undefined8 *)puVar5);
      uVar7 = uStack_70;
      if ((uVar10 & 1) == 0) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose_3ea835c
                  (&uStack_80,*(undefined8 *)puVar3);
        return lVar9;
      }
      uVar10 = System_String__IsNullOrEmpty_1ed04ac(uStack_70,0);
    } while (((uVar10 & 1) != 0) ||
            (uVar10 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsCached_1e8b628
                                (param_1,uVar7), (uVar10 & 1) != 0));
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_01f8b3e4:
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch___ctor_1e8a0d4
                (lVar11,param_3,param_4);
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)puVar4;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        plVar12 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *plVar12 = lVar11;
        FUN_012d0d74(plVar12,lVar11);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar9,lVar11);
      }
    }
    else {
      lVar11 = System_Linq_Enumerable__Last_object__242283c(lVar9,*(undefined8 *)puVar2);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar8 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch__get_Count_1e8a08c
                        ();
      if (0x77 < iVar8) goto LAB_01f8b3e4;
    }
    lVar11 = System_Linq_Enumerable__Last_object__242283c(lVar9,*(undefined8 *)puVar2);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch__AddSeed_1e8a17c
              (lVar11,uVar7);
  } while( true );
}

