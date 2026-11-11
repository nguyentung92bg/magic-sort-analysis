/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferView$$GetRewardSpriteForCurrencyType
UnityEngine_Sprite_o* Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__GetRewardSpriteForCurrencyType (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView_o* __this, int32_t currencyType, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferView$$GetRewardSpriteForCurrencyType
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__GetRewardSpriteForCurrencyType
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView_o*
   __this, int32_t currencyType, int32_t amount, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__GetRewardSpriteForCurrencyType_20b1ab8
          (long param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  switch(param_2) {
  case 1:
    puVar2 = (undefined8 *)(param_1 + 0xb8);
    if (param_3 < 0x2711) {
      puVar2 = (undefined8 *)(param_1 + 0xb0);
    }
    break;
  case 2:
    puVar2 = (undefined8 *)(param_1 + 0xa8);
    break;
  default:
    goto LAB_021b1b18;
  case 4:
    puVar2 = (undefined8 *)(param_1 + 0x90);
    break;
  case 5:
    puVar2 = (undefined8 *)(param_1 + 0x98);
    break;
  case 6:
    puVar2 = (undefined8 *)(param_1 + 0xa0);
  }
  uVar1 = *puVar2;
LAB_021b1b18:
  return uVar1;
}

