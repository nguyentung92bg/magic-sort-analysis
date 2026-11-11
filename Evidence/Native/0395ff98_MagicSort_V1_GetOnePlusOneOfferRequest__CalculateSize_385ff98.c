/* IL2CPP: MagicSort.V1.GetOnePlusOneOfferRequest$$CalculateSize
int32_t MagicSort_V1_GetOnePlusOneOfferRequest__CalculateSize (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.GetOnePlusOneOfferRequest$$CalculateSize
   int32_t MagicSort_V1_GetOnePlusOneOfferRequest__CalculateSize
   (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, const MethodInfo* method); */

int MagicSort_V1_GetOnePlusOneOfferRequest__CalculateSize_385ff98(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000005c34973 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781e48);
    bRam0000000005c34973 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  iVar1 = 0;
  if (lVar3 != 0) {
    if (*(int *)(*(long *)PTR_DAT_05781e48 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar3,0);
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize_3e54acc(*(long *)(param_1 + 0x10),0);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}

