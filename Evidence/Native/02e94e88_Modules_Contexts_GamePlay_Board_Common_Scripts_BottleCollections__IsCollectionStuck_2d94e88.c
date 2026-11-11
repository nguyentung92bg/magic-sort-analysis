/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$IsCollectionStuck
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionStuck (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$IsCollectionStuck
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionStuck
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionStuck_2d94e88
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_64;
  
  if ((bRam0000000005c2f9fb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c2f9fb = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  uStack_64 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar11 != 0)) {
    iVar15 = *(int *)(lVar11 + 0x18);
    if (0 < iVar15) {
      iVar12 = 0;
      do {
        lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar11,iVar12,*(undefined8 *)puVar1);
        if (lVar6 == 0) goto LAB_02e95284;
        if (0 < *(int *)(lVar6 + 0x18)) {
          iVar15 = 0;
          do {
            lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar6,iVar15,*(undefined8 *)puVar2);
            if (lVar7 == 0) goto LAB_02e95284;
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                              (lVar7,0);
            if ((uVar8 & 1) != 0) {
                    /* try { // try from 02e94f80 to 02f95093 has its CatchHandler @ 02e94f80
                       catch() { ... } // from try @ 02e94f80 with catch @ 02e94f80
                       catch() { ... } // from try @ 02e951b4 with catch @ 02e94f80
                       catch() { ... } // from try @ 02e9523c with catch @ 02e94f80
                       catch() { ... } // from try @ 02e95244 with catch @ 02e94f80
                       catch() { ... } // from try @ 02e952e4 with catch @ 02e94f80 */
              if (*(int *)(lVar11 + 0x18) < 1) {
                iVar14 = 0;
                iVar13 = 0;
              }
              else {
                iVar13 = 0;
                iVar14 = 0;
                iVar5 = 0;
                do {
                  lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar11,iVar5,*(undefined8 *)puVar1);
                  if (lVar9 == 0) goto LAB_02e95284;
                  if (0 < *(int *)(lVar9 + 0x18)) {
                    iVar16 = 0;
                    do {
                      lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar9,iVar16,*(undefined8 *)puVar2);
                      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                        (lVar7,0);
                      if (lVar10 == 0) goto LAB_02e95284;
                      uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
                                        (lVar10,lVar7,uVar3,0);
                      if (((uVar8 & 1) != 0) &&
                         (((uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                                              (lVar10,0), (uVar8 & 1) == 0 ||
                           (iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterCountBelowTheTopWater_2494c4c
                                              (lVar7,0), iVar4 != 0)) ||
                          (*(int *)(lVar10 + 0x48) < *(int *)(lVar7 + 0x48))))) {
                        iVar14 = iVar14 + 1;
                        iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                                          (lVar10,0);
                        iVar13 = iVar4 + iVar13;
                      }
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < *(int *)(lVar9 + 0x18));
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(lVar11 + 0x18));
              }
              iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                                (lVar7,0);
              uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex_2495614
                                (lVar7,&uStack_64,0);
                    /* try { // try from 02e95094 to 02f950bb has its CatchHandler @ 02e95260 */
              if (((uVar8 & 1) != 0) &&
                 (lVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
                                    (lVar7,uStack_64,0), lVar7 != 0)) {
                if (lVar7 == 0) goto LAB_02e95284;
                uVar8 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__HasBlockerItemType_1e9102c
                                  (lVar7,0x11,0);
                if ((uVar8 & 1) != 0) {
                  iVar5 = 1;
                }
              }
              if ((0 < iVar14) && (iVar5 <= iVar13)) {
                return 0;
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(lVar6 + 0x18));
        }
        iVar15 = *(int *)(lVar11 + 0x18);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar15);
    }
    if (0 < iVar15) {
      iVar15 = 0;
      do {
        lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar11,iVar15,*(undefined8 *)puVar1);
        if (lVar6 == 0) goto LAB_02e95284;
        if (0 < *(int *)(lVar6 + 0x18)) {
          iVar12 = 0;
          do {
            lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar6,iVar12,*(undefined8 *)puVar2);
            if (lVar7 == 0) goto LAB_02e95284;
                    /* try { // try from 02e95168 to 02f9516f has its CatchHandler @ 02e95258 */
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                              (lVar7,0);
            if (((((uVar8 & 1) != 0) ||
                 (uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColorAndNotFull_2499a04
                                    (lVar7,0), (uVar8 & 1) != 0)) &&
                (uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__CanComplete_2498ebc
                                   (lVar7,0), (uVar8 & 1) != 0)) && (0 < *(int *)(lVar11 + 0x18))) {
              iVar14 = 0;
              do {
                    /* try { // try from 02e951ac to 02f951b3 has its CatchHandler @ 02e9525c */
                lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (lVar11,iVar14,*(undefined8 *)puVar1);
                if (lVar9 == 0) goto LAB_02e95284;
                    /* try { // try from 02e951b4 to 02f9522f has its CatchHandler @ 02e94f80 */
                if (0 < *(int *)(lVar9 + 0x18)) {
                  iVar13 = 0;
                  do {
                    lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar9,iVar13,*(undefined8 *)puVar2);
                    if (lVar10 == 0) goto LAB_02e95284;
                    uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                                      (lVar10,0);
                    if ((uVar8 & 1) != 0) {
                      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                        (lVar10,0);
                      uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
                                        (lVar7,lVar10,uVar3,0);
                      if ((uVar8 & 1) != 0) {
                        return 0;
                      }
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < *(int *)(lVar9 + 0x18));
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(lVar11 + 0x18));
            }
                    /* try { // try from 02e95230 to 02f95233 has its CatchHandler @ 02e95254 */
                    /* try { // try from 02e95234 to 02f95237 has its CatchHandler @ 02e95250 */
            iVar12 = iVar12 + 1;
                    /* try { // try from 02e95238 to 02f9523b has its CatchHandler @ 02e95254 */
                    /* try { // try from 02e9523c to 02f9523f has its CatchHandler @ 02e94f80 */
          } while (iVar12 < *(int *)(lVar6 + 0x18));
        }
                    /* try { // try from 02e95240 to 02f95243 has its CatchHandler @ 02e9524c */
                    /* try { // try from 02e95244 to 02f9527b has its CatchHandler @ 02e94f80 */
        iVar15 = iVar15 + 1;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02e95240 with catch @ 02e9524c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02e95234 with catch @ 02e95250
                        */
      } while (iVar15 < *(int *)(lVar11 + 0x18));
    }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02e951ac with catch @ 02e9525c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02e95094 with catch @ 02e95260
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02e950d4 with catch @ 02e95264
                        */
    return 1;
  }
LAB_02e95284:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

