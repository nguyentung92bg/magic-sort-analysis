/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ice.EditorIceItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceItem_o* __this, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ice.EditorIceItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceItem_o* __this,
   UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, int32_t id, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceItem__Prepare_3dd98a4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  *(undefined8 *)(param_4 + 0x38) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x38),param_7);
  *(undefined4 *)(param_4 + 0x40) = param_8;
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalPosition_37acac8
            (param_1,param_2,param_3,param_4,0);
  lVar1 = *(long *)(param_4 + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar3 = *(long **)(lVar1 + 0x28);
  uVar2 = System_Int32__ToString_26c9768(&stack0xffffffffffffffdc,0,param_5);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
    if (*(long *)(lVar1 + 0x20) != 0) {
      UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x20),param_6,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

