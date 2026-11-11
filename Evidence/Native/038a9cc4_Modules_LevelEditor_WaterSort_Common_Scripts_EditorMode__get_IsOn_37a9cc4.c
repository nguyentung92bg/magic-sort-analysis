/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$get_IsOn
bool Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__get_IsOn (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$get_IsOn
   bool Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__get_IsOn (const MethodInfo*
   method); */

undefined1 Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__get_IsOn_37a9cc4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_058007e8;
  if ((bRam0000000005c33e1e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058007e8);
    bRam0000000005c33e1e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined1 **)(lVar2 + 0xb8);
}

