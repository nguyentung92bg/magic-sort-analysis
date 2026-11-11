/* IL2CPP: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI.SkyJumpWithStageNextTournamentStartTimer$$OnEnable
void Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentStartTimer__OnEnable (Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentStartTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI.SkyJumpWithStageNextTournamentStartTimer$$OnEnable
   void 
   Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentStartTimer__OnEnable
   (Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentStartTimer_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_SkyJumpWithStage_Scripts_UI_SkyJumpWithStageNextTournamentStartTimer__OnEnable_233d624
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  double dVar11;
  
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_0243d620:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar7 = Modules_Contexts_Home_SkyJumpWithStage_Scripts_SkyJumpWithStageService__GetNextTournamentStartTime_23330ac
                    ();
  puVar3 = PTR_DAT_057bc5e8;
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) goto LAB_0243d620;
  if ((bRam0000000005c24452 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8,uVar7,0,0);
    FUN_012d0dc8(PTR_DAT_057ac498);
    bRam0000000005c24452 = 1;
  }
  puVar2 = PTR_DAT_057ac498;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  FUN_012d0d74((undefined8 *)(lVar9 + 0x48),0);
  *(undefined8 *)(lVar9 + 0x38) = uVar7;
  *(undefined1 *)(lVar9 + 0x40) = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                    (*(undefined8 *)puVar2,0);
  *(undefined8 *)(lVar9 + 0x50) = uVar7;
  FUN_012d0d74();
  puVar3 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c24453 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c24453 = 1;
  }
  puVar2 = PTR_DAT_0576c1b8;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar7 = System_DateTime__ToUniversalTime_21016ec(lVar9 + 0x38,0);
  uVar4 = System_DateTime__get_UtcNow_2100638(0);
  System_DateTime__op_Subtraction_2101f60(uVar7,uVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_0576c200;
  dVar11 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&stack0xffffffffffffffd8,0);
  iVar1 = -0x80000000;
  if (dVar11 != INFINITY) {
    iVar1 = (int)dVar11;
  }
  if (iVar1 < 0) {
    if ((*(char *)(lVar9 + 0x40) == '\0') && (lVar8 = *(long *)(lVar9 + 0x48), lVar8 != 0)) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    }
    *(undefined1 *)(lVar9 + 0x40) = 1;
    Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__StopTimerAnimation_160e254(lVar9);
  }
  else if (*(long *)(lVar9 + 0x30) != 0) {
    Modules_Contexts_Home_UI_Clock_Scripts_ClockAnimationView__Play_2984d00
              (*(long *)(lVar9 + 0x30),0);
  }
  uVar7 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6988(iVar1,0);
  uVar4 = *(undefined8 *)(lVar9 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    uVar5 = System_String__op_Equality_1ec12e0(uVar7,*(undefined8 *)(lVar9 + 0x50),0);
    if (*(long *)(lVar9 + 0x28) == 0) goto LAB_0170e240;
    uVar10 = 0x41380000;
    if ((uVar5 & 1) == 0) {
      uVar10 = 0x40e00000;
    }
    *(undefined4 *)(*(long *)(lVar9 + 0x28) + 0x28) = uVar10;
  }
  plVar6 = *(long **)(lVar9 + 0x20);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x558))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x560));
    return;
  }
LAB_0170e240:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

