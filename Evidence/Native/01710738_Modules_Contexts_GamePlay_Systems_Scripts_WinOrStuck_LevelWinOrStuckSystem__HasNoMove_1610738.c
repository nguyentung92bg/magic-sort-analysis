/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$HasNoMove
bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__HasNoMove (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$HasNoMove
   bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__HasNoMove
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__HasNoMove_1610738
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_058007e8;
  if ((bRam0000000005c24469 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058007e8);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    bRam0000000005c24469 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if (cRam0000000005c244b6 == '\0') {
    FUN_012d0dc8(PTR_DAT_058007e8);
    cRam0000000005c244b6 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar7 = *(long *)puVar1;
  }
  if (**(char **)(lVar7 + 0xb8) != '\0') {
    return 0;
  }
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar7 != 0)) &&
     (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
    if (*(char *)(lVar7 + 0x11) != '\0') {
      return 0;
    }
    plVar15 = *(long **)(param_1 + 0x20);
    if (plVar15 != (long *)0x0) {
      lVar7 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0581aae8) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01710854;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar15,*(long *)PTR_DAT_0581aae8,0);
LAB_01710854:
      iVar3 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      if ((iVar3 != 7) && (iVar3 != 1)) {
        return 0;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 != 0) {
        if ((bRam0000000005c2f9fb & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05813f90,0);
          FUN_012d0dc8(PTR_DAT_05785108);
          FUN_012d0dc8(PTR_DAT_057b43e8);
          FUN_012d0dc8(PTR_DAT_057b0e08);
          bRam0000000005c2f9fb = 1;
        }
        puVar2 = PTR_DAT_057b43e8;
        puVar1 = PTR_DAT_057b0e08;
        uStack_64 = 0;
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
          iVar3 = *(int *)(lVar7 + 0x18);
          if (0 < iVar3) {
            iVar16 = 0;
            do {
              lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar7,iVar16,*(undefined8 *)puVar1);
              if (lVar9 == 0) goto LAB_02e95284;
              if (0 < *(int *)(lVar9 + 0x18)) {
                iVar3 = 0;
                do {
                  lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar9,iVar3,*(undefined8 *)puVar2);
                  if (lVar10 == 0) goto LAB_02e95284;
                  uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                                     (lVar10,0);
                  if ((uVar13 & 1) != 0) {
                    if (*(int *)(lVar7 + 0x18) < 1) {
                      iVar18 = 0;
                      iVar17 = 0;
                    }
                    else {
                      iVar17 = 0;
                      iVar18 = 0;
                      iVar6 = 0;
                      do {
                        lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                           (lVar7,iVar6,*(undefined8 *)puVar1);
                        if (lVar11 == 0) goto LAB_02e95284;
                        if (0 < *(int *)(lVar11 + 0x18)) {
                          iVar19 = 0;
                          do {
                            lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                               (lVar11,iVar19,*(undefined8 *)puVar2);
                            uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                              (lVar10,0);
                            if (lVar12 == 0) goto LAB_02e95284;
                            uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
                                               (lVar12,lVar10,uVar4,0);
                            if (((uVar13 & 1) != 0) &&
                               (((uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                                                     (lVar12,0), (uVar13 & 1) == 0 ||
                                 (iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterCountBelowTheTopWater_2494c4c
                                                    (lVar10,0), iVar5 != 0)) ||
                                (*(int *)(lVar12 + 0x48) < *(int *)(lVar10 + 0x48))))) {
                              iVar18 = iVar18 + 1;
                              iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                                                (lVar12,0);
                              iVar17 = iVar5 + iVar17;
                            }
                            iVar19 = iVar19 + 1;
                          } while (iVar19 < *(int *)(lVar11 + 0x18));
                        }
                        iVar6 = iVar6 + 1;
                      } while (iVar6 < *(int *)(lVar7 + 0x18));
                    }
                    iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                                      (lVar10,0);
                    uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex_2495614
                                       (lVar10,&uStack_64,0);
                    if (((uVar13 & 1) != 0) &&
                       (lVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
                                           (lVar10,uStack_64,0), lVar10 != 0)) {
                      if (lVar10 == 0) goto LAB_02e95284;
                      uVar13 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__HasBlockerItemType_1e9102c
                                         (lVar10,0x11,0);
                      if ((uVar13 & 1) != 0) {
                        iVar6 = 1;
                      }
                    }
                    if ((0 < iVar18) && (iVar6 <= iVar17)) {
                      return 0;
                    }
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < *(int *)(lVar9 + 0x18));
              }
              iVar3 = *(int *)(lVar7 + 0x18);
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar3);
          }
          if (iVar3 < 1) {
            return 1;
          }
          iVar3 = 0;
          while (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (lVar7,iVar3,*(undefined8 *)puVar1), lVar9 != 0) {
            if (0 < *(int *)(lVar9 + 0x18)) {
              iVar16 = 0;
              do {
                lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (lVar9,iVar16,*(undefined8 *)puVar2);
                if (lVar10 == 0) goto LAB_02e95284;
                uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                                   (lVar10,0);
                if (((((uVar13 & 1) != 0) ||
                     (uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColorAndNotFull_2499a04
                                         (lVar10,0), (uVar13 & 1) != 0)) &&
                    (uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__CanComplete_2498ebc
                                        (lVar10,0), (uVar13 & 1) != 0)) &&
                   (0 < *(int *)(lVar7 + 0x18))) {
                  iVar18 = 0;
                  do {
                    lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar7,iVar18,*(undefined8 *)puVar1);
                    if (lVar11 == 0) goto LAB_02e95284;
                    if (0 < *(int *)(lVar11 + 0x18)) {
                      iVar17 = 0;
                      do {
                        lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                           (lVar11,iVar17,*(undefined8 *)puVar2);
                        if (lVar12 == 0) goto LAB_02e95284;
                        uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                                           (lVar12,0);
                        if ((uVar13 & 1) != 0) {
                          uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                            (lVar12,0);
                          uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
                                             (lVar10,lVar12,uVar4,0);
                          if ((uVar13 & 1) != 0) {
                            return 0;
                          }
                        }
                        iVar17 = iVar17 + 1;
                      } while (iVar17 < *(int *)(lVar11 + 0x18));
                    }
                    iVar18 = iVar18 + 1;
                  } while (iVar18 < *(int *)(lVar7 + 0x18));
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < *(int *)(lVar9 + 0x18));
            }
            iVar3 = iVar3 + 1;
            if (*(int *)(lVar7 + 0x18) <= iVar3) {
              return 1;
            }
          }
        }
LAB_02e95284:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

