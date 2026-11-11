/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$.ctor
void MagicSort_V1_OnePlusOneOfferResponse___ctor (MagicSort_V1_OnePlusOneOfferResponse_o* __this, MagicSort_V1_OnePlusOneOfferResponse_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$.ctor
   void MagicSort_V1_OnePlusOneOfferResponse___ctor (MagicSort_V1_OnePlusOneOfferResponse_o* __this,
   MagicSort_V1_OnePlusOneOfferResponse_o* other, const MethodInfo* method); */

void MagicSort_V1_OnePlusOneOfferResponse___ctor_3861014(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  MagicSort_V1_OnePlusOneOfferResponse___ctor_3860f9c();
                    /* try { // try from 03961028 to 03a6102b has its CatchHandler @ 039611a8 */
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    FUN_012d0d74();
                    /* try { // try from 0396103c to 03a61053 has its CatchHandler @ 039611b4 */
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    FUN_012d0d74();
    if (*(long *)(param_2 + 0x50) == 0) {
                    /* try { // try from 03961090 to 03a610d3 has its CatchHandler @ 039611b0 */
      uVar4 = 0;
    }
    else {
      uVar4 = MagicSort_V1_ClientCommonRewardModelWithCollection__Clone_385d1d8();
    }
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    FUN_012d0d74();
    if (*(long *)(param_2 + 0x58) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = MagicSort_V1_ClientCommonRewardModelWithCollection__Clone_385d1d8();
    }
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    FUN_012d0d74();
    uVar4 = Google_Protobuf_UnknownFieldSet__Clone_3e5685c(*(undefined8 *)(param_2 + 0x10),0);
    puVar5 = (undefined8 *)(param_1 + 0x10);
    *puVar5 = uVar4;
                    /* try { // try from 039610d8 to 03a610df has its CatchHandler @ 039611a4 */
                    /* try { // try from 039610e4 to 03a610ef has its CatchHandler @ 039611a0 */
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

