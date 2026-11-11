/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$CheckWrongData
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CheckWrongData (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$CheckWrongData
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CheckWrongData
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__CheckWrongData_358d778
               (long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c32e09 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579bac0);
    bRam0000000005c32e09 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar3 != 0)) {
    lVar3 = *(long *)(lVar3 + 0x18);
    if ((((lVar3 == 0) ||
         (lVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetIAPConfigModel_358cc64
                            (param_1,*(undefined8 *)(lVar3 + 0x40)), lVar2 == 0)) ||
        (*(long *)(lVar3 + 0x48) == 0)) ||
       ((*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0 || (*(long *)(lVar3 + 0x50) == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(*(long *)(lVar3 + 0x50) + 0x18) == 0;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

