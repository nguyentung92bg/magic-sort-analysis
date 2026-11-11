/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$<FollowHatXPosition>b__20_0
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView___FollowHatXPosition_b__20_0 (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$<FollowHatXPosition>b__20_0
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView___FollowHatXPosition_b__20_0
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, float x, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView___FollowHatXPosition_b__20_0_3e1c4d0
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    UnityEngine_Transform__get_position_4092b08(*(long *)(param_1 + 0x38),0);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
                    /* try { // try from 03f1c4fc to 0401c507 has its CatchHandler @ 03f1c834 */
      UnityEngine_Transform__get_position_4092b08(lVar1,0);
      if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 03f1c510 to 0401c517 has its CatchHandler @ 03f1c830 */
        UnityEngine_Transform__get_position_4092b08(*(long *)(param_1 + 0x18),0);
                    /* try { // try from 03f1c52c to 0401c56f has its CatchHandler @ 03f1c8ac */
        if (pcRam0000000005c3a610 == (code *)0x0) {
          pcRam0000000005c3a610 = (code *)FUN_012d0d84(&UNK_043eeeca,0);
        }
        (*pcRam0000000005c3a610)(lVar1,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

