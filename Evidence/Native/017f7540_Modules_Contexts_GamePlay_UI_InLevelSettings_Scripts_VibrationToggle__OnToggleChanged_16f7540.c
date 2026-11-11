/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.VibrationToggle$$OnToggleChanged
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_VibrationToggle__OnToggleChanged (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_VibrationToggle_o* __this, bool toggle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.VibrationToggle$$OnToggleChanged
   void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_VibrationToggle__OnToggleChanged
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_VibrationToggle_o* __this, bool toggle,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_VibrationToggle__OnToggleChanged_16f7540
               (undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c24b8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057edaa8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057c0260);
    bRam0000000005c24b8b = 1;
  }
  puVar2 = PTR_DAT_057edaa8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343cbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057c0260 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar3 + 0x10),param_2 & 1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

