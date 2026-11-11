/* IL2CPP: magicsort.schemas.v1.liveops.win_streak.GetWinStreakTournamentResponse$$CreateGetWinStreakTournamentResponse
Google_FlatBuffers_Offset_GetWinStreakTournamentResponse__o magicsort_schemas_v1_liveops_win_streak_GetWinStreakTournamentResponse__CreateGetWinStreakTournamentResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o tournamentIDOffset, int64_t tournamentType, int64_t startTime, int64_t finishTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.win_streak.GetWinStreakTournamentResponse$$CreateGetWinStreakTournamentResponse
   Google_FlatBuffers_Offset_GetWinStreakTournamentResponse__o
   magicsort_schemas_v1_liveops_win_streak_GetWinStreakTournamentResponse__CreateGetWinStreakTournamentResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   tournamentIDOffset, int64_t tournamentType, int64_t startTime, int64_t finishTime, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_win_streak_GetWinStreakTournamentResponse__CreateGetWinStreakTournamentResponse_1443138
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,4,0);
    magicsort_schemas_v1_liveops_win_streak_GetWinStreakTournamentResponse__AddFinishTime_14431b8
              (param_1,param_5);
    magicsort_schemas_v1_liveops_win_streak_GetWinStreakTournamentResponse__AddStartTime_14431d8
              (param_1,param_4);
    magicsort_schemas_v1_liveops_win_streak_GetWinStreakTournamentResponse__AddTournamentType_14431f8
              (param_1,param_3);
    magicsort_schemas_v1_liveops_win_streak_GetWinStreakTournamentResponse__AddTournamentID_1443218
              (param_1,param_2);
    uVar1 = magicsort_schemas_v1_liveops_win_streak_GetWinStreakTournamentResponse__EndGetWinStreakTournamentResponse_1443238
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

