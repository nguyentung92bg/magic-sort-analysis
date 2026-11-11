/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddMosaic
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddMosaic (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector2_o position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* selectedColor, int32_t mosaicType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddMosaic
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddMosaic
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector2_o position,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* selectedColor,
   int32_t mosaicType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddMosaic_37a88a8
               (undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_28;
  
  lStack_28 = 0;
  uVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,&lStack_28);
  if ((uVar1 & 1) != 0) {
    lVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetMosaicOnBottle_37b0528
                      (uVar1,lStack_28);
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x40) != param_3)) {
      if (lStack_28 == 0) {
LAB_038a8958:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                        (lStack_28,0);
      if ((uVar1 & 1) != 0) {
        if (lStack_28 == 0) goto LAB_038a8958;
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                  (lStack_28,0);
      }
      lVar2 = lStack_28;
      uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorIdsByMosaicType_37b0be8
                        (param_1,param_3);
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddMosaicItem_37b0140
                (param_1,lVar2,uVar3,param_3);
    }
    else if (param_2 == 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__CycleColorCount_37b0a9c
                ();
    }
    else {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__AssignColor_37b06d8
                (lVar2,*(undefined4 *)(param_2 + 0x70));
    }
  }
  return;
}

