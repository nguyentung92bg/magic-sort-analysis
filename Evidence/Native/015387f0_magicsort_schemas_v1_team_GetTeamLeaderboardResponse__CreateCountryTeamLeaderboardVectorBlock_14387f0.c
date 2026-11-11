/* IL2CPP: magicsort.schemas.v1.team.GetTeamLeaderboardResponse$$CreateCountryTeamLeaderboardVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_team_GetTeamLeaderboardResponse__CreateCountryTeamLeaderboardVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.team.GetTeamLeaderboardResponse$$CreateCountryTeamLeaderboardVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_team_GetTeamLeaderboardResponse__CreateCountryTeamLeaderboardVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_team_GetTeamLeaderboardResponse__CreateCountryTeamLeaderboardVectorBlock_14387f0
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000005c23653 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fd540);
    bRam0000000005c23653 = 1;
  }
  puVar1 = PTR_DAT_057fd540;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,1,param_3,1,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_TeamLeaderboardSummary___238dc88
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

