/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferPopupArguments$$.ctor
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopupArguments___ctor (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopupArguments_o* __this, int32_t storePopUpSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferPopupArguments$$.ctor
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopupArguments___ctor
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopupArguments_o*
   __this, int32_t storePopUpSource, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopupArguments___ctor_20b08dc
               (long param_1,int param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000005c29523 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ff98);
    bRam0000000005c29523 = 1;
  }
  puVar4 = PTR_DAT_0579ff98;
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
  if (param_2 == 3) {
    uVar5 = 4;
  }
  else if (param_2 == 1) {
    uVar5 = 3;
  }
  else {
    if (param_2 != 5) {
      *(int *)(param_1 + 0x24) = param_2;
      goto FUN_012d0d74;
    }
    uVar5 = 5;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar5;
FUN_012d0d74:
  puVar6 = (undefined8 *)(param_1 + 0x10);
  *puVar6 = *(undefined8 *)puVar4;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

