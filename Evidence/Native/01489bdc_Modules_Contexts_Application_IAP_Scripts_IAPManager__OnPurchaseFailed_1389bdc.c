/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$OnPurchaseFailed
void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnPurchaseFailed (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, UnityEngine_Purchasing_Product_o* product, UnityEngine_Purchasing_Extension_PurchaseFailureDescription_o* failureReason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$OnPurchaseFailed
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnPurchaseFailed
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, UnityEngine_Purchasing_Product_o*
   product, UnityEngine_Purchasing_Extension_PurchaseFailureDescription_o* failureReason, const
   MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnPurchaseFailed_1389bdc
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c23077 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057608e8);
    bRam0000000005c23077 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    uVar1 = Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Fail_13882a8(param_3);
    Modules_Contexts_Application_IAP_Scripts_IAPManager__CompleteRequestedInApp_1388e10
              (param_1,uVar2,uVar1);
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar1 = *(undefined8 *)PTR_DAT_057608e8;
      System_ParamsArray___ctor_26908bc
                (&stack0xffffffffffffffd0,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),param_3,
                 0);
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      System_String__FormatHelper_1ed14b0(0,uVar1,&uStack_50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

