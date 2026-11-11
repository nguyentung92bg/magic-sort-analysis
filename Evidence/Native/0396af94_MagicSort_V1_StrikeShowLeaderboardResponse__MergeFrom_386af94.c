/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$MergeFrom
void MagicSort_V1_StrikeShowLeaderboardResponse__MergeFrom (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, MagicSort_V1_StrikeShowLeaderboardResponse_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$MergeFrom
   void MagicSort_V1_StrikeShowLeaderboardResponse__MergeFrom
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this,
   MagicSort_V1_StrikeShowLeaderboardResponse_o* other, const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardResponse__MergeFrom_386af94(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000005c349f4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ade0);
    FUN_012d0dc8(PTR_DAT_05792b68);
    bRam0000000005c349f4 = 1;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    if (*(int *)(*(long *)(param_2 + 0x18) + 0x10) != 0) {
      MagicSort_V1_StrikeShowLeaderboardResponse__set_TournamentId_386a2d8(param_1);
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      if (*(int *)(*(long *)(param_2 + 0x20) + 0x10) != 0) {
        MagicSort_V1_StrikeShowLeaderboardResponse__set_LeaderboardId_386a35c(param_1);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        Google_Protobuf_Collections_RepeatedField_object___Add_3662b10
                  (*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                   *(undefined8 *)PTR_DAT_05792b68);
        if (*(long *)(param_2 + 0x30) != 0) {
          *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
        }
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
        }
        if (*(long *)(param_2 + 0x40) != 0) {
          *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
        }
        puVar4 = PTR_DAT_0579ade0;
        if (*(long *)(param_1 + 0x48) != 0) {
          Google_Protobuf_Collections_MapField_long__long___MergeFrom_22600cc
                    (*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48),
                     *(undefined8 *)PTR_DAT_0579ade0);
          if (*(long *)(param_1 + 0x50) != 0) {
            Google_Protobuf_Collections_MapField_long__long___MergeFrom_22600cc
                      (*(long *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50),
                       *(undefined8 *)puVar4);
            if (*(long *)(param_2 + 0x58) != 0) {
              *(long *)(param_1 + 0x58) = *(long *)(param_2 + 0x58);
            }
            if (*(long *)(param_2 + 0x60) != 0) {
              *(long *)(param_1 + 0x60) = *(long *)(param_2 + 0x60);
            }
            if (*(long *)(param_2 + 0x68) != 0) {
              if (*(int *)(*(long *)(param_2 + 0x68) + 0x10) != 0) {
                MagicSort_V1_StrikeShowLeaderboardResponse__set_State_386a448(param_1);
              }
              if (*(long *)(param_2 + 0x70) != 0) {
                *(long *)(param_1 + 0x70) = *(long *)(param_2 + 0x70);
              }
              if (*(char *)(param_2 + 0x78) != '\0') {
                *(char *)(param_1 + 0x78) = *(char *)(param_2 + 0x78);
              }
              if (*(long *)(param_2 + 0x80) != 0) {
                *(long *)(param_1 + 0x80) = *(long *)(param_2 + 0x80);
              }
              puVar6 = (undefined8 *)(param_1 + 0x10);
              uVar5 = Google_Protobuf_UnknownFieldSet__MergeFrom_3e567e8
                                (*puVar6,*(undefined8 *)(param_2 + 0x10),0);
              *puVar6 = uVar5;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

