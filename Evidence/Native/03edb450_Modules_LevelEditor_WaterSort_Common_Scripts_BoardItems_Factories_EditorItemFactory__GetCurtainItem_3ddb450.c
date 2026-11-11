/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetCurtainItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetCurtainItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetCurtainItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetCurtainItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetCurtainItem_3ddb450
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 03edb458 to 03fdb45b has its CatchHandler @ 03edb580 */
                    /* try { // try from 03edb46c to 03fdb473 has its CatchHandler @ 03edb57c */
                    /* try { // try from 03edb488 to 03fdb48f has its CatchHandler @ 03edb594 */
  if ((bRam0000000005c37e29 & 1) == 0) {
                    /* try { // try from 03edb49c to 03fdb4a3 has its CatchHandler @ 03edb590 */
    FUN_012d0dc8(PTR_DAT_057f9160);
    bRam0000000005c37e29 = 1;
  }
                    /* try { // try from 03edb4b0 to 03fdb4b3 has its CatchHandler @ 03edb58c */
                    /* try { // try from 03edb4b8 to 03fdb4bf has its CatchHandler @ 03edb570 */
                    /* try { // try from 03edb4c0 to 03fdb4f7 has its CatchHandler @ 03edb2d0 */
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,4,param_5);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f9160 + 300);
                    /* try { // try from 03edb4f8 to 03fdb4ff has its CatchHandler @ 03edb56c */
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057f9160)) {
                    /* try { // try from 03edb50c to 03fdb52b has its CatchHandler @ 03edb574 */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem__Prepare_3ddb554
                (param_1,param_2,param_3,plVar2,param_6,param_7,param_8,param_9);
                    /* try { // try from 03edb540 to 03fdb543 has its CatchHandler @ 03edb564 */
                    /* try { // try from 03edb544 to 03fdb547 has its CatchHandler @ 03edb590 */
      return plVar2;
    }
                    /* try { // try from 03edb548 to 03fdb54b has its CatchHandler @ 03edb560 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03edb54c to 03fdb54f has its CatchHandler @ 03edb55c */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03edb550 to 03fdb553 has its CatchHandler @ 03edb558 */
  FUN_012d0ef0();
}

