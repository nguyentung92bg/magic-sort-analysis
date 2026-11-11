/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
void MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Google_Protobuf_ParseContext_o* input, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   MagicSort.V1.StrikeShowLeaderboardResponse$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
   void 
   MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, Google_Protobuf_ParseContext_o* input,
   const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardResponse__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom_386b120
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000005c349f5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577a3e8);
    FUN_012d0dc8(PTR_DAT_05814578);
    FUN_012d0dc8(PTR_DAT_057f2b00);
    bRam0000000005c349f5 = 1;
  }
  puVar4 = PTR_DAT_057f2b00;
  puVar3 = PTR_DAT_05785c68;
  lVar1 = param_2 + 0x10;
  puVar2 = (undefined8 *)(param_1 + 0x10);
LAB_0396b1a0:
  while( true ) {
    if (cRam0000000005c26c44 == '\0') {
      FUN_012d0dc8(puVar3);
      cRam0000000005c26c44 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = Google_Protobuf_ParsingPrimitives__ParseTag_3e4f338(param_2,lVar1,0);
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      return;
    }
    if (uVar5 < 0x3b) break;
    if (uVar5 < 0x51) {
      if (uVar5 == 0x42) {
        lVar8 = *(long *)(param_1 + 0x50);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (lVar8 == 0) {
LAB_0396b764:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
LAB_0396b5b8:
        Google_Protobuf_Collections_MapField_long__long___AddEntriesFrom_2260e78
                  (lVar8,param_2,uVar7,*(undefined8 *)PTR_DAT_0577a3e8);
      }
      else if (uVar5 == 0x48) {
        if (cRam0000000005c26c40 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c40 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
        *(undefined8 *)(param_1 + 0x58) = uVar7;
      }
      else {
        if (uVar5 != 0x50) goto LAB_0396b3d4;
        if (cRam0000000005c26c40 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c40 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
        *(undefined8 *)(param_1 + 0x60) = uVar7;
      }
    }
    else if (uVar5 < 0x61) {
      if (uVar5 == 0x5a) {
        if (cRam0000000005c26c41 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c41 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c26c42 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c42 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c26c43 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c43 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar6 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
        uVar7 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar6,0);
        MagicSort_V1_StrikeShowLeaderboardResponse__set_State_386a448(param_1,uVar7);
      }
      else {
        if (uVar5 != 0x60) goto LAB_0396b3d4;
        if (cRam0000000005c26c40 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c40 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
        *(undefined8 *)(param_1 + 0x70) = uVar7;
      }
    }
    else if (uVar5 == 0x68) {
      if (cRam0000000005c275fe == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c275fe = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar8 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
      *(bool *)(param_1 + 0x78) = lVar8 != 0;
    }
    else {
      if (uVar5 != 0x70) goto LAB_0396b3d4;
      if (cRam0000000005c26c40 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c40 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
      *(undefined8 *)(param_1 + 0x80) = uVar7;
    }
  }
  if (uVar5 < 0x1b) {
    if (uVar5 == 10) {
      if (cRam0000000005c26c41 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c41 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c26c42 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c42 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c26c43 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c43 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
      uVar7 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar6,0);
      MagicSort_V1_StrikeShowLeaderboardResponse__set_TournamentId_386a2d8(param_1,uVar7);
      goto LAB_0396b1a0;
    }
    if (uVar5 == 0x12) {
      if (cRam0000000005c26c41 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c41 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c26c42 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c42 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c26c43 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c43 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
      uVar7 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar6,0);
      MagicSort_V1_StrikeShowLeaderboardResponse__set_LeaderboardId_386a35c(param_1,uVar7);
      goto LAB_0396b1a0;
    }
    if (uVar5 == 0x1a) {
      lVar8 = *(long *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (lVar8 == 0) goto LAB_0396b764;
      Google_Protobuf_Collections_RepeatedField_object___AddEntriesFrom_36611ec
                (lVar8,param_2,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),
                 *(undefined8 *)PTR_DAT_05814578);
      goto LAB_0396b1a0;
    }
  }
  else if (uVar5 < 0x29) {
    if (uVar5 == 0x20) {
      if (cRam0000000005c26c40 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c40 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
      *(undefined8 *)(param_1 + 0x30) = uVar7;
      goto LAB_0396b1a0;
    }
    if (uVar5 == 0x28) {
      if (cRam0000000005c26c40 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c40 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
      *(undefined8 *)(param_1 + 0x38) = uVar7;
      goto LAB_0396b1a0;
    }
  }
  else {
    if (uVar5 == 0x30) {
      if (cRam0000000005c26c40 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c40 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
      *(undefined8 *)(param_1 + 0x40) = uVar7;
      goto LAB_0396b1a0;
    }
    if (uVar5 == 0x3a) {
      lVar8 = *(long *)(param_1 + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (lVar8 != 0) {
        uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        goto LAB_0396b5b8;
      }
      goto LAB_0396b764;
    }
  }
LAB_0396b3d4:
  uVar7 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom_3e5631c(*puVar2,param_2,0);
  *puVar2 = uVar7;
  FUN_012d0d74(puVar2,uVar7);
  goto LAB_0396b1a0;
}

