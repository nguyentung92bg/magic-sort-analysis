/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagItem$$OnUpdatedRequiredAmount
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem__OnUpdatedRequiredAmount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagItem$$OnUpdatedRequiredAmount
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem__OnUpdatedRequiredAmount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem_o* __this, int32_t
   amount, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem__OnUpdatedRequiredAmount_3de0404
               (long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
  uStack_14 = param_2;
  uVar1 = System_Int32__ToString_26c9768(&uStack_14,0);
  if (lVar2 != 0) {
    TMPro_TMP_InputField__set_text_3790d40(lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

