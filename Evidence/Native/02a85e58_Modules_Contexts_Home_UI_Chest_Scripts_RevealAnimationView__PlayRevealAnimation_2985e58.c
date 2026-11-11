/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$PlayRevealAnimation
DG_Tweening_Sequence_o* Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__PlayRevealAnimation (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, int32_t currencyType, System_String_o* amountText, bool shouldParent, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, bool setText, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$PlayRevealAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__PlayRevealAnimation
   (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, int32_t currencyType,
   System_String_o* amountText, bool shouldParent,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, bool setText, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__PlayRevealAnimation_2985e58
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,int param_5,
          undefined8 param_6,uint param_7,long param_8,uint param_9)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((bRam0000000005c2d78f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0579eca8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2d78f = 1;
  }
  plVar3 = *(long **)(param_4 + 0x18);
  if (plVar3 == (long *)0x0) goto LAB_02a86144;
  lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,param_5,*(undefined8 *)(*plVar3 + 0x1d0));
  lVar6 = *(long *)(param_4 + 0x30);
  if (lVar6 == 0) goto LAB_02a86144;
  lVar7 = *(long *)(lVar6 + 0x10);
  lVar8 = *(long *)PTR_DAT_0579eca8;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (lVar7 == 0) goto LAB_02a86144;
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
    plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
    *plVar3 = lVar4;
    FUN_012d0d74(plVar3,lVar4);
    if ((param_7 & 1) != 0) goto LAB_02a85f58;
LAB_02a85f30:
    if (lVar4 == 0) goto LAB_02a86144;
  }
  else {
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,lVar4);
    if ((param_7 & 1) == 0) goto LAB_02a85f30;
LAB_02a85f58:
    if (lVar4 == 0) goto LAB_02a86144;
    lVar6 = UnityEngine_Component__get_transform_408b444(lVar4,0);
    uVar11 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar6 == 0) goto LAB_02a86144;
    UnityEngine_Transform__SetParent_409352c(lVar6,uVar11,0);
  }
  uVar11 = *(undefined8 *)(lVar4 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar4 + 0x40) == 0) ||
       (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar4 + 0x40),0), lVar6 == 0
       )) goto LAB_02a86144;
    UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
    Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountText_1381d84
              (lVar4,param_6,0);
    if ((param_8 != 0) && ((param_9 & 1) != 0)) {
      Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                (lVar4,param_8,0);
    }
  }
  if ((param_5 == 0xe) && (param_8 != 0)) {
    Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetPackType_1384bf4
              (lVar4,*(undefined4 *)(param_8 + 0x2c),0);
  }
  lVar6 = UnityEngine_Component__get_transform_408b444(lVar4,0);
  lVar7 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
  if (((lVar7 != 0) && (lVar7 = UnityEngine_GameObject__get_transform_408e25c(lVar7,0), lVar7 != 0))
     && (UnityEngine_Transform__get_position_4092b08(lVar7,0), lVar6 != 0)) {
    UnityEngine_Transform__set_position_4092ba8(lVar6,0);
    lVar6 = UnityEngine_Component__get_transform_408b444(lVar4,0);
    if (lVar6 != 0) {
      fVar12 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
      fVar14 = param_2;
      fVar15 = param_3;
      fVar13 = (float)Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetPositionForCurrencyView_2985b60
                                (param_4,0,1);
      UnityEngine_Transform__set_position_4092ba8
                (fVar12 + fVar13,param_2 + fVar14,param_3 + fVar15,lVar6,0);
      lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar4,0);
      puVar2 = PTR_DAT_057815e0;
      if (lVar6 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar11 = DG_Tweening_DOTween__Sequence_1eda154(0);
        puVar9 = (undefined8 *)(param_4 + 0x38);
        *puVar9 = uVar11;
        FUN_012d0d74(puVar9,uVar11);
        uVar10 = *puVar9;
        uVar11 = Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RevealSequence_1382b88
                           (lVar4,*(undefined8 *)(param_4 + 0x28),0);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar10,uVar11,0);
        return *puVar9;
      }
    }
  }
LAB_02a86144:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

