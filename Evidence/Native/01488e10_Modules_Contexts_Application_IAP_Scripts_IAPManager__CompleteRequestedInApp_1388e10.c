/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$CompleteRequestedInApp
void Modules_Contexts_Application_IAP_Scripts_IAPManager__CompleteRequestedInApp (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId, Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o* purchaseResult, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$CompleteRequestedInApp
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__CompleteRequestedInApp
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId,
   Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o* purchaseResult, const MethodInfo*
   method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__CompleteRequestedInApp_1388e10
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000005c23078 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e81f0);
    bRam0000000005c23078 = 1;
  }
  uVar4 = Modules_Contexts_Application_IAP_Scripts_IAPManager__IsRequested_13899e8(param_1,param_2);
  if ((uVar4 & 1) != 0) {
    plVar6 = (long *)(param_1 + 0x10);
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      System_Threading_Tasks_TaskCompletionSource_object___TrySetResult_1db6120
                (lVar5,param_3,*(undefined8 *)PTR_DAT_057e81f0);
      *plVar6 = 0;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

