/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferController$$Show
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController__Show (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController_o* __this, int32_t context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferController$$Show
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController__Show
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController_o* __this,
   int32_t context, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController__Show_3598d1c
               (long param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c32e7c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1840);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c32e7c = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_057a1840), lVar4 != 0)) {
    iVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferPopupType_35960a8
                      ();
    if ((*(long *)(lVar4 + 0x10) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x18), lVar6 != 0)) {
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == 0) {
        uVar5 = 0;
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar6 + 0x30);
        if (lVar8 == 0) {
          uVar5 = 0;
        }
        else {
          if (lVar6 == 0) goto LAB_03698e04;
          uVar5 = *(undefined8 *)(lVar8 + 0x20);
        }
      }
      uVar5 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetIAPConfigModel_35963f4
                        (lVar4,uVar5);
      if ((bRam0000000005c32e7d & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057f7608);
        FUN_012d0dc8(PTR_DAT_0581a220);
        bRam0000000005c32e7d = 1;
      }
      puVar2 = PTR_DAT_0581a220;
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 != 0) {
        bVar1 = false;
        iVar9 = 0;
        do {
          if (*(int *)(lVar4 + 0x18) <= iVar9) {
            if (bVar1) {
              return;
            }
            lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar4,0,*(undefined8 *)puVar2);
            if (lVar4 != 0) {
              if ((bRam0000000005c32638 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057db748);
                FUN_012d0dc8(PTR_DAT_057bf740);
                bRam0000000005c32638 = 1;
              }
              lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar4,0);
              if (lVar6 != 0) {
                UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
                *(undefined8 *)(lVar4 + 0x60) = uVar5;
                *(undefined4 *)(lVar4 + 0x68) = param_2;
                FUN_012d0d74((undefined8 *)(lVar4 + 0x60),uVar5);
                if ((*(long *)(lVar4 + 0x48) != 0) &&
                   (Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                              (*(long *)(lVar4 + 0x48),uVar5,0), puVar2 = PTR_DAT_057bf740,
                   lVar8 != 0)) {
                  plVar7 = *(long **)(lVar4 + 0x40);
                  uVar5 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,
                                             &stack0xffffffffffffffcc);
                  uVar5 = System_String__Format_1ec10a8(*(undefined8 *)puVar2,uVar5,0);
                  if (plVar7 != (long *)0x0) {
                    (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
                    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__ShowRewards_345ff60
                              (lVar4,*(undefined8 *)(lVar8 + 0x18));
                    return;
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            break;
          }
          lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar4,iVar9,*(undefined8 *)puVar2);
          if (lVar4 == 0) break;
          if (iVar3 == iVar9) {
            Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Show_345fd8c
                      (lVar4,lVar8,uVar5,param_2,0);
            bVar1 = true;
          }
          else {
            Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Hide_345fd68
                      (lVar4,0);
          }
          lVar4 = *(long *)(param_1 + 0x18);
          iVar9 = iVar9 + 1;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_03698e04:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

