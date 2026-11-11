/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$CalculateSize
int32_t MagicSort_V1_OnePlusOneOfferResponse__CalculateSize (MagicSort_V1_OnePlusOneOfferResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$CalculateSize
   int32_t MagicSort_V1_OnePlusOneOfferResponse__CalculateSize
   (MagicSort_V1_OnePlusOneOfferResponse_o* __this, const MethodInfo* method); */

int MagicSort_V1_OnePlusOneOfferResponse__CalculateSize_38618ec(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if ((bRam0000000005c3498e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781e48);
    bRam0000000005c3498e = 1;
  }
  puVar1 = PTR_DAT_05781e48;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x10) == 0) {
      iVar2 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_05781e48 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize_1c80138(lVar4,0);
      iVar2 = iVar2 + 1;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar3 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar4,0);
      iVar2 = iVar2 + iVar3 + 1;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar3 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar4,0);
      iVar2 = iVar2 + iVar3 + 1;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar3 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar4,0);
      iVar2 = iVar2 + iVar3 + 1;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x38) != '\0') {
      iVar2 = iVar2 + 2;
    }
    if (*(char *)(param_1 + 0x39) != '\0') {
      iVar2 = iVar2 + 2;
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x10) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        iVar3 = Google_Protobuf_CodedOutputStream__ComputeStringSize_1c80138(lVar4,0);
        iVar2 = iVar2 + iVar3 + 1;
      }
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x10) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar3 = Google_Protobuf_CodedOutputStream__ComputeStringSize_1c80138(lVar4,0);
          iVar2 = iVar2 + iVar3 + 1;
        }
        lVar4 = *(long *)(param_1 + 0x50);
        if (lVar4 != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar3 = Google_Protobuf_CodedOutputStream__ComputeMessageSize_1c80314(lVar4,0);
          iVar2 = iVar2 + iVar3 + 1;
        }
        lVar4 = *(long *)(param_1 + 0x58);
        if (lVar4 != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar3 = Google_Protobuf_CodedOutputStream__ComputeMessageSize_1c80314(lVar4,0);
          iVar2 = iVar2 + iVar3 + 1;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          iVar3 = Google_Protobuf_UnknownFieldSet__CalculateSize_3e54acc
                            (*(long *)(param_1 + 0x10),0);
          iVar2 = iVar3 + iVar2;
        }
        return iVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

