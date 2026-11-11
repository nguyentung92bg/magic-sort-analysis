/* IL2CPP: magicsort.schemas.v1.level.CellBoardItemModel$$GetRootAsCellBoardItemModel
magicsort_schemas_v1_level_CellBoardItemModel_o magicsort_schemas_v1_level_CellBoardItemModel__GetRootAsCellBoardItemModel (Google_FlatBuffers_ByteBuffer_o* _bb, magicsort_schemas_v1_level_CellBoardItemModel_o obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.CellBoardItemModel$$GetRootAsCellBoardItemModel
   magicsort_schemas_v1_level_CellBoardItemModel_o
   magicsort_schemas_v1_level_CellBoardItemModel__GetRootAsCellBoardItemModel
   (Google_FlatBuffers_ByteBuffer_o* _bb, magicsort_schemas_v1_level_CellBoardItemModel_o obj, const
   MethodInfo* method); */

void magicsort_schemas_v1_level_CellBoardItemModel__GetRootAsCellBoardItemModel_17452f8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  if (param_1 != 0) {
    iVar1 = Google_FlatBuffers_ByteBuffer__GetInt_3135834(param_1,*(undefined4 *)(param_1 + 0x18),0)
    ;
    magicsort_schemas_v1_level_CellBoardItemModel____assign_1745080
              (&uStack_20,*(int *)(param_1 + 0x18) + iVar1,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

