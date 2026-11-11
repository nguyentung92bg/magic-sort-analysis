/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$get_CI
int32_t magicsort_schemas_v1_level_OverBoardItemModel__get_CI (magicsort_schemas_v1_level_OverBoardItemModel_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$get_CI
   int32_t magicsort_schemas_v1_level_OverBoardItemModel__get_CI
   (magicsort_schemas_v1_level_OverBoardItemModel_o __this, const MethodInfo* method); */

void magicsort_schemas_v1_level_OverBoardItemModel__get_CI_1600954(int *param_1)

{
  int iVar1;
  
  iVar1 = Google_FlatBuffers_Table____offset_3139a10(param_1,8,0);
  if (iVar1 == 0) {
                    /* try { // try from 0170098c to 01800997 has its CatchHandler @ 017004d0 */
    return;
  }
  if (*(long *)(param_1 + 2) != 0) {
                    /* catch() { ... } // from try @ 01700928 with catch @ 01700974 */
    Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
              (*(long *)(param_1 + 2),*param_1 + iVar1,4);
    return;
                    /* try { // try from 01700980 to 0180098b has its CatchHandler @ 017009a0 */
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

