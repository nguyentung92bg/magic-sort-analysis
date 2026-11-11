/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddSafe
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafe (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector2_o position, int32_t safeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddSafe
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafe
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector2_o position, int32_t safeType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafe_37a87bc
               (undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lStack_28;
  
  lStack_28 = 0;
  uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,&lStack_28);
  if ((uVar3 & 1) != 0) {
    if (lStack_28 == 0) {
LAB_038a8838:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                      (lStack_28,0);
    if ((uVar3 & 1) != 0) {
      if (lStack_28 == 0) goto LAB_038a8838;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_28,0);
    }
    lVar1 = lStack_28;
    uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetRequiredAmountBySafeType_37b0818
                      (param_1,param_2);
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafeItem_37b0080
              (param_1,lVar1,uVar2,param_2);
  }
  return;
}

