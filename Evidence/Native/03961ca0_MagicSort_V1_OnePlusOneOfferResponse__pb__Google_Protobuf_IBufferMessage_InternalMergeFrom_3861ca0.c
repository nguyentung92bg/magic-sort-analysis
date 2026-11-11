/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
void MagicSort_V1_OnePlusOneOfferResponse__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom (MagicSort_V1_OnePlusOneOfferResponse_o* __this, Google_Protobuf_ParseContext_o* input, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   MagicSort.V1.OnePlusOneOfferResponse$$pb::Google.Protobuf.IBufferMessage.InternalMergeFrom
   void MagicSort_V1_OnePlusOneOfferResponse__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom
   (MagicSort_V1_OnePlusOneOfferResponse_o* __this, Google_Protobuf_ParseContext_o* input, const
   MethodInfo* method); */

void MagicSort_V1_OnePlusOneOfferResponse__pb__Google_Protobuf_IBufferMessage_InternalMergeFrom_3861ca0
               (long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((bRam0000000005c34990 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f19b8);
    bRam0000000005c34990 = 1;
  }
  puVar5 = PTR_DAT_05785c68;
  plVar1 = (long *)(param_1 + 0x58);
  lVar2 = param_2 + 0x10;
  plVar3 = (long *)(param_1 + 0x50);
  puVar4 = (undefined8 *)(param_1 + 0x10);
LAB_03961d14:
  do {
    while( true ) {
      while( true ) {
        if (cRam0000000005c26c44 == '\0') {
          FUN_012d0dc8(puVar5);
          cRam0000000005c26c44 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar6 = Google_Protobuf_ParsingPrimitives__ParseTag_3e4f338(param_2,lVar2,0);
        if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
          return;
        }
        if (0x28 < uVar6) break;
        if (uVar6 < 0x11) {
          if (uVar6 == 10) {
            if (cRam0000000005c26c41 == '\0') {
              FUN_012d0dc8(puVar5);
              cRam0000000005c26c41 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            if (cRam0000000005c26c42 == '\0') {
              FUN_012d0dc8(puVar5);
              cRam0000000005c26c42 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 03961f58 to 03a61f5f has its CatchHandler @ 0396204c */
              thunk_FUN_0130472c();
            }
            if (cRam0000000005c26c43 == '\0') {
                    /* try { // try from 03961f64 to 03a61f6b has its CatchHandler @ 03962044 */
              FUN_012d0dc8(puVar5);
              cRam0000000005c26c43 = '\x01';
            }
                    /* try { // try from 03961f70 to 03a61f77 has its CatchHandler @ 03962040 */
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 03961f7c to 03a61f87 has its CatchHandler @ 0396203c */
              thunk_FUN_0130472c();
            }
            uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar2,0);
                    /* try { // try from 03961f9c to 03a61fa3 has its CatchHandler @ 03962034 */
            uVar8 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar2,uVar7,0);
            MagicSort_V1_OnePlusOneOfferResponse__set_EventId_3861154(param_1,uVar8);
                    /* try { // try from 03961fb0 to 03a61fcf has its CatchHandler @ 03962038 */
          }
          else {
            if (uVar6 != 0x10) goto LAB_03961ef0;
            if (cRam0000000005c26c40 == '\0') {
              FUN_012d0dc8(puVar5);
              cRam0000000005c26c40 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar8 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar2,0);
            *(undefined8 *)(param_1 + 0x20) = uVar8;
          }
        }
        else if (uVar6 == 0x18) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03961f64 with catch @ 03962044
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0396202c with catch @ 03962044
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03961fe8 with catch @ 03962048
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03961f58 with catch @ 0396204c
                        */
          if (cRam0000000005c26c40 == '\0') {
            FUN_012d0dc8(puVar5);
            cRam0000000005c26c40 = '\x01';
          }
                    /* try { // try from 03962064 to 03a6207b has its CatchHandler @ 039620dc */
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
                    /* try { // try from 0396207c to 03a620cb has its CatchHandler @ 03961f00 */
          uVar8 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar2,0);
          *(undefined8 *)(param_1 + 0x28) = uVar8;
        }
        else if (uVar6 == 0x20) {
          if (cRam0000000005c26c40 == '\0') {
            FUN_012d0dc8(puVar5);
            cRam0000000005c26c40 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 03962028 to 03a6202b has its CatchHandler @ 03962030 */
            thunk_FUN_0130472c();
          }
                    /* try { // try from 0396202c to 03a6202f has its CatchHandler @ 03962044 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03962028 with catch @ 03962030
                       try { // try from 03962030 to 03a62063 has its CatchHandler @ 03961f00 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03961f9c with catch @ 03962034
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03961fb0 with catch @ 03962038
                        */
          uVar8 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar2,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03961f7c with catch @ 0396203c
                        */
          *(undefined8 *)(param_1 + 0x30) = uVar8;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03961f70 with catch @ 03962040
                        */
        }
        else {
          if (uVar6 != 0x28) goto LAB_03961ef0;
          if (cRam0000000005c275fe == '\0') {
            FUN_012d0dc8(puVar5);
            cRam0000000005c275fe = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar9 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar2,0);
          *(bool *)(param_1 + 0x38) = lVar9 != 0;
        }
      }
      if (0x3a < uVar6) break;
      if (uVar6 == 0x30) {
        if (cRam0000000005c275fe == '\0') {
          FUN_012d0dc8(puVar5);
          cRam0000000005c275fe = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
                    /* try { // try from 03961fe8 to 03a61ff3 has its CatchHandler @ 03962048 */
        lVar9 = Google_Protobuf_ParsingPrimitives__ParseRawVarint64_3e4f580(param_2,lVar2,0);
                    /* try { // try from 03961ff4 to 03a62027 has its CatchHandler @ 03961f00 */
        *(bool *)(param_1 + 0x39) = lVar9 != 0;
      }
      else if (uVar6 == 0x3a) {
        if (cRam0000000005c26c41 == '\0') {
          FUN_012d0dc8(puVar5);
          cRam0000000005c26c41 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c26c42 == '\0') {
          FUN_012d0dc8(puVar5);
          cRam0000000005c26c42 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c26c43 == '\0') {
          FUN_012d0dc8(puVar5);
          cRam0000000005c26c43 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar2,0);
        uVar8 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar2,uVar7,0);
        MagicSort_V1_OnePlusOneOfferResponse__set_Segment_3861230(param_1,uVar8);
      }
      else {
LAB_03961ef0:
        uVar8 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom_3e5631c(*puVar4,param_2,0);
                    /* try { // try from 03961f00 to 03a61f57 has its CatchHandler @ 03961f00
                       catch() { ... } // from try @ 03961f00 with catch @ 03961f00
                       catch() { ... } // from try @ 03961ff4 with catch @ 03961f00
                       catch() { ... } // from try @ 03962030 with catch @ 03961f00
                       catch() { ... } // from try @ 0396207c with catch @ 03961f00
                       catch() { ... } // from try @ 039620e4 with catch @ 03961f00 */
        *puVar4 = uVar8;
        FUN_012d0d74(puVar4,uVar8);
      }
    }
    if (uVar6 != 0x42) {
      if (uVar6 == 0x4a) {
        lVar9 = *plVar3;
        if (lVar9 == 0) {
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f19b8);
          if (lVar9 == 0) {
LAB_0396222c:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          MagicSort_V1_ClientCommonRewardModelWithCollection___ctor_385d02c();
          *plVar3 = lVar9;
          FUN_012d0d74(plVar3,lVar9);
          lVar9 = *plVar3;
        }
      }
      else {
        if (uVar6 != 0x52) goto LAB_03961ef0;
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f19b8);
          if (lVar9 == 0) goto LAB_0396222c;
          MagicSort_V1_ClientCommonRewardModelWithCollection___ctor_385d02c();
                    /* try { // try from 0396215c to 03a6222f has its CatchHandler @ 0396215c
                       catch() { ... } // from try @ 0396215c with catch @ 0396215c
                       catch() { ... } // from try @ 03962364 with catch @ 0396215c
                       catch() { ... } // from try @ 03962414 with catch @ 0396215c
                       catch() { ... } // from try @ 03962484 with catch @ 0396215c
                       catch() { ... } // from try @ 039624ec with catch @ 0396215c */
          *plVar1 = lVar9;
          FUN_012d0d74(plVar1,lVar9);
          lVar9 = *plVar1;
        }
      }
      if (cRam0000000005c2761d == '\0') {
        FUN_012d0dc8(PTR_DAT_0580fa78);
        cRam0000000005c2761d = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0580fa78 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      Google_Protobuf_ParsingPrimitivesMessages__ReadMessage_3e51d48(param_2,lVar9,0);
      goto LAB_03961d14;
    }
    if (cRam0000000005c26c41 == '\0') {
      FUN_012d0dc8(puVar5);
      cRam0000000005c26c41 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c26c42 == '\0') {
      FUN_012d0dc8(puVar5);
      cRam0000000005c26c42 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 039620cc to 03a620db has its CatchHandler @ 039620dc */
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c26c43 == '\0') {
                    /* catch() { ... } // from try @ 03962064 with catch @ 039620dc
                       catch() { ... } // from try @ 039620cc with catch @ 039620dc */
      FUN_012d0dc8(puVar5);
                    /* try { // try from 039620e0 to 03a620e3 has its CatchHandler @ 039620ec */
      cRam0000000005c26c43 = '\x01';
    }
                    /* try { // try from 039620e4 to 03a620ef has its CatchHandler @ 03961f00 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039620e0 with catch @ 039620ec
                        */
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = Google_Protobuf_ParsingPrimitives__ParseRawVarint32_3e4f174(param_2,lVar2,0);
    uVar8 = Google_Protobuf_ParsingPrimitives__ReadRawString_3e50e00(param_2,lVar2,uVar7,0);
    MagicSort_V1_OnePlusOneOfferResponse__set_ProductId_38612b4(param_1,uVar8);
  } while( true );
}

