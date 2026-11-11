/* IL2CPP: MagicSort.V1.ClaimOnePlusOneOfferRequest$$CalculateSize
int32_t MagicSort_V1_ClaimOnePlusOneOfferRequest__CalculateSize (MagicSort_V1_ClaimOnePlusOneOfferRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.ClaimOnePlusOneOfferRequest$$CalculateSize
   int32_t MagicSort_V1_ClaimOnePlusOneOfferRequest__CalculateSize
   (MagicSort_V1_ClaimOnePlusOneOfferRequest_o* __this, const MethodInfo* method); */

int MagicSort_V1_ClaimOnePlusOneOfferRequest__CalculateSize_3860908(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
                    /* try { // try from 03960908 to 03a60913 has its CatchHandler @ 039607e0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03960904 with catch @ 03960910
                        */
  if ((bRam0000000005c3497f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781e48);
    bRam0000000005c3497f = 1;
  }
  puVar1 = PTR_DAT_05781e48;
  lVar4 = *(long *)(param_1 + 0x18);
  iVar2 = 0;
  if (lVar4 != 0) {
    if (*(int *)(*(long *)PTR_DAT_05781e48 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar4,0);
    iVar2 = iVar2 + 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x10) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar3 = Google_Protobuf_CodedOutputStream__ComputeStringSize_1c80138(lVar4,0);
      iVar2 = iVar2 + iVar3 + 1;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar3 = Google_Protobuf_UnknownFieldSet__CalculateSize_3e54acc(*(long *)(param_1 + 0x10),0);
      iVar2 = iVar3 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

