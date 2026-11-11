/* IL2CPP: magicsort.schemas.v1.level.BoardItemModel$$StartBoardItemModel
void magicsort_schemas_v1_level_BoardItemModel__StartBoardItemModel (Google_FlatBuffers_FlatBufferBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0323684c) */
/* IL2CPP: magicsort.schemas.v1.level.BoardItemModel$$StartBoardItemModel
   void magicsort_schemas_v1_level_BoardItemModel__StartBoardItemModel
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, const MethodInfo* method); */

void magicsort_schemas_v1_level_BoardItemModel__StartBoardItemModel_1744cac(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c314a4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579f0e0,3,0);
    bRam0000000005c314a4 = 1;
  }
  Google_FlatBuffers_FlatBufferBuilder__NotNested_31366cc(param_1);
  plVar3 = (long *)(param_1 + 0x28);
  if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(int *)(*plVar3 + 0x18) < 3) {
    lVar2 = FUN_012d0e38(*(undefined8 *)PTR_DAT_0579f0e0,3);
    *plVar3 = lVar2;
    FUN_012d0d74(plVar3,lVar2);
  }
  *(undefined4 *)(param_1 + 0x30) = 3;
  uVar1 = Google_FlatBuffers_FlatBufferBuilder__get_Offset_3135f94(param_1);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}

