/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$OnPurchaseFailed
void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnPurchaseFailed (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, UnityEngine_Purchasing_Product_o* product, int32_t failureReason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$OnPurchaseFailed
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnPurchaseFailed
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, UnityEngine_Purchasing_Product_o*
   product, int32_t failureReason, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnPurchaseFailed_1389b18
               (undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000005c23076 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578bb00);
    FUN_012d0dc8(PTR_DAT_057608e8);
    bRam0000000005c23076 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    uVar2 = Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Fail_1388324(param_3);
    Modules_Contexts_Application_IAP_Scripts_IAPManager__CompleteRequestedInApp_1388e10
              (param_1,uVar3,uVar2);
    puVar1 = PTR_DAT_057608e8;
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
      uStack_24 = param_3;
      uVar2 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_0578bb00,&uStack_24);
      System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar3,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

