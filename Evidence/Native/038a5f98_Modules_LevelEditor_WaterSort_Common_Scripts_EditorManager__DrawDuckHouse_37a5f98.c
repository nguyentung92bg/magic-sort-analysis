/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawDuckHouse
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDuckHouse (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawDuckHouse
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDuckHouse
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, int32_t duckType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDuckHouse_37a5f98
               (long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_18;
  
                    /* catch() { ... } // from try @ 038a5ea4 with catch @ 038a5f98 */
                    /* catch() { ... } // from try @ 038a5e9c with catch @ 038a5f9c */
                    /* catch() { ... } // from try @ 038a5e84 with catch @ 038a5fa0 */
  lVar1 = *(long *)(param_1 + 0x48);
                    /* catch() { ... } // from try @ 038a5e7c with catch @ 038a5fa4 */
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lStack_18 = 0;
  uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (lVar1,&lStack_18);
  if ((uVar2 & 1) != 0) {
    if (lStack_18 == 0) {
LAB_038a87b8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                      (lStack_18,0);
    if ((uVar2 & 1) != 0) {
      if (lStack_18 == 0) goto LAB_038a87b8;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_18,0);
    }
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuckHouseItem_37affe0
              (lVar1,lStack_18,param_2);
  }
  return;
}

