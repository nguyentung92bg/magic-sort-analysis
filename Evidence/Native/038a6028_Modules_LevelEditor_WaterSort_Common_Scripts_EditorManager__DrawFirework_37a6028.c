/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawFirework
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawFirework (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawFirework
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawFirework
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawFirework_37a6028(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_18;
  
  lVar1 = *(long *)(param_1 + 0x48);
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
LAB_038a89b8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                      (lStack_18,0);
    if ((uVar2 & 1) != 0) {
      if (lStack_18 == 0) goto LAB_038a89b8;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_18,0);
    }
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddFireworkItem_37af774
              (lVar1,lStack_18,3);
  }
  return;
}

