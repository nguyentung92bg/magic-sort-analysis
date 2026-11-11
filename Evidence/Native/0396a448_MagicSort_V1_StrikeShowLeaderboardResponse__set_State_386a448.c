/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$set_State
void MagicSort_V1_StrikeShowLeaderboardResponse__set_State (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$set_State
   void MagicSort_V1_StrikeShowLeaderboardResponse__set_State
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, System_String_o* value, const MethodInfo*
   method); */

void MagicSort_V1_StrikeShowLeaderboardResponse__set_State_386a448(long param_1,undefined8 param_2)

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
                    /* try { // try from 0396a454 to 03a6a45f has its CatchHandler @ 0396a57c */
                    /* try { // try from 0396a464 to 03a6a473 has its CatchHandler @ 0396a578 */
  if ((bRam0000000005c349ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580c9f0);
                    /* try { // try from 0396a48c to 03a6a49b has its CatchHandler @ 0396a570 */
    FUN_012d0dc8(PTR_DAT_057c9128);
    bRam0000000005c349ed = 1;
  }
  uVar6 = Google_Protobuf_ProtoPreconditions__CheckNotNull_object__2674fd8
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(param_1 + 0x68);
  *puVar7 = uVar6;
                    /* try { // try from 0396a4b8 to 03a6a4bf has its CatchHandler @ 0396a56c */
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

