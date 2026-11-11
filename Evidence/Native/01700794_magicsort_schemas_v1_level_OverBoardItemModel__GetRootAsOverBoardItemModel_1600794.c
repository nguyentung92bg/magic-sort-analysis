/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$GetRootAsOverBoardItemModel
magicsort_schemas_v1_level_OverBoardItemModel_o magicsort_schemas_v1_level_OverBoardItemModel__GetRootAsOverBoardItemModel (Google_FlatBuffers_ByteBuffer_o* _bb, magicsort_schemas_v1_level_OverBoardItemModel_o obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.OverBoardItemModel$$GetRootAsOverBoardItemModel
   magicsort_schemas_v1_level_OverBoardItemModel_o
   magicsort_schemas_v1_level_OverBoardItemModel__GetRootAsOverBoardItemModel
   (Google_FlatBuffers_ByteBuffer_o* _bb, magicsort_schemas_v1_level_OverBoardItemModel_o obj, const
   MethodInfo* method); */

void magicsort_schemas_v1_level_OverBoardItemModel__GetRootAsOverBoardItemModel_1600794
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  if (param_1 != 0) {
                    /* try { // try from 017007a4 to 018007ab has its CatchHandler @ 017008f4 */
                    /* try { // try from 017007ac to 018007e7 has its CatchHandler @ 017004d0 */
    iVar1 = Google_FlatBuffers_ByteBuffer__GetInt_3135834(param_1,*(undefined4 *)(param_1 + 0x18),0)
    ;
    magicsort_schemas_v1_level_OverBoardItemModel____assign_16007d8
              (&uStack_20,*(int *)(param_1 + 0x18) + iVar1,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

