/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$SetRequiredAmount
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__SetRequiredAmount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, int32_t requiredAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$SetRequiredAmount
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__SetRequiredAmount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, int32_t
   requiredAmount, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__SetRequiredAmount_3de0424
               (long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uStack_14 = param_2;
  uVar1 = System_Int32__ToString_26c9768(&uStack_14,0);
  if (lVar2 != 0) {
    TMPro_TMP_InputField__set_text_3790d40(lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

