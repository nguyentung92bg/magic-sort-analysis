/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$set_Segment
void MagicSort_V1_OnePlusOneOfferResponse__set_Segment (MagicSort_V1_OnePlusOneOfferResponse_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$set_Segment
   void MagicSort_V1_OnePlusOneOfferResponse__set_Segment (MagicSort_V1_OnePlusOneOfferResponse_o*
   __this, System_String_o* value, const MethodInfo* method); */

void MagicSort_V1_OnePlusOneOfferResponse__set_Segment_3861230(long param_1,undefined8 param_2)

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
                    /* try { // try from 03961234 to 03a61243 has its CatchHandler @ 03961244 */
                    /* catch() { ... } // from try @ 039611cc with catch @ 03961244
                       catch() { ... } // from try @ 03961234 with catch @ 03961244 */
                    /* try { // try from 03961248 to 03a6124b has its CatchHandler @ 03961254 */
                    /* try { // try from 0396124c to 03a61257 has its CatchHandler @ 03960f7c */
                    /* catch() { ... } // from try @ 03961248 with catch @ 03961254 */
  if ((bRam0000000005c34989 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580c9f0);
    FUN_012d0dc8(PTR_DAT_057c9128);
    bRam0000000005c34989 = 1;
  }
  uVar6 = Google_Protobuf_ProtoPreconditions__CheckNotNull_object__2674fd8
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(param_1 + 0x40);
  *puVar7 = uVar6;
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

