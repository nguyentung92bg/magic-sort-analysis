/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayRevealAnimationsWithNewCurrencyView
DG_Tweening_Sequence_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayRevealAnimationsWithNewCurrencyView (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, bool shouldParent, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a85ff4) */
/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayRevealAnimationsWithNewCurrencyView
   DG_Tweening_Sequence_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayRevealAnimationsWithNewCurrencyView
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, bool shouldParent,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayRevealAnimationsWithNewCurrencyView_1382690
          (undefined1 param_1 [16],float param_2,float param_3,long *param_4,uint param_5,
          long param_6)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar12 = param_4[0x10];
  if (lVar12 == 0) {
    return 0;
  }
  iVar3 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
  plVar7 = (long *)param_4[8];
  if (plVar7 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar7 + 0x548))(plVar7,*(undefined8 *)(*plVar7 + 0x550));
  }
  if ((bRam0000000005c2d78f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0579eca8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2d78f = 1;
  }
  plVar7 = *(long **)(lVar12 + 0x18);
  if (plVar7 == (long *)0x0) goto LAB_02a86144;
  lVar5 = (**(code **)(*plVar7 + 0x1c8))(plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x1d0));
  lVar8 = *(long *)(lVar12 + 0x30);
  if (lVar8 == 0) goto LAB_02a86144;
  lVar9 = *(long *)(lVar8 + 0x10);
  lVar10 = *(long *)PTR_DAT_0579eca8;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_02a86144;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
    plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
    *plVar7 = lVar5;
    FUN_012d0d74(plVar7,lVar5);
    if ((param_5 & 1) == 0) goto LAB_02a85f30;
LAB_02a85f58:
    if (lVar5 == 0) goto LAB_02a86144;
    lVar8 = UnityEngine_Component__get_transform_408b444(lVar5,0);
    uVar13 = UnityEngine_Component__get_transform_408b444(lVar12,0);
    if (lVar8 == 0) goto LAB_02a86144;
    UnityEngine_Transform__SetParent_409352c(lVar8,uVar13,0);
  }
  else {
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))(lVar8,lVar5);
    if ((param_5 & 1) != 0) goto LAB_02a85f58;
LAB_02a85f30:
    if (lVar5 == 0) goto LAB_02a86144;
  }
  uVar13 = *(undefined8 *)(lVar5 + 0x40);
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar13,0,0);
  if ((uVar6 & 1) != 0) {
    if ((*(long *)(lVar5 + 0x40) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x40),0), lVar8 == 0
       )) goto LAB_02a86144;
    UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
    Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountText_1381d84
              (lVar5,uVar4,0);
  }
  if ((iVar3 == 0xe) && (param_6 != 0)) {
    Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetPackType_1384bf4
              (lVar5,*(undefined4 *)(param_6 + 0x2c),0);
  }
  lVar8 = UnityEngine_Component__get_transform_408b444(lVar5,0);
  lVar9 = UnityEngine_Component__get_gameObject_408b480(lVar12,0);
  if (((lVar9 != 0) && (lVar9 = UnityEngine_GameObject__get_transform_408e25c(lVar9,0), lVar9 != 0))
     && (UnityEngine_Transform__get_position_4092b08(lVar9,0), lVar8 != 0)) {
    UnityEngine_Transform__set_position_4092ba8(lVar8,0);
    lVar8 = UnityEngine_Component__get_transform_408b444(lVar5,0);
    if (lVar8 != 0) {
      fVar14 = (float)UnityEngine_Transform__get_position_4092b08(lVar8,0);
      fVar16 = param_2;
      fVar17 = param_3;
      fVar15 = (float)Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetPositionForCurrencyView_2985b60
                                (lVar12,0,1);
      UnityEngine_Transform__set_position_4092ba8
                (fVar14 + fVar15,param_2 + fVar16,param_3 + fVar17,lVar8,0);
      lVar8 = UnityEngine_Component__get_gameObject_408b480(lVar5,0);
      puVar2 = PTR_DAT_057815e0;
      if (lVar8 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
        puVar11 = (undefined8 *)(lVar12 + 0x38);
        *puVar11 = uVar4;
        FUN_012d0d74(puVar11,uVar4);
        uVar13 = *puVar11;
        uVar4 = Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RevealSequence_1382b88
                          (lVar5,*(undefined8 *)(lVar12 + 0x28),0);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar13,uVar4,0);
        return *puVar11;
      }
    }
  }
LAB_02a86144:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

