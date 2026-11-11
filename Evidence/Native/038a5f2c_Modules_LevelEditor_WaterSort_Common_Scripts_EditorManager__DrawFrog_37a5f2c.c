/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawFrog
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawFrog (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawFrog
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawFrog
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, int32_t id, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawFrog_37a5f2c
               (long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_18;
  
  lVar1 = *(long *)(param_1 + 0x48);
                    /* try { // try from 038a5f38 to 039a5f3f has its CatchHandler @ 038a5f90 */
  *(undefined1 *)(param_1 + 0x68) = 1;
                    /* try { // try from 038a5f40 to 039a5f47 has its CatchHandler @ 038a5f8c */
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lStack_18 = 0;
  uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (lVar1,&lStack_18);
  if ((uVar2 & 1) != 0) {
    if (lStack_18 == 0) {
LAB_038a84bc:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasAnyBlocker_3ddf448
                      (lStack_18,0);
    if ((uVar2 & 1) != 0) {
      if (lStack_18 == 0) goto LAB_038a84bc;
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_18,0);
    }
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddFrogItem_37afd3c
              (lVar1,lStack_18,param_2);
  }
  return;
}

