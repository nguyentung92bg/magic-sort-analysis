/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$SecondUpdate
void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__SecondUpdate (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01f8a748) */
/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$SecondUpdate
   void 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__SecondUpdate
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__SecondUpdate_1e8ac84
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  if ((bRam0000000005c28100 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057d5da0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c28100 = 1;
  }
  puVar2 = PTR_DAT_057636d0;
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar13 == 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x10) == 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x18) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  plVar19 = *(long **)(param_1 + 0x10);
  if (plVar19 == (long *)0x0) {
    return;
  }
  lVar13 = *plVar19;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar18 + 1) * 0x10 + 0x138);
        goto LAB_01f8ad6c;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_0131971c(plVar19,*(long *)PTR_DAT_057636d0,1);
LAB_01f8ad6c:
  iVar7 = (*(code *)*puVar10)(plVar19,puVar10[1]);
  lVar13 = *(long *)(param_1 + 0x48);
  if (lVar13 != 0) {
    iVar8 = *(int *)(lVar13 + 0x18);
    if (iVar7 + 0x19 < iVar8) {
      if ((bRam0000000005c280f6 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057c7458);
        bRam0000000005c280f6 = 1;
      }
      puVar4 = PTR_DAT_0580b9d0;
      if ((*(long *)(lVar13 + 0x10) != 0) && (*(int *)(*(long *)(lVar13 + 0x10) + 0x18) != 0)) {
        uVar20 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar11 = System_DateTime__get_UtcNow_2100638(0);
        uVar16 = System_DateTime__op_GreaterThan_2102170(uVar20,uVar11,0);
        if ((uVar16 & 1) == 0) {
          if (*(long *)(param_1 + 0x48) != 0) {
            uVar16 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_IsAllDownloadedAndSaved_1e8a2cc
                               ();
            if ((uVar16 & 1) != 0) {
              return;
            }
            if (*(long *)(param_1 + 0x48) != 0) {
              uVar16 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_AnyDownloading_1e8a3e8
                                 ();
              if ((uVar16 & 1) != 0) {
                return;
              }
              if (*(long *)(param_1 + 0x48) != 0) {
                uVar16 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_AnyFailed_1e8a504
                                   ();
                puVar6 = PTR_DAT_057d5da0;
                puVar5 = PTR_DAT_057c7458;
                puVar3 = PTR_DAT_0576c1b8;
                if ((uVar16 & 1) == 0) {
                  lVar13 = *(long *)(param_1 + 0x48);
                  if (lVar13 != 0) {
                    iVar7 = 0;
                    do {
                      if ((bRam0000000005c280f5 & 1) == 0) {
                        FUN_012d0dc8(puVar5);
                        bRam0000000005c280f5 = 1;
                      }
                      iVar8 = 0;
                      if (*(long *)(lVar13 + 0x10) != 0) {
                        iVar8 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18);
                      }
                      if (iVar8 <= iVar7) {
                        return;
                      }
                      if ((((*(long *)(param_1 + 0x48) == 0) ||
                           (lVar13 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar13 == 0)) ||
                          (lVar13 = System_Collections_Generic_List_object___get_Item_21fc76c
                                              (lVar13,iVar7,*(undefined8 *)puVar6), lVar13 == 0)) ||
                         (plVar19 = *(long **)(param_1 + 0x10), plVar19 == (long *)0x0)) break;
                      lVar14 = *plVar19;
                      iVar8 = *(int *)(lVar13 + 0x14);
                      lVar13 = *(long *)puVar2;
                      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar16 != 0) {
                        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == lVar13) {
                            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                            goto LAB_01f8b050;
                          }
                          uVar16 = uVar16 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_0131971c(plVar19,lVar13,1);
LAB_01f8b050:
                      iVar9 = (*(code *)*puVar10)(plVar19,puVar10[1]);
                      if (iVar9 <= iVar8) {
                        if (((*(long *)(param_1 + 0x48) == 0) ||
                            (lVar13 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar13 == 0)) ||
                           (lVar13 = System_Collections_Generic_List_object___get_Item_21fc76c
                                               (lVar13,iVar7,*(undefined8 *)puVar6), lVar13 == 0))
                        break;
                        if (*(char *)(lVar13 + 0x19) == '\0') {
                          if (((*(long *)(param_1 + 0x48) == 0) ||
                              (lVar13 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar13 == 0))
                             || (lVar13 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                    (lVar13,iVar7,*(undefined8 *)puVar6),
                                lVar13 == 0)) break;
                          if (*(char *)(lVar13 + 0x18) == '\0') {
                            if ((*(long *)(param_1 + 0x48) != 0) &&
                               (lVar13 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar13 != 0))
                            {
                              uVar20 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                 (lVar13,iVar7,*(undefined8 *)puVar6);
                              puVar2 = PTR_DAT_057996f0;
                              if ((bRam0000000005c28106 & 1) == 0) {
                                FUN_012d0dc8(PTR_DAT_057996f0);
                                bRam0000000005c28106 = 1;
                              }
                              uStack_78 = 0;
                              uStack_80 = 0;
                              alStack_70[1] = 0;
                              alStack_70[0] = 0;
                              uStack_98 = 0;
                              uStack_a0 = 0;
                              uStack_88 = 0;
                              uStack_90 = 0;
                              System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128
                                        (&uStack_e0,0);
                              uStack_b8 = uStack_d8;
                              uStack_c0 = uStack_e0;
                              uStack_a8 = uStack_c8;
                              uStack_b0 = uStack_d0;
                              uStack_90 = uStack_d8;
                              uStack_98 = uStack_e0;
                              uStack_80 = uStack_c8;
                              uStack_88 = uStack_d0;
                              FUN_012d0d74((ulong)&uStack_a0 | 8,0);
                              alStack_70[0] = param_1;
                              FUN_012d0d74(alStack_70,param_1);
                              uStack_78 = uVar20;
                              FUN_012d0d74(&uStack_78,uVar20);
                              uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
                              System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_LevelModelPersistenceService__TryDownloadAndPersistBatch_d__27__216f7a8
                                        ((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar2);
                              return;
                            }
                            break;
                          }
                        }
                      }
                      lVar13 = *(long *)(param_1 + 0x48);
                      iVar7 = iVar7 + 1;
                    } while (lVar13 != 0);
                  }
                }
                else {
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uVar20 = System_DateTime__get_UtcNow_2100638(0);
                  fVar22 = *(float *)(param_1 + 0x58);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar3);
                  }
                  uVar11 = System_TimeSpan__FromSeconds_269a000((double)fVar22,0);
                  uVar20 = System_DateTime__op_Addition_2101d60(uVar20,uVar11,0);
                  *(undefined8 *)(param_1 + 0x50) = uVar20;
                  lVar13 = *(long *)(param_1 + 0x48);
                  uVar21 = NEON_fminnm(*(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x58),
                                       0x43480000);
                  *(undefined4 *)(param_1 + 0x58) = uVar21;
                  if (lVar13 != 0) {
                    if ((bRam0000000005c280fb & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_05787018);
                      FUN_012d0dc8(PTR_DAT_0579ee68);
                      FUN_012d0dc8(PTR_DAT_057e6ca0);
                      FUN_012d0dc8(PTR_DAT_05789310);
                      bRam0000000005c280fb = 1;
                    }
                    puVar4 = PTR_DAT_0579ee68;
                    puVar2 = PTR_DAT_05787018;
                    lVar13 = *(long *)(lVar13 + 0x10);
                    if (lVar13 != 0) {
                      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                (&stack0xffffffffffffffc8,lVar13,*(undefined8 *)PTR_DAT_05789310);
                      uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                         (&stack0xffffffffffffffc8,*(undefined8 *)puVar4);
                      if ((uVar16 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                (&stack0xffffffffffffffc8,*(undefined8 *)puVar2);
                    }
                    return;
                  }
                }
              }
            }
          }
          goto LAB_01f8b120;
        }
      }
      return;
    }
    plVar19 = *(long **)(param_1 + 0x10);
    if (iVar7 < iVar8 + 1) {
      iVar7 = iVar8 + 1;
    }
    if (plVar19 != (long *)0x0) {
      lVar14 = *plVar19;
      lVar13 = *(long *)puVar2;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_01f8af24;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar19,lVar13,1);
LAB_01f8af24:
      iVar8 = (*(code *)*puVar10)(plVar19,puVar10[1]);
      iVar8 = iVar8 + 0x32;
      uVar20 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetLevelSeedsBetweenLevelsIncluded_1e8b124
                         (param_1,iVar7,iVar8);
      lVar13 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetBatchedFileNamesFromSeeds_1e8b250
                         (param_1,uVar20,iVar7,iVar8);
      lVar14 = *(long *)(param_1 + 0x48);
      if (lVar14 != 0) {
        if ((bRam0000000005c280fc & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057a1ce8);
          FUN_012d0dc8(PTR_DAT_057c7458);
          FUN_012d0dc8(PTR_DAT_057d5da0);
          bRam0000000005c280fc = 1;
        }
        iVar7 = *(int *)(lVar14 + 0x18);
        if (*(int *)(lVar14 + 0x18) <= iVar8) {
          iVar7 = iVar8;
        }
        *(int *)(lVar14 + 0x18) = iVar7;
        puVar4 = PTR_DAT_057d5da0;
        puVar2 = PTR_DAT_057a1ce8;
        if (lVar13 == 0) {
LAB_01f8a900:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (0 < *(int *)(lVar13 + 0x18)) {
          iVar7 = 0;
          do {
            uVar20 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar13,iVar7,*(undefined8 *)puVar4);
            lVar12 = *(long *)(lVar14 + 0x10);
            if (lVar12 == 0) goto LAB_01f8a900;
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar17 = *(long *)puVar2;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_01f8a900;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar20;
              FUN_012d0d74();
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar12);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar13 + 0x18));
        }
        return;
      }
    }
  }
LAB_01f8b120:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

