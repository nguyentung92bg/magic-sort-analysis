/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawMosaic
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawMosaic (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, int32_t mosaicType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawMosaic
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawMosaic
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, int32_t mosaicType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawMosaic_37a6004
               (long param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_28;
  
                    /* try { // try from 038a600c to 039a601b has its CatchHandler @ 038a60a0 */
  lVar1 = *(long *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lStack_28 = 0;
  uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (lVar1,&lStack_28);
  if ((uVar2 & 1) != 0) {
    lVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetMosaicOnBottle_37b0528
                      (uVar2,lStack_28);
    if ((lVar3 == 0) || (*(int *)(lVar3 + 0x40) != param_3)) {
      if (lStack_28 == 0) {
LAB_038a8958:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                        (lStack_28,0);
      if ((uVar2 & 1) != 0) {
        if (lStack_28 == 0) goto LAB_038a8958;
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                  (lStack_28,0);
      }
      lVar3 = lStack_28;
      uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorIdsByMosaicType_37b0be8
                        (lVar1,param_3);
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddMosaicItem_37b0140
                (lVar1,lVar3,uVar4,param_3);
    }
    else if (param_2 == 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__CycleColorCount_37b0a9c
                ();
    }
    else {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__AssignColor_37b06d8
                (lVar3,*(undefined4 *)(param_2 + 0x70));
    }
  }
  return;
}

