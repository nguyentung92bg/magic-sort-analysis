/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddWaterItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddWaterItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t height, int32_t colorId, int32_t variant, bool isVisible, int32_t index, bool isRainbow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddWaterItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddWaterItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t height, int32_t
   colorId, int32_t variant, bool isVisible, int32_t index, bool isRainbow, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddWaterItem_2f69174
               (long param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
               byte param_6,int param_7,uint param_8)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                        (*(long *)(param_1 + 0x38),param_4,0), param_2 != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottleOutline_249d8b8
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
        lVar12 = *(long *)(param_1 + 0x28);
        puVar9 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        uVar15 = puVar9[2];
        uVar8 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0);
        if ((lVar12 != 0) &&
           (lVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWaterItem_2301f28
                               (uVar13,uVar14,uVar15,uVar13,uVar14,uVar15,lVar12,uVar8,uVar3,uVar4,
                                uVar1,param_3,param_7,uVar6,param_6 & 1,param_5,uVar7,0),
           lVar12 != 0)) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                    (lVar12,0,param_7,uVar1,0);
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow_1e9e860
                    (lVar12,param_8 & 1,0);
          if ((bRam0000000005c2b2e5 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057f2468);
            bRam0000000005c2b2e5 = 1;
          }
          puVar2 = PTR_DAT_057f2468;
          if (param_7 < param_3 + param_7) {
            do {
              if ((*(long *)(param_2 + 0x80) == 0) ||
                 (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (*(long *)(param_2 + 0x80),param_7,*(undefined8 *)puVar2),
                 lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              *(long *)(lVar5 + 0x20) = lVar12;
              FUN_012d0d74((long *)(lVar5 + 0x20),lVar12);
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
          lVar12 = *(long *)(param_2 + 0x80);
          if (lVar12 != 0) {
            iVar10 = *(int *)(lVar12 + 0x18) + -1;
            if (iVar10 < 0) {
              return;
            }
            lVar5 = 0;
            iVar11 = -1;
            do {
              lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar12,iVar10,*(undefined8 *)puVar2);
              if (lVar12 == 0) break;
              lVar12 = *(long *)(lVar12 + 0x20);
              if ((lVar12 != 0) && (lVar12 != lVar5)) {
                iVar11 = iVar11 + 1;
                *(int *)(lVar12 + 0x50) = iVar11;
                lVar5 = lVar12;
              }
              iVar10 = iVar10 + -1;
              if (iVar10 < 0) {
                return;
              }
              lVar12 = *(long *)(param_2 + 0x80);
            } while (lVar12 != 0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

