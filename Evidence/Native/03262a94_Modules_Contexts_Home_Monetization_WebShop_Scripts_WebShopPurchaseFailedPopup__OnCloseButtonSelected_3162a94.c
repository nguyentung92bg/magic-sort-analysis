/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPurchaseFailedPopup$$OnCloseButtonSelected
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup__OnCloseButtonSelected (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPurchaseFailedPopup$$OnCloseButtonSelected
   void 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup__OnCloseButtonSelected
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup__OnCloseButtonSelected_3162a94
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c31520 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c31520 = 1;
  }
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  puVar2 = PTR_DAT_057e7410;
  puVar1 = PTR_DAT_057b8520;
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
    Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopPurchaseFailedClosedEvent_14951a0
              (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar1 = PTR_DAT_0576aae0;
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    }
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
       (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar3,*(undefined8 *)PTR_DAT_057f83f8), puVar1 = PTR_DAT_057b8360,
       lVar3 != 0)) {
      if ((bRam0000000005c31570 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057b8360);
        bRam0000000005c31570 = 1;
      }
      lStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_b0,0);
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      uStack_60 = uStack_a8;
      uStack_68 = uStack_b0;
      uStack_50 = uStack_98;
      uStack_58 = uStack_a0;
      FUN_012d0d74((ulong)&uStack_70 | 8,0);
      lStack_48 = lVar3;
      FUN_012d0d74(&lStack_48,lVar3);
      uStack_40 = uStack_40 & 0xffffffffffffff00;
      uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_WebShopService__RetryClaimOngoingTransaction_d__25__263df7c
                ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

