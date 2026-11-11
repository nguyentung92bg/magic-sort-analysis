/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopupArguments$$.ctor
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopupArguments___ctor (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopupArguments_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* webShopProduct, System_Threading_Tasks_TaskCompletionSource_WebShopPromptResultType__o* resultTcs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopupArguments$$.ctor
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopupArguments___ctor
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopupArguments_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* webShopProduct,
   System_Threading_Tasks_TaskCompletionSource_WebShopPromptResultType__o* resultTcs, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopupArguments___ctor_3161934
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  puVar4 = PTR_DAT_057d8aa8;
  if ((bRam0000000005c31513 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8aa8);
    bRam0000000005c31513 = 1;
  }
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)puVar4;
  FUN_012d0d74();
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_2);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_3);
  puVar5 = (undefined8 *)(param_1 + 0x38);
  *puVar5 = param_4;
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

