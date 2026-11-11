/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnDrag
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnDrag (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnDrag
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnDrag
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this,
   UnityEngine_Vector2_o position, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnDrag_4113200
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  long lStack_58;
  
  lVar5 = *(long *)(param_4 + 0x38);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *(long *)(param_4 + 0x40);
  if ((bRam0000000005c3ac29 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3ac29 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  lStack_58 = 0;
  if (*(long *)(lVar5 + 0x20) == 0) {
    return;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Equality_407f288(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (lVar4 == 0) goto LAB_04213448;
  fVar7 = *(float *)(lVar5 + 0x30);
  fVar8 = *(float *)(lVar5 + 0x34);
  lVar3 = UnityEngine_Component__get_transform_408b444(lVar4,0);
  if (lVar3 == 0) goto LAB_04213448;
  UnityEngine_Transform__get_position_4092b08(lVar3,0);
  lVar4 = UnityEngine_Component__get_transform_408b444(lVar4,0);
  if (lVar4 == 0) goto LAB_04213448;
  UnityEngine_Transform__set_position_4092ba8
            ((float)param_1 + fVar7,(float)param_2 + fVar8,param_3,lVar4,0);
  if (*(long *)(lVar5 + 0x18) == 0) goto LAB_04213448;
  uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoard__TryGetCellWithWorldPosition_410d134
                    (param_1,param_2,*(long *)(lVar5 + 0x18),&lStack_58);
  lVar4 = *(long *)(lVar5 + 0x20);
  if (lVar4 == 0) goto LAB_04213448;
  if ((uVar2 & 1) == 0) {
LAB_04213384:
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__DeselectTarget_4110c48
              (lVar4);
  }
  else {
    uVar6 = *(undefined8 *)(lVar4 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Equality_407f288(uVar6,0,0);
    lVar4 = lStack_58;
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04213448;
      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(lVar4,uVar6,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04213448;
      uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsTarget_4110cd8
                        (*(long *)(lVar5 + 0x20),lStack_58);
      if ((*(long *)(lVar5 + 0x20) == 0) || (*(long *)(*(long *)(lVar5 + 0x20) + 0x18) == 0))
      goto LAB_04213448;
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__StopMergeableHoverAnim_410ea44
                ();
      lVar4 = *(long *)(lVar5 + 0x20);
      if ((uVar2 & 1) == 0) {
        if (lVar4 == 0) goto LAB_04213448;
        goto LAB_04213384;
      }
      if (lVar4 == 0) goto LAB_04213448;
      *(long *)(lVar4 + 0x18) = lStack_58;
      FUN_012d0d74();
      if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04213448;
      uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge_41108b4
                        ();
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04213448;
      lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x18);
    }
    else {
      if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04213448;
      uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsTarget_4110cd8
                        (*(long *)(lVar5 + 0x20),lStack_58);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04213448;
      *(long *)(*(long *)(lVar5 + 0x20) + 0x18) = lStack_58;
      FUN_012d0d74();
      if (*(long *)(lVar5 + 0x20) == 0) goto LAB_04213448;
      uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge_41108b4
                        ();
      lVar5 = lStack_58;
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    if (lVar5 == 0) {
LAB_04213448:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__PlayMergeableHover_410e91c();
  }
  return;
}

