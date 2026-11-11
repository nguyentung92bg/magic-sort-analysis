/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferController$$ActivateUIVariant
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController__ActivateUIVariant (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController_o* __this, int32_t popupType, Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SegmentedOfferPackage_o* segmentedOfferPackage, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, int32_t context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferController$$ActivateUIVariant
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController__ActivateUIVariant
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController_o* __this,
   int32_t popupType,
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SegmentedOfferPackage_o*
   segmentedOfferPackage, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel,
   int32_t context, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController__ActivateUIVariant_3598e08
               (long param_1,int param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  if ((bRam0000000005c32e7d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7608);
    FUN_012d0dc8(PTR_DAT_0581a220);
    bRam0000000005c32e7d = 1;
  }
  puVar2 = PTR_DAT_0581a220;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    bVar1 = false;
    iVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        if (bVar1) {
          return;
        }
        lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar5,0,*(undefined8 *)puVar2);
        if (lVar5 != 0) {
          if ((bRam0000000005c32638 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057db748);
            FUN_012d0dc8(PTR_DAT_057bf740);
            bRam0000000005c32638 = 1;
          }
          lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar5,0);
          if (lVar3 != 0) {
            UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
            *(undefined8 *)(lVar5 + 0x60) = param_4;
            *(undefined4 *)(lVar5 + 0x68) = param_5;
            FUN_012d0d74((undefined8 *)(lVar5 + 0x60),param_4);
            if ((*(long *)(lVar5 + 0x48) != 0) &&
               (Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                          (*(long *)(lVar5 + 0x48),param_4,0), puVar2 = PTR_DAT_057bf740,
               param_3 != 0)) {
              plVar6 = *(long **)(lVar5 + 0x40);
              uVar4 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&stack0xffffffffffffffcc);
              uVar4 = System_String__Format_1ec10a8(*(undefined8 *)puVar2,uVar4,0);
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
                Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__ShowRewards_345ff60
                          (lVar5,*(undefined8 *)(param_3 + 0x18));
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        break;
      }
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar7,*(undefined8 *)puVar2);
      if (lVar5 == 0) break;
      if (param_2 == iVar7) {
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Show_345fd8c
                  (lVar5,param_3,param_4,param_5,0);
        bVar1 = true;
      }
      else {
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Hide_345fd68
                  (lVar5,0);
      }
      lVar5 = *(long *)(param_1 + 0x18);
      iVar7 = iVar7 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

