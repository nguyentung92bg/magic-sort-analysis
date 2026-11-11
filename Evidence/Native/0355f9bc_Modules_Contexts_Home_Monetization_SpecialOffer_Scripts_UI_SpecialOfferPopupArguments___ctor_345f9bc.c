/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopupArguments$$.ctor
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments___ctor (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments_o* __this, int32_t storePopUpSource, int32_t themeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopupArguments$$.ctor
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments___ctor
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments_o* __this,
   int32_t storePopUpSource, int32_t themeType, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments___ctor_345f9bc
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  uVar4 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopupArguments__GetPopupNameByThemeType_345f92c
                    (param_3);
  puVar5 = (undefined8 *)(param_1 + 0x10);
  *puVar5 = uVar4;
                    /* try { // try from 0355f9f8 to 0365f9fb has its CatchHandler @ 0355fa28 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

