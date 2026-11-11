/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$EnqueuePurchase
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__EnqueuePurchase (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, UnityEngine_Purchasing_PurchaseEventArgs_o* purchaseEventArgs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$EnqueuePurchase
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__EnqueuePurchase
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   UnityEngine_Purchasing_PurchaseEventArgs_o* purchaseEventArgs, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__EnqueuePurchase_13895e0
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  
  if ((bRam0000000005c230a1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a478);
    FUN_012d0dc8(PTR_DAT_057e5b68);
    FUN_012d0dc8(PTR_DAT_05819bb8);
    FUN_012d0dc8(PTR_DAT_057c2e18);
    FUN_012d0dc8(PTR_DAT_05760cd8);
    FUN_012d0dc8(PTR_DAT_057f8768);
    bRam0000000005c230a1 = 1;
  }
  uStack_48 = 0;
  uVar3 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsEnabled_13895c4
                    (param_1);
  if (((param_2 == 0) || ((uVar3 & 1) == 0)) || (lVar8 = *(long *)(param_2 + 0x10), lVar8 == 0)) {
    return;
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10);
    uVar3 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__TryGetGooglePlayPurchaseToken_138f1dc
                      (*(undefined8 *)(lVar8 + 0x40),&uStack_48);
    if ((uVar3 & 1) == 0) {
      System_String__Concat_1ec3580(*(undefined8 *)PTR_DAT_057f8768,uVar6,0);
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      lVar7 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
      lVar4 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__GetConfig_138eb04
                        (param_1);
      if ((lVar4 == 0) || (lVar7 == 0)) goto LAB_01489834;
      Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationTokenMissingEvent_144d2c4
                (lVar7,uVar6,*(undefined1 *)(lVar4 + 0x11),*(undefined8 *)(lVar8 + 0x28),0);
      uVar3 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(lVar8 + 0x28),0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e5b68);
    puVar1 = PTR_DAT_0575a478;
    if (lVar4 != 0) {
      System_Object___ctor_23dfe5c(lVar4,0);
      puVar2 = PTR_DAT_058019e0;
      if ((bRam0000000005c230a6 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_058019e0);
        bRam0000000005c230a6 = 1;
      }
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar2;
      FUN_012d0d74();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = Modules_Contexts_Application_ServerCommunication_Scripts_UserIdService__GetUniqueDeviceID_3cd8904
                        (0);
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      FUN_012d0d74();
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      FUN_012d0d74((undefined8 *)(lVar4 + 0x20),uVar6);
      *(undefined8 *)(lVar4 + 0x28) = uStack_48;
      FUN_012d0d74();
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar8 + 0x28);
      FUN_012d0d74();
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar3 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryEnqueue_138d70c
                          (*(long *)(param_1 + 0x10),lVar4);
        if ((uVar3 & 1) != 0) {
          System_String__Concat_1ec3580(*(undefined8 *)PTR_DAT_05819bb8,uVar6,0);
          Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__TryProcessPendingVerifications_138ea48
                    (param_1);
          return;
        }
        System_String__Concat_1ec3580(*(undefined8 *)PTR_DAT_05760cd8,uVar6,0);
        return;
      }
    }
  }
LAB_01489834:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

