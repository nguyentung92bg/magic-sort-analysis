/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelSaveButton$$OnClick
void Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton__OnClick (Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelSaveButton$$OnClick
   void Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton__OnClick
   (Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton_o* __this, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton__OnClick_379ed4c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33dcc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783010);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c33dcc = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0)) ||
     (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_05783010), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__IsLevelValid_379edf0();
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar2 = Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton__ShowLoadDialogCoroutine_379f000
                    (param_1);
  if (lVar2 == 0) {
    thunk_FUN_0136d790(PTR_DAT_0579cd60,0,0);
    uVar4 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar5 = thunk_FUN_0136d790(PTR_DAT_05764170);
    System_NullReferenceException___ctor_26cf404(uVar4,uVar5,0);
  }
  else {
    if (pcRam0000000005c3a460 == (code *)0x0) {
      pcRam0000000005c3a460 = (code *)FUN_012d0d84(&UNK_043ee464);
    }
    uVar3 = (*pcRam0000000005c3a460)(param_1);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000005c3a470 == (code *)0x0) {
        pcRam0000000005c3a470 = (code *)FUN_012d0d84(&UNK_043ee4f7);
      }
                    /* WARNING: Could not recover jumptable at 0x04190c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a470)(param_1,lVar2);
      return;
    }
    thunk_FUN_0136d790(PTR_DAT_057a2cc8);
    uVar4 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar5 = thunk_FUN_0136d790(PTR_DAT_05777678);
    System_ArgumentException___ctor_2124114(uVar4,uVar5,0);
  }
  uVar5 = thunk_FUN_0136d790(PTR_DAT_0575fdd8);
                    /* WARNING: Subroutine does not return */
  FUN_012d0eb8(uVar4,uVar5);
}

