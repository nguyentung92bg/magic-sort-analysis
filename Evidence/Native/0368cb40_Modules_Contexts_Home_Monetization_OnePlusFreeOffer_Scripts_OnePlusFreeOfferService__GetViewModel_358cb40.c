/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetViewModel
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferViewModel_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetViewModel (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$GetViewModel
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferViewModel_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetViewModel
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetViewModel_358cb40
          (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x68);
  uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetProductId_358cbf4
                    ();
                    /* try { // try from 0368cb54 to 0378cb5f has its CatchHandler @ 0368cc2c */
  uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetPaidRewards_358c590
                    (param_1,uVar2);
                    /* try { // try from 0368cb60 to 0378cc57 has its CatchHandler @ 0368c99c */
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    *puVar4 = uVar2;
    FUN_012d0d74(puVar4,uVar2);
    lVar3 = *(long *)(param_1 + 0x68);
    uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetFreeRewards_358c7b0
                      (param_1);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x18);
      *puVar4 = uVar2;
      FUN_012d0d74(puVar4,uVar2);
      lVar3 = *(long *)(param_1 + 0x68);
      uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetProductId_358cbf4
                        (param_1);
      uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetIAPConfigModel_358cc64
                        (param_1,uVar2);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x20);
        *puVar4 = uVar2;
        FUN_012d0d74(puVar4,uVar2);
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar3 = *(long *)(param_1 + 0x68);
          iVar1 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                            ();
          if (lVar3 != 0) {
            *(bool *)(lVar3 + 0x28) = iVar1 == 6;
            return *(undefined8 *)(param_1 + 0x68);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

