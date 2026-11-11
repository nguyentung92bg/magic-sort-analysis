/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster.EditorPlasterView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster.EditorPlasterView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__Prepare_37b3c3c
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

