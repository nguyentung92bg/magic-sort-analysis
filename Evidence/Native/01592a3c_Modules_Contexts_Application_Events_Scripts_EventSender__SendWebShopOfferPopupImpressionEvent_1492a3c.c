/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopOfferPopupImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferPopupImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* configModel, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* webShopProduct, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopOfferPopupImpressionEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferPopupImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* configModel,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopProduct_o* webShopProduct, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferPopupImpressionEvent_1492a3c
               (undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_64 [4];
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23878 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057e2c60);
    FUN_012d0dc8(PTR_DAT_057a7400);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057a32a0);
    FUN_012d0dc8(PTR_DAT_05791948);
    FUN_012d0dc8(PTR_DAT_05804240);
    FUN_012d0dc8(PTR_DAT_057e0170);
    FUN_012d0dc8(PTR_DAT_0579e318);
    bRam0000000005c23878 = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) &&
     (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar8,*(undefined8 *)PTR_DAT_057f83f8), puVar2 = PTR_DAT_057c8a60,
     lVar8 != 0)) {
    lVar9 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetConfig_316bbf8
                      (lVar8,0);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (((lVar10 != 0) &&
        (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                   (lVar10,*(undefined8 *)PTR_DAT_057e2c60,0), param_2 != 0)) &&
       (Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_05800b30,*(undefined8 *)(param_2 + 0x10),0),
       param_3 != 0)) {
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)PTR_DAT_057a32a0,*(undefined8 *)(param_3 + 0x18),0);
      puVar7 = PTR_DAT_05804240;
      puVar6 = PTR_DAT_057e0170;
      puVar5 = PTR_DAT_057d6138;
      puVar4 = PTR_DAT_057a7400;
      puVar3 = PTR_DAT_0579e318;
      puVar2 = PTR_DAT_05791948;
      if (lVar9 != 0) {
        auStack_64[0] = *(undefined1 *)(lVar9 + 0x28);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057b4910,auStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar3,uVar11,0);
        uStack_70 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPromptDisableUntilAsUnix_316c0fc
                              (lVar8,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar2,uVar11,0);
        uStack_78 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPurchaseProtectionEndTimeAsUnix_316c214
                              (lVar8,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar4,uVar11,0);
        uStack_80 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix_316c240
                              (lVar8,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_80);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar7,uVar11,0);
        uStack_88 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetNoPurchaseCountdownEndTimeAsUnix_316c26c
                              (lVar8,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar6,uVar11,0);
        uVar16 = *(undefined8 *)(param_2 + 0x10);
        uVar15 = *(undefined8 *)(param_3 + 0x18);
        uVar1 = *(undefined1 *)(lVar9 + 0x28);
        uVar11 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetIapChosenCountdownEndTimeAsUnix_316c240
                           (lVar8,0);
        uVar12 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetNoPurchaseCountdownEndTimeAsUnix_316c26c
                           (lVar8,0);
        uVar13 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPurchaseProtectionEndTimeAsUnix_316c214
                           (lVar8,0);
        uVar14 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__GetPromptDisableUntilAsUnix_316c0fc
                           (lVar8,0);
        uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopOfferImpression_2dba608
                           (uVar16,uVar15,uVar1,uVar11,uVar12,uVar13,uVar14,0);
        if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

