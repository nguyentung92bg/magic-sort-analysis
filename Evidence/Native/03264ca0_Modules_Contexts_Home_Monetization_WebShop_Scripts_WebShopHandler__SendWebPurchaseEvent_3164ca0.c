/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$SendWebPurchaseEvent
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__SendWebPurchaseEvent (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, System_String_o* productId, System_String_o* webProductId, System_String_o* transactionId, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* webShopProduct, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopHandler$$SendWebPurchaseEvent
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__SendWebPurchaseEvent
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler_o* __this, System_String_o*
   productId, System_String_o* webProductId, System_String_o* transactionId,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* webShopProduct, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopHandler__SendWebPurchaseEvent_3164ca0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  float fStack_34;
  
  if ((bRam0000000005c31544 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581b878);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c31544 = 1;
  }
  if (param_5 == 0) {
    fStack_34 = 0.0;
LAB_03264d0c:
    if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
        (lVar1 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar1 == 0)) ||
       (lVar1 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar1,*(undefined8 *)PTR_DAT_0581b878), lVar1 == 0)) goto LAB_03264db4;
    Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetDollarEquivalentByProductId_138c3c4
              (lVar1,param_2,&fStack_34,0);
  }
  else {
    fStack_34 = *(float *)(param_5 + 0x20);
    if (fStack_34 <= 0.0) goto LAB_03264d0c;
  }
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
    Modules_Contexts_Application_Events_Scripts_EventSender__SendWebPurchaseEvent_1493bf8
              (fStack_34,**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),param_2,param_3,param_4,0);
    return;
  }
LAB_03264db4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

