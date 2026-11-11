/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakAreYouSureView$$ShouldShow
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__ShouldShow (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakAreYouSureView$$ShouldShow
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__ShouldShow
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__ShouldShow_3e19168
               (long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  auVar3 = ZEXT816(0);
  if (*(long *)(lVar2 + 0x18) != 0) {
    auVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__CanEarnTournamentScore_3e0803c
                       (*(long *)(lVar2 + 0x18),0);
    if ((auVar3._0_8_ & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_0421ffd8;
      bVar1 = 1 < *(int *)(*(long *)(lVar2 + 0x28) + 0x34) + 1;
    }
    return bVar1;
  }
LAB_0421ffd8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(auVar3._0_8_,auVar3._8_8_);
}

