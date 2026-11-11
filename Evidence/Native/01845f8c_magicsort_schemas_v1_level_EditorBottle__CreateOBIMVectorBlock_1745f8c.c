/* IL2CPP: magicsort.schemas.v1.level.EditorBottle$$CreateOBIMVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_level_EditorBottle__CreateOBIMVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.EditorBottle$$CreateOBIMVectorBlock
   Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_level_EditorBottle__CreateOBIMVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder, intptr_t dataPtr, int32_t sizeInBytes, const
   MethodInfo* method); */

undefined4
magicsort_schemas_v1_level_EditorBottle__CreateOBIMVectorBlock_1745f8c
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((bRam0000000005c24da0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05776f18);
    bRam0000000005c24da0 = 1;
  }
  puVar1 = PTR_DAT_05776f18;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,1,param_3,1,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_OverBoardItemModel___238b988
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

