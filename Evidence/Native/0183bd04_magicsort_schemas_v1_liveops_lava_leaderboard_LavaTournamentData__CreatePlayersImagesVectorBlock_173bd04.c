/* IL2CPP: magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreatePlayersImagesVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreatePlayersImagesVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, System_ArraySegment_Offset_StringKeyValuePair___o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   magicsort.schemas.v1.liveops.lava_leaderboard.LavaTournamentData$$CreatePlayersImagesVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreatePlayersImagesVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   System_ArraySegment_Offset_StringKeyValuePair___o data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_liveops_lava_leaderboard_LavaTournamentData__CreatePlayersImagesVectorBlock_173bd04
          (long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_057c6fd0;
  if ((bRam0000000005c24d0b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe4e8);
    FUN_012d0dc8(PTR_DAT_057c6fd0);
    FUN_012d0dc8(PTR_DAT_057dc200);
    bRam0000000005c24d0b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_057dc200;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,4,param_3 >> 0x20,4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_StringKeyValuePair___23882e4
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* catch() { ... } // from try @ 0183be30 with catch @ 0183bdbc
                       catch() { ... } // from try @ 0183be74 with catch @ 0183bdbc
                       catch() { ... } // from try @ 0183becc with catch @ 0183bdbc
                       catch() { ... } // from try @ 0183bf24 with catch @ 0183bdbc */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

