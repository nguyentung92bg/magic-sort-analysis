/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$FinishSizePrefixedSpecialOfferResponseBuffer
void magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__FinishSizePrefixedSpecialOfferResponseBuffer (Google_FlatBuffers_FlatBufferBuilder_o* builder, Google_FlatBuffers_Offset_SpecialOfferResponse__o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03237bd8) */
/* IL2CPP:
   magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$FinishSizePrefixedSpecialOfferResponseBuffer
   void 
   magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__FinishSizePrefixedSpecialOfferResponseBuffer
   (Google_FlatBuffers_FlatBufferBuilder_o* builder,
   Google_FlatBuffers_Offset_SpecialOfferResponse__o offset, const MethodInfo* method); */

void magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__FinishSizePrefixedSpecialOfferResponseBuffer_173701c
               (long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (param_1 != 0) {
    Google_FlatBuffers_FlatBufferBuilder__Prep_3136020(param_1,*(undefined4 *)(param_1 + 0x20),8);
    Google_FlatBuffers_FlatBufferBuilder__AddOffset_31365e4(param_1,param_2);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 != 0)) {
      iVar1 = *(int *)(lVar3 + 0x18);
      iVar2 = *(int *)(param_1 + 0x10);
      Google_FlatBuffers_FlatBufferBuilder__Prep_3136020(param_1,4,0);
      Google_FlatBuffers_FlatBufferBuilder__PutInt_3136210(param_1,iVar1 - iVar2);
      if (*(long *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18) = *(undefined4 *)(param_1 + 0x10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

