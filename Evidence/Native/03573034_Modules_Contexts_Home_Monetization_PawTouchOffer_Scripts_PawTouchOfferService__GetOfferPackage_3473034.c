/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$GetOfferPackage
Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferPackage_o* Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetOfferPackage (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, System_String_o* productId, bool* isFallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$GetOfferPackage
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferPackage_o*
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetOfferPackage
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this,
   System_String_o* productId, bool* isFallback, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetOfferPackage_3473034
               (long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000005c32704 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05763610);
    FUN_012d0dc8(PTR_DAT_057f2708);
    bRam0000000005c32704 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__GetOfferPackage_34711d4
                      ();
    if ((lVar2 != 0) &&
       (uVar3 = System_String__Equals_1ecf17c(*(undefined8 *)(lVar2 + 0x10),param_2,4,0),
       (uVar3 & 1) != 0)) {
      *param_3 = 0;
      return lVar2;
    }
    puVar1 = PTR_DAT_05763610;
    *param_3 = 1;
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057f2708;
    if (lVar2 != 0) {
      System_Object___ctor_23dfe5c(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)puVar1;
      FUN_012d0d74((undefined8 *)(lVar2 + 0x10));
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar4 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__get_Config_34725a8
                        (param_1);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar4 + 0x28);
        FUN_012d0d74();
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

