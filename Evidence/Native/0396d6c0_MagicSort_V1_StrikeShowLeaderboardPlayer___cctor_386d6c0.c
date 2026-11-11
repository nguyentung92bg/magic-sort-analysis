/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$.cctor
void MagicSort_V1_StrikeShowLeaderboardPlayer___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.StrikeShowLeaderboardPlayer$$.cctor
   void MagicSort_V1_StrikeShowLeaderboardPlayer___cctor (const MethodInfo* method); */

void MagicSort_V1_StrikeShowLeaderboardPlayer___cctor_386d6c0(void)

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
  
  puVar5 = PTR_DAT_0575e950;
  if ((bRam0000000005c34a0a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758788);
    FUN_012d0dc8(PTR_DAT_057ac630);
    FUN_012d0dc8(PTR_DAT_057c9f20);
    FUN_012d0dc8(PTR_DAT_057588d8);
    FUN_012d0dc8(PTR_DAT_057a36a0);
    FUN_012d0dc8(PTR_DAT_0575e950);
    bRam0000000005c34a0a = 1;
  }
  puVar4 = PTR_DAT_05758788;
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar6 = *(long *)puVar5;
  }
                    /* try { // try from 0396d74c to 03a6d74f has its CatchHandler @ 0396d774 */
                    /* try { // try from 0396d750 to 03a6d753 has its CatchHandler @ 0396d770 */
  uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                    /* try { // try from 0396d754 to 03a6d757 has its CatchHandler @ 0396d0f4 */
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar5 = PTR_DAT_057c9f20;
                    /* try { // try from 0396d758 to 03a6d75b has its CatchHandler @ 0396d76c */
  if (lVar6 != 0) {
                    /* try { // try from 0396d75c to 03a6d75f has its CatchHandler @ 0396d768 */
                    /* try { // try from 0396d760 to 03a6d763 has its CatchHandler @ 0396d764 */
                    /* catch() { ... } // from try @ 0396d760 with catch @ 0396d764
                       try { // try from 0396d764 to 03a6d7ab has its CatchHandler @ 0396d0f4 */
                    /* catch() { ... } // from try @ 0396d75c with catch @ 0396d768 */
                    /* catch() { ... } // from try @ 0396d758 with catch @ 0396d76c */
                    /* catch() { ... } // from try @ 0396d750 with catch @ 0396d770 */
                    /* catch() { ... } // from try @ 0396d74c with catch @ 0396d774 */
                    /* catch() { ... } // from try @ 0396d380 with catch @ 0396d778 */
                    /* catch() { ... } // from try @ 0396d5b0 with catch @ 0396d77c */
    System_Func_object____ctor_3378e44(lVar6,uVar9,*(undefined8 *)PTR_DAT_057a36a0,0);
                    /* catch() { ... } // from try @ 0396d39c with catch @ 0396d780 */
                    /* catch() { ... } // from try @ 0396d554 with catch @ 0396d784 */
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_057588d8;
                    /* catch() { ... } // from try @ 0396d5b8 with catch @ 0396d788 */
    if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 0396d534 with catch @ 0396d78c */
                    /* catch() { ... } // from try @ 0396d5d8 with catch @ 0396d790 */
      Google_Protobuf_MessageParser_object____ctor_2575570
                (lVar7,lVar6,*(undefined8 *)PTR_DAT_057ac630);
                    /* try { // try from 0396d7ac to 03a6d7af has its CatchHandler @ 0396d7d4 */
                    /* try { // try from 0396d7b0 to 03a6d7e3 has its CatchHandler @ 0396d0f4 */
      **(long **)(*(long *)puVar5 + 0xb8) = lVar7;
      uVar8 = *(ulong *)(*(long *)puVar5 + 0xb8);
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

