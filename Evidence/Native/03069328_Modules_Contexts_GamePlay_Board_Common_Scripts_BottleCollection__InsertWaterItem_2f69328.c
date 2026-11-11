/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$InsertWaterItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__InsertWaterItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t height, int32_t colorId, int32_t variant, bool isVisible, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$InsertWaterItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__InsertWaterItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t height, int32_t
   colorId, int32_t variant, bool isVisible, int32_t index, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__InsertWaterItem_2f69328
               (long param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
               byte param_6,int param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                        (*(long *)(param_1 + 0x38),param_4,0), param_2 != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottleOutline_249d8b8
                      (param_2,0);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar3 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetEclipseSortOrder_4002840
                        (*(long *)(param_1 + 0x50),param_7,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar4 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBackWaterSortOrder_40027a8
                          (*(long *)(param_1 + 0x50),param_7,0);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        lVar13 = *(long *)(param_1 + 0x28);
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar14 = *puVar10;
        uVar15 = puVar10[1];
        uVar16 = puVar10[2];
        uVar9 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0);
        if ((lVar13 != 0) &&
           (lVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWaterItem_2301f28
                               (uVar14,uVar15,uVar16,uVar14,uVar15,uVar16,lVar13,uVar9,uVar3,uVar4,
                                uVar1,param_3,param_7,uVar7,param_6 & 1,param_5,uVar8,0),
           lVar13 != 0)) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                    (lVar13,0,param_7,uVar1,0);
          if ((bRam0000000005c2b2e6 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05780fc0);
            FUN_012d0dc8(PTR_DAT_057f2468);
            bRam0000000005c2b2e6 = 1;
          }
          puVar2 = PTR_DAT_057f2468;
          lVar5 = *(long *)(param_2 + 0x80);
          if (lVar5 != 0) {
            iVar11 = param_3 + param_7;
            iVar12 = *(int *)(lVar5 + 0x18) + -1;
            if (iVar12 < iVar11) {
LAB_025994b8:
              if (param_7 < iVar11) {
                do {
                  if ((*(long *)(param_2 + 0x80) == 0) ||
                     (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                        (*(long *)(param_2 + 0x80),param_7,*(undefined8 *)puVar2),
                     lVar5 == 0)) goto LAB_0259950c;
                  *(long *)(lVar5 + 0x20) = lVar13;
                  FUN_012d0d74((long *)(lVar5 + 0x20),lVar13);
                  param_3 = param_3 + -1;
                  param_7 = param_7 + 1;
                } while (param_3 != 0);
              }
              if ((bRam0000000005c2b2ec & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_05780fc0);
                FUN_012d0dc8(PTR_DAT_057f2468);
                bRam0000000005c2b2ec = 1;
              }
              puVar2 = PTR_DAT_057f2468;
              lVar13 = *(long *)(param_2 + 0x80);
              if (lVar13 != 0) {
                iVar11 = *(int *)(lVar13 + 0x18) + -1;
                if (iVar11 < 0) {
                  return;
                }
                lVar5 = 0;
                iVar12 = -1;
                do {
                  lVar13 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar13,iVar11,*(undefined8 *)puVar2);
                  if (lVar13 == 0) break;
                  lVar13 = *(long *)(lVar13 + 0x20);
                  if ((lVar13 != 0) && (lVar13 != lVar5)) {
                    iVar12 = iVar12 + 1;
                    *(int *)(lVar13 + 0x50) = iVar12;
                    lVar5 = lVar13;
                  }
                  iVar11 = iVar11 + -1;
                  if (iVar11 < 0) {
                    return;
                  }
                  lVar13 = *(long *)(param_2 + 0x80);
                } while (lVar13 != 0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            do {
              lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar5,iVar12,*(undefined8 *)puVar2);
              if (((*(long *)(param_2 + 0x80) == 0) ||
                  (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (*(long *)(param_2 + 0x80),iVar12 - param_3,
                                      *(undefined8 *)puVar2), lVar6 == 0)) || (lVar5 == 0)) break;
              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
              FUN_012d0d74((undefined8 *)(lVar5 + 0x20));
              iVar12 = iVar12 + -1;
              if (iVar12 < iVar11) goto LAB_025994b8;
              lVar5 = *(long *)(param_2 + 0x80);
            } while (lVar5 != 0);
          }
LAB_0259950c:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

