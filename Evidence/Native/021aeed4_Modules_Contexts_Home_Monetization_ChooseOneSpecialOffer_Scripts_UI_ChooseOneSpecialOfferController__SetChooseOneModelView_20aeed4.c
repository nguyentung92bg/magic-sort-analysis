/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferController$$SetChooseOneModelView
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController__SetChooseOneModelView (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController_o* __this, System_Collections_Generic_List_SegmentedChooseOneOfferPackage__o* segmentedChooseOneOfferPackage, System_Collections_Generic_List_IAPConfigModel__o* iapConfigModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferController$$SetChooseOneModelView
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController__SetChooseOneModelView
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController_o*
   __this, System_Collections_Generic_List_SegmentedChooseOneOfferPackage__o*
   segmentedChooseOneOfferPackage, System_Collections_Generic_List_IAPConfigModel__o*
   iapConfigModels, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController__SetChooseOneModelView_20aeed4
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined4 uStack_64;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c29528 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4fb0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c17a0);
    FUN_012d0dc8(PTR_DAT_057f0070);
    FUN_012d0dc8(PTR_DAT_057f2048);
    FUN_012d0dc8(PTR_DAT_0580bde0);
    FUN_012d0dc8(PTR_DAT_057cea90);
    bRam0000000005c29528 = 1;
  }
  lVar8 = UnityEngine_Component__get_gameObject_408b480(lVar7,0);
  if (lVar8 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
    *(long *)(lVar7 + 0xe0) = param_3;
    FUN_012d0d74((long *)(lVar7 + 0xe0),param_3);
    puVar6 = PTR_DAT_0580bde0;
    puVar5 = PTR_DAT_057f2048;
    puVar4 = PTR_DAT_057f0070;
    puVar3 = PTR_DAT_057db748;
    puVar2 = PTR_DAT_057a4fb0;
    puVar1 = PTR_DAT_0576aae0;
    lVar8 = *(long *)(lVar7 + 0x18);
    if (lVar8 != 0) {
      iVar13 = 0;
      while (iVar13 < *(int *)(lVar8 + 0x18)) {
        lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar8,iVar13,*(undefined8 *)puVar4);
        if ((param_3 == 0) ||
           (uVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (param_3,iVar13,*(undefined8 *)puVar5), lVar8 == 0))
        goto LAB_021af050;
        Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4(lVar8,uVar9,0);
        lVar8 = *(long *)(lVar7 + 0x18);
        iVar13 = iVar13 + 1;
        if (lVar8 == 0) goto LAB_021af050;
      }
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 != 0)) {
        lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar8,*(undefined8 *)puVar2);
        plVar12 = *(long **)(lVar7 + 0x68);
        plVar10 = (long *)FUN_012d0e38(*(undefined8 *)puVar6,1);
        if (lVar8 != 0) {
          uStack_64 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetDiscountAmount_20add30
                                (lVar8);
          lVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
          if (plVar10 != (long *)0x0) {
            if ((lVar8 != 0) &&
               (lVar11 = thunk_FUN_01320d5c(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
              uVar9 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
              FUN_012d0eb8(uVar9,0);
            }
            if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef8();
            }
            plVar10[4] = lVar8;
            FUN_012d0d74(plVar10 + 4,lVar8);
            if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar9 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de29a0
                              (*(undefined8 *)PTR_DAT_057cea90,plVar10,0);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x558))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x560));
              Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__ShowRewards_20b0c10
                        (lVar7,param_2);
              Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__SetScaleOfTargetTransforms_20b1404
                        (0,lVar7);
              return;
            }
          }
        }
      }
    }
  }
LAB_021af050:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

