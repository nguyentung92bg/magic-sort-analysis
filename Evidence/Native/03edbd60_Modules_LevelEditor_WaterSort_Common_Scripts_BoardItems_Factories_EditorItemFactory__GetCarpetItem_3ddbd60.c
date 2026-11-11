/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetCarpetItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Carpet_EditorCarpetItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetCarpetItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetCarpetItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Carpet_EditorCarpetItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetCarpetItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, int32_t id, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetCarpetItem_3ddbd60
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c37e31 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795bb8);
    bRam0000000005c37e31 = 1;
  }
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,0xc,param_5);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05795bb8 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05795bb8)) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Carpet_EditorCarpetItem__Prepare_3ddbe4c
                (param_1,param_2,param_3,plVar2,param_8,param_9);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

