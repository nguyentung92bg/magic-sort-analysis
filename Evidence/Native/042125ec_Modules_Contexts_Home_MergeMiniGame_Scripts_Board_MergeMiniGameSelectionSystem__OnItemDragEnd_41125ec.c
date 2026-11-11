/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemDragEnd
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragEnd (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, UnityEngine_Vector2_o worldPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemDragEnd
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragEnd
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this,
   UnityEngine_Vector2_o worldPos, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragEnd_41125ec
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
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
  if (*(long *)(param_3 + 0x20) == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Equality_407f288(uVar8,0,0);
  puVar4 = PTR_DAT_05818d08;
  puVar3 = PTR_DAT_057f7f10;
  puVar2 = PTR_DAT_0576d610;
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (((*(long *)(param_3 + 0x20) == 0) ||
      (lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0x10), lVar7 == 0)) ||
     (lVar7 = *(long *)(lVar7 + 0xa0), lVar7 == 0)) goto LAB_0421290c;
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,lVar7,*(undefined8 *)PTR_DAT_05818d08);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_70,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_70,*(undefined8 *)puVar3);
  if (*(long *)(param_3 + 0x20) == 0) goto LAB_0421290c;
  uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if (((*(long *)(param_3 + 0x20) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0x18), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0xa0), lVar7 == 0)) goto LAB_0421290c;
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,lVar7,*(undefined8 *)puVar4);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_70,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar3);
  }
  if ((*(long *)(param_3 + 0x10) == 0) ||
     (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__ResumeHint_4117ab0
                (), *(long *)(param_3 + 0x20) == 0)) goto LAB_0421290c;
  uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetOutsideOfTheBoard_4110a5c
                    (param_1,param_2);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_0421290c;
    uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = UnityEngine_Object__op_Equality_407f288(uVar8,0,0);
    if ((uVar5 & 1) != 0) goto LAB_042127fc;
    if ((*(long *)(param_3 + 0x20) == 0) || (*(long *)(*(long *)(param_3 + 0x20) + 0x18) == 0))
    goto LAB_0421290c;
    uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__IsEmpty_410d724();
    lVar7 = *(long *)(param_3 + 0x20);
    if (lVar7 == 0) goto LAB_0421290c;
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_3 + 0x10) == 0) goto LAB_0421290c;
      uVar8 = *(undefined8 *)(lVar7 + 0x18);
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__Snap_4113e78();
      goto LAB_04212858;
    }
    uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge_41108b4
                      (lVar7);
    lVar7 = *(long *)(param_3 + 0x20);
    if (lVar7 == 0) goto LAB_0421290c;
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_3 + 0x10) != 0) {
        uVar8 = *(undefined8 *)(lVar7 + 0x18);
        Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__Merge_4114194();
        goto LAB_04212858;
      }
      goto LAB_0421290c;
    }
    uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__IsTargetMovable_4110a88
                      (lVar7);
    lVar7 = *(long *)(param_3 + 0x20);
    if (lVar7 == 0) goto LAB_0421290c;
    lVar6 = *(long *)(param_3 + 0x10);
    if ((uVar5 & 1) != 0) {
      if (lVar6 != 0) {
        uVar8 = *(undefined8 *)(lVar7 + 0x18);
        Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__Swap_4113f54();
        goto LAB_04212858;
      }
      goto LAB_0421290c;
    }
  }
  else {
LAB_042127fc:
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_0421290c;
    uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar8,0,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_3 + 0x20) == 0) || (*(long *)(*(long *)(param_3 + 0x20) + 0x18) == 0))
      goto LAB_0421290c;
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__StopMergeableHoverAnim_410ea44
                ();
    }
    lVar7 = *(long *)(param_3 + 0x20);
    if (lVar7 == 0) goto LAB_0421290c;
    lVar6 = *(long *)(param_3 + 0x10);
  }
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)(lVar7 + 0x10);
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__ReturnToInitialPosition_411409c
              ();
LAB_04212858:
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__SetActiveCell_4118448
              (param_3,uVar8);
    return;
  }
LAB_0421290c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

