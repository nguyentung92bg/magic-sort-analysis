/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$CalculateSize
int32_t MagicSort_V1_StrikeShowLeaderboardResponse__CalculateSize (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$CalculateSize
   int32_t MagicSort_V1_StrikeShowLeaderboardResponse__CalculateSize
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, const MethodInfo* method); */

int MagicSort_V1_StrikeShowLeaderboardResponse__CalculateSize_386ac7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  if ((bRam0000000005c349f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781e48);
    FUN_012d0dc8(PTR_DAT_05805518);
    FUN_012d0dc8(PTR_DAT_057cb3b0);
    FUN_012d0dc8(PTR_DAT_057f2b00);
    bRam0000000005c349f3 = 1;
  }
  puVar1 = PTR_DAT_05781e48;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x10) == 0) {
      iVar4 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_05781e48 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar4 = Google_Protobuf_CodedOutputStream__ComputeStringSize_1c80138(lVar7,0);
      iVar4 = iVar4 + 1;
    }
    puVar2 = PTR_DAT_057f2b00;
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x10) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        iVar5 = Google_Protobuf_CodedOutputStream__ComputeStringSize_1c80138(lVar7,0);
        iVar4 = iVar4 + iVar5 + 1;
      }
      lVar7 = *(long *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (lVar7 != 0) {
        iVar5 = Google_Protobuf_Collections_RepeatedField_object___CalculateSize_3661620
                          (lVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                           *(undefined8 *)PTR_DAT_057cb3b0);
        lVar7 = *(long *)(param_1 + 0x30);
        iVar5 = iVar5 + iVar4;
        if (lVar7 != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar4 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar7,0);
          iVar5 = iVar5 + iVar4 + 1;
        }
        lVar7 = *(long *)(param_1 + 0x38);
        if (lVar7 != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar4 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar7,0);
          iVar5 = iVar5 + iVar4 + 1;
        }
        lVar7 = *(long *)(param_1 + 0x40);
        if (lVar7 != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar4 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar7,0);
          iVar5 = iVar5 + iVar4 + 1;
        }
        lVar7 = *(long *)(param_1 + 0x48);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        puVar3 = PTR_DAT_05805518;
        if (lVar7 != 0) {
          iVar4 = Google_Protobuf_Collections_MapField_long__long___CalculateSize_22617c4
                            (lVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
                             *(undefined8 *)PTR_DAT_05805518);
          if (*(long *)(param_1 + 0x50) != 0) {
            iVar6 = Google_Protobuf_Collections_MapField_long__long___CalculateSize_22617c4
                              (*(long *)(param_1 + 0x50),
                               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),
                               *(undefined8 *)puVar3);
            lVar7 = *(long *)(param_1 + 0x58);
            iVar6 = iVar4 + iVar5 + iVar6;
            if (lVar7 != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              iVar4 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar7,0);
              iVar6 = iVar6 + iVar4 + 1;
            }
            lVar7 = *(long *)(param_1 + 0x60);
            if (lVar7 != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              iVar4 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar7,0);
              iVar6 = iVar6 + iVar4 + 1;
            }
            lVar7 = *(long *)(param_1 + 0x68);
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x10) != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                iVar4 = Google_Protobuf_CodedOutputStream__ComputeStringSize_1c80138(lVar7,0);
                iVar6 = iVar6 + iVar4 + 1;
              }
              lVar7 = *(long *)(param_1 + 0x70);
              if (lVar7 != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                iVar4 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar7,0);
                iVar6 = iVar6 + iVar4 + 1;
              }
              lVar7 = *(long *)(param_1 + 0x80);
              if (*(char *)(param_1 + 0x78) != '\0') {
                iVar6 = iVar6 + 2;
              }
              if (lVar7 != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                iVar4 = Google_Protobuf_CodedOutputStream__ComputeInt64Size_1c7ffec(lVar7,0);
                iVar6 = iVar6 + iVar4 + 1;
              }
              if (*(long *)(param_1 + 0x10) != 0) {
                iVar4 = Google_Protobuf_UnknownFieldSet__CalculateSize_3e54acc
                                  (*(long *)(param_1 + 0x10),0);
                iVar6 = iVar4 + iVar6;
              }
              return iVar6;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

