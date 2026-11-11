/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$get_KLT
int32_t magicsort_schemas_v1_level_OverBoardItemModel__get_KLT (magicsort_schemas_v1_level_OverBoardItemModel_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$get_KLT
   int32_t magicsort_schemas_v1_level_OverBoardItemModel__get_KLT
   (magicsort_schemas_v1_level_OverBoardItemModel_o __this, const MethodInfo* method); */

void magicsort_schemas_v1_level_OverBoardItemModel__get_KLT_1600998(int *param_1)

{
  int iVar1;
  
                    /* try { // try from 01700998 to 0180099f has its CatchHandler @ 017009a0 */
                    /* catch() { ... } // from try @ 01700980 with catch @ 017009a0
                       catch() { ... } // from try @ 01700998 with catch @ 017009a0 */
                    /* try { // try from 017009a4 to 018009ff has its CatchHandler @ 017009a4
                       catch() { ... } // from try @ 017009a4 with catch @ 017009a4
                       catch() { ... } // from try @ 01700b10 with catch @ 017009a4
                       catch() { ... } // from try @ 01700b74 with catch @ 017009a4
                       catch() { ... } // from try @ 01700be8 with catch @ 017009a4 */
  iVar1 = Google_FlatBuffers_Table____offset_3139a10(param_1,10,0);
  if (iVar1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 2) != 0) {
    Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
              (*(long *)(param_1 + 2),*param_1 + iVar1,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

