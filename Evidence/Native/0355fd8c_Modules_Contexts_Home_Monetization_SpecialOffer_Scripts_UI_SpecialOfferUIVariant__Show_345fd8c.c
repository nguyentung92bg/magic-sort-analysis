/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferUIVariant$$Show
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Show (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant_o* __this, Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SegmentedOfferPackage_o* segmentedOfferPackage, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, int32_t context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferUIVariant$$Show
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Show
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant_o* __this,
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SegmentedOfferPackage_o*
   segmentedOfferPackage, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel,
   int32_t context, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Show_345fd8c
               (long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uStack_34;
  
  if ((bRam0000000005c32638 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057bf740);
    bRam0000000005c32638 = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
    *(undefined8 *)(param_1 + 0x60) = param_3;
    *(undefined4 *)(param_1 + 0x68) = param_4;
    FUN_012d0d74((undefined8 *)(param_1 + 0x60),param_3);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                  (*(long *)(param_1 + 0x48),param_3,0), puVar1 = PTR_DAT_057bf740, param_2 != 0)) {
                    /* try { // try from 0355fe2c to 0365ffeb has its CatchHandler @ 0355fe2c
                       catch() { ... } // from try @ 0355fe2c with catch @ 0355fe2c
                       catch() { ... } // from try @ 03560078 with catch @ 0355fe2c
                       catch() { ... } // from try @ 0356008c with catch @ 0355fe2c
                       catch() { ... } // from try @ 035600c8 with catch @ 0355fe2c
                       catch() { ... } // from try @ 03560104 with catch @ 0355fe2c */
      uStack_34 = *(undefined4 *)(param_2 + 0x10);
      plVar4 = *(long **)(param_1 + 0x40);
      uVar3 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_34);
      uVar3 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar3,0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__ShowRewards_345ff60
                  (param_1,*(undefined8 *)(param_2 + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

