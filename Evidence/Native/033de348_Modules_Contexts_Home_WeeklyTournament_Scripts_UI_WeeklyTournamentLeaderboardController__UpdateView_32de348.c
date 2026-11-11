/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$UpdateView
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__UpdateView (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$UpdateView
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__UpdateView
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__UpdateView_32de348
               (long param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__UpdateViewModels_32de520
            ();
  if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(*(long *)(param_1 + 0x18) + 0x18) != 0)) {
    iVar2 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                      ();
    if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(*(long *)(param_1 + 0x18) + 0x18) != 0)) {
      uVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                        ();
      if (((uVar3 < 8) && ((1 << (ulong)(uVar3 & 0x1f) & 0x83U) != 0)) || (uVar3 - 5 < 2)) {
        if (*(long *)(param_1 + 0x48) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x48),1,0);
          if (*(long *)(param_1 + 0x40) != 0) {
            UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),0,0);
            if ((*(long *)(param_1 + 0x50) != 0) &&
               (lVar4 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x50),0),
               lVar4 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
              if ((iVar2 == 7) || (iVar2 == 1)) {
                if ((*(long *)(param_1 + 0x28) != 0) &&
                   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__Initialize_32dd31c
                              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                               *(undefined8 *)(param_1 + 0x30)), *(long *)(param_1 + 0x28) != 0)) {
                  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__Show_32dd478
                            ();
                  if (*(long *)(param_1 + 0x20) != 0) {
                    lVar4 = UnityEngine_Component__get_gameObject_408b480
                                      (*(long *)(param_1 + 0x20),0);
                    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
code_r0x0418e318:
                    if (pcRam0000000005c3a388 == (code *)0x0) {
                      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000005c3a388)(lVar4,0);
                    return;
                  }
                }
              }
              else {
                lVar4 = *(long *)(param_1 + 0x20);
                if (lVar4 != 0) {
                  uVar1 = *(undefined8 *)(param_1 + 0x30);
                  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_1 + 0x38);
                  FUN_012d0d74();
                  *(undefined8 *)(lVar4 + 0x40) = uVar1;
                  FUN_012d0d74((undefined8 *)(lVar4 + 0x40),uVar1);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Show_32dcba8
                              ();
                    if (*(long *)(param_1 + 0x28) != 0) {
                      lVar4 = UnityEngine_Component__get_gameObject_408b480
                                        (*(long *)(param_1 + 0x28),0);
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      goto code_r0x0418e318;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ((*(long *)(param_1 + 0x20) != 0) &&
              (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Hide_32dcbf8
                         (), *(long *)(param_1 + 0x28) != 0)) {
        Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__Hide_32dd4c8
                  ();
        if (*(long *)(param_1 + 0x48) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x48),0,0);
          if (*(long *)(param_1 + 0x40) != 0) {
            UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),1,0);
            if ((*(long *)(param_1 + 0x50) != 0) &&
               (lVar4 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x50),0),
               lVar4 != 0)) goto code_r0x0418e318;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

