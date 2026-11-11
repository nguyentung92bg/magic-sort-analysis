/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreateStagedSkyJumpTournamentLeaderboardResponse
Google_FlatBuffers_Offset_StagedSkyJumpTournamentLeaderboardResponse__o magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateStagedSkyJumpTournamentLeaderboardResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o tournament_idOffset, int64_t tournament_type, Google_FlatBuffers_VectorOffset_o user_details_by_stepsOffset, Google_FlatBuffers_VectorOffset_o players_imagesOffset, int64_t start_time, int64_t finish_time, bool is_claimed, bool is_finished, int64_t user_score, int64_t stage, int64_t user_max_step_reached, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreateStagedSkyJumpTournamentLeaderboardResponse
   Google_FlatBuffers_Offset_StagedSkyJumpTournamentLeaderboardResponse__o
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateStagedSkyJumpTournamentLeaderboardResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_StringOffset_o
   tournament_idOffset, int64_t tournament_type, Google_FlatBuffers_VectorOffset_o
   user_details_by_stepsOffset, Google_FlatBuffers_VectorOffset_o players_imagesOffset, int64_t
   start_time, int64_t finish_time, bool is_claimed, bool is_finished, int64_t user_score, int64_t
   stage, int64_t user_max_step_reached, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreateStagedSkyJumpTournamentLeaderboardResponse_173871c
          (long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7,uint param_8,byte param_9,undefined8 param_10,
          undefined8 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  
                    /* try { // try from 0183873c to 0193879b has its CatchHandler @ 01838ab8 */
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,0xb,0);
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddUserMaxStepReached_173882c
              (param_1,param_12);
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddStage_173884c
              (param_1,param_11);
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddUserScore_173886c
              (param_1,param_10);
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddFinishTime_173888c
              (param_1,param_7);
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddStartTime_17388ac
              (param_1,param_6);
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddTournamentType_17388cc
              (param_1,param_3);
                    /* try { // try from 018387c0 to 019387c7 has its CatchHandler @ 01838aa8 */
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddPlayersImages_17388ec
              (param_1,param_5);
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddUserDetailsBySteps_173890c
              (param_1,param_4);
                    /* try { // try from 018387dc to 019387df has its CatchHandler @ 01838a88 */
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddTournamentId_173892c
              (param_1,param_2);
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddIsFinished_173894c
              (param_1,param_9 & 1);
                    /* try { // try from 018387f4 to 01938807 has its CatchHandler @ 01838aa4 */
    magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddIsClaimed_173896c
              (param_1,param_8 & 1);
    uVar1 = magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__EndStagedSkyJumpTournamentLeaderboardResponse_173898c
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

