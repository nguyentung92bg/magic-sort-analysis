/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$set_TournamentId
void MagicSort_V1_GetStrikeShowLeaderboardRequest__set_TournamentId (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$set_TournamentId
   void MagicSort_V1_GetStrikeShowLeaderboardRequest__set_TournamentId
   (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, System_String_o* value, const
   MethodInfo* method); */

void MagicSort_V1_GetStrikeShowLeaderboardRequest__set_TournamentId_3867000
               (long param_1,undefined8 param_2)

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
  if ((bRam0000000005c349bb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580c9f0);
    FUN_012d0dc8(PTR_DAT_057c9128);
    bRam0000000005c349bb = 1;
  }
  uVar6 = Google_Protobuf_ProtoPreconditions__CheckNotNull_object__2674fd8
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(param_1 + 0x18);
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

