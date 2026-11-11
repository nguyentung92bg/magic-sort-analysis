/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawSafe
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawSafe (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, int32_t safeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawSafe
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawSafe
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, int32_t safeType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawSafe_37a5fbc
               (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lStack_28;
  
                    /* try { // try from 038a5fbc to 039a5fd3 has its CatchHandler @ 038a60a0 */
  lVar3 = *(long *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lStack_28 = 0;
  uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (lVar3,&lStack_28);
  if ((uVar4 & 1) != 0) {
    if (lStack_28 == 0) {
LAB_038a8838:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                      (lStack_28,0);
    if ((uVar4 & 1) != 0) {
      if (lStack_28 == 0) goto LAB_038a8838;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_28,0);
    }
    lVar1 = lStack_28;
    uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetRequiredAmountBySafeType_37b0818
                      (lVar3,param_2);
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafeItem_37b0080
              (lVar3,lVar1,uVar2,param_2);
  }
  return;
}

