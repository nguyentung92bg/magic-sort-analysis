/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$.ctor
void MagicSort_V1_StrikeShowLeaderboardPlayer___ctor (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, MagicSort_V1_StrikeShowLeaderboardPlayer_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$.ctor
   void MagicSort_V1_StrikeShowLeaderboardPlayer___ctor (MagicSort_V1_StrikeShowLeaderboardPlayer_o*
   __this, MagicSort_V1_StrikeShowLeaderboardPlayer_o* other, const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardPlayer___ctor_386bd54(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  MagicSort_V1_StrikeShowLeaderboardPlayer___ctor_386bc8c();
  if (param_2 != 0) {
                    /* try { // try from 0396bd70 to 03a6bd77 has its CatchHandler @ 0396c14c */
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    FUN_012d0d74();
                    /* try { // try from 0396bd8c to 03a6bd93 has its CatchHandler @ 0396be18 */
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
    *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
                    /* try { // try from 0396bdb0 to 03a6bdb7 has its CatchHandler @ 0396be14 */
    *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_2 + 0x3b);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    FUN_012d0d74();
                    /* try { // try from 0396bdc8 to 03a6bdcf has its CatchHandler @ 0396be10 */
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    FUN_012d0d74();
                    /* try { // try from 0396bddc to 03a6bde3 has its CatchHandler @ 0396c150 */
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    FUN_012d0d74();
                    /* try { // try from 0396bdec to 03a6bdef has its CatchHandler @ 0396be0c */
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    FUN_012d0d74();
                    /* try { // try from 0396bdf4 to 03a6bdf7 has its CatchHandler @ 0396be08 */
                    /* try { // try from 0396bdfc to 03a6bdff has its CatchHandler @ 0396be04 */
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
                    /* try { // try from 0396be00 to 03a6be27 has its CatchHandler @ 0396bac4 */
    FUN_012d0d74();
                    /* catch() { ... } // from try @ 0396bdfc with catch @ 0396be04 */
                    /* catch() { ... } // from try @ 0396bdf4 with catch @ 0396be08 */
                    /* catch() { ... } // from try @ 0396bdec with catch @ 0396be0c */
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
                    /* catch() { ... } // from try @ 0396bdc8 with catch @ 0396be10 */
    FUN_012d0d74();
                    /* catch() { ... } // from try @ 0396bdb0 with catch @ 0396be14 */
                    /* catch() { ... } // from try @ 0396bd8c with catch @ 0396be18 */
    uVar4 = Google_Protobuf_UnknownFieldSet__Clone_3e5685c(*(undefined8 *)(param_2 + 0x10),0);
    puVar5 = (undefined8 *)(param_1 + 0x10);
    *puVar5 = uVar4;
                    /* try { // try from 0396be28 to 03a6be2b has its CatchHandler @ 0396c140 */
                    /* try { // try from 0396be2c to 03a6c0f7 has its CatchHandler @ 0396bac4 */
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

