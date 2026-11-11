/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopup$$GetIAPContext
int32_t Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__GetIAPContext (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopup$$GetIAPContext
   int32_t
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__GetIAPContext
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__GetIAPContext_359a2d0
          (long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = Modules_Infrastructure_DI_Injection_ContextsContainer__get_IsGamePlayContext_4001704(0);
  if ((uVar4 & 1) == 0) {
    bVar2 = Modules_Infrastructure_DI_Injection_ContextsContainer__get_IsDailyContext_4001780(0);
    bVar2 = bVar2 & 1;
  }
  else {
    bVar2 = 1;
  }
  if ((bVar2 & *(int *)(param_1 + 0x28) == 4) == 0) {
    uVar1 = *(int *)(param_1 + 0x28) - 1;
    if (uVar1 < 4) {
      uVar3 = *(undefined4 *)(&UNK_0439948c + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 5;
  }
  return uVar3;
}

