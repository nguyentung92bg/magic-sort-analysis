/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$AddUserScore
void magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddUserScore (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t userScore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$AddUserScore
   void 
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddUserScore
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, int64_t userScore, const MethodInfo* method);
    */

void magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__AddUserScore_173886c
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((param_2 == 0) && (*(char *)(param_1 + 0x50) == '\0')) {
    return;
  }
  Google_FlatBuffers_FlatBufferBuilder__Prep_3136020(param_1,8,0,0,0);
  Google_FlatBuffers_FlatBufferBuilder__PutLong_31362b0(param_1,param_2);
  if (*(int *)(param_1 + 0x30) < 9) {
    thunk_FUN_0136d790(PTR_DAT_0577cad0);
    uVar2 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar3 = thunk_FUN_0136d790(PTR_DAT_057c7e60);
    System_IndexOutOfRangeException___ctor_26c73a0(uVar2,uVar3,0);
    uVar3 = thunk_FUN_0136d790(PTR_DAT_057c65a0);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar2,uVar3);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  uVar1 = Google_FlatBuffers_FlatBufferBuilder__get_Offset_3135f94();
  if (lVar4 != 0) {
    if (8 < *(uint *)(lVar4 + 0x18)) {
      *(undefined4 *)(lVar4 + 0x40) = uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

