/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.GetStagedSkyJumpTournamentEndTimeResponse$$CreateGetStagedSkyJumpTournamentEndTimeResponse
Google_FlatBuffers_Offset_GetStagedSkyJumpTournamentEndTimeResponse__o magicsort_schemas_v1_liveops_skyjump_GetStagedSkyJumpTournamentEndTimeResponse__CreateGetStagedSkyJumpTournamentEndTimeResponse (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t tournament_type, int64_t tournament_start_time, int64_t current_stage, int64_t tournament_end_time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.GetStagedSkyJumpTournamentEndTimeResponse$$CreateGetStagedSkyJumpTournamentEndTimeResponse
   Google_FlatBuffers_Offset_GetStagedSkyJumpTournamentEndTimeResponse__o
   magicsort_schemas_v1_liveops_skyjump_GetStagedSkyJumpTournamentEndTimeResponse__CreateGetStagedSkyJumpTournamentEndTimeResponse
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t tournament_type, int64_t
   tournament_start_time, int64_t current_stage, int64_t tournament_end_time, const MethodInfo*
   method); */

undefined4
magicsort_schemas_v1_liveops_skyjump_GetStagedSkyJumpTournamentEndTimeResponse__CreateGetStagedSkyJumpTournamentEndTimeResponse_173740c
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,4,0);
                    /* try { // try from 0183743c to 019374ab has its CatchHandler @ 018378bc */
    magicsort_schemas_v1_liveops_skyjump_GetStagedSkyJumpTournamentEndTimeResponse__AddTournamentEndTime_173748c
              (param_1,param_5);
    magicsort_schemas_v1_liveops_skyjump_GetStagedSkyJumpTournamentEndTimeResponse__AddCurrentStage_17374ac
              (param_1,param_4);
    magicsort_schemas_v1_liveops_skyjump_GetStagedSkyJumpTournamentEndTimeResponse__AddTournamentStartTime_17374cc
              (param_1,param_3);
    magicsort_schemas_v1_liveops_skyjump_GetStagedSkyJumpTournamentEndTimeResponse__AddTournamentType_17374ec
              (param_1,param_2);
    uVar1 = magicsort_schemas_v1_liveops_skyjump_GetStagedSkyJumpTournamentEndTimeResponse__EndGetStagedSkyJumpTournamentEndTimeResponse_173750c
                      (param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

