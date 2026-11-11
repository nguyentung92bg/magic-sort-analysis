/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferConfigModel$$IsValid
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferConfigModel__IsValid (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferConfigModel$$IsValid
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferConfigModel__IsValid
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferConfigModel_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferConfigModel__IsValid_358a078
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_057c4270;
  if ((bRam0000000005c32de0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c4270);
    FUN_012d0dc8(PTR_DAT_057d6e60);
    bRam0000000005c32de0 = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_057d6e60);
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

