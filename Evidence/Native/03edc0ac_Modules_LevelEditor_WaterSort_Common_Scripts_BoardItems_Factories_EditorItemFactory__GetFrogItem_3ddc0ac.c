/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetFrogItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetFrogItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetFrogItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetFrogItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, int32_t id, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetFrogItem_3ddc0ac
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 03edc0ac to 03fdc0b7 has its CatchHandler @ 03edc108 */
                    /* try { // try from 03edc0b8 to 03fdc0f7 has its CatchHandler @ 03edbf30 */
  if ((bRam0000000005c37e34 & 1) == 0) {
                    /* try { // try from 03edc0f8 to 03fdc0fb has its CatchHandler @ 03edc100 */
                    /* try { // try from 03edc0fc to 03fdc123 has its CatchHandler @ 03edbf30 */
    FUN_012d0dc8(PTR_DAT_057cba38);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03edc0f8 with catch @ 03edc100
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03edc0a0 with catch @ 03edc104
                        */
    bRam0000000005c37e34 = 1;
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03edc0ac with catch @ 03edc108
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03edc088 with catch @ 03edc10c
                        */
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,0x10,param_5);
                    /* try { // try from 03edc124 to 03fdc127 has its CatchHandler @ 03edc148 */
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 03edc128 to 03fdc14f has its CatchHandler @ 03edbf30 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_057cba38 + 300);
                    /* catch() { ... } // from try @ 03edc124 with catch @ 03edc148 */
                    /* try { // try from 03edc150 to 03fdc157 has its CatchHandler @ 03edc16c */
                    /* try { // try from 03edc158 to 03fdc163 has its CatchHandler @ 03edbf30 */
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057cba38)) {
                    /* try { // try from 03edc164 to 03fdc16b has its CatchHandler @ 03edc16c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03edc150 with catch @ 03edc16c
                       catch(type#2 @ 00000000) { ... } // from try @ 03edc164 with catch @ 03edc16c
                        */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem__Prepare_3dda6c8
                (plVar2,param_6,param_7,param_8,param_9);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

