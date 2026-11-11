/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$GetVerificationIndex
int32_t Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetVerificationIndex (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, System_String_o* token, System_String_o* transactionId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$GetVerificationIndex
   int32_t
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetVerificationIndex
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, System_String_o* token, System_String_o* transactionId, const MethodInfo* method); */

int Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetVerificationIndex_138da90
              (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam0000000005c2309b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ac3b0);
    FUN_012d0dc8(PTR_DAT_057db288);
    bRam0000000005c2309b = 1;
  }
  puVar1 = PTR_DAT_057db288;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return -1;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar4,*(undefined8 *)puVar1);
      uVar2 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
      if ((uVar2 & 1) == 0) {
        if (lVar3 == 0) break;
        uVar2 = System_String__Equals_1ecf17c(*(undefined8 *)(lVar3 + 0x28),param_2,4,0);
        if ((uVar2 & 1) != 0) {
          return iVar4;
        }
      }
      uVar2 = System_String__IsNullOrEmpty_1ed04ac(param_3,0);
      if ((uVar2 & 1) == 0) {
        if (lVar3 == 0) break;
        uVar2 = System_String__Equals_1ecf17c(*(undefined8 *)(lVar3 + 0x30),param_3,4,0);
        if ((uVar2 & 1) != 0) {
          return iVar4;
        }
      }
      lVar3 = *(long *)(param_1 + 0x18);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

