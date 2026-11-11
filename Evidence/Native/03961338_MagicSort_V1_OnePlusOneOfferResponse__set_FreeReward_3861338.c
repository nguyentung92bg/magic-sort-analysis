/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$set_FreeReward
void MagicSort_V1_OnePlusOneOfferResponse__set_FreeReward (MagicSort_V1_OnePlusOneOfferResponse_o* __this, MagicSort_V1_ClientCommonRewardModelWithCollection_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$set_FreeReward
   void MagicSort_V1_OnePlusOneOfferResponse__set_FreeReward
   (MagicSort_V1_OnePlusOneOfferResponse_o* __this,
   MagicSort_V1_ClientCommonRewardModelWithCollection_o* value, const MethodInfo* method); */

void MagicSort_V1_OnePlusOneOfferResponse__set_FreeReward_3861338(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = param_2;
                    /* try { // try from 0396133c to 03a61343 has its CatchHandler @ 039613b8 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

