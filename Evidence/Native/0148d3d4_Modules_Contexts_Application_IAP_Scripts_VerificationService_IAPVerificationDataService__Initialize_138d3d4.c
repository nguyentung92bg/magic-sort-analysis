/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$Initialize
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__Initialize (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$Initialize
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__Initialize
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__Initialize_138d3d4
               (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000005c23092 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057adfd0);
    bRam0000000005c23092 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_057adfd0) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_0148d460;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057adfd0,1);
LAB_0148d460:
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),uVar2);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

