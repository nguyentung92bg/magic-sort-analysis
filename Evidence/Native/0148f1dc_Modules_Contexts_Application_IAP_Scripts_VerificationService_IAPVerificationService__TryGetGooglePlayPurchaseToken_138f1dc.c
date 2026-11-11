/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$TryGetGooglePlayPurchaseToken
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__TryGetGooglePlayPurchaseToken (System_String_o* receipt, System_String_o** purchaseToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$TryGetGooglePlayPurchaseToken
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__TryGetGooglePlayPurchaseToken
   (System_String_o* receipt, System_String_o** purchaseToken, const MethodInfo* method); */

uint Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__TryGetGooglePlayPurchaseToken_138f1dc
               (undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c230a7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05797f10);
    FUN_012d0dc8(PTR_DAT_05787ed0);
    FUN_012d0dc8(PTR_DAT_057a6510);
    FUN_012d0dc8(PTR_DAT_05808350);
    bRam0000000005c230a7 = 1;
  }
  *param_2 = 0;
  FUN_012d0d74(param_2,0);
  uVar3 = System_String__IsNullOrEmpty_1ed04ac(param_1,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = Newtonsoft_Json_Linq_JObject__Parse_15c636c(param_1,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar4 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78(lVar4,*(undefined8 *)PTR_DAT_05808350,0);
    puVar1 = PTR_DAT_05797f10;
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = Newtonsoft_Json_Linq_Extensions__Value_object__237dde0
                        (lVar4,*(undefined8 *)PTR_DAT_05797f10);
    }
    uVar3 = System_String__IsNullOrEmpty_1ed04ac(uVar5,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = Newtonsoft_Json_Linq_JObject__Parse_15c636c(uVar5,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar4 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78
                        (lVar4,*(undefined8 *)PTR_DAT_057a6510,0);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = Newtonsoft_Json_Linq_Extensions__Value_object__237dde0(lVar4,*(undefined8 *)puVar1);
      }
      uVar3 = System_String__IsNullOrEmpty_1ed04ac(uVar5,0);
      if ((uVar3 & 1) == 0) {
        lVar4 = Newtonsoft_Json_Linq_JObject__Parse_15c636c(uVar5,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar4 = Newtonsoft_Json_Linq_JObject__get_Item_15c5f78
                          (lVar4,*(undefined8 *)PTR_DAT_05787ed0,0);
        if (lVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = Newtonsoft_Json_Linq_Extensions__Value_object__237dde0
                            (lVar4,*(undefined8 *)puVar1);
        }
        *param_2 = uVar5;
        FUN_012d0d74(param_2);
        uVar2 = System_String__IsNullOrEmpty_1ed04ac(*param_2,0);
        uVar2 = uVar2 ^ 1;
        goto LAB_0148f2f4;
      }
    }
  }
  uVar2 = 0;
LAB_0148f2f4:
  return uVar2 & 1;
}

