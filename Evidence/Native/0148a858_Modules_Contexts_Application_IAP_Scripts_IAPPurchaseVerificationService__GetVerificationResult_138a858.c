/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPPurchaseVerificationService$$GetVerificationResult
System_Threading_Tasks_Task_ApiResponse_IAPPurchaseVerificationResponse___o* Modules_Contexts_Application_IAP_Scripts_IAPPurchaseVerificationService__GetVerificationResult (Modules_Contexts_Application_IAP_Scripts_IAPPurchaseVerificationService_o* __this, System_String_o* productId, UnityEngine_Purchasing_PurchaseEventArgs_o* argsPurchasedProduct, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.IAPPurchaseVerificationService$$GetVerificationResult
   System_Threading_Tasks_Task_ApiResponse_IAPPurchaseVerificationResponse___o*
   Modules_Contexts_Application_IAP_Scripts_IAPPurchaseVerificationService__GetVerificationResult
   (Modules_Contexts_Application_IAP_Scripts_IAPPurchaseVerificationService_o* __this,
   System_String_o* productId, UnityEngine_Purchasing_PurchaseEventArgs_o* argsPurchasedProduct,
   const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPPurchaseVerificationService__GetVerificationResult_138a858
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
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
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_05760c88;
  if ((bRam0000000005c23082 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05810628);
    FUN_012d0dc8(PTR_DAT_057af5b8);
    FUN_012d0dc8(PTR_DAT_0577b718);
    FUN_012d0dc8(PTR_DAT_05760c88);
    bRam0000000005c23082 = 1;
  }
  puVar4 = PTR_DAT_05810628;
  puVar3 = PTR_DAT_057af5b8;
  puVar2 = PTR_DAT_0577b718;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar4);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_50 = param_1;
  FUN_012d0d74(&uStack_50,param_1);
  uStack_60 = param_2;
  FUN_012d0d74(&uStack_60,param_2);
  uStack_58 = param_3;
  FUN_012d0d74(&uStack_58,param_3);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_IAPPurchaseVerificationService__GetVerificationResult_d__6__33245f8
            (uVar5,&uStack_80,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar2);
  return;
}

