/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$GetTotalDurationForHat
float Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetTotalDurationForHat (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t targetStreakCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$GetTotalDurationForHat
   float 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetTotalDurationForHat
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t targetStreakCount, const MethodInfo* method); */

float Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetTotalDurationForHat_3e1b2a4
                (long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x48);
    fVar4 = *(float *)(lVar1 + 0x58);
    fVar5 = *(float *)(lVar1 + 0x20);
    fVar2 = (float)Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetAdditionalDurationForHatMovement_3e1b7c8
                             (param_1,param_2,1);
    return fVar3 + fVar4 + fVar5 + fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

