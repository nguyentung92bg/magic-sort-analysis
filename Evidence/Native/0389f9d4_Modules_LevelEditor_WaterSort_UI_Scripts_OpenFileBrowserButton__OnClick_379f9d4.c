/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.OpenFileBrowserButton$$OnClick
void Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton__OnClick (Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.OpenFileBrowserButton$$OnClick
   void Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton__OnClick
   (Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton__OnClick_379f9d4
               (undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton__ShowLoadDialogCoroutine_379f9f4
                    ();
  if (lVar1 == 0) {
    thunk_FUN_0136d790(PTR_DAT_0579cd60,0,0);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar4 = thunk_FUN_0136d790(PTR_DAT_05764170);
    System_NullReferenceException___ctor_26cf404(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000005c3a460 == (code *)0x0) {
      pcRam0000000005c3a460 = (code *)FUN_012d0d84(&UNK_043ee464);
    }
    uVar2 = (*pcRam0000000005c3a460)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000005c3a470 == (code *)0x0) {
        pcRam0000000005c3a470 = (code *)FUN_012d0d84(&UNK_043ee4f7);
      }
                    /* WARNING: Could not recover jumptable at 0x04190c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a470)(param_1,lVar1);
      return;
    }
    thunk_FUN_0136d790(PTR_DAT_057a2cc8);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar4 = thunk_FUN_0136d790(PTR_DAT_05777678);
    System_ArgumentException___ctor_2124114(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_0136d790(PTR_DAT_0575fdd8);
                    /* WARNING: Subroutine does not return */
  FUN_012d0eb8(uVar3,uVar4);
}

