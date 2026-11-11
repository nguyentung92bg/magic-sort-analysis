/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$get_IsFinished
bool magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_IsFinished (magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$get_IsFinished
   bool magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_IsFinished
   (magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse_o __this, const MethodInfo*
   method); */

ulong magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_IsFinished_1736b8c
                (int *param_1)

{
  char cVar1;
  ulong uVar2;
  
                    /* try { // try from 01836b98 to 01936bc3 has its CatchHandler @ 01836c8c */
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0xe,0);
  if ((int)uVar2 != 0) {
    if (*(long *)(param_1 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    cVar1 = Google_FlatBuffers_ByteBuffer__Get_313576c
                      (*(long *)(param_1 + 2),*param_1 + (int)uVar2,0);
    uVar2 = (ulong)(cVar1 != '\0');
  }
  return uVar2;
}

