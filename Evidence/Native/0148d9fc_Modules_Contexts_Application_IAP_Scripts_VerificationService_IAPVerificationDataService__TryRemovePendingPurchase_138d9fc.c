/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$TryRemovePendingPurchase
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryRemovePendingPurchase (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, System_String_o* purchaseToken, System_String_o* transactionId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$TryRemovePendingPurchase
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryRemovePendingPurchase
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, System_String_o* purchaseToken, System_String_o* transactionId, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryRemovePendingPurchase_138d9fc
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000005c23098 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7030);
    bRam0000000005c23098 = 1;
  }
  auVar3 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetVerificationIndex_138da90
                     (param_1,param_2,param_3);
  if (auVar3._0_4_ < 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = auVar3._0_8_ & 0xffffffff;
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar2;
    auVar3 = auVar3 << 0x40;
    if (lVar1 != 0) {
      System_Collections_Generic_List_object___RemoveAt_21fe320
                (lVar1,uVar2,*(undefined8 *)PTR_DAT_057a7030);
      *(undefined1 *)(param_1 + 0x20) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(auVar3._0_8_,auVar3._8_8_);
}

