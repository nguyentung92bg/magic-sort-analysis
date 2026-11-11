/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorId, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorId,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__Prepare_37b2a50
               (long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 038b2a54 to 039b2a5b has its CatchHandler @ 038b2da0 */
                    /* try { // try from 038b2a5c to 039b2a63 has its CatchHandler @ 038b2d9c */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 038b2a64 to 039b2a67 has its CatchHandler @ 038b2e10 */
                    /* try { // try from 038b2a68 to 039b2a8f has its CatchHandler @ 038b2e94 */
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_4,0);
                    /* try { // try from 038b2a90 to 039b2ab7 has its CatchHandler @ 038b2e90 */
    if (((*(long *)(param_1 + 0x28) != 0) &&
        (UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                   (*(long *)(param_1 + 0x28),param_4,0), param_2 != 0)) &&
       (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
      uStack_28 = *(undefined4 *)(param_2 + 0x58);
      uStack_24 = *(undefined4 *)(param_2 + 0x5c);
      uStack_30 = *(undefined4 *)(param_2 + 0x50);
      uStack_2c = *(undefined4 *)(param_2 + 0x54);
      if (pcRam0000000005c3a788 == (code *)0x0) {
        pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
      }
      (*pcRam0000000005c3a788)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

