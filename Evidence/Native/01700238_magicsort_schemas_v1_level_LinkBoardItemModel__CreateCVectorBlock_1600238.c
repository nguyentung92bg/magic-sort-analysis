/* IL2CPP: magicsort.schemas.v1.level.LinkBoardItemModel$$CreateCVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.LinkBoardItemModel$$CreateCVectorBlock
   Google_FlatBuffers_VectorOffset_o
   magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_level_LinkBoardItemModel__CreateCVectorBlock_1600238
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000005c243a3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575abb0);
    bRam0000000005c243a3 = 1;
  }
  puVar1 = PTR_DAT_0575abb0;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,1,param_3,1,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_Cell___2389d88
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

