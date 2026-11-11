/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationTokenValidator$$AreEqual
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__AreEqual (System_String_o* left, System_String_o* right, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationTokenValidator$$AreEqual
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__AreEqual
   (System_String_o* left, System_String_o* right, const MethodInfo* method); */

bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__AreEqual_1cb4880
               (long param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  ushort uVar8;
  
  if ((bRam0000000005c27730 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d4fe8);
    bRam0000000005c27730 = 1;
  }
  puVar1 = PTR_DAT_057d4fe8;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
      if (*(int *)(param_1 + 0x10) < 1) {
        bVar2 = true;
      }
      else {
        uVar8 = 0;
        iVar7 = 0;
        do {
          uVar5 = System_String__get_Chars_1ecae64(param_1,iVar7,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          uVar3 = System_Char__ToLowerInvariant_212ab40(uVar5,0);
          uVar6 = System_String__get_Chars_1ecae64(param_2,iVar7,0);
          uVar4 = System_Char__ToLowerInvariant_212ab40(uVar6,0);
          iVar7 = iVar7 + 1;
          uVar8 = uVar8 | uVar4 ^ uVar3;
        } while (iVar7 < *(int *)(param_1 + 0x10));
        bVar2 = uVar8 == 0;
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

