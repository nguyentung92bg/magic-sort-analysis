/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddWaterItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWaterItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, int32_t height, int32_t index, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddWaterItem
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWaterItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle,
   int32_t height, int32_t index, int32_t colorId, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWaterItem_37a7738
               (long param_1,long param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((((*(long *)(param_1 + 0x30) != 0) &&
       (uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                          (*(long *)(param_1 + 0x30),param_5,0), param_2 != 0)) &&
      (*(long *)(param_2 + 0x20) != 0)) && (*(long *)(param_1 + 0x40) != 0)) {
    lVar5 = *(long *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
    auVar8 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWaterSortOrderForEditor_40027b4
                       (*(long *)(param_1 + 0x40),param_4,0);
    if (lVar5 != 0) {
      uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetWaterItem_3ddb278
                        (lVar5,uVar7,param_3,param_4,uVar2,auVar8._0_8_,auVar8._8_8_,0);
      if ((bRam0000000005c37e4c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057f6ca8);
        bRam0000000005c37e4c = 1;
      }
      puVar1 = PTR_DAT_057f6ca8;
      if (param_4 < param_3 + param_4) {
        do {
          if ((*(long *)(param_2 + 0x60) == 0) ||
             (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (*(long *)(param_2 + 0x60),param_4,*(undefined8 *)puVar1),
             lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          *(undefined8 *)(lVar5 + 0x20) = uVar2;
          FUN_012d0d74((undefined8 *)(lVar5 + 0x20),uVar2);
          param_3 = param_3 + -1;
          param_4 = param_4 + 1;
        } while (param_3 != 0);
      }
      if ((bRam0000000005c37e4d & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057e76e8);
        FUN_012d0dc8(PTR_DAT_057f6ca8);
        bRam0000000005c37e4d = 1;
      }
      puVar1 = PTR_DAT_057f6ca8;
      lVar5 = *(long *)(param_2 + 0x60);
      if (lVar5 != 0) {
        iVar3 = *(int *)(lVar5 + 0x18) + -1;
        if (iVar3 < 0) {
          return;
        }
        lVar6 = 0;
        iVar4 = -1;
        do {
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar5,iVar3,*(undefined8 *)puVar1);
          if (lVar5 == 0) break;
          lVar5 = *(long *)(lVar5 + 0x20);
          if ((lVar5 != 0) && (lVar5 != lVar6)) {
            iVar4 = iVar4 + 1;
            *(int *)(lVar5 + 0x38) = iVar4;
            lVar6 = lVar5;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) {
            return;
          }
          lVar5 = *(long *)(param_2 + 0x60);
        } while (lVar5 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

