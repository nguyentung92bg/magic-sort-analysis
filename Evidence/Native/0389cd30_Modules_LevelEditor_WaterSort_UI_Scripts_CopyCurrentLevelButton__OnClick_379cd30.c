/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.CopyCurrentLevelButton$$OnClick
void Modules_LevelEditor_WaterSort_UI_Scripts_CopyCurrentLevelButton__OnClick (Modules_LevelEditor_WaterSort_UI_Scripts_CopyCurrentLevelButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.CopyCurrentLevelButton$$OnClick
   void Modules_LevelEditor_WaterSort_UI_Scripts_CopyCurrentLevelButton__OnClick
   (Modules_LevelEditor_WaterSort_UI_Scripts_CopyCurrentLevelButton_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_CopyCurrentLevelButton__OnClick_379cd30(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33dbb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783010);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_058180d8);
    bRam0000000005c33dbb = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
     (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_05783010), lVar2 != 0)) {
    uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetLevelJsonAsString_379cdc8
                      (lVar2,*(undefined8 *)PTR_DAT_058180d8);
    if (pcRam0000000005c2cb40 == (code *)0x0) {
      pcRam0000000005c2cb40 = (code *)FUN_012d0d84(&UNK_0438fdb3);
    }
                    /* WARNING: Could not recover jumptable at 0x028df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c2cb40)(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

