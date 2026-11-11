/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
void MagicSort_V1_GetStrikeShowLeaderboardRequest__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, Google_Protobuf_ParseContext_o* input, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   MagicSort.V1.GetStrikeShowLeaderboardRequest$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
   void 
   MagicSort_V1_GetStrikeShowLeaderboardRequest__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom
   (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, Google_Protobuf_ParseContext_o* input,
   const MethodInfo* method); */

void MagicSort_V1_GetStrikeShowLeaderboardRequest__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom_38674e0
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_DAT_05785c68;
  lVar1 = param_2 + 0x10;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  while( true ) {
    if (cRam0000000005c26c44 == '\0') {
      FUN_012d0dc8(puVar3);
      cRam0000000005c26c44 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = Google_Protobuf_ParsingPrimitives__ParseTag_3e4f338(param_2,lVar1,0);
    if ((uVar4 == 0) || ((uVar4 & 7) == 4)) break;
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
                    /* try { // try from 03967650 to 03a6779f has its CatchHandler @ 03967650
                       catch() { ... } // from try @ 03967650 with catch @ 03967650
                       catch() { ... } // from try @ 03967d8c with catch @ 03967650
                       catch() { ... } // from try @ 03967eb8 with catch @ 03967650
                       catch() { ... } // from try @ 03968028 with catch @ 03967650
                       catch() { ... } // from try @ 0396809c with catch @ 03967650 */
      MagicSort_V1_GetStrikeShowLeaderboardRequest__set_TournamentId_3867000(param_1,uVar6);
    }
    else if (uVar4 == 0x10) {
      if (cRam0000000005c26c40 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c40 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
    }
    else if (uVar4 == 0x18) {
      if (cRam0000000005c26c40 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c26c40 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar1,0);
      *(undefined8 *)(param_1 + 0x28) = uVar6;
    }
    else {
      uVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom_3e5631c(*puVar2,param_2,0);
      *puVar2 = uVar6;
      FUN_012d0d74(puVar2,uVar6);
    }
  }
  return;
}

