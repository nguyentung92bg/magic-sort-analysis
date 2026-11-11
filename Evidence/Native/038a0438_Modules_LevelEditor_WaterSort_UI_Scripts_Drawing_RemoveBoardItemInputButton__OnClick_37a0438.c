/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.Drawing.RemoveBoardItemInputButton$$OnClick
void Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_RemoveBoardItemInputButton__OnClick (Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_RemoveBoardItemInputButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.Drawing.RemoveBoardItemInputButton$$OnClick
   void Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_RemoveBoardItemInputButton__OnClick
   (Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_RemoveBoardItemInputButton_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_Drawing_RemoveBoardItemInputButton__OnClick_37a0438
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c33dda & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05803bb0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c33dda = 1;
  }
  puVar2 = PTR_DAT_05803bb0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x20);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),lVar3,0,*(undefined8 *)(lVar4 + 0x28));
      return;
    }
    return;
  }
  return;
}

