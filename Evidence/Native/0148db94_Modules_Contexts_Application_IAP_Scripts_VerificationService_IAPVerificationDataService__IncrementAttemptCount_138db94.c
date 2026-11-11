/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$IncrementAttemptCount
int32_t Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__IncrementAttemptCount (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, System_String_o* purchaseToken, System_String_o* transactionId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$IncrementAttemptCount
   int32_t
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__IncrementAttemptCount
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, System_String_o* purchaseToken, System_String_o* transactionId, const MethodInfo*
   method); */

int Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__IncrementAttemptCount_138db94
              (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000005c23099 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db288);
    bRam0000000005c23099 = 1;
  }
  iVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetVerificationIndex_138da90
                    (param_1,param_2,param_3);
  if (iVar1 < 0) {
    return -1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
    if ((lVar2 != 0) &&
       (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar2,iVar1,*(undefined8 *)PTR_DAT_057db288), lVar2 != 0)) {
      iVar1 = *(int *)(lVar2 + 0x38) + 1;
      *(int *)(lVar2 + 0x38) = iVar1;
      *(undefined1 *)(param_1 + 0x20) = 1;
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

