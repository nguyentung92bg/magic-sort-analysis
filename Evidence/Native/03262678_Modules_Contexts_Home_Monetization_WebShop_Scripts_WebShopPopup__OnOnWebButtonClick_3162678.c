/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopup$$OnOnWebButtonClick
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__OnOnWebButtonClick (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopup$$OnOnWebButtonClick
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__OnOnWebButtonClick
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__OnOnWebButtonClick_3162678
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c3151b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c3151b = 1;
  }
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  puVar2 = PTR_DAT_057e7410;
  puVar1 = PTR_DAT_057b8520;
  lVar3 = *(long *)(param_1 + 0x60);
  if ((lVar3 == 0) || (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferSelectedEvent_1492dd4
            (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),*(undefined8 *)(lVar3 + 0x28),
             *(undefined8 *)(lVar3 + 0x30),0);
  *(undefined4 *)(param_1 + 0x70) = 2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar3 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  lVar4 = *(long *)(lVar3 + 0x10);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),lVar3,0,*(undefined8 *)(lVar4 + 0x28))
    ;
    return;
  }
  return;
}

