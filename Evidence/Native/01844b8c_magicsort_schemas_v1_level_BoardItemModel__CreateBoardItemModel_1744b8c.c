/* IL2CPP: magicsort.schemas.v1.level.BoardItemModel$$CreateBoardItemModel
Google_FlatBuffers_Offset_BoardItemModel__o magicsort_schemas_v1_level_BoardItemModel__CreateBoardItemModel (Google_FlatBuffers_FlatBufferBuilder_o* builder, int32_t Id, int32_t CI, bool V, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.BoardItemModel$$CreateBoardItemModel
   Google_FlatBuffers_Offset_BoardItemModel__o
   magicsort_schemas_v1_level_BoardItemModel__CreateBoardItemModel
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, int32_t Id, int32_t CI, bool V, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_level_BoardItemModel__CreateBoardItemModel_1744b8c
          (long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartTable_31367b8(param_1,3,0);
    magicsort_schemas_v1_level_BoardItemModel__AddCI_1744bfc(param_1,param_3);
    magicsort_schemas_v1_level_BoardItemModel__AddId_1744c1c(param_1,param_2);
    magicsort_schemas_v1_level_BoardItemModel__AddV_1744c3c(param_1,param_4 & 1);
    uVar1 = magicsort_schemas_v1_level_BoardItemModel__EndBoardItemModel_1744c5c(param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

