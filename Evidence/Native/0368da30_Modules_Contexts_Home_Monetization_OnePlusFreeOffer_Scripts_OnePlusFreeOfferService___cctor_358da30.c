/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$.cctor
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$.cctor
   void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService___cctor
   (const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService___cctor_358da30
               (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar6 = PTR_DAT_057efec0;
  puVar5 = PTR_DAT_0579d708;
  puVar4 = PTR_DAT_0577c490;
                    /* try { // try from 0368da3c to 0378da4b has its CatchHandler @ 0368da70 */
                    /* try { // try from 0368da4c to 0378da8f has its CatchHandler @ 0368d8e0 */
  if ((bRam0000000005c32e0c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057efec0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368d9f0 with catch @ 0368da6c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368da3c with catch @ 0368da70
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368da2c with catch @ 0368da74
                        */
    FUN_012d0dc8(PTR_DAT_0579d708);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368da04 with catch @ 0368da78
                        */
    FUN_012d0dc8(PTR_DAT_0577c490);
    bRam0000000005c32e0c = 1;
  }
                    /* try { // try from 0368da90 to 0378da93 has its CatchHandler @ 0368db14 */
                    /* try { // try from 0368da94 to 0378db17 has its CatchHandler @ 0368d8e0 */
  uVar7 = FUN_012d0e38(*(undefined8 *)puVar6,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_2446ba8
            (uVar7,*(undefined8 *)puVar4,0);
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar7;
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

