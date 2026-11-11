/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationTokenValidator$$DeriveToken
System_String_o* Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__DeriveToken (System_String_o* secret, System_String_o* userId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01db4700) */
/* WARNING: Removing unreachable block (ram,0x01db472c) */
/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationTokenValidator$$DeriveToken
   System_String_o*
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__DeriveToken
   (System_String_o* secret, System_String_o* userId, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationTokenValidator__DeriveToken_1cb4528
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c2772f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577ac00);
    FUN_012d0dc8(PTR_DAT_0580f240);
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057aec28);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c2772f = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_1ed04ac(param_1,0);
  uVar8 = 0;
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
    uVar8 = 0;
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)System_Text_Encoding__get_UTF8_1f69050(0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar8 = (**(code **)(*plVar3 + 0x268))(plVar3,param_1,*(undefined8 *)(*plVar3 + 0x270));
      plVar3 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0580f240);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Security_Cryptography_HMACSHA256___ctor_217bb88(plVar3,uVar8,0);
      puVar1 = PTR_DAT_058165e8;
      plVar4 = (long *)System_Text_Encoding__get_UTF8_1f69050(0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar8 = (**(code **)(*plVar4 + 0x268))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x270));
      uVar8 = System_Security_Cryptography_HashAlgorithm__ComputeHash_2178008(plVar3,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_0577ac00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = System_BitConverter__ToString_2126fdc(uVar8,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar5 = System_String__Replace_1ed29c0
                        (lVar5,*(undefined8 *)PTR_DAT_057aec28,*(undefined8 *)PTR_DAT_05774390,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar8 = System_String__ToLowerInvariant_1ed4fe4(lVar5,0);
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01db46ec;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_0131971c(plVar3,*(long *)puVar1,0);
LAB_01db46ec:
      (*(code *)*puVar6)(plVar3,puVar6[1]);
    }
  }
  return uVar8;
}

