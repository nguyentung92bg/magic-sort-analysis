/* IL2CPP: magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreatePlayersImagesVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreatePlayersImagesVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.skyjump.StagedSkyJumpTournamentLeaderboardResponse$$CreatePlayersImagesVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreatePlayersImagesVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_skyjump_StagedSkyJumpTournamentLeaderboardResponse__CreatePlayersImagesVectorBlock_1738e90
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01838e58 with catch @ 01838ea0
                        */
  if ((bRam0000000005c24ce3 & 1) == 0) {
                    /* try { // try from 01838eb8 to 01938ebb has its CatchHandler @ 01838ecc */
    FUN_012d0dc8(PTR_DAT_057dcc60);
    bRam0000000005c24ce3 = 1;
  }
  puVar1 = PTR_DAT_057dcc60;
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 01838eb8 with catch @ 01838ecc */
                    /* try { // try from 01838ee0 to 01938ee7 has its CatchHandler @ 01838efc */
                    /* try { // try from 01838ee8 to 01938ef3 has its CatchHandler @ 01838dcc */
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,1,param_3,1,0);
                    /* try { // try from 01838ef4 to 01938efb has its CatchHandler @ 01838efc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01838ee0 with catch @ 01838efc
                       catch(type#2 @ 00000000) { ... } // from try @ 01838ef4 with catch @ 01838efc
                        */
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_StringKeyValuePair___238cb08
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
                    /* try { // try from 01838f00 to 01938fc3 has its CatchHandler @ 01838f00
                       catch() { ... } // from try @ 01838f00 with catch @ 01838f00
                       catch() { ... } // from try @ 0183960c with catch @ 01838f00
                       catch() { ... } // from try @ 0183965c with catch @ 01838f00 */
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

