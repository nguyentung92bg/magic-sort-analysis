/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$PrepareForWinAnimation
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PrepareForWinAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$PrepareForWinAnimation
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PrepareForWinAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PrepareForWinAnimation_3e19fcc
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetAllMultiplierColors_3e1ad10
              (*(undefined4 *)(lVar1 + 0x19c),*(undefined4 *)(lVar1 + 0x1a0),
               *(undefined4 *)(lVar1 + 0x1a4),*(undefined4 *)(lVar1 + 0x1a8));
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x48);
      if ((lVar1 != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar1,0), lVar1 != 0)) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar1,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

