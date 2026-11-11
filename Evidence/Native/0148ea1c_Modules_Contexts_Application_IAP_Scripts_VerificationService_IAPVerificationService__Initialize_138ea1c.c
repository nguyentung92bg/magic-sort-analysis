/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$Initialize
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__Initialize (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$Initialize
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__Initialize
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__Initialize_138ea1c
               (long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_05760dd8;
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c373da & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05760dd8,param_1,0);
    FUN_012d0dc8(PTR_DAT_057b2db0);
    bRam0000000005c373da = 1;
  }
  lVar10 = *(long *)(lVar6 + 0x38);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  if (lVar6 != 0) {
    System_Object___ctor_23dfe5c(lVar6,0);
    *(long *)(lVar6 + 0x18) = param_1;
    FUN_012d0d74((long *)(lVar6 + 0x18),param_1);
    *(undefined4 *)(lVar6 + 0x10) = 0x42700000;
    *(undefined4 *)(lVar6 + 0x14) = 0;
    if (lVar10 != 0) {
      lVar8 = *(long *)(lVar10 + 0x10);
      lVar9 = *(long *)PTR_DAT_057b2db0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
          plVar7 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar7 = lVar6;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x03e24554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))(lVar10,lVar6)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

