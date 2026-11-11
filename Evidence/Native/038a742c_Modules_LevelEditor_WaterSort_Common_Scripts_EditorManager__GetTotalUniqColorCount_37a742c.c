/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$GetTotalUniqColorCount
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetTotalUniqColorCount (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$GetTotalUniqColorCount
   int32_t Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetTotalUniqColorCount
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
    */

undefined4
Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetTotalUniqColorCount_37a742c
          (long param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    System_Int32__TryParse_26c9e7c(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x218),&uStack_4,0);
    return uStack_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

