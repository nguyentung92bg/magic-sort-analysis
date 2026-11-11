/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$OnSetTextFromEditor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__OnSetTextFromEditor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$OnSetTextFromEditor
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__OnSetTextFromEditor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__OnSetTextFromEditor_3de06f4
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 03ee0718 to 03fe071f has its CatchHandler @ 03ee0774 */
    uVar1 = System_Int32__TryParse_26c9e7c
                      (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x218),&uStack_14,0);
    if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x40), lVar2 != 0)) {
                    /* try { // try from 03ee072c to 03fe0743 has its CatchHandler @ 03ee0778 */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),uStack_14,*(undefined8 *)(lVar2 + 0x28));
    }
                    /* try { // try from 03ee0744 to 03fe0763 has its CatchHandler @ 03ee068c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

