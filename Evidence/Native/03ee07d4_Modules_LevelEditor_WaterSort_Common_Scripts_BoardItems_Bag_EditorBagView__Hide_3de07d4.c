/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$Hide
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Hide (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$Hide
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Hide
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Hide_3de07d4
               (undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 03ee07d4 to 03fe07df has its CatchHandler @ 03ee068c */
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
                    /* try { // try from 03ee07e0 to 03fe07e7 has its CatchHandler @ 03ee07e8 */
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

