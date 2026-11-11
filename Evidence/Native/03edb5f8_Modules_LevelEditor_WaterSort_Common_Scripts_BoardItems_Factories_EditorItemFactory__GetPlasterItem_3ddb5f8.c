/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetPlasterItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetPlasterItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetPlasterItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetPlasterItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetPlasterItem_3ddb5f8
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 03edb618 to 03fdb627 has its CatchHandler @ 03edb628 */
                    /* catch() { ... } // from try @ 03edb5b0 with catch @ 03edb628
                       catch() { ... } // from try @ 03edb618 with catch @ 03edb628 */
                    /* try { // try from 03edb62c to 03fdb62f has its CatchHandler @ 03edb638 */
                    /* try { // try from 03edb630 to 03fdb63b has its CatchHandler @ 03edb2d0 */
                    /* catch() { ... } // from try @ 03edb62c with catch @ 03edb638 */
  if ((bRam0000000005c37e2a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05784860);
    bRam0000000005c37e2a = 1;
  }
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,6,param_5);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05784860 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05784860)) {
                    /* try { // try from 03edb6a8 to 03fdb767 has its CatchHandler @ 03edb6a8
                       catch() { ... } // from try @ 03edb6a8 with catch @ 03edb6a8
                       catch() { ... } // from try @ 03edb84c with catch @ 03edb6a8
                       catch() { ... } // from try @ 03edb8b0 with catch @ 03edb6a8
                       catch() { ... } // from try @ 03edb90c with catch @ 03edb6a8
                       catch() { ... } // from try @ 03edb980 with catch @ 03edb6a8 */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem__Prepare_37b3bbc
                (param_1,param_2,param_3,plVar2,param_6,param_7,param_8,0);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

