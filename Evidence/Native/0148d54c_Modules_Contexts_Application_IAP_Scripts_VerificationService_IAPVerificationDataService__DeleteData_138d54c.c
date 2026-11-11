/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$DeleteData
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__DeleteData (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$DeleteData
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__DeleteData
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__DeleteData_138d54c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_057fdf90;
  if ((bRam0000000005c23094 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fdf90);
    FUN_012d0dc8(PTR_DAT_057adfd0);
    bRam0000000005c23094 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationModel___ctor_138d31c
              ();
    plVar7 = (long *)(param_1 + 0x18);
    *plVar7 = lVar2;
    FUN_012d0d74(plVar7,lVar2);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      lVar8 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_057adfd0) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0148d614;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057adfd0,0);
LAB_0148d614:
      (*(code *)*puVar3)(plVar6,lVar8,puVar3[1]);
      *(undefined1 *)(param_1 + 0x20) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

