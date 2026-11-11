/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$set_NonHiddenUniqColorCount
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__set_NonHiddenUniqColorCount (int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$set_NonHiddenUniqColorCount
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__set_NonHiddenUniqColorCount
   (int32_t value, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__set_NonHiddenUniqColorCount_37a9f40
               (undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_058007e8;
  if ((bRam0000000005c33e25 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058007e8);
    bRam0000000005c33e25 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar2 = *(long *)puVar1;
  }
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x18) = param_1;
  return;
}

