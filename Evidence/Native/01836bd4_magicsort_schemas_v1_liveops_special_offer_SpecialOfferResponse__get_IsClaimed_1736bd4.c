/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$get_IsClaimed
bool magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_IsClaimed (magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.liveops.special_offer.SpecialOfferResponse$$get_IsClaimed
   bool magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_IsClaimed
   (magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse_o __this, const MethodInfo*
   method); */

ulong magicsort_schemas_v1_liveops_special_offer_SpecialOfferResponse__get_IsClaimed_1736bd4
                (int *param_1)

{
  char cVar1;
  ulong uVar2;
  
                    /* try { // try from 01836bdc to 01936be7 has its CatchHandler @ 01836c94 */
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0x10,0);
  if ((int)uVar2 != 0) {
    if (*(long *)(param_1 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
                    /* try { // try from 01836c00 to 01936c07 has its CatchHandler @ 01836c90 */
    cVar1 = Google_FlatBuffers_ByteBuffer__Get_313576c
                      (*(long *)(param_1 + 2),*param_1 + (int)uVar2,0);
                    /* try { // try from 01836c08 to 01936c5b has its CatchHandler @ 01836904 */
    uVar2 = (ulong)(cVar1 != '\0');
  }
  return uVar2;
}

