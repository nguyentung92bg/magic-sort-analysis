/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetFireworkItem
Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetFireworkItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, int32_t fireworkCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetFireworkItem
   Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetFireworkItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, int32_t fireworkCount, const MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetFireworkItem_3ddc8e8
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c37e3b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576a680);
    bRam0000000005c37e3b = 1;
  }
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
                             (param_1,param_2,param_3,param_4,0x18,param_5);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0576a680 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0576a680)) {
      Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem__Prepare_37adc74
                (param_1,param_2,param_3,plVar2,param_5,param_6,param_7,param_8,param_9,0);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

