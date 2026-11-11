/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$ShouldSendClaimRequest
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__ShouldSendClaimRequest (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$ShouldSendClaimRequest
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__ShouldSendClaimRequest
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__ShouldSendClaimRequest_358e41c
               (long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
                    /* try { // try from 0368e42c to 0378e433 has its CatchHandler @ 0368e84c */
  if ((bRam0000000005c32e14 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576cf88);
                    /* try { // try from 0368e440 to 0378e457 has its CatchHandler @ 0368e850 */
    FUN_012d0dc8(PTR_DAT_0576b8e8);
    bRam0000000005c32e14 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar7;
                    /* try { // try from 0368e470 to 0378e47b has its CatchHandler @ 0368e864 */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  uVar8 = *(undefined8 *)PTR_DAT_0576b8e8;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0576cf88) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_0368e4c0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 0368e4a8 to 0378e4e3 has its CatchHandler @ 0368e874 */
  puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0576cf88,3);
LAB_0368e4c0:
  uVar5 = (*(code *)*puVar3)(plVar7,uVar8,puVar3[1]);
  if ((uVar5 & 1) == 0) {
    uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                      (param_1);
    bVar1 = (uVar2 | 2) == 7;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

