/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.UI.PawTouchOfferContainerView$$Show
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__Show (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView_o* __this, Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferPackage_o* offerPackage, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.UI.PawTouchOfferContainerView$$Show
   void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__Show
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView_o*
   __this, Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferPackage_o*
   offerPackage, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_UI_PawTouchOfferContainerView__Show_20a6fb0
               (long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined4 uStack_54;
  
  puVar4 = PTR_DAT_0578b048;
  if ((bRam0000000005c294c1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057f6180);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_057f2900);
    FUN_012d0dc8(PTR_DAT_057d6d00);
    FUN_012d0dc8(PTR_DAT_0575bcf8);
    FUN_012d0dc8(PTR_DAT_057bf740);
    bRam0000000005c294c1 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  lVar13 = *(long *)(param_1 + 0x20);
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if ((lVar9 != 0) &&
     (System_Action___ctor_21239bc(lVar9,param_1,*(undefined8 *)PTR_DAT_057f2900,0), lVar13 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar13,lVar9,0);
    *(undefined8 *)(param_1 + 0x68) = param_3;
    FUN_012d0d74((undefined8 *)(param_1 + 0x68),param_3);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                  (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x68),0),
       puVar2 = PTR_DAT_057bf740, param_2 != 0)) {
      uStack_54 = *(undefined4 *)(param_2 + 0x18);
      plVar12 = *(long **)(param_1 + 0x38);
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
      uVar10 = System_String__Format_1ec10a8(*(undefined8 *)puVar2,uVar10,0);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x558))(plVar12,uVar10,*(undefined8 *)(*plVar12 + 0x560));
        puVar8 = PTR_DAT_05811f10;
        puVar7 = PTR_DAT_057f6180;
        puVar6 = PTR_DAT_057d6d00;
        puVar5 = PTR_DAT_057b3a70;
        puVar3 = PTR_DAT_0576aae0;
        puVar2 = PTR_DAT_0575bcf8;
        if (*(long *)(param_2 + 0x20) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_98,*(long *)(param_2 + 0x20),*(undefined8 *)PTR_DAT_057a6288);
          uStack_78 = uStack_90;
          uStack_80 = uStack_98;
          lStack_70 = lStack_88;
          while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_80,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (*(int *)(lStack_70 + 0x10) == 1) {
              plVar12 = *(long **)(param_1 + 0x28);
              uVar1 = *(undefined4 *)(lStack_70 + 0x14);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar10 = Modules_Infrastructure_Utils_PriceFormatter__FormatNumberWithSpaces_3de4a04
                                 (uVar1,0);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0(uVar10,uVar10);
              }
              (**(code **)(*plVar12 + 0x558))(plVar12,uVar10,*(undefined8 *)(*plVar12 + 0x560));
            }
            else if (*(int *)(lStack_70 + 0x10) == 2) {
              plVar12 = *(long **)(param_1 + 0x30);
              uVar10 = Modules_Infrastructure_Utils_TimeFormatter__ShortFormat_3de6cdc
                                 (*(undefined8 *)(lStack_70 + 0x18),0);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0(uVar10,uVar10);
              }
              (**(code **)(*plVar12 + 0x558))(plVar12,uVar10,*(undefined8 *)(*plVar12 + 0x560));
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)puVar8);
          lVar9 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
          if (lVar9 != 0) {
            UnityEngine_GameObject__SetActive_408e318(lVar9,1,0);
            if (((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
                (lVar9 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar9 != 0)) &&
               (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar9,*(undefined8 *)puVar7), lVar9 != 0)) {
              uVar10 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetShowEndDateTime_3472bac
                                 (lVar9,0);
              lVar13 = *(long *)(param_1 + 0x18);
              lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
              if ((lVar9 != 0) &&
                 (System_Action___ctor_21239bc(lVar9,param_1,*(undefined8 *)puVar6,0), lVar13 != 0))
              {
                Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__Initialize_160dfd0
                          (lVar13,uVar10,lVar9,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

