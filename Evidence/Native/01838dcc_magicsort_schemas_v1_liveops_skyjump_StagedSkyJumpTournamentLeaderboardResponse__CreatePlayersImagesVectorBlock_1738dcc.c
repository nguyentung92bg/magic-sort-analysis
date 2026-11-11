/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreatePlayersImagesVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreatePlayersImagesVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, System_ArraySegment_Offset_StringKeyValuePair___o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreatePlayersImagesVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreatePlayersImagesVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   System_ArraySegment_Offset_StringKeyValuePair___o data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreatePlayersImagesVectorBlock_1738dcc
          (long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
                    /* try { // try from 01838dcc to 01938e57 has its CatchHandler @ 01838dcc
                       catch() { ... } // from try @ 01838dcc with catch @ 01838dcc
                       catch() { ... } // from try @ 01838e60 with catch @ 01838dcc
                       catch() { ... } // from try @ 01838ee8 with catch @ 01838dcc */
  puVar1 = PTR_DAT_057c6fd0;
  if ((bRam0000000005c24ce2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe4e8);
    FUN_012d0dc8(PTR_DAT_057c6fd0);
    FUN_012d0dc8(PTR_DAT_057dc200);
    bRam0000000005c24ce2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_057dc200;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,4,param_3 >> 0x20,4,0);
                    /* try { // try from 01838e58 to 01938e5f has its CatchHandler @ 01838ea0 */
                    /* try { // try from 01838e60 to 01938eb7 has its CatchHandler @ 01838dcc */
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_StringKeyValuePair___23882e4
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

