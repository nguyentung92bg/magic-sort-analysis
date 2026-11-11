/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$set_TokenId
void MagicSort_V1_StrikeShowLeaderboardPlayer__set_TokenId (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$set_TokenId
   void MagicSort_V1_StrikeShowLeaderboardPlayer__set_TokenId
   (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, System_String_o* value, const MethodInfo*
   method); */

void MagicSort_V1_StrikeShowLeaderboardPlayer__set_TokenId_386c124(long param_1,undefined8 param_2)

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
                    /* try { // try from 0396c128 to 03a6c12b has its CatchHandler @ 0396c138 */
                    /* try { // try from 0396c12c to 03a6c12f has its CatchHandler @ 0396c134 */
                    /* try { // try from 0396c130 to 03a6c16f has its CatchHandler @ 0396bac4 */
                    /* catch() { ... } // from try @ 0396c12c with catch @ 0396c134 */
                    /* catch() { ... } // from try @ 0396c128 with catch @ 0396c138 */
                    /* catch() { ... } // from try @ 0396c120 with catch @ 0396c13c */
                    /* catch() { ... } // from try @ 0396be28 with catch @ 0396c140 */
                    /* catch() { ... } // from try @ 0396bd70 with catch @ 0396c14c */
                    /* catch() { ... } // from try @ 0396bddc with catch @ 0396c150 */
  if ((bRam0000000005c34a02 & 1) == 0) {
                    /* catch() { ... } // from try @ 0396bd50 with catch @ 0396c154 */
    FUN_012d0dc8(PTR_DAT_0580c9f0);
    FUN_012d0dc8(PTR_DAT_057c9128);
                    /* try { // try from 0396c170 to 03a6c173 has its CatchHandler @ 0396c1a0 */
    bRam0000000005c34a02 = 1;
  }
                    /* try { // try from 0396c174 to 03a6c1af has its CatchHandler @ 0396bac4 */
  uVar6 = Google_Protobuf_ProtoPreconditions__CheckNotNull_object__2674fd8
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(param_1 + 0x50);
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

