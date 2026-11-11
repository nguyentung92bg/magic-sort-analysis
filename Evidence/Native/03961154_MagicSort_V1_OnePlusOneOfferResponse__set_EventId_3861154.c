/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$set_EventId
void MagicSort_V1_OnePlusOneOfferResponse__set_EventId (MagicSort_V1_OnePlusOneOfferResponse_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$set_EventId
   void MagicSort_V1_OnePlusOneOfferResponse__set_EventId (MagicSort_V1_OnePlusOneOfferResponse_o*
   __this, System_String_o* value, const MethodInfo* method); */

void MagicSort_V1_OnePlusOneOfferResponse__set_EventId_3861154(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_0580c9f0;
  puVar4 = PTR_DAT_057c9128;
                    /* try { // try from 0396117c to 03a6117f has its CatchHandler @ 03961194 */
                    /* try { // try from 03961180 to 03a61183 has its CatchHandler @ 03961190 */
  if ((bRam0000000005c34988 & 1) == 0) {
                    /* try { // try from 03961184 to 03a6118b has its CatchHandler @ 039611b4 */
                    /* try { // try from 0396118c to 03a6118f has its CatchHandler @ 039611b0 */
    FUN_012d0dc8(PTR_DAT_0580c9f0);
                    /* catch() { ... } // from try @ 03961180 with catch @ 03961190
                       try { // try from 03961190 to 03a611cb has its CatchHandler @ 03960f7c */
                    /* catch() { ... } // from try @ 0396117c with catch @ 03961194 */
                    /* catch() { ... } // from try @ 03961138 with catch @ 03961198 */
    FUN_012d0dc8(PTR_DAT_057c9128);
                    /* catch() { ... } // from try @ 0396114c with catch @ 0396119c */
                    /* catch() { ... } // from try @ 039610e4 with catch @ 039611a0 */
    bRam0000000005c34988 = 1;
  }
                    /* catch() { ... } // from try @ 039610d8 with catch @ 039611a4 */
                    /* catch() { ... } // from try @ 03961028 with catch @ 039611a8 */
                    /* catch() { ... } // from try @ 039610f4 with catch @ 039611ac */
                    /* catch() { ... } // from try @ 03961090 with catch @ 039611b0
                       catch() { ... } // from try @ 0396118c with catch @ 039611b0 */
  uVar6 = Google_Protobuf_ProtoPreconditions__CheckNotNull_object__2674fd8
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
                    /* catch() { ... } // from try @ 0396103c with catch @ 039611b4
                       catch() { ... } // from try @ 03961184 with catch @ 039611b4 */
  puVar7 = (undefined8 *)(param_1 + 0x18);
  *puVar7 = uVar6;
                    /* try { // try from 039611cc to 03a611e3 has its CatchHandler @ 03961244 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

