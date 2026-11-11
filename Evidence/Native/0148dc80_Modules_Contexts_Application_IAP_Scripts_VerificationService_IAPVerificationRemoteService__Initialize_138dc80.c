/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationRemoteService$$Initialize
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationRemoteService__Initialize (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationRemoteService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationRemoteService$$Initialize
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationRemoteService__Initialize
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationRemoteService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationRemoteService__Initialize_138dc80
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_05801560;
  if ((bRam0000000005c2309c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05801560);
    FUN_012d0dc8(PTR_DAT_057c9e78);
    FUN_012d0dc8(PTR_DAT_05761c48);
    FUN_012d0dc8(PTR_DAT_057b4988);
    FUN_012d0dc8(PTR_DAT_057911b8);
    FUN_012d0dc8(PTR_DAT_057d24c0);
    bRam0000000005c2309c = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_057b4988;
  if (lVar7 != 0) {
    System_Threading_CancellationTokenSource___ctor_2a9cf74(lVar7,0);
    *(long *)(param_1 + 0x20) = lVar7;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar7);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar6 = PTR_DAT_057d24c0;
    puVar5 = PTR_DAT_057c9e78;
    puVar4 = PTR_DAT_057911b8;
    if (lVar7 != 0) {
      System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                (lVar7,*(undefined8 *)PTR_DAT_05761c48);
      System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                (lVar7,*(undefined8 *)puVar6,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
      plVar8 = (long *)(param_1 + 0x28);
      *plVar8 = lVar7;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

