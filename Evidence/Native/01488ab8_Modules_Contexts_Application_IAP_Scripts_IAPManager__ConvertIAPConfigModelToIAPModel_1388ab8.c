/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$ConvertIAPConfigModelToIAPModel
Modules_Contexts_Application_IAP_Scripts_IAPModel_o* Modules_Contexts_Application_IAP_Scripts_IAPManager__ConvertIAPConfigModelToIAPModel (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$ConvertIAPConfigModelToIAPModel
   Modules_Contexts_Application_IAP_Scripts_IAPModel_o*
   Modules_Contexts_Application_IAP_Scripts_IAPManager__ConvertIAPConfigModelToIAPModel
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo*
   method); */

long Modules_Contexts_Application_IAP_Scripts_IAPManager__ConvertIAPConfigModelToIAPModel_1388ab8
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057afd00;
  if ((bRam0000000005c2306c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057afd00);
    bRam0000000005c2306c = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) && (System_Object___ctor_23dfe5c(lVar2,0), param_2 != 0)) {
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    FUN_012d0d74();
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(param_2 + 0x1c);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

