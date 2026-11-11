/* IL2CPP: magicsort.schemas.v1.level.BoardItemModel$$get_Id
int32_t magicsort_schemas_v1_level_BoardItemModel__get_Id (magicsort_schemas_v1_level_BoardItemModel_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.BoardItemModel$$get_Id
   int32_t magicsort_schemas_v1_level_BoardItemModel__get_Id
   (magicsort_schemas_v1_level_BoardItemModel_o __this, const MethodInfo* method); */

void magicsort_schemas_v1_level_BoardItemModel__get_Id_1744abc(int *param_1)

{
  int iVar1;
  
  iVar1 = Google_FlatBuffers_Table____offset_3139a10(param_1,4,0);
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

