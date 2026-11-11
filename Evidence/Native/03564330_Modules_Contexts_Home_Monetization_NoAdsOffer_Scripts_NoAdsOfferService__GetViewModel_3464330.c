/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$GetViewModel
Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferViewModel_o* Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetViewModel (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$GetViewModel
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferViewModel_o*
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetViewModel
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetViewModel_3464330
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_057db928;
  if ((bRam0000000005c32664 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db928);
    FUN_012d0dc8(PTR_DAT_057928d8);
    FUN_012d0dc8(PTR_DAT_05781050);
    FUN_012d0dc8(PTR_DAT_057772c0);
    bRam0000000005c32664 = 1;
  }
  lVar2 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                    (param_1);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (((lVar3 != 0) &&
      (Modules_Contexts_Application_IAP_Scripts_IAPConfigModel___ctor_13868fc(lVar3,0), lVar2 != 0))
     && (*(long *)(lVar2 + 0x18) != 0)) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x10);
    FUN_012d0d74();
    puVar1 = PTR_DAT_05781050;
    if (*(long *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x18);
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057772c0;
      if (lVar2 != 0) {
        System_Collections_Generic_List_object____ctor_21fc324
                  (lVar2,uVar5,*(undefined8 *)PTR_DAT_057928d8);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          System_Object___ctor_23dfe5c(lVar4,0);
          *(long *)(lVar4 + 0x10) = lVar3;
          FUN_012d0d74((long *)(lVar4 + 0x10),lVar3);
          *(long *)(lVar4 + 0x18) = lVar2;
          FUN_012d0d74((long *)(lVar4 + 0x18),lVar2);
          return lVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

