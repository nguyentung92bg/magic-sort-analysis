/* IL2CPP: MagicSort.V1.GetOnePlusOneOfferRequest$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
void MagicSort_V1_GetOnePlusOneOfferRequest__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, Google_Protobuf_ParseContext_o* input, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   MagicSort.V1.GetOnePlusOneOfferRequest$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
   void MagicSort_V1_GetOnePlusOneOfferRequest__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom
   (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, Google_Protobuf_ParseContext_o* input, const
   MethodInfo* method); */

void MagicSort_V1_GetOnePlusOneOfferRequest__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom_3860078
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_05785c68;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  while( true ) {
    if (cRam0000000005c26c44 == '\0') {
      FUN_012d0dc8(puVar2);
      cRam0000000005c26c44 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = Google_Protobuf_ParsingPrimitives__ParseTag_3e4f338(param_2,param_2 + 0x10,0);
    if ((uVar3 == 0) || ((uVar3 & 7) == 4)) break;
    if (uVar3 == 8) {
      if (cRam0000000005c26c40 == '\0') {
        FUN_012d0dc8(puVar2);
        cRam0000000005c26c40 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,param_2 + 0x10,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
    }
    else {
      uVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom_3e5631c(*puVar1,param_2,0);
      *puVar1 = uVar4;
      FUN_012d0d74(puVar1,uVar4);
    }
  }
  return;
}

