/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$.cctor
void MagicSort_V1_OnePlusOneOfferResponse___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$.cctor
   void MagicSort_V1_OnePlusOneOfferResponse___cctor (const MethodInfo* method); */

void MagicSort_V1_OnePlusOneOfferResponse___cctor_3862230(void)

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
  
                    /* try { // try from 03962230 to 03a62233 has its CatchHandler @ 03962448 */
  puVar4 = PTR_DAT_057f6dd0;
  if ((bRam0000000005c34991 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cf448);
                    /* try { // try from 0396225c to 03a6225f has its CatchHandler @ 03962444 */
    FUN_012d0dc8(PTR_DAT_0576b248);
                    /* try { // try from 03962268 to 03a62273 has its CatchHandler @ 03962440 */
    FUN_012d0dc8(PTR_DAT_05792b28);
                    /* try { // try from 03962278 to 03a6227f has its CatchHandler @ 0396243c */
    FUN_012d0dc8(PTR_DAT_05795a78);
    FUN_012d0dc8(PTR_DAT_057c86c0);
    FUN_012d0dc8(PTR_DAT_057f6dd0);
                    /* try { // try from 03962298 to 03a622b7 has its CatchHandler @ 03962454 */
    bRam0000000005c34991 = 1;
  }
  puVar5 = PTR_DAT_057cf448;
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar6 = *(long *)puVar4;
  }
  uVar9 = **(undefined8 **)(lVar6 + 0xb8);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar4 = PTR_DAT_05792b28;
  if (lVar6 != 0) {
    System_Func_object____ctor_3378e44(lVar6,uVar9,*(undefined8 *)PTR_DAT_057c86c0,0);
                    /* try { // try from 039622f4 to 03a62337 has its CatchHandler @ 03962450 */
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_05795a78;
    if (lVar7 != 0) {
      Google_Protobuf_MessageParser_object____ctor_2575570
                (lVar7,lVar6,*(undefined8 *)PTR_DAT_0576b248);
      **(long **)(*(long *)puVar4 + 0xb8) = lVar7;
      uVar8 = *(ulong *)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 0396233c to 03a62343 has its CatchHandler @ 03962438 */
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

