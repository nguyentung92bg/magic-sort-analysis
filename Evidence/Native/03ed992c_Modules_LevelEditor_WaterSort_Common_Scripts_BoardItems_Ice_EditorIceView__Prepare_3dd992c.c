/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ice.EditorIceView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView_o* __this, int32_t id, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ice.EditorIceView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView_o* __this, int32_t id,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ice_EditorIceView__Prepare_3dd992c
               (long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uStack_24;
  
  plVar2 = *(long **)(param_1 + 0x28);
  uStack_24 = param_2;
  uVar1 = System_Int32__ToString_26c9768(&uStack_24,0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

