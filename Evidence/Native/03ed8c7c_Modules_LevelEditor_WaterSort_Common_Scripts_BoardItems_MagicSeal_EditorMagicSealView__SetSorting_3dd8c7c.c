/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.MagicSeal.EditorMagicSealView$$SetSorting
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView__SetSorting (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.MagicSeal.EditorMagicSealView$$SetSorting
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView__SetSorting
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealView__SetSorting_3dd8c7c
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
                    /* try { // try from 03ed8c7c to 03fd8c87 has its CatchHandler @ 03ed8e3c */
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_3,0);
    lVar1 = *(long *)(param_1 + 0x20);
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

