/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$TryGetDollarEquivalentByProductId
bool Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetDollarEquivalentByProductId (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, System_String_o* productId, float* dollarEquivalent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$TryGetDollarEquivalentByProductId
   bool Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetDollarEquivalentByProductId
   (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, System_String_o* productId,
   float* dollarEquivalent, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetDollarEquivalentByProductId_138c3c4
          (long param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lStack_28;
  
  if ((bRam0000000005c23088 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579e488);
    bRam0000000005c23088 = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                      (*(long *)(param_1 + 0x78),param_2,&lStack_28,*(undefined8 *)PTR_DAT_0579e488)
    ;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      if (lStack_28 == 0) goto LAB_0148c454;
      uVar3 = *(undefined4 *)(lStack_28 + 0x1c);
      uVar2 = 1;
    }
    *param_3 = uVar3;
    return uVar2;
  }
LAB_0148c454:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

