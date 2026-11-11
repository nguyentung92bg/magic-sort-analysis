/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.CursorViewController$$ShowLoadDialogCoroutine
System_Collections_IEnumerator_o* Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__ShowLoadDialogCoroutine (Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.CursorViewController$$ShowLoadDialogCoroutine
   System_Collections_IEnumerator_o*
   Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__ShowLoadDialogCoroutine
   (Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController_o* __this, const MethodInfo*
   method); */

long Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__ShowLoadDialogCoroutine_379d480
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057a4970;
  if ((bRam0000000005c33dbd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4970);
    bRam0000000005c33dbd = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    FUN_012d0d74((undefined8 *)(lVar2 + 0x20),param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

