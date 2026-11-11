/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$IsRequested
bool Modules_Contexts_Application_IAP_Scripts_IAPManager__IsRequested (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01fcf0cc) */
/* WARNING: Removing unreachable block (ram,0x01fcef88) */
/* WARNING: Removing unreachable block (ram,0x01fcef68) */
/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$IsRequested
   bool Modules_Contexts_Application_IAP_Scripts_IAPManager__IsRequested
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_IAPManager__IsRequested_13899e8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c283b2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8068,param_2,4,0);
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    bRam0000000005c283b2 = 1;
  }
  if (lVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01fcef2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&UNK_01fcef30 + (ulong)UNK_0438caa3 * 4))(PTR_DAT_0579d5c0);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

