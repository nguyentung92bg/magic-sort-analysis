/* IL2CPP: magicsort.schemas.v1.level.LinkBoardItemModel$$CreateCVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_Cell__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.LinkBoardItemModel$$CreateCVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_Cell__array* data,
   const MethodInfo* method); */

undefined4
magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVectorBlock_16000ec(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000005c243a1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ab618);
    bRam0000000005c243a1 = 1;
  }
  puVar1 = PTR_DAT_057ab618;
  if ((param_2 != 0) && (param_1 != 0)) {
                    /* catch() { ... } // from try @ 017000cc with catch @ 01700134 */
                    /* try { // try from 01700140 to 0180014b has its CatchHandler @ 01700160 */
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
              (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
                    /* try { // try from 0170014c to 01800157 has its CatchHandler @ 016ffca8 */
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_Cell___2386584
              (param_1,param_2,*(undefined8 *)puVar1);
                    /* try { // try from 01700158 to 0180015f has its CatchHandler @ 01700160 */
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
                    /* catch() { ... } // from try @ 01700140 with catch @ 01700160
                       catch() { ... } // from try @ 01700158 with catch @ 01700160 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

