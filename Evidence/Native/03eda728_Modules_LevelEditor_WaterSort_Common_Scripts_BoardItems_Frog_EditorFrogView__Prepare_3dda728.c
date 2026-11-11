/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog.EditorFrogView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog.EditorFrogView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t id, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView__Prepare_3dda728
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
                    /* try { // try from 03eda734 to 03fda8e7 has its CatchHandler @ 03eda734
                       catch() { ... } // from try @ 03eda734 with catch @ 03eda734
                       catch() { ... } // from try @ 03edad24 with catch @ 03eda734
                       catch() { ... } // from try @ 03edae30 with catch @ 03eda734
                       catch() { ... } // from try @ 03edaeac with catch @ 03eda734
                       catch() { ... } // from try @ 03edaf14 with catch @ 03eda734 */
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogView__SetSorting_3dda920();
  lVar2 = *(long *)(param_1 + 0x30);
  uVar1 = System_Int32__ToString_26c9768(&uStack_14,0);
  if (lVar2 != 0) {
    TMPro_TMP_Text__SetText_3dc1ab4(lVar2,uVar1,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

