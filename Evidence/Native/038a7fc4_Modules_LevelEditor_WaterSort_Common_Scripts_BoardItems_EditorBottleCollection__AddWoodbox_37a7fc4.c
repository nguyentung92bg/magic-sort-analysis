/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddWoodbox
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWoodbox (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector2_o position, int32_t woodboxKeyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddWoodbox
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWoodbox
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector2_o position, int32_t woodboxKeyType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWoodbox_37a7fc4
               (undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  long lStack_18;
  
  lStack_18 = 0;
  uVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,&lStack_18);
  if ((uVar1 & 1) != 0) {
    if (lStack_18 == 0) {
LAB_038a8024:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                      (lStack_18,0);
    if ((uVar1 & 1) != 0) {
      if (lStack_18 == 0) goto LAB_038a8024;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_18,0);
    }
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWoodboxItem_37afe68
              (param_1,lStack_18,param_2);
  }
  return;
}

