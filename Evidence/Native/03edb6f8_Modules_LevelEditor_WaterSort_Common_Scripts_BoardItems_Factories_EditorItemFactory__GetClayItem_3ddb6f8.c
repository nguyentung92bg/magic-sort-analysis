/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetClayItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Clay_EditorClayItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetClayItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetClayItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Clay_EditorClayItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetClayItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetClayItem_3ddb6f8
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c37e2b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05760f18);
    bRam0000000005c37e2b = 1;
  }
                    /* try { // try from 03edb768 to 03fdb76b has its CatchHandler @ 03edb8dc */
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,5,param_5);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05760f18 + 300);
                    /* try { // try from 03edb79c to 03fdb79f has its CatchHandler @ 03edb8d4 */
                    /* try { // try from 03edb7a4 to 03fdb7ab has its CatchHandler @ 03edb8d0 */
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05760f18)) {
                    /* try { // try from 03edb7bc to 03fdb7bf has its CatchHandler @ 03edb8cc */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Clay_EditorClayItem__Prepare_3ddb7f4
                (param_1,param_2,param_3,plVar2,param_6,param_7,param_8);
                    /* try { // try from 03edb7d0 to 03fdb7d7 has its CatchHandler @ 03edb8c8 */
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03edb7ec to 03fdb7f3 has its CatchHandler @ 03edb8c0 */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

