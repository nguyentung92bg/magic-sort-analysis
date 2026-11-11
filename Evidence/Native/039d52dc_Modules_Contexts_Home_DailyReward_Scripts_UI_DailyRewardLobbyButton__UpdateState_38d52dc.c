/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButton$$UpdateState
void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__UpdateState (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButton$$UpdateState
   void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__UpdateState
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__UpdateState_38d52dc
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  double dVar12;
  undefined8 uStack_28;
  
                    /* try { // try from 039d52ec to 03ad5303 has its CatchHandler @ 039d53e8 */
  if ((bRam0000000005c34bd1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ffcc8);
                    /* try { // try from 039d5304 to 03ad5327 has its CatchHandler @ 039d5170 */
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c34bd1 = 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_039d53bc:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__IsLobbyIconVisible_38d3bd4()
  ;
  puVar2 = PTR_DAT_057ffcc8;
  puVar3 = PTR_DAT_057b8520;
                    /* try { // try from 039d5328 to 03ad533f has its CatchHandler @ 039d53e8 */
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_039d53bc;
                    /* try { // try from 039d5340 to 03ad5353 has its CatchHandler @ 039d5170 */
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),uVar4 & 1,0);
                    /* try { // try from 039d5354 to 03ad536b has its CatchHandler @ 039d53e8 */
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar8 == 0) goto LAB_039d53bc;
                    /* try { // try from 039d536c to 03ad53d7 has its CatchHandler @ 039d5170 */
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_039d53bc;
  lVar8 = *(long *)(param_1 + 0x28);
  uVar9 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetEndDate_38d4188();
  puVar3 = PTR_DAT_057bc5e8;
  if (lVar8 == 0) goto LAB_039d53bc;
  if ((bRam0000000005c24452 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8,uVar9,0,0);
    FUN_012d0dc8(PTR_DAT_057ac498);
    bRam0000000005c24452 = 1;
  }
  puVar2 = PTR_DAT_057ac498;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  FUN_012d0d74((undefined8 *)(lVar8 + 0x48),0);
  *(undefined8 *)(lVar8 + 0x38) = uVar9;
  *(undefined1 *)(lVar8 + 0x40) = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar9 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                    (*(undefined8 *)puVar2,0);
  *(undefined8 *)(lVar8 + 0x50) = uVar9;
  FUN_012d0d74();
  puVar3 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c24453 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c24453 = 1;
  }
  puVar2 = PTR_DAT_0576c1b8;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar9 = System_DateTime__ToUniversalTime_21016ec(lVar8 + 0x38,0);
  uVar5 = System_DateTime__get_UtcNow_2100638(0);
  uStack_28 = System_DateTime__op_Subtraction_2101f60(uVar9,uVar5,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_0576c200;
  dVar12 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_28,0);
  iVar1 = -0x80000000;
  if (dVar12 != INFINITY) {
    iVar1 = (int)dVar12;
  }
  if (iVar1 < 0) {
    if ((*(char *)(lVar8 + 0x40) == '\0') && (lVar10 = *(long *)(lVar8 + 0x48), lVar10 != 0)) {
      (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    }
    *(undefined1 *)(lVar8 + 0x40) = 1;
    Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__StopTimerAnimation_160e254(lVar8);
  }
  else if (*(long *)(lVar8 + 0x30) != 0) {
    Modules_Contexts_Home_UI_Clock_Scripts_ClockAnimationView__Play_2984d00
              (*(long *)(lVar8 + 0x30),0);
  }
  uVar9 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6988(iVar1,0);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    uVar6 = System_String__op_Equality_1ec12e0(uVar9,*(undefined8 *)(lVar8 + 0x50),0);
    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0170e240;
    uVar11 = 0x41380000;
    if ((uVar6 & 1) == 0) {
      uVar11 = 0x40e00000;
    }
    *(undefined4 *)(*(long *)(lVar8 + 0x28) + 0x28) = uVar11;
  }
  plVar7 = *(long **)(lVar8 + 0x20);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x558))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x560));
    return;
  }
LAB_0170e240:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

