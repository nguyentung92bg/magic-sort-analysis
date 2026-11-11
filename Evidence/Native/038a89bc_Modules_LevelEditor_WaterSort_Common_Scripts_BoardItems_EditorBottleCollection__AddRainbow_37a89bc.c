/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddRainbow
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddRainbow (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddRainbow
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddRainbow
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector2_o position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddRainbow_37a89bc
               (undefined8 param_1)

{
  ulong uVar1;
  long lStack_18;
  
  lStack_18 = 0;
  uVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,&lStack_18);
  if ((uVar1 & 1) != 0) {
    if (lStack_18 == 0) {
LAB_038a8a14:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                      (lStack_18,0);
    if ((uVar1 & 1) != 0) {
      if (lStack_18 == 0) goto LAB_038a8a14;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_18,0);
    }
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddRainbowItem_37af860
              (param_1,lStack_18);
  }
  return;
}

