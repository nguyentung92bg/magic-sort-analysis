/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$MergeFrom
void MagicSort_V1_GetStrikeShowLeaderboardRequest__MergeFrom (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this, MagicSort_V1_GetStrikeShowLeaderboardRequest_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$MergeFrom
   void MagicSort_V1_GetStrikeShowLeaderboardRequest__MergeFrom
   (MagicSort_V1_GetStrikeShowLeaderboardRequest_o* __this,
   MagicSort_V1_GetStrikeShowLeaderboardRequest_o* other, const MethodInfo* method); */

void MagicSort_V1_GetStrikeShowLeaderboardRequest__MergeFrom_3867444(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    if (*(int *)(*(long *)(param_2 + 0x18) + 0x10) != 0) {
      MagicSort_V1_GetStrikeShowLeaderboardRequest__set_TournamentId_3867000(param_1);
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
    }
    if (*(long *)(param_2 + 0x28) != 0) {
      *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
    }
    puVar5 = (undefined8 *)(param_1 + 0x10);
    uVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom_3e567e8
                      (*puVar5,*(undefined8 *)(param_2 + 0x10),0);
    *puVar5 = uVar4;
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

