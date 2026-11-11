/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Tab$$OnTouchUp
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__OnTouchUp (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Tab$$OnTouchUp
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__OnTouchUp
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* __this, UnityEngine_Vector2_o
   position, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__OnTouchUp_2aefea4(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2eba0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c2eba0 = 1;
  }
  puVar3 = PTR_DAT_057ec790;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  uVar1 = (int)param_1[6] - 1;
  if (uVar1 < 3) {
    uVar5 = *(undefined4 *)(&UNK_04394cb0 + (long)(int)uVar1 * 4);
  }
  else {
    uVar5 = 5;
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
            (lVar4,uVar5,*(undefined8 *)PTR_DAT_057871c8);
  Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__EndTouchAnimation_2aeff88(param_1);
  if ((char)param_1[8] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x02beff74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    return;
  }
  return;
}

