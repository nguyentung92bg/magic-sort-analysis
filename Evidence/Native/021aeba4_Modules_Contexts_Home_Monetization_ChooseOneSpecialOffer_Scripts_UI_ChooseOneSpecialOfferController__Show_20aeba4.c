/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferController$$Show
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController__Show (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferController$$Show
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController__Show
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController__Show_20aeba4
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c29510 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058058c8);
    FUN_012d0dc8(PTR_DAT_057a4fb0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579cd98);
    FUN_012d0dc8(PTR_DAT_0579e1d0);
    FUN_012d0dc8(PTR_DAT_0575a908);
    FUN_012d0dc8(PTR_DAT_0581aa08);
    FUN_012d0dc8(PTR_DAT_057612c8);
    FUN_012d0dc8(PTR_DAT_057df460);
    FUN_012d0dc8(PTR_DAT_057b7cd8);
    FUN_012d0dc8(PTR_DAT_057e0e58);
    bRam0000000005c29510 = 1;
  }
  if ((((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
       (lVar8 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar8 != 0)) &&
      (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar8,*(undefined8 *)PTR_DAT_057a4fb0), lVar8 != 0)) &&
     ((*(long *)(lVar8 + 0x10) != 0 &&
      (lVar12 = *(long *)(*(long *)(lVar8 + 0x10) + 0x18), lVar12 != 0)))) {
    lVar12 = *(long *)(lVar12 + 0x18);
    if (lVar12 == 0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      lVar13 = *(long *)(lVar12 + 0x30);
      lVar12 = *(long *)(lVar12 + 0x38);
    }
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057df460);
    if (lVar9 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_0575a908);
      puVar3 = PTR_DAT_057e0e58;
      if (lVar13 != 0) {
        lVar10 = *(long *)PTR_DAT_057e0e58;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar10 = *(long *)puVar3;
        }
        puVar2 = PTR_DAT_058058c8;
        lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar16 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar10 = *(long *)puVar3;
          }
          uVar17 = **(undefined8 **)(lVar10 + 0xb8);
          lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar16 == 0) goto LAB_021aeed0;
          System_Comparison_object____ctor_14ec6c0(lVar16,uVar17,*(undefined8 *)PTR_DAT_057b7cd8,0);
          plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *plVar11 = lVar16;
          FUN_012d0d74(plVar11,lVar16);
        }
        puVar3 = PTR_DAT_0579cd98;
        if (lVar13 == 0) goto LAB_021aeed0;
        System_Collections_Generic_List_object___Sort_21fe6b8
                  (lVar13,lVar16,*(undefined8 *)PTR_DAT_0579e1d0);
        puVar2 = PTR_DAT_057612c8;
        if (0 < *(int *)(lVar13 + 0x18)) {
          iVar15 = 0;
          do {
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar13,iVar15,*(undefined8 *)puVar2);
            if (lVar10 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)(lVar10 + 0x20);
            }
            uVar17 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetIAPConfigModel_20ad79c
                               (lVar8,uVar17);
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar16 = *(long *)puVar3;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_021aeed0;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar17;
              FUN_012d0d74();
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))(lVar9)
              ;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(lVar13 + 0x18));
        }
        if (lVar12 == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(lVar12 + 0x20);
        }
        uVar17 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetIAPConfigModel_20ad79c
                           (lVar8,uVar17);
        lVar8 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)puVar3;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_021aeed0;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar17;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))(lVar9);
        }
      }
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 != 0) {
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
        lVar12 = UnityEngine_Component__get_gameObject_408b480(lVar8,0);
        if (lVar12 != 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar12,1,0);
          *(long *)(lVar8 + 0xe0) = lVar9;
          FUN_012d0d74((long *)(lVar8 + 0xe0),lVar9);
          puVar7 = PTR_DAT_0580bde0;
          puVar6 = PTR_DAT_057f2048;
          puVar5 = PTR_DAT_057f0070;
          puVar4 = PTR_DAT_057db748;
          puVar2 = PTR_DAT_057a4fb0;
          puVar3 = PTR_DAT_0576aae0;
          lVar12 = *(long *)(lVar8 + 0x18);
          if (lVar12 != 0) {
            iVar15 = 0;
            while (iVar15 < *(int *)(lVar12 + 0x18)) {
              lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar12,iVar15,*(undefined8 *)puVar5);
              if ((lVar9 == 0) ||
                 (uVar17 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar9,iVar15,*(undefined8 *)puVar6), lVar12 == 0))
              goto LAB_021af050;
              Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4(lVar12,uVar17,0);
              lVar12 = *(long *)(lVar8 + 0x18);
              iVar15 = iVar15 + 1;
              if (lVar12 == 0) goto LAB_021af050;
            }
            if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
               (lVar12 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar12 != 0)) {
              lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar12,*(undefined8 *)puVar2);
              plVar14 = *(long **)(lVar8 + 0x68);
              plVar11 = (long *)FUN_012d0e38(*(undefined8 *)puVar7,1);
              if (lVar12 != 0) {
                uStack_64 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetDiscountAmount_20add30
                                      (lVar12);
                lVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
                if (plVar11 != (long *)0x0) {
                  if ((lVar12 != 0) &&
                     (lVar9 = thunk_FUN_01320d5c(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar9 == 0)) {
                    uVar17 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
                    FUN_012d0eb8(uVar17,0);
                  }
                  if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef8();
                  }
                  plVar11[4] = lVar12;
                  FUN_012d0d74(plVar11 + 4,lVar12);
                  if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uVar17 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de29a0
                                     (*(undefined8 *)PTR_DAT_057cea90,plVar11,0);
                  if (plVar14 != (long *)0x0) {
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,uVar17,*(undefined8 *)(*plVar14 + 0x560));
                    Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__ShowRewards_20b0c10
                              (lVar8,lVar13);
                    Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__SetScaleOfTargetTransforms_20b1404
                              (0,lVar8);
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
    }
  }
LAB_021aeed0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

