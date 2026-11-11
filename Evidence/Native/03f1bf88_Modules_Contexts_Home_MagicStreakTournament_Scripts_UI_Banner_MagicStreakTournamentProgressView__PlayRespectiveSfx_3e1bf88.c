/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$PlayRespectiveSfx
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__PlayRespectiveSfx (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, int32_t streakCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$PlayRespectiveSfx
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__PlayRespectiveSfx
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, int32_t streakCount, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__PlayRespectiveSfx_3e1bf88
               (undefined8 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c380e3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c380e3 = 1;
  }
  puVar3 = PTR_DAT_057ec790;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  if (lVar4 != 0) {
    iVar1 = 0x21 - param_2;
    if (3 < param_2 - 2U) {
      iVar1 = 0x10;
    }
    if (*(long *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057871c8 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar4 + 0x10),iVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

