/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$get_LevelModel
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o* Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__get_LevelModel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$get_LevelModel
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__get_LevelModel (const MethodInfo*
   method); */

undefined8 Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__get_LevelModel_37a9e30(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_058007e8;
  if ((bRam0000000005c33e22 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058007e8);
    bRam0000000005c33e22 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
}

