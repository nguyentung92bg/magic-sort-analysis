/* IL2CPP: magicsort.schemas.v1.level.EditorBottle$$CreateOBIMVectorBlock
Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_level_EditorBottle__CreateOBIMVectorBlock (Google_FlatBuffers_FlatBufferBuilder_o* builder, System_ArraySegment_Offset_OverBoardItemModel___o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.EditorBottle$$CreateOBIMVectorBlock
   Google_FlatBuffers_VectorOffset_o magicsort_schemas_v1_level_EditorBottle__CreateOBIMVectorBlock
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   System_ArraySegment_Offset_OverBoardItemModel___o data, const MethodInfo* method); */

undefined4
magicsort_schemas_v1_level_EditorBottle__CreateOBIMVectorBlock_1745ec8
          (long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_0580c0c0;
  if ((bRam0000000005c24d9f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dcbf0);
    FUN_012d0dc8(PTR_DAT_0580c0c0);
    FUN_012d0dc8(PTR_DAT_05768a68);
    bRam0000000005c24d9f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_05768a68;
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__StartVector_3136678(param_1,4,param_3 >> 0x20,4,0);
    Google_FlatBuffers_FlatBufferBuilder__Add_Offset_OverBoardItemModel___23876c8
              (param_1,param_2,param_3,*(undefined8 *)puVar1);
    uVar2 = Google_FlatBuffers_FlatBufferBuilder__EndVector_313672c(param_1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

