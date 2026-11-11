/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetTutorialLevelAndLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetTutorialLevelAndLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetTutorialLevelAndLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetTutorialLevelAndLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t
   level, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetTutorialLevelAndLevelConfigModel_1e8db18
               (long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000005c28117 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05772548);
    FUN_012d0dc8(PTR_DAT_0579d7b0);
    FUN_012d0dc8(PTR_DAT_057d4c28);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057f8ce0);
    FUN_012d0dc8(PTR_DAT_0575e608);
    FUN_012d0dc8(PTR_DAT_0576c990);
    FUN_012d0dc8(PTR_DAT_057f4310);
    FUN_012d0dc8(PTR_DAT_057dbb00);
    FUN_012d0dc8(PTR_DAT_0576cd98);
    FUN_012d0dc8(PTR_DAT_05776380);
    FUN_012d0dc8(PTR_DAT_05779a08);
    FUN_012d0dc8(PTR_DAT_057acbe0);
    FUN_012d0dc8(PTR_DAT_05760cf8);
    bRam0000000005c28117 = 1;
  }
  puVar2 = PTR_DAT_05776380;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar8 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                      (param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),param_2);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_05779a08;
    if (lVar9 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_057f4310);
      plVar10 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (((plVar10 != (long *)0x0) &&
          (System_Text_StringBuilder___ctor_1e51c94(plVar10,0), puVar7 = PTR_DAT_057f8ce0,
          puVar6 = PTR_DAT_057db748, puVar5 = PTR_DAT_0579d7b0, puVar4 = PTR_DAT_05772548,
          puVar3 = PTR_DAT_0576c990, puVar2 = PTR_DAT_0575e608, lVar8 != 0)) &&
         (*(long *)(lVar8 + 0x10) != 0)) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&iStack_a0,*(long *)(lVar8 + 0x10),*(undefined8 *)PTR_DAT_0576c990);
        uStack_80 = CONCAT44(uStack_9c,iStack_a0);
        uStack_78 = uStack_98;
        uStack_70 = uStack_90;
LAB_01f8dccc:
        uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_80,*(undefined8 *)puVar5);
        if ((uVar11 & 1) != 0) goto code_r0x01f8dcdc;
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)puVar4);
        if (*(long *)(lVar8 + 0x10) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&iStack_a0,*(long *)(lVar8 + 0x10),*(undefined8 *)puVar3);
          uStack_80 = CONCAT44(uStack_9c,iStack_a0);
          uStack_78 = uStack_98;
          uStack_70 = uStack_90;
          while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_80,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
            Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetLevelModelBySeedFromPersistentPath_1e8e360
                      (param_1,uStack_70,&uStack_88);
            lVar15 = *(long *)(lVar9 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uStack_88;
              FUN_012d0d74();
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))(lVar9)
              ;
            }
          }
          goto LAB_01f8de78;
        }
      }
    }
  }
LAB_01f8dfe0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
code_r0x01f8dcdc:
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar11 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                     (*(long *)(param_1 + 0x20),uStack_70);
  if ((uVar11 & 1) == 0) goto code_r0x01f8dcf0;
  goto LAB_01f8dccc;
code_r0x01f8dcf0:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_80,*(undefined8 *)puVar4);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar12 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs_1cb4b88
                       (*(long *)(param_1 + 0x28),0);
    lVar8 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8da0c
                      (param_1,uVar12,param_2);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&iStack_a0,*(long *)(lVar8 + 0x10),*(undefined8 *)puVar3);
      uStack_80 = CONCAT44(uStack_9c,iStack_a0);
      uStack_78 = uStack_98;
      uStack_70 = uStack_90;
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_80,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar12 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetDefaultLevelFromResources_1e8b830
                           (uVar11,uStack_70);
        lVar15 = *(long *)(lVar9 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))(lVar9);
        }
      }
LAB_01f8de78:
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)puVar4);
      lVar15 = *(long *)(lVar8 + 0x10);
      if ((lVar15 != 0) && (0 < *(int *)(lVar15 + 0x18))) {
        uVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar15,0,*(undefined8 *)PTR_DAT_0576cd98);
        System_Text_StringBuilder__Append_1e4b288(plVar10,uVar12,0);
      }
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar7);
      if (lVar15 != 0) {
        Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel___ctor_1f1bc6c
                  (lVar15,0);
        if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar12 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                           (*(undefined8 *)PTR_DAT_057acbe0,0);
        iStack_a0 = param_2;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_a0);
        iStack_a4 = param_2 + 3;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_a4);
        uVar13 = System_String__Format_1ed15b8(*(undefined8 *)PTR_DAT_05760cf8,uVar13,uVar14,0);
        uVar12 = System_String__Concat_1ec3580(uVar12,uVar13,0);
        *(undefined8 *)(lVar15 + 0x10) = uVar12;
        FUN_012d0d74();
        *(long *)(lVar15 + 0x30) = lVar9;
        FUN_012d0d74((long *)(lVar15 + 0x30),lVar9);
        *(long *)(lVar15 + 0x18) = lVar8;
        FUN_012d0d74((long *)(lVar15 + 0x18),lVar8);
        uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        *(undefined8 *)(lVar15 + 0x38) = uVar12;
        FUN_012d0d74();
        return lVar15;
      }
    }
  }
  goto LAB_01f8dfe0;
}

