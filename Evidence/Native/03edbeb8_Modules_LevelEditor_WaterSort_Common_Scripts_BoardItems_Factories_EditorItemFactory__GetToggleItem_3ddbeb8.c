/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetToggleItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetToggleItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetToggleItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetToggleItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, bool isOn, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetToggleItem_3ddbeb8
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 uint param_9)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c37e32 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057745f8);
    bRam0000000005c37e32 = 1;
  }
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,0xe,param_5);
                    /* try { // try from 03edbf30 to 03fdc087 has its CatchHandler @ 03edbf30
                       catch() { ... } // from try @ 03edbf30 with catch @ 03edbf30
                       catch() { ... } // from try @ 03edc0b8 with catch @ 03edbf30
                       catch() { ... } // from try @ 03edc0fc with catch @ 03edbf30
                       catch() { ... } // from try @ 03edc128 with catch @ 03edbf30
                       catch() { ... } // from try @ 03edc158 with catch @ 03edbf30 */
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057745f8 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057745f8)) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem__Prepare_37b264c
                (plVar2,param_6,param_7,param_8,param_9 & 1,0);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

