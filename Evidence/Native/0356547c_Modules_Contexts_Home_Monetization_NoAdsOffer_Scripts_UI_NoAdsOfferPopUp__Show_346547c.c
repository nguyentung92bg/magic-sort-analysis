/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferPopUp$$Show
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp__Show (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferPopUp$$Show
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp__Show
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp__Show_346547c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_0578b048;
  if ((bRam0000000005c32671 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0576dc60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_0580de40);
    FUN_012d0dc8(PTR_DAT_05800340);
    FUN_012d0dc8(PTR_DAT_05769458);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0577eba8);
    FUN_012d0dc8(PTR_DAT_057d4130);
    bRam0000000005c32671 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x18);
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar7 != 0) &&
     (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_05800340,0),
     puVar4 = PTR_DAT_05818458, puVar3 = PTR_DAT_057b8520, puVar2 = PTR_DAT_05769458, lVar13 != 0))
  {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar13,lVar7,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if ((lVar13 != 0) &&
       (System_Action_bool____ctor_1645204(lVar13,param_1,*(undefined8 *)PTR_DAT_0580de40,0),
       puVar3 = PTR_DAT_057d4130, puVar2 = PTR_DAT_057bc5e8, lVar7 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_bool___Subscribe_333cb60
                (lVar7,lVar13,*(undefined8 *)PTR_DAT_0577eba8);
      lVar7 = *(long *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                        (*(undefined8 *)puVar3,0);
      puVar2 = PTR_DAT_0576aae0;
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x28) = uVar8;
        FUN_012d0d74();
        Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__InitializeCompositeLayout_34662b0
                  (lVar7);
        if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
            (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 != 0)) &&
           (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar7,*(undefined8 *)PTR_DAT_0576dc60), lVar7 != 0)) {
          lVar7 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetViewModel_3464330
                            ();
          plVar14 = (long *)(param_1 + 0x78);
          *plVar14 = lVar7;
          FUN_012d0d74(plVar14,lVar7);
          if ((*plVar14 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
            Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(*plVar14 + 0x10),0);
            if (*plVar14 != 0) {
              Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp__ShowRewards_3465724
                        (param_1,*(undefined8 *)(*plVar14 + 0x18));
              if (cRam0000000005c230a8 == '\0') {
                FUN_012d0dc8(PTR_DAT_057ece38);
                cRam0000000005c230a8 = '\x01';
              }
              puVar2 = PTR_DAT_0576aae0;
              lVar7 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
              if (lVar7 != 0) {
                if ((bRam0000000005c237e1 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_0575f9f0,0);
                  FUN_012d0dc8(PTR_DAT_057a1e60);
                  FUN_012d0dc8(PTR_DAT_05792f78);
                  FUN_012d0dc8(PTR_DAT_0576aae0);
                  FUN_012d0dc8(PTR_DAT_057c8a60);
                  FUN_012d0dc8(PTR_DAT_057636d0);
                  FUN_012d0dc8(PTR_DAT_057db748);
                  FUN_012d0dc8(PTR_DAT_05758510);
                  FUN_012d0dc8(PTR_DAT_057caaf0);
                  FUN_012d0dc8(PTR_DAT_057d3f68);
                  bRam0000000005c237e1 = 1;
                }
                lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
                if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
                  lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar13,*(undefined8 *)PTR_DAT_05792f78);
                  puVar3 = PTR_DAT_057c8a60;
                  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
                  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
                    plVar14 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
                    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    if ((lVar9 != 0) &&
                       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                                  (lVar9,*(undefined8 *)PTR_DAT_05758510,0),
                       puVar2 = PTR_DAT_057d3f68, lVar13 != 0)) {
                      uVar8 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                        (lVar13,0);
                      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                (lVar9,*(undefined8 *)puVar2,uVar8,0);
                      puVar4 = PTR_DAT_057db748;
                      puVar3 = PTR_DAT_057caaf0;
                      puVar2 = PTR_DAT_057636d0;
                      if (plVar14 != (long *)0x0) {
                        lVar10 = *plVar14;
                        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
                        if (uVar11 != 0) {
                          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
                              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                              goto LAB_0156f5c4;
                            }
                            uVar11 = uVar11 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar6 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_0156f5c4:
                        puVar1 = PTR_DAT_0575f9f0;
                        uStack_44 = (*(code *)*puVar6)(plVar14,puVar6[1]);
                        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
                        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                                  (lVar9,*(undefined8 *)puVar3,uVar8,0);
                        uVar8 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                          (lVar13,0);
                        lVar13 = *plVar14;
                        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
                        if (uVar11 != 0) {
                          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                              puVar6 = (undefined8 *)(lVar13 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                              goto LAB_0156f660;
                            }
                            uVar11 = uVar11 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar6 = (undefined8 *)FUN_0131971c(plVar14,*(long *)puVar2,1);
LAB_0156f660:
                        iVar5 = (*(code *)*puVar6)(plVar14,puVar6[1]);
                        uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__NoAdsPopupImpression_2db7cd4
                                          (uVar8,(long)iVar5,0);
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          thunk_FUN_0130472c(*(long *)puVar1);
                        }
                        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
                        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                                  (lVar7,lVar9);
                        return;
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
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

