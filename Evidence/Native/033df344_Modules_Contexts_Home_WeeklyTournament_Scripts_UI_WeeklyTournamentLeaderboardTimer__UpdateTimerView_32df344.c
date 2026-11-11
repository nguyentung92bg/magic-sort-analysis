/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardTimer$$UpdateTimerView
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer__UpdateTimerView (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardTimer$$UpdateTimerView
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer__UpdateTimerView
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardTimer__UpdateTimerView_32df344
               (long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  double dVar13;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c31da7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c31da7 = 1;
  }
  puVar4 = PTR_DAT_05790e10;
  lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) ||
      (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar11,*(undefined8 *)PTR_DAT_05790e10), lVar11 == 0)) ||
     (*(long *)(lVar11 + 0x18) == 0)) {
LAB_033df478:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar5 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                    ();
  if ((uVar5 < 8) && ((1 << (ulong)(uVar5 & 0x1f) & 0x83U) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 1 < uVar5 - 5;
  }
  lVar11 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar11 == 0) goto LAB_033df478;
  if (bVar1) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar11,0);
    return;
  }
  UnityEngine_GameObject__SetActive_408e318(lVar11,1,0);
  lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
  if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) ||
     (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar11,*(undefined8 *)puVar4), lVar11 == 0)) goto LAB_033df478;
  uVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetEndDate_32da290
                    ();
  puVar3 = PTR_DAT_057bc5e8;
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 == 0) goto LAB_033df478;
  if ((bRam0000000005c24452 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8,uVar9,0,0);
    FUN_012d0dc8(PTR_DAT_057ac498);
    bRam0000000005c24452 = 1;
  }
  puVar4 = PTR_DAT_057ac498;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  FUN_012d0d74((undefined8 *)(lVar11 + 0x48),0);
  *(undefined8 *)(lVar11 + 0x38) = uVar9;
  *(undefined1 *)(lVar11 + 0x40) = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar9 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                    (*(undefined8 *)puVar4,0);
  *(undefined8 *)(lVar11 + 0x50) = uVar9;
  FUN_012d0d74();
  puVar3 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c24453 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c24453 = 1;
  }
  puVar4 = PTR_DAT_0576c1b8;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar9 = System_DateTime__ToUniversalTime_21016ec(lVar11 + 0x38,0);
  uVar6 = System_DateTime__get_UtcNow_2100638(0);
  uStack_28 = System_DateTime__op_Subtraction_2101f60(uVar9,uVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar4);
  }
  puVar3 = PTR_DAT_0576c200;
  dVar13 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_28,0);
  iVar2 = -0x80000000;
  if (dVar13 != INFINITY) {
    iVar2 = (int)dVar13;
  }
  if (iVar2 < 0) {
    if ((*(char *)(lVar11 + 0x40) == '\0') && (lVar10 = *(long *)(lVar11 + 0x48), lVar10 != 0)) {
      (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    }
    *(undefined1 *)(lVar11 + 0x40) = 1;
    Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__StopTimerAnimation_160e254(lVar11);
  }
  else if (*(long *)(lVar11 + 0x30) != 0) {
    Modules_Contexts_Home_UI_Clock_Scripts_ClockAnimationView__Play_2984d00
              (*(long *)(lVar11 + 0x30),0);
  }
  uVar9 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6988(iVar2,0);
  uVar6 = *(undefined8 *)(lVar11 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    uVar7 = System_String__op_Equality_1ec12e0(uVar9,*(undefined8 *)(lVar11 + 0x50),0);
    if (*(long *)(lVar11 + 0x28) == 0) goto LAB_0170e240;
    uVar12 = 0x41380000;
    if ((uVar7 & 1) == 0) {
      uVar12 = 0x40e00000;
    }
    *(undefined4 *)(*(long *)(lVar11 + 0x28) + 0x28) = uVar12;
  }
  plVar8 = *(long **)(lVar11 + 0x20);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x558))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x560));
    return;
  }
LAB_0170e240:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

