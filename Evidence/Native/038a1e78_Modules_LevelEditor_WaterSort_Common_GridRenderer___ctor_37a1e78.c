/* IL2CPP: Modules.LevelEditor.WaterSort.Common.GridRenderer$$.ctor
void Modules_LevelEditor_WaterSort_Common_GridRenderer___ctor (Modules_LevelEditor_WaterSort_Common_GridRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.GridRenderer$$.ctor
   void Modules_LevelEditor_WaterSort_Common_GridRenderer___ctor
   (Modules_LevelEditor_WaterSort_Common_GridRenderer_o* __this, const MethodInfo* method); */

undefined1  [16] Modules_LevelEditor_WaterSort_Common_GridRenderer___ctor_37a1e78(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x1c) = 0x1e;
  *(undefined8 *)(param_1 + 0x28) = 0x3f0000003f000000;
  *(undefined8 *)(param_1 + 0x20) = 0x3f0000003f000000;
  *(undefined8 *)(param_1 + 0x30) = 0x408000003f800000;
  *(undefined1 *)(param_1 + 0x38) = 1;
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a2b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a2b8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

