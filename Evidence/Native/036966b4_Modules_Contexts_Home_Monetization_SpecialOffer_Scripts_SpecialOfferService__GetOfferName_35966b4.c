/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetOfferName
System_String_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetOfferName (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$GetOfferName
   System_String_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetOfferName
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetOfferName_35966b4
          (undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000005c32e67 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e26c8);
    FUN_012d0dc8(PTR_DAT_05763550);
    FUN_012d0dc8(PTR_DAT_057ca768);
    FUN_012d0dc8(PTR_DAT_05784960);
    FUN_012d0dc8(PTR_DAT_057c7df0);
    FUN_012d0dc8(PTR_DAT_05807108);
    FUN_012d0dc8(PTR_DAT_0576eb08);
    FUN_012d0dc8(PTR_DAT_05760378);
    FUN_012d0dc8(PTR_DAT_0580a5c8);
    bRam0000000005c32e67 = 1;
  }
  uVar1 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferPopupType_35960a8
                    (param_1);
  iVar2 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetThemeType_35967a4
                    (param_1);
  if (iVar2 - 1U < 3) {
    puVar3 = (undefined8 *)(&UNK_054ccbf8 + (long)(int)(iVar2 - 1U) * 8);
  }
  else {
    puVar3 = (undefined8 *)PTR_DAT_05763550;
    if (4 < uVar1) goto LAB_03696794;
    puVar3 = (undefined8 *)(&UNK_054ccc10 + (long)(int)uVar1 * 8);
  }
  puVar3 = (undefined8 *)*puVar3;
LAB_03696794:
  return *puVar3;
}

