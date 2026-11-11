/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$CreateOverBoardItemModel
Google_FlatBuffers_Offset_OverBoardItemModel__o magicsort_schemas_v1_level_OverBoardItemModel__CreateOverBoardItemModel (Google_FlatBuffers_FlatBufferBuilder_o* builder, int32_t Id, Google_FlatBuffers_Offset_OBIMObject__o ObjOffset, int32_t CI, int32_t KLT, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$CreateOverBoardItemModel
   Google_FlatBuffers_Offset_OverBoardItemModel__o
   magicsort_schemas_v1_level_OverBoardItemModel__CreateOverBoardItemModel
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, int32_t Id,
   Google_FlatBuffers_Offset_OBIMObject__o ObjOffset, int32_t CI, int32_t KLT, const MethodInfo*
   method); */

undefined4
magicsort_schemas_v1_level_OverBoardItemModel__CreateOverBoardItemModel_16009dc
          (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* try { // try from 01700a00 to 01800a0b has its CatchHandler @ 01700b90 */
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,4,0);
    magicsort_schemas_v1_level_OverBoardItemModel__AddKLT_1600a5c(param_1,param_5);
                    /* try { // try from 01700a20 to 01800a2b has its CatchHandler @ 01700b94 */
    magicsort_schemas_v1_level_OverBoardItemModel__AddCI_1600a7c(param_1,param_4);
    magicsort_schemas_v1_level_OverBoardItemModel__AddObj_1600a9c(param_1,param_3);
                    /* try { // try from 01700a38 to 01800a3b has its CatchHandler @ 01700b8c */
    magicsort_schemas_v1_level_OverBoardItemModel__AddId_1600abc(param_1,param_2);
    uVar1 = magicsort_schemas_v1_level_OverBoardItemModel__EndOverBoardItemModel_1600adc(param_1);
                    /* try { // try from 01700a48 to 01800a4b has its CatchHandler @ 01700b88 */
                    /* try { // try from 01700a54 to 01800a57 has its CatchHandler @ 01700b84 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

