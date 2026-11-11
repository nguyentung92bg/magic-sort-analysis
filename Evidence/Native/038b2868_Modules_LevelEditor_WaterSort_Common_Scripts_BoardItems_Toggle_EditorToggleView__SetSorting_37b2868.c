/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleView$$SetSorting
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__SetSorting (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleView$$SetSorting
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__SetSorting
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__SetSorting_37b2868
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
                    /* try { // try from 038b2868 to 039b2883 has its CatchHandler @ 038b2e94 */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 038b2884 to 039b2887 has its CatchHandler @ 038b2de4 */
                    /* try { // try from 038b2888 to 039b288b has its CatchHandler @ 038b2de0 */
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_3,0);
                    /* try { // try from 038b288c to 039b28a3 has its CatchHandler @ 038b2e54 */
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
                    /* try { // try from 038b28a8 to 039b28c3 has its CatchHandler @ 038b2e90 */
  FUN_012d0ef0();
}

