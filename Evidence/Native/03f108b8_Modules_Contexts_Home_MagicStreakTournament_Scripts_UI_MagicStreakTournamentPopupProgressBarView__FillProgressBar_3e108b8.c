/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentPopupProgressBarView$$FillProgressBar
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__FillProgressBar (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView_o* __this, int32_t currentHat, int32_t maxHat, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentPopupProgressBarView$$FillProgressBar
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__FillProgressBar
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView_o*
   __this, int32_t currentHat, int32_t maxHat, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__FillProgressBar_3e108b8
               (long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000005c3807a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c3807a = 1;
  }
  puVar2 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_057c0628;
  if (*(long *)(param_1 + 0x28) != 0) {
    fVar6 = 0.0;
    if ((float)param_2 / (float)param_3 != 0.0) {
      fVar6 = *(float *)(param_1 + 0x40) +
              ((float)param_2 / (float)param_3) * (1.0 - *(float *)(param_1 + 0x40));
    }
    UnityEngine_SpriteRenderer__set_size_4095cb8
              (fVar6 * *(float *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
               *(long *)(param_1 + 0x28),0);
    plVar5 = *(long **)(param_1 + 0x30);
    iStack_34 = param_2;
    uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_34);
    iStack_38 = param_3;
    uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_38);
    uVar3 = System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar3,uVar4,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

