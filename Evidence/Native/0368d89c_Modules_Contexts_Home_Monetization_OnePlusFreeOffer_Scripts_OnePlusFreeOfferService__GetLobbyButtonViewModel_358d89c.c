/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetLobbyButtonViewModel
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButtonViewModel_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetLobbyButtonViewModel (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetLobbyButtonViewModel
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButtonViewModel_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetLobbyButtonViewModel
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetLobbyButtonViewModel_358d89c
               (long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0575dba0;
  if ((bRam0000000005c32e0a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575dba0);
    bRam0000000005c32e0a = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
                    /* try { // try from 0368d8e0 to 0378d9ef has its CatchHandler @ 0368d8e0
                       catch() { ... } // from try @ 0368d8e0 with catch @ 0368d8e0
                       catch() { ... } // from try @ 0368da4c with catch @ 0368d8e0
                       catch() { ... } // from try @ 0368da94 with catch @ 0368d8e0
                       catch() { ... } // from try @ 0368db24 with catch @ 0368d8e0 */
    System_Object___ctor_23dfe5c(lVar4,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                        ();
      *(bool *)(lVar4 + 0x10) = iVar3 == 3 || iVar3 == 6;
      if (*(long *)(param_1 + 0x18) != 0) {
        iVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                          ();
        if (iVar3 == 6) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368d950;
          bVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                            ();
          bVar2 = ~bVar2 & 1;
        }
        else {
          bVar2 = 0;
        }
        *(byte *)(lVar4 + 0x11) = bVar2;
        return lVar4;
      }
    }
  }
LAB_0368d950:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

