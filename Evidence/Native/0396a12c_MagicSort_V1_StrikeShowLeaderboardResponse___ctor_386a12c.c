/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$.ctor
void MagicSort_V1_StrikeShowLeaderboardResponse___ctor (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this, MagicSort_V1_StrikeShowLeaderboardResponse_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardResponse$$.ctor
   void MagicSort_V1_StrikeShowLeaderboardResponse___ctor
   (MagicSort_V1_StrikeShowLeaderboardResponse_o* __this,
   MagicSort_V1_StrikeShowLeaderboardResponse_o* other, const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardResponse___ctor_386a12c(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000005c349e9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ee6b0);
    FUN_012d0dc8(PTR_DAT_057cccb0);
    bRam0000000005c349e9 = 1;
  }
  MagicSort_V1_StrikeShowLeaderboardResponse___ctor_3869fe0(param_1);
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    FUN_012d0d74();
    if (*(long *)(param_2 + 0x28) != 0) {
      uVar5 = Google_Protobuf_Collections_RepeatedField_object___Clone_3660e04
                        (*(long *)(param_2 + 0x28),*(undefined8 *)PTR_DAT_057cccb0);
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      FUN_012d0d74((undefined8 *)(param_1 + 0x28),uVar5);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      puVar4 = PTR_DAT_057ee6b0;
      if (*(long *)(param_2 + 0x48) != 0) {
        uVar5 = Google_Protobuf_Collections_MapField_long__long___Clone_225f0b4
                          (*(long *)(param_2 + 0x48),*(undefined8 *)PTR_DAT_057ee6b0);
        *(undefined8 *)(param_1 + 0x48) = uVar5;
                    /* try { // try from 0396a1f4 to 03a6a30b has its CatchHandler @ 0396a1f4
                       catch() { ... } // from try @ 0396a1f4 with catch @ 0396a1f4
                       catch() { ... } // from try @ 0396a4e4 with catch @ 0396a1f4
                       catch() { ... } // from try @ 0396a550 with catch @ 0396a1f4
                       catch() { ... } // from try @ 0396a5d8 with catch @ 0396a1f4
                       catch() { ... } // from try @ 0396a618 with catch @ 0396a1f4
                       catch() { ... } // from try @ 0396a648 with catch @ 0396a1f4
                       catch() { ... } // from try @ 0396a6bc with catch @ 0396a1f4 */
        FUN_012d0d74();
        if (*(long *)(param_2 + 0x50) != 0) {
          uVar5 = Google_Protobuf_Collections_MapField_long__long___Clone_225f0b4
                            (*(long *)(param_2 + 0x50),*(undefined8 *)puVar4);
          *(undefined8 *)(param_1 + 0x50) = uVar5;
          FUN_012d0d74();
          uVar5 = *(undefined8 *)(param_2 + 0x58);
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
          *(undefined8 *)(param_1 + 0x58) = uVar5;
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
          FUN_012d0d74();
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
          *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
          uVar5 = Google_Protobuf_UnknownFieldSet__Clone_3e5685c(*(undefined8 *)(param_2 + 0x10),0);
          puVar6 = (undefined8 *)(param_1 + 0x10);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

