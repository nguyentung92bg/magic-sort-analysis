/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.Drawing.DrawBoardItemInputButton$$OnClick
void Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_DrawBoardItemInputButton__OnClick (Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_DrawBoardItemInputButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.Drawing.DrawBoardItemInputButton$$OnClick
   void Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_DrawBoardItemInputButton__OnClick
   (Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_DrawBoardItemInputButton_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_DrawBoardItemInputButton__OnClick_37a0258
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c33dd7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057584e8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057a5088);
    bRam0000000005c33dd7 = 1;
  }
  puVar1 = PTR_DAT_057584e8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057a5088 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar3 + 0x10),*(undefined4 *)(param_1 + 0x18));
      return;
    }
    return;
  }
  return;
}

