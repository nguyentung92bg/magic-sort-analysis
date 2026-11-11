/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddQuestionMarkItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddQuestionMarkItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddQuestionMarkItem
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddQuestionMarkItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle,
   int32_t index, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddQuestionMarkItem_37a77ec
               (long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_2 != 0) {
    lVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetCell_3ddf19c
                      (param_2,param_3,0);
    if (lVar1 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                        (*(long *)(param_1 + 0x30),0xffffffff,0);
      if ((*(long *)(param_2 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
        uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetQuestionMarkItem_3ddb368
                          (*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),
                           *(undefined4 *)(lVar1 + 0x18),*(long *)(param_1 + 0x28),
                           *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),lVar2,0);
        *(undefined8 *)(lVar1 + 0x28) = uVar3;
        FUN_012d0d74((undefined8 *)(lVar1 + 0x28),uVar3);
        if (*(long *)(lVar1 + 0x20) == 0) {
          return;
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0x30);
        if (lVar1 != 0) {
          if ((lVar2 != 0) && (*(long *)(lVar1 + 0x28) != 0)) {
            UnityEngine_SpriteRenderer__set_color_4095de0
                      (*(undefined4 *)(lVar2 + 0x50),*(undefined4 *)(lVar2 + 0x54),
                       *(undefined4 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x5c),
                       *(long *)(lVar1 + 0x28),0);
            lVar1 = *(long *)(lVar1 + 0x30);
            if (lVar1 != 0) {
              uStack_28 = *(undefined4 *)(lVar2 + 0x68);
              uStack_24 = *(undefined4 *)(lVar2 + 0x6c);
              uStack_30 = *(undefined4 *)(lVar2 + 0x60);
              uStack_2c = *(undefined4 *)(lVar2 + 100);
              if (pcRam0000000005c3a788 == (code *)0x0) {
                pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
              }
              (*pcRam0000000005c3a788)(lVar1,&uStack_30);
              return;
            }
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

