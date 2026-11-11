/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$TryEnqueue
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryEnqueue (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* pendingVerification, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$TryEnqueue
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryEnqueue
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o*
   pendingVerification, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryEnqueue_138d70c
          (long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000005c23097 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bfd38);
    bRam0000000005c23097 = 1;
  }
  if ((param_2 != 0) &&
     (((uVar2 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_2 + 0x28),0),
       (uVar2 & 1) == 0 ||
       (uVar2 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_2 + 0x30),0),
       (uVar2 & 1) == 0)) &&
      (uVar2 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__Contains_138d808
                         (param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30)),
      (uVar2 & 1) == 0)))) {
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 != 0)) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_057bfd38;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = param_2;
          FUN_012d0d74(plVar5,param_2);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar3,param_2);
        }
        *(undefined1 *)(param_1 + 0x20) = 1;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return 0;
}

