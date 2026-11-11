/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnTouchUp
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnTouchUp (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnTouchUp
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnTouchUp
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this,
   UnityEngine_Vector2_o position, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnTouchUp_4112580
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if (*(long *)(param_3 + 0x20) == 0) {
LAB_042125e8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_BoxCollider2D__set_size_2e26350
            (*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
             *(long *)(param_3 + 0x20),0);
  lVar5 = *(long *)(param_3 + 0x38);
  if (*(char *)(param_3 + 0x48) == '\0') {
    if (lVar5 != 0) {
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemTap_41129e0
                (lVar5,*(undefined8 *)(param_3 + 0x40));
      *(undefined1 *)(param_3 + 0x48) = 0;
      return;
    }
    goto LAB_042125e8;
  }
  if (lVar5 == 0) goto LAB_042125e8;
  if ((bRam0000000005c3ac2a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_05818d08);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3ac2a = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (*(long *)(lVar5 + 0x20) == 0) {
    return;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = UnityEngine_Object__op_Equality_407f288(uVar9,0,0);
  puVar4 = PTR_DAT_05818d08;
  puVar3 = PTR_DAT_057f7f10;
  puVar2 = PTR_DAT_0576d610;
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (((*(long *)(lVar5 + 0x20) == 0) ||
      (lVar8 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10), lVar8 == 0)) ||
     (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 == 0)) goto LAB_0421290c;
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,lVar8,*(undefined8 *)PTR_DAT_05818d08);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_70,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_70,*(undefined8 *)puVar3);
  if (*(long *)(lVar5 + 0x20) == 0) goto LAB_0421290c;
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (((*(long *)(lVar5 + 0x20) == 0) ||
        (lVar8 = *(long *)(*(long *)(lVar5 + 0x20) + 0x18), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 == 0)) goto LAB_0421290c;
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,lVar8,*(undefined8 *)puVar4);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_70,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar3);
  }
  if ((*(long *)(lVar5 + 0x10) == 0) ||
     (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__ResumeHint_4117ab0
                (), *(long *)(lVar5 + 0x20) == 0)) goto LAB_0421290c;
  uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetOutsideOfTheBoard_4110a5c
                    (param_1,param_2);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_0421290c;
    uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = UnityEngine_Object__op_Equality_407f288(uVar9,0,0);
    if ((uVar6 & 1) != 0) goto LAB_042127fc;
    if ((*(long *)(lVar5 + 0x20) == 0) || (*(long *)(*(long *)(lVar5 + 0x20) + 0x18) == 0))
    goto LAB_0421290c;
    uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__IsEmpty_410d724();
    lVar8 = *(long *)(lVar5 + 0x20);
    if (lVar8 == 0) goto LAB_0421290c;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_0421290c;
      uVar9 = *(undefined8 *)(lVar8 + 0x18);
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__Snap_4113e78();
      goto LAB_04212858;
    }
    uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge_41108b4
                      (lVar8);
    lVar8 = *(long *)(lVar5 + 0x20);
    if (lVar8 == 0) goto LAB_0421290c;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar5 + 0x10) != 0) {
        uVar9 = *(undefined8 *)(lVar8 + 0x18);
        Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__Merge_4114194();
        goto LAB_04212858;
      }
      goto LAB_0421290c;
    }
    uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetMovable_4110a88
                      (lVar8);
    lVar8 = *(long *)(lVar5 + 0x20);
    if (lVar8 == 0) goto LAB_0421290c;
    lVar7 = *(long *)(lVar5 + 0x10);
    if ((uVar6 & 1) != 0) {
      if (lVar7 != 0) {
        uVar9 = *(undefined8 *)(lVar8 + 0x18);
        Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__Swap_4113f54();
        goto LAB_04212858;
      }
      goto LAB_0421290c;
    }
  }
  else {
LAB_042127fc:
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_0421290c;
    uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(lVar5 + 0x20) == 0) || (*(long *)(*(long *)(lVar5 + 0x20) + 0x18) == 0))
      goto LAB_0421290c;
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__StopMergeableHoverAnim_410ea44
                ();
    }
    lVar8 = *(long *)(lVar5 + 0x20);
    if (lVar8 == 0) goto LAB_0421290c;
    lVar7 = *(long *)(lVar5 + 0x10);
  }
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(lVar8 + 0x10);
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__ReturnToInitialPosition_411409c
              ();
LAB_04212858:
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__SetActiveCell_4118448
              (lVar5,uVar9);
    return;
  }
LAB_0421290c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

