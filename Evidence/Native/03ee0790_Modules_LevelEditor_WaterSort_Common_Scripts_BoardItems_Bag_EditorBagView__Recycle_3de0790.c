/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$Recycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Recycle_3de0790
               (long param_1)

{
  long lVar1;
  
                    /* try { // try from 03ee0790 to 03fe0793 has its CatchHandler @ 03ee07bc */
                    /* try { // try from 03ee0794 to 03fe07cb has its CatchHandler @ 03ee068c */
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

