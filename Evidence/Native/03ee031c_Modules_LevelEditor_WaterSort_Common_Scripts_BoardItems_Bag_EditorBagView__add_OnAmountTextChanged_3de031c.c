/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$add_OnAmountTextChanged
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__add_OnAmountTextChanged (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, System_Action_int__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$add_OnAmountTextChanged
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__add_OnAmountTextChanged
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this,
   System_Action_int__o* value, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__add_OnAmountTextChanged_3de031c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c37e65 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    bRam0000000005c37e65 = 1;
  }
  puVar1 = PTR_DAT_0577f3c8;
  lVar5 = *(long *)(param_1 + 0x40);
  do {
    lVar3 = System_Delegate__Combine_23e3964(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
    lVar3 = FUN_01351224((long *)(param_1 + 0x40),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

