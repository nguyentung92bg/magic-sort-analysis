/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$PlayRevealAnimations
DG_Tweening_Sequence_o* Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__PlayRevealAnimations (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, bool shouldParent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$PlayRevealAnimations
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__PlayRevealAnimations
   (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, bool shouldParent, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__PlayRevealAnimations_2985048
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
          ulong param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c2d78d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0579eca8);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0579c548);
    bRam0000000005c2d78d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar9 = (undefined8 *)(param_4 + 0x38);
  *puVar9 = uVar4;
  FUN_012d0d74(puVar9,uVar4);
  puVar3 = PTR_DAT_0579eca8;
  puVar2 = PTR_DAT_0579c548;
  if ((param_5 != 0) && (lVar5 = *(long *)(param_5 + 0x20), lVar5 != 0)) {
    iVar10 = 0;
    fVar17 = 0.0;
    while( true ) {
      if (*(int *)(lVar5 + 0x18) <= iVar10) {
        return *puVar9;
      }
      plVar11 = *(long **)(param_4 + 0x18);
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar10,*(undefined8 *)puVar2);
      if ((lVar5 == 0) || (plVar11 == (long *)0x0)) break;
      lVar5 = (**(code **)(*plVar11 + 0x1c8))
                        (plVar11,*(undefined4 *)(lVar5 + 0x10),*(undefined8 *)(*plVar11 + 0x1d0));
      lVar6 = *(long *)(param_4 + 0x30);
      if (lVar6 == 0) break;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) break;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar11 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar11 = lVar5;
        FUN_012d0d74(plVar11,lVar5);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,lVar5);
      }
      if ((param_6 & 1) != 0) {
        if (lVar5 == 0) break;
        lVar6 = UnityEngine_Component__get_transform_408b444(lVar5,0);
        uVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
        if (lVar6 == 0) break;
        UnityEngine_Transform__SetParent_409352c(lVar6,uVar4,0);
      }
      if ((*(long *)(param_5 + 0x20) == 0) ||
         (uVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_5 + 0x20),iVar10,*(undefined8 *)puVar2), lVar5 == 0))
      break;
      Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                (lVar5,uVar4,0);
      lVar6 = UnityEngine_Component__get_transform_408b444(lVar5,0);
      lVar7 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
      if ((lVar7 == 0) ||
         ((lVar7 = UnityEngine_GameObject__get_transform_408e25c(lVar7,0), lVar7 == 0 ||
          (UnityEngine_Transform__get_position_4092b08(lVar7,0), lVar6 == 0)))) break;
      UnityEngine_Transform__set_position_4092ba8(lVar6,0);
      lVar6 = UnityEngine_Component__get_transform_408b444(lVar5,0);
      if (lVar6 == 0) break;
      fVar13 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
      if (*(long *)(param_5 + 0x20) == 0) break;
      fVar15 = param_2;
      fVar16 = param_3;
      fVar14 = (float)Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetPositionForCurrencyView_2985b60
                                (param_4,iVar10,*(undefined4 *)(*(long *)(param_5 + 0x20) + 0x18));
      param_2 = param_2 + fVar15;
      param_3 = param_3 + fVar16;
      UnityEngine_Transform__set_position_4092ba8(fVar13 + fVar14,param_2,param_3,lVar6,0);
      if (*(long *)(param_4 + 0x20) == 0) break;
      fVar13 = *(float *)(*(long *)(param_4 + 0x20) + 0x18);
      lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar5,0);
      if (lVar6 == 0) break;
      UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
      if ((*(long *)(param_5 + 0x20) == 0) ||
         (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_5 + 0x20),iVar10,*(undefined8 *)puVar2), lVar6 == 0))
      break;
      if (*(int *)(lVar6 + 0x10) == 0xe) {
        if ((*(long *)(param_5 + 0x20) == 0) ||
           (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_5 + 0x20),iVar10,*(undefined8 *)puVar2), lVar6 == 0))
        break;
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetPackType_1384bf4
                  (lVar5,*(undefined4 *)(lVar6 + 0x2c),0);
      }
      uVar12 = *(undefined8 *)(param_4 + 0x38);
      fVar17 = fVar17 + fVar13;
      uVar4 = Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__RevealSequence_1382b88
                        (lVar5,*(undefined8 *)(param_4 + 0x28),0);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar17,uVar12,uVar4,0);
      lVar5 = *(long *)(param_5 + 0x20);
      iVar10 = iVar10 + 1;
      if (lVar5 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

