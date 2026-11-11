/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreateUserDetailsByStepsVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreateUserDetailsByStepsVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreateUserDetailsByStepsVectorBlock_173bb20
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000005c24d09 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057669f8);
    bRam0000000005c24d09 = 1;
  }
  puVar1 = PTR_DAT_057669f8;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,1,param_3,1,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_LavaDummyStepDetail___238b608
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

