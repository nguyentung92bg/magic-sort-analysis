/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog.EditorFrogItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog.EditorFrogItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, int32_t id, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem__Prepare_3dda6c8
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  *(undefined8 *)(param_1 + 0x38) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_4);
  if (*(long *)(param_1 + 0x30) != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView__Prepare_3dda728
              (*(long *)(param_1 + 0x30),param_2,param_3,param_5);
    *(undefined4 *)(param_1 + 0x44) = param_5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

