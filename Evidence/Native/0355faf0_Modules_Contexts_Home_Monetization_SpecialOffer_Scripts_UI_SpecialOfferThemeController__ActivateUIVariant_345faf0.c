/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferThemeController$$ActivateUIVariant
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__ActivateUIVariant (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController_o* __this, int32_t themeType, Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SegmentedOfferPackage_o* segmentedOfferPackage, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, int32_t context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferThemeController$$ActivateUIVariant
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__ActivateUIVariant
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController_o*
   __this, int32_t themeType,
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SegmentedOfferPackage_o*
   segmentedOfferPackage, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel,
   int32_t context, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__ActivateUIVariant_345faf0
               (long param_1,int param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  
  if ((bRam0000000005c32636 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7608);
    FUN_012d0dc8(PTR_DAT_0581a220);
    bRam0000000005c32636 = 1;
  }
  puVar3 = PTR_DAT_0581a220;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    bVar2 = false;
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar4 + 0x18)) {
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar8,*(undefined8 *)puVar3);
      if ((lVar4 == 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_0355fc1c;
      iVar1 = *(int *)(lVar4 + 0x58);
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),iVar8,*(undefined8 *)puVar3);
      if (lVar4 == 0) goto LAB_0355fc1c;
      if (iVar1 == param_2) {
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Show_345fd8c
                  (lVar4,param_3,param_4,param_5);
        bVar2 = true;
      }
      else {
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Hide_345fd68
                  ();
      }
      lVar4 = *(long *)(param_1 + 0x18);
      iVar8 = iVar8 + 1;
      if (lVar4 == 0) goto LAB_0355fc1c;
    }
    if (bVar2) {
      return;
    }
    lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c(lVar4,0,*(undefined8 *)puVar3)
    ;
    if (lVar4 != 0) {
      if ((bRam0000000005c32638 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057db748);
        FUN_012d0dc8(PTR_DAT_057bf740);
        bRam0000000005c32638 = 1;
      }
      lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar4,0);
      if (lVar5 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
        *(undefined8 *)(lVar4 + 0x60) = param_4;
        *(undefined4 *)(lVar4 + 0x68) = param_5;
        FUN_012d0d74((undefined8 *)(lVar4 + 0x60),param_4);
        if ((*(long *)(lVar4 + 0x48) != 0) &&
           (Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                      (*(long *)(lVar4 + 0x48),param_4,0), puVar3 = PTR_DAT_057bf740, param_3 != 0))
        {
          plVar7 = *(long **)(lVar4 + 0x40);
          uVar6 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&stack0xffffffffffffffcc);
          uVar6 = System_String__Format_1ec10a8(*(undefined8 *)puVar3,uVar6,0);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
            Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__ShowRewards_345ff60
                      (lVar4,*(undefined8 *)(param_3 + 0x18));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_0355fc1c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

