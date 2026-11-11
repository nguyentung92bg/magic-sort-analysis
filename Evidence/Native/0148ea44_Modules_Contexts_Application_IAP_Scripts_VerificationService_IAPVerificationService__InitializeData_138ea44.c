/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$InitializeData
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__InitializeData (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$InitializeData
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__InitializeData
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__InitializeData_138ea44
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
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
  long alStack_48 [3];
  
  uVar3 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsEnabled_13895c4
                    ();
  puVar1 = PTR_DAT_057d7c80;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_0148ead8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((bRam0000000005c2306d & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057d7c80);
      bRam0000000005c2306d = 1;
    }
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        ((*(long **)(*(long *)puVar1 + 0xb8))[1] != 0)) && (*(char *)(param_1 + 0x48) == '\0')) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0148ead8;
      iVar2 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetPendingCount_138d638
                        ();
      puVar1 = PTR_DAT_057a2708;
      if (iVar2 != 0) {
        if ((bRam0000000005c230a2 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057a2708);
          bRam0000000005c230a2 = 1;
        }
        alStack_48[1] = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        alStack_48[0] = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
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
        alStack_48[0] = param_1;
        FUN_012d0d74(alStack_48,param_1);
        uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
        System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_IAPVerificationService__ProcessPendingVerificationsAsync_d__22__216e970
                  ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
        return;
      }
    }
  }
  return;
}

