/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ivy.EditorIvyView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ivy.EditorIvyView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyView__Prepare_3dd919c
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 03ed91ac to 03fd91b3 has its CatchHandler @ 03ed91c4 */
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyView__SetSorting_3dd93a4();
                    /* try { // try from 03ed91b4 to 03fd91db has its CatchHandler @ 03ed9164 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03ed91ac with catch @ 03ed91c4
                        */
  if ((((*(long *)(param_1 + 0x28) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
       lVar1 != 0)) && (UnityEngine_GameObject__SetActive_408e318(lVar1,1,0), param_4 != 0)) &&
     (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
                    /* try { // try from 03ed91dc to 03fd91f3 has its CatchHandler @ 03ed9224 */
    uStack_28 = *(undefined4 *)(param_4 + 0x58);
    uStack_24 = *(undefined4 *)(param_4 + 0x5c);
    uStack_30 = *(undefined4 *)(param_4 + 0x50);
    uStack_2c = *(undefined4 *)(param_4 + 0x54);
    if (pcRam0000000005c3a788 == (code *)0x0) {
      pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
    }
    (*pcRam0000000005c3a788)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03ed91f4 to 03fd9213 has its CatchHandler @ 03ed9164 */
  FUN_012d0ef0();
}

