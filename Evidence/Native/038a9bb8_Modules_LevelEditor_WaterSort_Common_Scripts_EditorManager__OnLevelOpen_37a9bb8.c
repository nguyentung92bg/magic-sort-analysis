/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$OnLevelOpen
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__OnLevelOpen (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o* levelModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$OnLevelOpen
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__OnLevelOpen
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o* levelModel, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__OnLevelOpen_37a9bb8
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000005c33e1a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578dc40);
    bRam0000000005c33e1a = 1;
  }
  puVar1 = PTR_DAT_0578dc40;
  uStack_24 = 0;
  lVar3 = *(long *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)puVar1;
  }
  else {
    uStack_24 = *(undefined4 *)(param_2 + 0x14);
    uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
  }
  if (lVar3 != 0) {
    TMPro_TMP_InputField__set_text_3790d40(lVar3,uVar2,0);
    lVar3 = *(long *)(param_1 + 0x88);
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)puVar1;
    }
    else {
      uStack_24 = *(undefined4 *)(param_2 + 0x18);
      uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
    }
    if (lVar3 != 0) {
      TMPro_TMP_InputField__set_text_3790d40(lVar3,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

