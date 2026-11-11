/* IL2CPP: magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakRaceTournamentEndTimeResponse$$CreateGetStreakRaceTournamentEndTimeResponse
Google_FlatBuffers_Offset_GetStreakRaceTournamentEndTimeResponse__o magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakRaceTournamentEndTimeResponse__CreateGetStreakRaceTournamentEndTimeResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t finishTime, int64_t maxReachableScore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.streak_leaderboard.GetStreakRaceTournamentEndTimeResponse$$CreateGetStreakRaceTournamentEndTimeResponse
   Google_FlatBuffers_Offset_GetStreakRaceTournamentEndTimeResponse__o
   magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakRaceTournamentEndTimeResponse__CreateGetStreakRaceTournamentEndTimeResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t finishTime, int64_t maxReachableScore,
   const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakRaceTournamentEndTimeResponse__CreateGetStreakRaceTournamentEndTimeResponse_1736668
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,2,0);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakRaceTournamentEndTimeResponse__AddMaxReachableScore_17366c0
              (param_1,param_3);
    magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakRaceTournamentEndTimeResponse__AddFinishTime_17366e0
              (param_1,param_2);
    uVar1 = magicsort_schemas_v1_liveops_streak_leaderboard_GetStreakRaceTournamentEndTimeResponse__EndGetStreakRaceTournamentEndTimeResponse_1736700
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

