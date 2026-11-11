/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopupArguments$$GetPopupNameByThemeType
System_String_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments__GetPopupNameByThemeType (int32_t themeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopupArguments$$GetPopupNameByThemeType
   System_String_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments__GetPopupNameByThemeType
   (int32_t themeType, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments__GetPopupNameByThemeType_345f92c
          (int param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000005c32633 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1b28);
    FUN_012d0dc8(PTR_DAT_057fc898);
    FUN_012d0dc8(PTR_DAT_057f7d90);
    FUN_012d0dc8(PTR_DAT_0579b018);
    FUN_012d0dc8(PTR_DAT_05802000);
    bRam0000000005c32633 = 1;
  }
  puVar1 = (undefined8 *)PTR_DAT_0579b018;
  if (param_1 - 1U < 4) {
    puVar1 = *(undefined8 **)(&UNK_054cc870 + (long)(int)(param_1 - 1U) * 8);
  }
  return *puVar1;
}

