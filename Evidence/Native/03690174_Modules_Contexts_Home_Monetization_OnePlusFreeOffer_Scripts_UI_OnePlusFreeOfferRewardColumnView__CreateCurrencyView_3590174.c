/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferRewardColumnView$$CreateCurrencyView
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__CreateCurrencyView (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, UnityEngine_Vector3_o localPosition, int32_t rewardIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferRewardColumnView$$CreateCurrencyView
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__CreateCurrencyView
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView_o*
   __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel,
   UnityEngine_Vector3_o localPosition, int32_t rewardIndex, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__CreateCurrencyView_3590174
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               int param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  
  lVar4 = param_4;
  if ((bRam0000000005c32e25 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0575bcf8);
    FUN_012d0dc8(PTR_DAT_057e7c80);
    lVar4 = FUN_012d0dc8(PTR_DAT_0577bc68);
    bRam0000000005c32e25 = 1;
  }
  if (param_5 == 0) goto LAB_03690490;
  if (*(int *)(param_5 + 0x10) == 0xe) {
    plVar5 = *(long **)(param_4 + 0x20);
    lVar4 = 0;
    if (plVar5 == (long *)0x0) goto LAB_03690490;
    lVar6 = (**(code **)(*plVar5 + 0x1c8))
                      (plVar5,*(int *)(param_5 + 0x2c) + 0x8c,*(undefined8 *)(*plVar5 + 0x1d0));
    lVar4 = lVar6;
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_03690490;
    lVar4 = Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig__GetVisual_3775f58
                      (*(long *)(param_4 + 0x48),*(undefined4 *)(param_5 + 0x2c),0);
    if (lVar4 != 0) {
      if (lVar6 == 0) goto LAB_03690490;
      Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetCardCountText_1384e1c
                (lVar6,*(undefined4 *)(lVar4 + 0x40),0);
    }
  }
  else {
    plVar5 = *(long **)(param_4 + 0x20);
    lVar4 = 0;
    if (plVar5 == (long *)0x0) goto LAB_03690490;
    lVar6 = (**(code **)(*plVar5 + 0x1c8))
                      (plVar5,*(int *)(param_5 + 0x10),*(undefined8 *)(*plVar5 + 0x1d0));
  }
  puVar3 = PTR_DAT_0576c200;
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar7 = UnityEngine_Object__op_Equality_407f288(lVar6,0,0);
  lVar4 = 0;
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (lVar6 != 0) {
    lVar8 = UnityEngine_Component__get_transform_408b444(lVar6,0);
    lVar4 = 0;
    if (lVar8 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar8,*(undefined8 *)(param_4 + 0x18),0);
      UnityEngine_Transform__set_localPosition_4092ce0(param_1,param_2,param_3,lVar8,0);
      fVar10 = *(float *)(param_4 + 0x2c);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (fVar10 * *(float *)(lVar4 + 0xc),fVar10 * *(float *)(lVar4 + 0x10),
                 fVar10 * *(float *)(lVar4 + 0x14),lVar8,0);
      if (*(int *)(param_5 + 0x10) == 1) {
        uVar9 = *(undefined8 *)(lVar6 + 0x40);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = UnityEngine_Object__op_Inequality_408e110(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          lVar4 = 0;
          if (*(long *)(lVar6 + 0x40) == 0) goto LAB_03690490;
          lVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar6 + 0x40),0);
          puVar2 = PTR_DAT_0575bcf8;
          lVar4 = 0;
          if (lVar8 == 0) goto LAB_03690490;
          UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
          uVar1 = *(undefined4 *)(param_5 + 0x14);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar9 = Modules_Infrastructure_Utils_PriceFormatter__FormatNumberWithSpaces_3de4a04
                            (uVar1,0);
          Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountText_1381d84
                    (lVar6,uVar9,0);
        }
      }
      else {
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                  (lVar6,param_5,0);
      }
      if (*(char *)(param_4 + 0x30) != '\0') {
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetSortOrder_1384930
                  (lVar6,*(undefined4 *)(param_4 + 0x34),0);
      }
      uVar9 = *(undefined8 *)(lVar6 + 0x90);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = UnityEngine_Object__op_Inequality_408e110(uVar9,0,0);
      puVar2 = PTR_DAT_057e7c80;
      puVar3 = PTR_DAT_0577bc68;
      if ((uVar7 & 1) != 0) {
        lVar4 = 0;
        if (*(long *)(lVar6 + 0x90) == 0) goto LAB_03690490;
        fVar10 = *(float *)(param_4 + 0x44);
        uVar9 = Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__Play_1381788
                          (*(undefined4 *)(param_4 + 0x3c),*(undefined4 *)(param_4 + 0x40),
                           *(long *)(lVar6 + 0x90),0);
        uVar9 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                          (fVar10 * (float)param_6 + *(float *)(param_4 + 0x38),uVar9,
                           *(undefined8 *)puVar2);
        DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                  (uVar9,param_4,*(undefined8 *)puVar3);
      }
      lVar8 = UnityEngine_Component__get_gameObject_408b480(lVar6,0);
      lVar4 = 0;
      if (lVar8 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
        return lVar6;
      }
    }
  }
LAB_03690490:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(lVar4);
}

