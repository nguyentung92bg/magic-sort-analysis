/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPPriceView$$Show
void Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show (Modules_Contexts_Application_IAP_Scripts_IAPPriceView_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPPriceView$$Show
   void Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show
   (Modules_Contexts_Application_IAP_Scripts_IAPPriceView_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo*
   method); */

void Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_012d0d74();
  Modules_Contexts_Application_IAP_Scripts_IAPPriceView__FetchAndSetIAPModel_138ac00(param_1);
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

