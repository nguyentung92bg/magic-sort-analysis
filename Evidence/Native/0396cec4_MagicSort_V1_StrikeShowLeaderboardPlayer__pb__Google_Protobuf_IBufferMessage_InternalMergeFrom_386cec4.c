/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
void MagicSort_V1_StrikeShowLeaderboardPlayer__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, Google_Protobuf_ParseContext_o* input, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   MagicSort.V1.StrikeShowLeaderboardPlayer$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
   void 
   MagicSort_V1_StrikeShowLeaderboardPlayer__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom
   (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, Google_Protobuf_ParseContext_o* input, const
   MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardPlayer__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom_386cec4
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_05785c68;
  lVar1 = param_2 + 0x10;
  puVar2 = (undefined8 *)(param_1 + 0x10);
LAB_0396cf0c:
  while( true ) {
                    /* try { // try from 0396cf10 to 03a6cfab has its CatchHandler @ 0396cf10
                       catch() { ... } // from try @ 0396cf10 with catch @ 0396cf10
                       catch() { ... } // from try @ 0396cfdc with catch @ 0396cf10
                       catch() { ... } // from try @ 0396d014 with catch @ 0396cf10
                       catch() { ... } // from try @ 0396d01c with catch @ 0396cf10
                       catch() { ... } // from try @ 0396d044 with catch @ 0396cf10
                       catch() { ... } // from try @ 0396d084 with catch @ 0396cf10 */
    if (cRam0000000005c26c44 == '\0') {
      FUN_012d0dc8(puVar3);
      cRam0000000005c26c44 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = Google_Protobuf_ParsingPrimitives__ParseTag_3e4f338(param_2,lVar1,0);
    if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
                    /* try { // try from 0396d6b4 to 03a6d6b7 has its CatchHandler @ 0396d7f8 */
                    /* try { // try from 0396d6b8 to 03a6d74b has its CatchHandler @ 0396d0f4 */
      return;
    }
    if (uVar4 < 0x39) break;
    if (uVar4 < 0x53) {
      if (uVar4 == 0x40) {
        if (cRam0000000005c275fe == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c275fe = '\x01';
        }
                    /* try { // try from 0396d410 to 03a6d533 has its CatchHandler @ 0396d0f4 */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
        *(bool *)(param_1 + 0x3b) = lVar7 != 0;
      }
      else if (uVar4 == 0x4a) {
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
        uVar5 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
        uVar6 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar5,0);
        MagicSort_V1_StrikeShowLeaderboardPlayer__set_ImageUrl_386c01c(param_1,uVar6);
      }
      else {
                    /* try { // try from 0396cfd4 to 03a6cfdb has its CatchHandler @ 0396d024 */
        if (uVar4 != 0x52) goto LAB_0396d294;
                    /* try { // try from 0396cfdc to 03a6d00f has its CatchHandler @ 0396cf10 */
        if (cRam0000000005c26c41 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c41 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c26c42 == '\0') {
          FUN_012d0dc8(puVar3);
                    /* try { // try from 0396d010 to 03a6d013 has its CatchHandler @ 0396d020 */
          cRam0000000005c26c42 = '\x01';
        }
                    /* try { // try from 0396d014 to 03a6d017 has its CatchHandler @ 0396cf10 */
                    /* try { // try from 0396d018 to 03a6d01b has its CatchHandler @ 0396d01c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0396d018 with catch @ 0396d01c
                       try { // try from 0396d01c to 03a6d03f has its CatchHandler @ 0396cf10 */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0396d010 with catch @ 0396d020
                        */
          thunk_FUN_0130472c();
        }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0396cfd4 with catch @ 0396d024
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0396cfac with catch @ 0396d028
                        */
        if (cRam0000000005c26c43 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c43 = '\x01';
        }
                    /* try { // try from 0396d040 to 03a6d043 has its CatchHandler @ 0396d06c */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 0396d044 to 03a6d07b has its CatchHandler @ 0396cf10 */
          thunk_FUN_0130472c();
        }
        uVar5 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
        uVar6 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar5,0);
                    /* catch() { ... } // from try @ 0396d040 with catch @ 0396d06c */
        MagicSort_V1_StrikeShowLeaderboardPlayer__set_ImageId_386c0a0(param_1,uVar6);
      }
    }
    else if (uVar4 < 99) {
      if (uVar4 == 0x5a) {
        if (cRam0000000005c26c41 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c41 = '\x01';
        }
                    /* try { // try from 0396d534 to 03a6d53b has its CatchHandler @ 0396d78c */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c26c42 == '\0') {
          FUN_012d0dc8(puVar3);
                    /* try { // try from 0396d554 to 03a6d597 has its CatchHandler @ 0396d784 */
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
        uVar5 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
        uVar6 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar5,0);
                    /* try { // try from 0396d5b0 to 03a6d5b3 has its CatchHandler @ 0396d77c */
                    /* try { // try from 0396d5b8 to 03a6d5c3 has its CatchHandler @ 0396d788 */
        MagicSort_V1_StrikeShowLeaderboardPlayer__set_TokenId_386c124(param_1,uVar6);
      }
      else {
        if (uVar4 != 0x62) goto LAB_0396d294;
                    /* try { // try from 0396d0f4 to 03a6d357 has its CatchHandler @ 0396d0f4
                       catch() { ... } // from try @ 0396d0f4 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d410 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d654 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d6b8 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d754 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d764 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d7b0 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d7f8 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d818 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d868 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d888 with catch @ 0396d0f4
                       catch() { ... } // from try @ 0396d8c8 with catch @ 0396d0f4 */
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
        uVar5 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
        uVar6 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar5,0);
        MagicSort_V1_StrikeShowLeaderboardPlayer__set_FrameId_386c1a8(param_1,uVar6);
      }
    }
    else if (uVar4 == 0x6a) {
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
                    /* try { // try from 0396d654 to 03a6d697 has its CatchHandler @ 0396d0f4 */
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c43 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
      uVar6 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar5,0);
                    /* try { // try from 0396d698 to 03a6d69f has its CatchHandler @ 0396d7fc */
      MagicSort_V1_StrikeShowLeaderboardPlayer__set_NameStyle_386c22c(param_1,uVar6);
    }
    else {
      if (uVar4 != 0x72) goto LAB_0396d294;
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
      uVar5 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
      uVar6 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar5,0);
      MagicSort_V1_StrikeShowLeaderboardPlayer__set_TeamName_386c2b0(param_1,uVar6);
    }
  }
  if (uVar4 < 0x19) {
    if (uVar4 == 10) {
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
      uVar5 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
      uVar6 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar5,0);
      MagicSort_V1_StrikeShowLeaderboardPlayer__set_PublicId_386bea4(param_1,uVar6);
      goto LAB_0396cf0c;
    }
    if (uVar4 == 0x12) {
                    /* try { // try from 0396d358 to 03a6d35f has its CatchHandler @ 0396d868 */
      if (cRam0000000005c26c41 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c41 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
                    /* try { // try from 0396d380 to 03a6d387 has its CatchHandler @ 0396d778 */
      if (cRam0000000005c26c42 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c42 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 0396d39c to 03a6d40f has its CatchHandler @ 0396d780 */
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c26c43 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c43 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar1,0);
      uVar6 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar1,uVar5,0);
      MagicSort_V1_StrikeShowLeaderboardPlayer__set_Nickname_386bf28(param_1,uVar6);
      goto LAB_0396cf0c;
    }
    if (uVar4 == 0x18) {
      if (cRam0000000005c26c40 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c40 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
                    /* try { // try from 0396cfac to 03a6cfb3 has its CatchHandler @ 0396d028 */
      uVar6 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      goto LAB_0396cf0c;
    }
  }
  else {
                    /* try { // try from 0396d07c to 03a6d083 has its CatchHandler @ 0396d098 */
    if (uVar4 < 0x29) {
                    /* try { // try from 0396d084 to 03a6d08f has its CatchHandler @ 0396cf10 */
      if (uVar4 == 0x20) {
        if (cRam0000000005c26c40 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c26c40 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar6 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        goto LAB_0396cf0c;
      }
                    /* try { // try from 0396d090 to 03a6d097 has its CatchHandler @ 0396d098 */
      if (uVar4 == 0x28) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0396d07c with catch @ 0396d098
                       catch(type#2 @ 00000000) { ... } // from try @ 0396d090 with catch @ 0396d098
                        */
        if (cRam0000000005c275fe == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c275fe = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
        *(bool *)(param_1 + 0x38) = lVar7 != 0;
        goto LAB_0396cf0c;
      }
    }
    else {
      if (uVar4 == 0x30) {
        if (cRam0000000005c275fe == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c275fe = '\x01';
        }
                    /* try { // try from 0396d5d8 to 03a6d653 has its CatchHandler @ 0396d790 */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
        *(bool *)(param_1 + 0x39) = lVar7 != 0;
        goto LAB_0396cf0c;
      }
      if (uVar4 == 0x38) {
        if (cRam0000000005c275fe == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c275fe = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
        *(bool *)(param_1 + 0x3a) = lVar7 != 0;
        goto LAB_0396cf0c;
      }
    }
  }
LAB_0396d294:
  uVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom_3e5631c(*puVar2,param_2,0);
  *puVar2 = uVar6;
  FUN_012d0d74(puVar2,uVar6);
  goto LAB_0396cf0c;
}

