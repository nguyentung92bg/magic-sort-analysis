/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$Initialize
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__Initialize (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$Initialize
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__Initialize
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__Initialize_358a2b0
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0368a2b8 to 0378a35f has its CatchHandler @ 0368a2b8
                       catch() { ... } // from try @ 0368a2b8 with catch @ 0368a2b8
                       catch() { ... } // from try @ 0368a3b8 with catch @ 0368a2b8
                       catch() { ... } // from try @ 0368a568 with catch @ 0368a2b8
                       catch() { ... } // from try @ 0368a618 with catch @ 0368a2b8
                       catch() { ... } // from try @ 0368a710 with catch @ 0368a2b8
                       catch() { ... } // from try @ 0368a808 with catch @ 0368a2b8
                       catch() { ... } // from try @ 0368a8c0 with catch @ 0368a2b8
                       catch() { ... } // from try @ 0368a8f0 with catch @ 0368a2b8
                       catch() { ... } // from try @ 0368a940 with catch @ 0368a2b8 */
  if ((bRam0000000005c32de1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ba4b8);
    FUN_012d0dc8(PTR_DAT_05799700);
    bRam0000000005c32de1 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057ba4b8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_0368a348;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057ba4b8,1);
LAB_0368a348:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    plVar5 = (long *)(param_1 + 0x18);
    *plVar5 = lVar2;
                    /* try { // try from 0368a360 to 0378a367 has its CatchHandler @ 0368a810 */
    FUN_012d0d74(plVar5,lVar2);
                    /* try { // try from 0368a368 to 0378a36b has its CatchHandler @ 0368a80c */
    if (*plVar5 != 0) {
      plVar5 = (long *)(*plVar5 + 0x10);
      if (*plVar5 == 0) {
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05799700);
        if (lVar2 == 0) goto LAB_0368a3bc;
        System_Object___ctor_23dfe5c(lVar2,0);
        *plVar5 = lVar2;
        FUN_012d0d74(plVar5,lVar2);
      }
                    /* try { // try from 0368a3ac to 0378a3b7 has its CatchHandler @ 0368a818 */
      *(undefined2 *)(param_1 + 0x20) = 0x100;
                    /* try { // try from 0368a3b8 to 0378a3f7 has its CatchHandler @ 0368a2b8 */
      return;
    }
  }
LAB_0368a3bc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

