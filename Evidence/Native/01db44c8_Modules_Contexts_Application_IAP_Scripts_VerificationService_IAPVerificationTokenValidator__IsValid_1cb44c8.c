/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationTokenValidator$$IsValid
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__IsValid (System_String_o* token, System_String_o* secret, System_String_o* userId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationTokenValidator$$IsValid
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__IsValid
   (System_String_o* token, System_String_o* secret, System_String_o* userId, const MethodInfo*
   method); */

bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__IsValid_1cb44c8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  ushort uVar10;
  
  uVar6 = System_String__IsNullOrEmpty_1ed04ac(param_1,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__DeriveToken_1cb4528
                      (param_2,param_3);
    uVar6 = System_String__IsNullOrEmpty_1ed04ac(lVar7,0);
    if ((uVar6 & 1) == 0) {
      if ((bRam0000000005c27730 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057d4fe8);
        bRam0000000005c27730 = 1;
      }
      puVar1 = PTR_DAT_057d4fe8;
      if ((param_1 != 0) && (lVar7 != 0)) {
        if (*(int *)(param_1 + 0x10) == *(int *)(lVar7 + 0x10)) {
          if (*(int *)(param_1 + 0x10) < 1) {
            bVar2 = true;
          }
          else {
            uVar10 = 0;
            iVar9 = 0;
            do {
              uVar5 = System_String__get_Chars_1ecae64(param_1,iVar9,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar1);
              }
              uVar3 = System_Char__ToLowerInvariant_212ab40(uVar5,0);
              uVar8 = System_String__get_Chars_1ecae64(lVar7,iVar9,0);
              uVar4 = System_Char__ToLowerInvariant_212ab40(uVar8,0);
              iVar9 = iVar9 + 1;
              uVar10 = uVar10 | uVar4 ^ uVar3;
            } while (iVar9 < *(int *)(param_1 + 0x10));
            bVar2 = uVar10 == 0;
          }
        }
        else {
          bVar2 = false;
        }
        return bVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return false;
}

