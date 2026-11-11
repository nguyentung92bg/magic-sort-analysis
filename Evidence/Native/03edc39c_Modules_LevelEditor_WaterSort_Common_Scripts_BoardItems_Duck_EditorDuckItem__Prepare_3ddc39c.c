/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckItem_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell_o* belongingCell, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckItem_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell_o* belongingCell,
   int32_t duckType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckItem__Prepare_3ddc39c
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  
  *(int *)(param_1 + 0x48) = param_6;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_5);
  *(undefined8 *)(param_1 + 0x40) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_4);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *(long *)(lVar1 + 0x28);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_6 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    if (*(long *)(lVar1 + 0x20) != 0) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(lVar1 + 0x20),
                 *(undefined8 *)(lVar2 + (long)(int)(param_6 - 1U) * 8 + 0x20),0);
      if (*(long *)(lVar1 + 0x20) != 0) {
        UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x20),param_3,0);
        lVar1 = *(long *)(lVar1 + 0x20);
        if (lVar1 != 0) {
          if (pcRam0000000005c39c20 == (code *)0x0) {
            pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
          }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c39c20)(lVar1,param_2);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

