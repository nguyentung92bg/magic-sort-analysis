/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.ScrollItemsEnterAnimatorV2$$AnimateItems
void Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimatorV2__AnimateItems (Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimatorV2_o* __this, System_Collections_Generic_List_Transform__o* items, float animationDistance, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.ScrollItemsEnterAnimatorV2$$AnimateItems
   void Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimatorV2__AnimateItems
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimatorV2_o* __this,
   System_Collections_Generic_List_Transform__o* items, float animationDistance, System_Action_o*
   onComplete, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimatorV2__AnimateItems_2469a60
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long lStack_88;
  
  puVar4 = PTR_DAT_05798148;
  if ((bRam0000000005c2b0ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790088);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f9a60);
    FUN_012d0dc8(PTR_DAT_057c2030);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057e7c80);
    FUN_012d0dc8(PTR_DAT_057c2f28);
    FUN_012d0dc8(PTR_DAT_05773540);
    FUN_012d0dc8(PTR_DAT_05798148);
    bRam0000000005c2b0ed = 1;
  }
  lStack_88 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar7 != 0) {
    System_Object___ctor_23dfe5c(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = param_3;
    FUN_012d0d74((undefined8 *)(lVar7 + 0x10),param_3);
    plVar15 = (long *)(param_1 + 0x20);
    if (*plVar15 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar15,0,0);
    }
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *plVar15 = lVar8;
    FUN_012d0d74(plVar15,lVar8);
    puVar6 = PTR_DAT_057e7c80;
    puVar5 = PTR_DAT_05790088;
    puVar4 = PTR_DAT_0576c200;
    if (param_2 != 0) {
      if (0 < *(int *)(param_2 + 0x18)) {
        iVar16 = 0;
        bVar3 = false;
        fVar18 = 0.0;
        do {
          lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (param_2,iVar16,*(undefined8 *)PTR_DAT_057c2030);
          if ((lVar8 == 0) ||
             (lVar9 = UnityEngine_Component__get_gameObject_408b480(lVar8,0), lVar9 == 0))
          goto LAB_02569e88;
          UnityEngine_GameObject__SetActive_408e318(lVar9,1,0);
          if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar10 = DG_Tweening_DOTween__Sequence_1eda154(0);
          fVar17 = (float)UnityEngine_Transform__get_position_4092b08(lVar8,0);
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar9 == 0)) goto LAB_02569e88;
          *(float *)(lVar9 + 0x18) = fVar17;
          fVar19 = *(float *)(lVar9 + 0x20);
          uVar11 = UnityEngine_Component__TryGetComponent_object__27209d4
                             (lVar8,&lStack_88,*(undefined8 *)puVar5);
          lVar9 = lStack_88;
          if ((uVar11 & 1) != 0) {
            if (lStack_88 == 0) goto LAB_02569e88;
            if (!bVar3 && *(int *)(lStack_88 + 0xa0) == 5) {
              if (((*(long *)(param_1 + 0x18) == 0) ||
                  (lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar14 == 0)) ||
                 (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) goto LAB_02569e88;
              bVar3 = true;
              fVar18 = *(float *)(lVar14 + 0x28) * (float)iVar16;
            }
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar11 = UnityEngine_Object__op_Inequality_408e110(lVar9,0,0);
          if ((uVar11 & 1) == 0) {
LAB_02569d88:
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_02569e88;
            iVar1 = *(int *)(param_2 + 0x18);
            uVar12 = Modules_Infrastructure_Common_Scripts_DoTweenHelper_DoTweenHelper__DoMoveX_40e91ec
                               (lVar8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0);
            if (((*(long *)(param_1 + 0x18) == 0) ||
                (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar8 == 0)) ||
               (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) goto LAB_02569e88;
            fVar17 = *(float *)(lVar8 + 0x28);
            if (iVar16 == iVar1 + -1) {
              fVar17 = fVar18 + fVar17;
            }
            else {
              fVar17 = fVar17 * (float)iVar16;
            }
          }
          else {
            if (lStack_88 == 0) goto LAB_02569e88;
            if (*(int *)(lStack_88 + 0xa0) != 5) goto LAB_02569d88;
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_02569e88;
            uVar12 = Modules_Infrastructure_Common_Scripts_DoTweenHelper_DoTweenHelper__DoMoveX_40e91ec
                               (lVar8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0);
            plVar13 = (long *)DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                        (fVar18,uVar12,*(undefined8 *)puVar6);
            if (plVar13 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)PTR_DAT_057c2f28 + 300);
              if ((*(byte *)(*plVar13 + 300) < bVar2) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_057c2f28)) {
                    /* WARNING: Subroutine does not return */
                FUN_012d1288();
              }
            }
            DG_Tweening_TweenSettingsExtensions__From_1eee24c(fVar17 + fVar19,plVar13,1,0,0);
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_02569e88;
            uVar12 = Modules_Infrastructure_Common_Scripts_DoTweenHelper_DoTweenHelper__DoMoveX_40e91ec
                               (lVar8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0);
            fVar17 = fVar18;
          }
          uVar12 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                             (fVar17,uVar12,*(undefined8 *)puVar6);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar10,uVar12,0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,*plVar15,uVar10,0);
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(param_2 + 0x18));
      }
      lVar9 = *plVar15;
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
      puVar4 = PTR_DAT_0579e470;
      if (lVar8 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,lVar7,*(undefined8 *)PTR_DAT_05773540,0);
        DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                  (lVar9,lVar8,*(undefined8 *)puVar4);
        return;
      }
    }
  }
LAB_02569e88:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

