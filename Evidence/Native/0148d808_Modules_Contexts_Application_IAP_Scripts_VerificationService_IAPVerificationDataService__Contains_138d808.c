/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$Contains
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__Contains (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, System_String_o* token, System_String_o* transactionId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$Contains
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__Contains
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, System_String_o* token, System_String_o* transactionId, const MethodInfo* method); */

byte Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__Contains_138d808
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000005c2309a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ba00);
    FUN_012d0dc8(PTR_DAT_057e3b70);
    FUN_012d0dc8(PTR_DAT_057d5528);
    FUN_012d0dc8(PTR_DAT_057d5cd0);
    bRam0000000005c2309a = 1;
  }
  puVar2 = PTR_DAT_057e3b70;
  puVar1 = PTR_DAT_0579ba00;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_68,lVar3,*(undefined8 *)PTR_DAT_057d5cd0);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  do {
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_50,*(undefined8 *)puVar2);
      lVar3 = lStack_40;
      if ((uVar4 & 1) == 0) {
        bVar5 = 0;
        iVar6 = 6;
        goto LAB_0148d934;
      }
      uVar4 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
      if ((uVar4 & 1) == 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar4 = System_String__Equals_1ecf17c(*(undefined8 *)(lVar3 + 0x28),param_2,4,0);
        if ((uVar4 & 1) != 0) goto LAB_0148d920;
      }
      uVar4 = System_String__IsNullOrEmpty_1ed04ac(param_3,0);
    } while ((uVar4 & 1) != 0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar4 = System_String__Equals_1ecf17c(*(undefined8 *)(lVar3 + 0x30),param_3,4,0);
  } while ((uVar4 & 1) == 0);
LAB_0148d920:
  bVar5 = 1;
  iVar6 = 5;
LAB_0148d934:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_50,*(undefined8 *)puVar1);
  return iVar6 == 5 & bVar5;
}

