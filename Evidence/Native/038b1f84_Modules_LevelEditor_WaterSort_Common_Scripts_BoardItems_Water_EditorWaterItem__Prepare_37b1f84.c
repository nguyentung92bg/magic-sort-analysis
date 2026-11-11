/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, int32_t height, int32_t index, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem_o* __this, int32_t
   height, int32_t index,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__Prepare_37b1f84
               (long param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0x40) = param_4;
  FUN_012d0d74((long *)(param_1 + 0x40),param_4);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  if (*(long *)(param_1 + 0x30) != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetColor_37b2424
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,0,0);
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalRotation_37ae308
              (param_1);
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterItem__SetTargetHeight_37b2068
              (param_1,*(undefined4 *)(param_1 + 0x28),param_3);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetSortOrder_37b2190
                  (*(long *)(param_1 + 0x30),param_5,param_6), param_4 != 0)) {
      lVar1 = *(long *)(param_1 + 0x30);
      if (*(int *)(param_4 + 0x70) - 0xeU < 3) {
        if (lVar1 == 0) goto LAB_038b205c;
        lVar1 = *(long *)(lVar1 + 0x38);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar2 = 1;
      }
      else {
        if (lVar1 == 0) goto LAB_038b205c;
        lVar1 = *(long *)(lVar1 + 0x38);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar2 = 0;
      }
      if (pcRam0000000005c39bb8 == (code *)0x0) {
        pcRam0000000005c39bb8 = (code *)FUN_012d0d84(&UNK_043eabe3);
      }
                    /* WARNING: Could not recover jumptable at 0x041822f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39bb8)(lVar1,uVar2);
      return;
    }
  }
LAB_038b205c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

