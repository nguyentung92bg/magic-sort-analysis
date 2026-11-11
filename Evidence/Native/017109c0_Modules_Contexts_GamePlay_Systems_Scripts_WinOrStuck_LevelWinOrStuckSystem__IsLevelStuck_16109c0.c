/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$IsLevelStuck
bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsLevelStuck (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$IsLevelStuck
   bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsLevelStuck
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsLevelStuck_16109c0
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_64;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
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
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    iVar15 = *(int *)(lVar6 + 0x18);
    if (0 < iVar15) {
      iVar12 = 0;
      do {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar6,iVar12,*(undefined8 *)puVar1);
        if (lVar7 == 0) goto LAB_02e95284;
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar15 = 0;
          do {
            lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar7,iVar15,*(undefined8 *)puVar2);
            if (lVar8 == 0) goto LAB_02e95284;
            uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                              (lVar8,0);
            if ((uVar9 & 1) != 0) {
              if (*(int *)(lVar6 + 0x18) < 1) {
                iVar14 = 0;
                iVar13 = 0;
              }
              else {
                iVar13 = 0;
                iVar14 = 0;
                iVar5 = 0;
                do {
                  lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar6,iVar5,*(undefined8 *)puVar1);
                  if (lVar10 == 0) goto LAB_02e95284;
                  if (0 < *(int *)(lVar10 + 0x18)) {
                    iVar16 = 0;
                    do {
                      lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar10,iVar16,*(undefined8 *)puVar2);
                      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                        (lVar8,0);
                      if (lVar11 == 0) goto LAB_02e95284;
                      uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
                                        (lVar11,lVar8,uVar3,0);
                      if (((uVar9 & 1) != 0) &&
                         (((uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                                              (lVar11,0), (uVar9 & 1) == 0 ||
                           (iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterCountBelowTheTopWater_2494c4c
                                              (lVar8,0), iVar4 != 0)) ||
                          (*(int *)(lVar11 + 0x48) < *(int *)(lVar8 + 0x48))))) {
                        iVar14 = iVar14 + 1;
                        iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                                          (lVar11,0);
                        iVar13 = iVar4 + iVar13;
                      }
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < *(int *)(lVar10 + 0x18));
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(lVar6 + 0x18));
              }
              iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                                (lVar8,0);
              uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex_2495614
                                (lVar8,&uStack_64,0);
              if (((uVar9 & 1) != 0) &&
                 (lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
                                    (lVar8,uStack_64,0), lVar8 != 0)) {
                if (lVar8 == 0) goto LAB_02e95284;
                uVar9 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__HasBlockerItemType_1e9102c
                                  (lVar8,0x11,0);
                if ((uVar9 & 1) != 0) {
                  iVar5 = 1;
                }
              }
              if ((0 < iVar14) && (iVar5 <= iVar13)) {
                return 0;
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(lVar7 + 0x18));
        }
        iVar15 = *(int *)(lVar6 + 0x18);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar15);
    }
    if (0 < iVar15) {
      iVar15 = 0;
      do {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar6,iVar15,*(undefined8 *)puVar1);
        if (lVar7 == 0) goto LAB_02e95284;
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar12 = 0;
          do {
            lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar7,iVar12,*(undefined8 *)puVar2);
            if (lVar8 == 0) goto LAB_02e95284;
            uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                              (lVar8,0);
            if (((((uVar9 & 1) != 0) ||
                 (uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColorAndNotFull_2499a04
                                    (lVar8,0), (uVar9 & 1) != 0)) &&
                (uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__CanComplete_2498ebc
                                   (lVar8,0), (uVar9 & 1) != 0)) && (0 < *(int *)(lVar6 + 0x18))) {
              iVar14 = 0;
              do {
                lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (lVar6,iVar14,*(undefined8 *)puVar1);
                if (lVar10 == 0) goto LAB_02e95284;
                if (0 < *(int *)(lVar10 + 0x18)) {
                  iVar13 = 0;
                  do {
                    lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar10,iVar13,*(undefined8 *)puVar2);
                    if (lVar11 == 0) goto LAB_02e95284;
                    uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                                      (lVar11,0);
                    if ((uVar9 & 1) != 0) {
                      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                        (lVar11,0);
                      uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
                                        (lVar8,lVar11,uVar3,0);
                      if ((uVar9 & 1) != 0) {
                        return 0;
                      }
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < *(int *)(lVar10 + 0x18));
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(lVar6 + 0x18));
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(lVar7 + 0x18));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar6 + 0x18));
    }
    return 1;
  }
LAB_02e95284:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

