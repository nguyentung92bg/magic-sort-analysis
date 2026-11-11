/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$MergeFrom
void MagicSort_V1_StrikeShowLeaderboardPlayer__MergeFrom (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, MagicSort_V1_StrikeShowLeaderboardPlayer_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$MergeFrom
   void MagicSort_V1_StrikeShowLeaderboardPlayer__MergeFrom
   (MagicSort_V1_StrikeShowLeaderboardPlayer_o* __this, MagicSort_V1_StrikeShowLeaderboardPlayer_o*
   other, const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardPlayer__MergeFrom_386cd50(long param_1,long param_2)

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
      MagicSort_V1_StrikeShowLeaderboardPlayer__set_PublicId_386bea4(param_1);
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      if (*(int *)(*(long *)(param_2 + 0x20) + 0x10) != 0) {
        MagicSort_V1_StrikeShowLeaderboardPlayer__set_Nickname_386bf28(param_1);
      }
      if (*(long *)(param_2 + 0x28) != 0) {
        *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
      }
      if (*(long *)(param_2 + 0x30) != 0) {
        *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(param_2 + 0x38) != '\0') {
        *(char *)(param_1 + 0x38) = *(char *)(param_2 + 0x38);
      }
      if (*(char *)(param_2 + 0x39) != '\0') {
        *(char *)(param_1 + 0x39) = *(char *)(param_2 + 0x39);
      }
      if (*(char *)(param_2 + 0x3a) != '\0') {
        *(char *)(param_1 + 0x3a) = *(char *)(param_2 + 0x3a);
      }
      if (*(char *)(param_2 + 0x3b) != '\0') {
        *(char *)(param_1 + 0x3b) = *(char *)(param_2 + 0x3b);
      }
      if (*(long *)(param_2 + 0x40) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x40) + 0x10) != 0) {
          MagicSort_V1_StrikeShowLeaderboardPlayer__set_ImageUrl_386c01c(param_1);
        }
        if (*(long *)(param_2 + 0x48) != 0) {
          if (*(int *)(*(long *)(param_2 + 0x48) + 0x10) != 0) {
            MagicSort_V1_StrikeShowLeaderboardPlayer__set_ImageId_386c0a0(param_1);
          }
          if (*(long *)(param_2 + 0x50) != 0) {
            if (*(int *)(*(long *)(param_2 + 0x50) + 0x10) != 0) {
              MagicSort_V1_StrikeShowLeaderboardPlayer__set_TokenId_386c124(param_1);
            }
            if (*(long *)(param_2 + 0x58) != 0) {
              if (*(int *)(*(long *)(param_2 + 0x58) + 0x10) != 0) {
                MagicSort_V1_StrikeShowLeaderboardPlayer__set_FrameId_386c1a8(param_1);
              }
              if (*(long *)(param_2 + 0x60) != 0) {
                if (*(int *)(*(long *)(param_2 + 0x60) + 0x10) != 0) {
                  MagicSort_V1_StrikeShowLeaderboardPlayer__set_NameStyle_386c22c(param_1);
                }
                if (*(long *)(param_2 + 0x68) != 0) {
                  if (*(int *)(*(long *)(param_2 + 0x68) + 0x10) != 0) {
                    MagicSort_V1_StrikeShowLeaderboardPlayer__set_TeamName_386c2b0(param_1);
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
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

