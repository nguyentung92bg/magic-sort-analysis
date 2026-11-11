/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkView$$SetSortOrder
void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__SetSortOrder (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkView$$SetSortOrder
   void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__SetSortOrder
   (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView_o* __this, int32_t
   sortOrder, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__SetSortOrder_37adf5c
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 038adefc with catch @ 038adf64
                        */
  if (lVar1 != 0) {
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

