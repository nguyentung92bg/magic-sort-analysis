/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawBag
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawBag (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawBag
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawBag
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawBag_37a5fe0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lStack_18;
  
  lVar3 = *(long *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lStack_18 = 0;
  uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (lVar3,&lStack_18);
  if ((uVar4 & 1) != 0) {
    if (lStack_18 == 0) {
LAB_038a88a4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasAnyBlocker_3ddf448
                      (lStack_18,0);
    if ((uVar4 & 1) != 0) {
      if (lStack_18 == 0) goto LAB_038a88a4;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_18,0);
    }
    lVar1 = lStack_18;
    uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetExistingBagRequiredAmount_37b0f20
                      (lVar3);
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBagItem_37afdcc
              (lVar3,lVar1,uVar2);
  }
  return;
}

