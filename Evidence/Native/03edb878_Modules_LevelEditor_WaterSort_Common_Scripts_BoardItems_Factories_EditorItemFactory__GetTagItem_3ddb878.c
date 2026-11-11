/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetTagItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetTagItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetTagItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetTagItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetTagItem_3ddb878
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 03edb898 to 03fdb89b has its CatchHandler @ 03edb8bc */
                    /* try { // try from 03edb89c to 03fdb89f has its CatchHandler @ 03edb8b8 */
                    /* try { // try from 03edb8a0 to 03fdb8a3 has its CatchHandler @ 03edb8b4 */
                    /* try { // try from 03edb8a4 to 03fdb8a7 has its CatchHandler @ 03edb8b0 */
                    /* try { // try from 03edb8a8 to 03fdb8ab has its CatchHandler @ 03edb8d4 */
                    /* try { // try from 03edb8ac to 03fdb8af has its CatchHandler @ 03edb8d0 */
                    /* catch() { ... } // from try @ 03edb8a4 with catch @ 03edb8b0
                       try { // try from 03edb8b0 to 03fdb8f3 has its CatchHandler @ 03edb6a8 */
                    /* catch() { ... } // from try @ 03edb8a0 with catch @ 03edb8b4 */
                    /* catch() { ... } // from try @ 03edb89c with catch @ 03edb8b8 */
                    /* catch() { ... } // from try @ 03edb898 with catch @ 03edb8bc */
  if ((bRam0000000005c37e2c & 1) == 0) {
                    /* catch() { ... } // from try @ 03edb7ec with catch @ 03edb8c0 */
                    /* catch() { ... } // from try @ 03edb800 with catch @ 03edb8c4 */
                    /* catch() { ... } // from try @ 03edb7d0 with catch @ 03edb8c8 */
    FUN_012d0dc8(PTR_DAT_0579f160);
                    /* catch() { ... } // from try @ 03edb7bc with catch @ 03edb8cc */
                    /* catch() { ... } // from try @ 03edb7a4 with catch @ 03edb8d0
                       catch() { ... } // from try @ 03edb8ac with catch @ 03edb8d0 */
    bRam0000000005c37e2c = 1;
  }
                    /* catch() { ... } // from try @ 03edb79c with catch @ 03edb8d4
                       catch() { ... } // from try @ 03edb8a8 with catch @ 03edb8d4 */
                    /* catch() { ... } // from try @ 03edb844 with catch @ 03edb8d8 */
                    /* catch() { ... } // from try @ 03edb768 with catch @ 03edb8dc */
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,7,param_5);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 03edb8f4 to 03fdb90b has its CatchHandler @ 03edb978 */
                    /* try { // try from 03edb90c to 03fdb967 has its CatchHandler @ 03edb6a8 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_0579f160 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0579f160)) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem__Prepare_37b29c4
                (param_1,param_2,param_3,plVar2,param_6,param_7,param_8,param_9,0);
                    /* try { // try from 03edb968 to 03fdb977 has its CatchHandler @ 03edb978 */
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03edb8f4 with catch @ 03edb978
                       catch() { ... } // from try @ 03edb968 with catch @ 03edb978 */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03edb97c to 03fdb97f has its CatchHandler @ 03edb988 */
  FUN_012d0ef0();
}

