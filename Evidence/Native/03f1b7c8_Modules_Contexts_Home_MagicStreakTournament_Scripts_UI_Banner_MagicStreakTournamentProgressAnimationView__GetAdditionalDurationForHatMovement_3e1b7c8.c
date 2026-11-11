/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$GetAdditionalDurationForHatMovement
float Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetAdditionalDurationForHatMovement (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t streakCount, bool useAdditionalTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$GetAdditionalDurationForHatMovement
   float 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetAdditionalDurationForHatMovement
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t streakCount, bool useAdditionalTime, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetAdditionalDurationForHatMovement_3e1b7c8
          (long param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
                    /* try { // try from 03f1b7c8 to 0401b7e7 has its CatchHandler @ 03f1b898 */
  uVar1 = 0;
  if ((param_3 & 1) != 0) {
    switch(param_2) {
    case 2:
      if (*(long *)(param_1 + 0x30) == 0) {
code_r0x03f1b83c:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(0);
      }
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xe4);
      break;
    case 3:
      if (*(long *)(param_1 + 0x30) == 0) goto code_r0x03f1b83c;
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xe8);
      break;
    case 4:
      if (*(long *)(param_1 + 0x30) == 0) goto code_r0x03f1b83c;
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xec);
      break;
    case 5:
      if (*(long *)(param_1 + 0x30) == 0) goto code_r0x03f1b83c;
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xf0);
    }
  }
  return uVar1;
}

