/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$ShouldSendGetRequest
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__ShouldSendGetRequest (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$ShouldSendGetRequest
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__ShouldSendGetRequest
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__ShouldSendGetRequest_358e500
               (long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
                    /* try { // try from 0368e514 to 0378e51b has its CatchHandler @ 0368e848 */
  if ((bRam0000000005c32e13 & 1) == 0) {
                    /* try { // try from 0368e520 to 0378e52b has its CatchHandler @ 0368e844 */
    FUN_012d0dc8(PTR_DAT_0576cf88);
    FUN_012d0dc8(PTR_DAT_0576b8e8);
                    /* try { // try from 0368e530 to 0378e53b has its CatchHandler @ 0368e840 */
    bRam0000000005c32e13 = 1;
  }
  uVar1 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                    (param_1);
                    /* try { // try from 0368e540 to 0378e54b has its CatchHandler @ 0368e874 */
  if ((uVar1 < 10) && ((1 << (ulong)(uVar1 & 0x1f) & 0x2e3U) != 0)) {
    uVar1 = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    uVar7 = *(undefined8 *)PTR_DAT_0576b8e8;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0576cf88) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_0368e5d8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0576cf88,3);
LAB_0368e5d8:
    uVar1 = (*(code *)*puVar2)(plVar6,uVar7,puVar2[1]);
    uVar1 = ~uVar1 & 1;
  }
                    /* try { // try from 0368e560 to 0378e567 has its CatchHandler @ 0368e854 */
                    /* try { // try from 0368e568 to 0378e5f7 has its CatchHandler @ 0368e358 */
  return uVar1;
}

