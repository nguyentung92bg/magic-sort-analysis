/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$set_FrameId
void MagicSort_V1_StrikeShowLeaderboardPlayer__set_FrameId (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$set_FrameId
   void MagicSort_V1_StrikeShowLeaderboardPlayer__set_FrameId
   (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, System_String_o* value, const MethodInfo*
   method); */

void MagicSort_V1_StrikeShowLeaderboardPlayer__set_FrameId_386c1a8(long param_1,undefined8 param_2)

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
                    /* try { // try from 0396c1b0 to 03a6c1b7 has its CatchHandler @ 0396c1cc */
                    /* try { // try from 0396c1b8 to 03a6c1c3 has its CatchHandler @ 0396bac4 */
                    /* try { // try from 0396c1c4 to 03a6c1cb has its CatchHandler @ 0396c1cc */
                    /* catch() { ... } // from try @ 0396c0f8 with catch @ 0396c1cc
                       catch() { ... } // from try @ 0396c1b0 with catch @ 0396c1cc
                       catch() { ... } // from try @ 0396c1c4 with catch @ 0396c1cc */
  if ((bRam0000000005c34a03 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580c9f0);
    FUN_012d0dc8(PTR_DAT_057c9128);
    bRam0000000005c34a03 = 1;
  }
  uVar6 = Google_Protobuf_ProtoPreconditions__CheckNotNull_object__2674fd8
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(param_1 + 0x58);
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

