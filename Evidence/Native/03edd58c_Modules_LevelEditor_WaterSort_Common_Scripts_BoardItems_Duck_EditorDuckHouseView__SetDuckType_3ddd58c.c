/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckHouseView$$SetDuckType
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetDuckType (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView_o* __this, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckHouseView$$SetDuckType
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetDuckType
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView_o* __this,
   int32_t duckType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckHouseView__SetDuckType_3ddd58c
               (long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar3 + (long)(int)(param_2 - 1U) * 8 + 0x20);
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar1,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

