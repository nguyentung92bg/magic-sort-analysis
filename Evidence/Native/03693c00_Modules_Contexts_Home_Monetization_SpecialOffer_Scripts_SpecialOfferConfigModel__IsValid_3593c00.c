/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferConfigModel$$IsValid
bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferConfigModel__IsValid (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferConfigModel$$IsValid
   bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferConfigModel__IsValid
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferConfigModel_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferConfigModel__IsValid_3593c00
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_057c4270;
  if ((bRam0000000005c32e4a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c4270);
    FUN_012d0dc8(PTR_DAT_05758928);
    bRam0000000005c32e4a = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_05758928);
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

