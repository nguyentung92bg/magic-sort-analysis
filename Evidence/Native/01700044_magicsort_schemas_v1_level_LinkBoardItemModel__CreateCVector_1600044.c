/* IL2CPP: magicsort.schemas.v1.level.LinkBoardItemModel$$CreateCVector
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVector (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_Cell__array* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.LinkBoardItemModel$$CreateCVector
   Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVector
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_Cell__array* data,
   const MethodInfo* method); */

undefined4
magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVector_1600044(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  
                    /* try { // try from 01700044 to 01800047 has its CatchHandler @ 01700084 */
                    /* try { // try from 0170004c to 0180004f has its CatchHandler @ 01700080 */
                    /* try { // try from 01700054 to 01800057 has its CatchHandler @ 0170007c */
  if ((param_2 == 0) || (param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 0170005c to 0180005f has its CatchHandler @ 01700078 */
                    /* try { // try from 01700064 to 01800067 has its CatchHandler @ 01700074 */
                    /* try { // try from 0170006c to 0180006f has its CatchHandler @ 017000a0 */
                    /* try { // try from 01700070 to 018000cb has its CatchHandler @ 016ffca8 */
                    /* catch() { ... } // from try @ 01700064 with catch @ 01700074 */
  Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678
            (param_1,4,*(undefined4 *)(param_2 + 0x18),4,0);
                    /* catch() { ... } // from try @ 0170005c with catch @ 01700078 */
  iVar3 = (int)*(ulong *)(param_2 + 0x18);
                    /* catch() { ... } // from try @ 01700054 with catch @ 0170007c */
  iVar1 = iVar3 + -1;
                    /* catch() { ... } // from try @ 0170004c with catch @ 01700080 */
  if (-1 < iVar1) {
                    /* catch() { ... } // from try @ 01700044 with catch @ 01700084 */
                    /* catch() { ... } // from try @ 0170003c with catch @ 01700088 */
                    /* catch() { ... } // from try @ 01700034 with catch @ 0170008c */
    if ((ulong)(long)iVar1 < (*(ulong *)(param_2 + 0x18) & 0xffffffff)) {
                    /* catch() { ... } // from try @ 016fff44 with catch @ 01700090 */
      uVar4 = (ulong)iVar1;
                    /* catch() { ... } // from try @ 016fff30 with catch @ 01700094 */
      iVar3 = iVar3 + -2;
                    /* catch() { ... } // from try @ 016fffc0 with catch @ 01700098 */
      do {
                    /* catch() { ... } // from try @ 016fffb8 with catch @ 0170009c */
                    /* catch() { ... } // from try @ 016fff84 with catch @ 017000a0
                       catch() { ... } // from try @ 0170006c with catch @ 017000a0 */
                    /* catch() { ... } // from try @ 016fff58 with catch @ 017000a4 */
                    /* catch() { ... } // from try @ 016ffe18 with catch @ 017000a8 */
        Google_FlatBuffers_FlatBufferBuilder__AddOffset_31365e4
                  (param_1,*(undefined4 *)(param_2 + 0x20 + uVar4 * 4),0);
                    /* catch() { ... } // from try @ 016ffe04 with catch @ 017000ac */
        if (iVar3 < 0) goto LAB_017000c8;
                    /* catch() { ... } // from try @ 016fff04 with catch @ 017000b0 */
                    /* catch() { ... } // from try @ 016ffe8c with catch @ 017000b4 */
        uVar4 = uVar4 - 1;
        iVar3 = iVar3 + -1;
      } while (uVar4 < *(uint *)(param_2 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
LAB_017000c8:
                    /* try { // try from 017000cc to 018000cf has its CatchHandler @ 01700134 */
                    /* try { // try from 017000d0 to 0180013f has its CatchHandler @ 016ffca8 */
  uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
  return uVar2;
}

