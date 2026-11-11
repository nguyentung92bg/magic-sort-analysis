/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$set_ProductId
void MagicSort_V1_OnePlusOneOfferResponse__set_ProductId (MagicSort_V1_OnePlusOneOfferResponse_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$set_ProductId
   void MagicSort_V1_OnePlusOneOfferResponse__set_ProductId (MagicSort_V1_OnePlusOneOfferResponse_o*
   __this, System_String_o* value, const MethodInfo* method); */

void MagicSort_V1_OnePlusOneOfferResponse__set_ProductId_38612b4(long param_1,undefined8 param_2)

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
                    /* try { // try from 039612c4 to 03a61307 has its CatchHandler @ 039612c4
                       catch() { ... } // from try @ 039612c4 with catch @ 039612c4
                       catch() { ... } // from try @ 03961384 with catch @ 039612c4
                       catch() { ... } // from try @ 039613b0 with catch @ 039612c4
                       catch() { ... } // from try @ 03961414 with catch @ 039612c4
                       catch() { ... } // from try @ 03961458 with catch @ 039612c4
                       catch() { ... } // from try @ 03961488 with catch @ 039612c4
                       catch() { ... } // from try @ 039614d8 with catch @ 039612c4 */
  if ((bRam0000000005c3498a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580c9f0);
    FUN_012d0dc8(PTR_DAT_057c9128);
    bRam0000000005c3498a = 1;
  }
                    /* try { // try from 03961308 to 03a6130b has its CatchHandler @ 039613c4 */
                    /* try { // try from 03961310 to 03a61317 has its CatchHandler @ 039613c0 */
  uVar6 = Google_Protobuf_ProtoPreconditions__CheckNotNull_object__2674fd8
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(param_1 + 0x48);
  *puVar7 = uVar6;
                    /* try { // try from 0396131c to 03a61327 has its CatchHandler @ 039613bc */
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

