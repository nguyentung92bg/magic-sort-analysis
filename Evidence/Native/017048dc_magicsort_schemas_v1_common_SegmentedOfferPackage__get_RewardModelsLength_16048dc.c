/* IL2CPP: magicsort.schemas.v1.common.SegmentedOfferPackage$$get_RewardModelsLength
int32_t magicsort_schemas_v1_common_SegmentedOfferPackage__get_RewardModelsLength (magicsort_schemas_v1_common_SegmentedOfferPackage_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.common.SegmentedOfferPackage$$get_RewardModelsLength
   int32_t magicsort_schemas_v1_common_SegmentedOfferPackage__get_RewardModelsLength
   (magicsort_schemas_v1_common_SegmentedOfferPackage_o __this, const MethodInfo* method); */

void magicsort_schemas_v1_common_SegmentedOfferPackage__get_RewardModelsLength_16048dc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,8,0);
  if (iVar2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar1 = *param_1;
    iVar3 = Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
                      (*(long *)(param_1 + 2),iVar1 + iVar2,4);
    if (*(long *)(param_1 + 2) != 0) {
      Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
                (*(long *)(param_1 + 2),iVar1 + iVar2 + iVar3,4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

