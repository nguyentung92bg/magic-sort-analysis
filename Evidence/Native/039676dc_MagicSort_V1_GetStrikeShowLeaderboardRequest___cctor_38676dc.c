/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$.cctor
void MagicSort_V1_GetStrikeShowLeaderboardRequest___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.GetStrikeShowLeaderboardRequest$$.cctor
   void MagicSort_V1_GetStrikeShowLeaderboardRequest___cctor (const MethodInfo* method); */

void MagicSort_V1_GetStrikeShowLeaderboardRequest___cctor_38676dc(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_DAT_05795508;
  if ((bRam0000000005c349bf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1d78);
    FUN_012d0dc8(PTR_DAT_057c26a0);
    FUN_012d0dc8(PTR_DAT_057f97c0);
    FUN_012d0dc8(PTR_DAT_057e86c0);
    FUN_012d0dc8(PTR_DAT_05814fd8);
    FUN_012d0dc8(PTR_DAT_05795508);
    bRam0000000005c349bf = 1;
  }
  puVar5 = PTR_DAT_057f1d78;
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar6 = *(long *)puVar4;
  }
  uVar9 = **(undefined8 **)(lVar6 + 0xb8);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar4 = PTR_DAT_057e86c0;
  if (lVar6 != 0) {
    System_Func_object____ctor_3378e44(lVar6,uVar9,*(undefined8 *)PTR_DAT_05814fd8,0);
                    /* try { // try from 039677a0 to 03a677a3 has its CatchHandler @ 03967fec */
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_057c26a0;
    if (lVar7 != 0) {
      Google_Protobuf_MessageParser_object____ctor_2575570
                (lVar7,lVar6,*(undefined8 *)PTR_DAT_057f97c0);
      **(long **)(*(long *)puVar4 + 0xb8) = lVar7;
      uVar8 = *(ulong *)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 039677e4 to 03a6780f has its CatchHandler @ 03967ff8 */
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)((uVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (uVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

