/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.ScrollItemsEnterAnimator$$AnimateItems
void Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimator__AnimateItems (Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimator_o* __this, System_Collections_Generic_List_Transform__o* items, float animationDistance, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.ScrollItemsEnterAnimator$$AnimateItems
   void Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimator__AnimateItems
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimator_o* __this,
   System_Collections_Generic_List_Transform__o* items, float animationDistance, System_Action_o*
   onComplete, const MethodInfo* method); */

long Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimator__AnimateItems_2465164
               (float param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  puVar1 = PTR_DAT_05814f30;
  if ((bRam0000000005c2b0cd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f9a60);
    FUN_012d0dc8(PTR_DAT_057c2030);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057ad548);
    FUN_012d0dc8(PTR_DAT_05814f30);
    bRam0000000005c2b0cd = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = param_6;
    FUN_012d0d74((undefined8 *)(lVar5 + 0x10),param_6);
    plVar10 = (long *)(param_4 + 0x20);
    if (*plVar10 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar10,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *plVar10 = lVar6;
    FUN_012d0d74(plVar10,lVar6);
    puVar4 = PTR_DAT_057f03e0;
    puVar3 = PTR_DAT_057c2030;
    puVar2 = PTR_DAT_057874c0;
    if (param_5 != 0) {
      if (0 < *(int *)(param_5 + 0x18)) {
        iVar11 = 0;
        do {
          lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (param_5,iVar11,*(undefined8 *)puVar3);
          if (lVar6 == 0) goto LAB_02565484;
          fVar12 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
          UnityEngine_Transform__get_position_4092b08(lVar6,0);
          uVar14 = param_2;
          UnityEngine_Transform__get_position_4092b08(lVar6,0);
          uVar9 = param_3;
          UnityEngine_Transform__get_position_4092b08(lVar6,0);
          if (*(long *)(param_4 + 0x18) == 0) goto LAB_02565484;
          uVar13 = UnityEngine_Transform__get_position_4092b08(lVar6,0);
          UnityEngine_Transform__set_position_4092ba8(fVar12 + param_1,param_2,param_3,lVar6,0);
          lVar7 = UnityEngine_Component__get_gameObject_408b480(lVar6,0);
          if (lVar7 == 0) goto LAB_02565484;
          UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
          if (*(long *)(param_4 + 0x18) == 0) goto LAB_02565484;
          uVar13 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                             (uVar13,uVar14,uVar9,*(undefined4 *)(*(long *)(param_4 + 0x18) + 0x1c),
                              lVar6,0,0);
          if (*(long *)(param_4 + 0x18) == 0) goto LAB_02565484;
          uVar13 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                             (uVar13,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x20),
                              *(undefined8 *)puVar2);
          uVar13 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar13,0);
          if (*(long *)(param_4 + 0x18) == 0) goto LAB_02565484;
          param_2 = (ulong)(uint)(float)iVar11;
          DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                    (*(float *)(*(long *)(param_4 + 0x18) + 0x28) * (float)iVar11,uVar13,
                     *(undefined8 *)puVar4);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,*plVar10,uVar8,0);
          iVar11 = iVar11 + 1;
          param_3 = uVar9;
        } while (iVar11 < *(int *)(param_5 + 0x18));
      }
      lVar7 = *plVar10;
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
      puVar1 = PTR_DAT_0579e470;
      if (lVar6 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar5,*(undefined8 *)PTR_DAT_057ad548,0);
        uVar9 = *(undefined8 *)puVar1;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
          *(long *)(lVar7 + 0x80) = lVar6;
          FUN_012d0d74((long *)(lVar7 + 0x80),lVar6,uVar9);
        }
        return lVar7;
      }
    }
  }
LAB_02565484:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

