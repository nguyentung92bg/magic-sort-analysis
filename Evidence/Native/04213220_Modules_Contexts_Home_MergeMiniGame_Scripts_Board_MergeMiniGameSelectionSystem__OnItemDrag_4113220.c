/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemDrag
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDrag (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* item, UnityEngine_Vector2_o worldPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemDrag
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDrag
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* item, UnityEngine_Vector2_o
   worldPos, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDrag_4113220
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  long lStack_58;
  
  if ((bRam0000000005c3ac29 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3ac29 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  lStack_58 = 0;
  if (*(long *)(param_4 + 0x20) == 0) {
    return;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_5 == 0) goto LAB_04213448;
  fVar5 = *(float *)(param_4 + 0x30);
  fVar6 = *(float *)(param_4 + 0x34);
  lVar3 = UnityEngine_Component__get_transform_408b444(param_5,0);
  if (lVar3 == 0) goto LAB_04213448;
  UnityEngine_Transform__get_position_4092b08(lVar3,0);
  lVar3 = UnityEngine_Component__get_transform_408b444(param_5,0);
  if (lVar3 == 0) goto LAB_04213448;
  UnityEngine_Transform__set_position_4092ba8
            ((float)param_1 + fVar5,(float)param_2 + fVar6,param_3,lVar3,0);
  if (*(long *)(param_4 + 0x18) == 0) goto LAB_04213448;
  uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoard__TryGetCellWithWorldPosition_410d134
                    (param_1,param_2,*(long *)(param_4 + 0x18),&lStack_58);
  lVar3 = *(long *)(param_4 + 0x20);
  if (lVar3 == 0) goto LAB_04213448;
  if ((uVar2 & 1) == 0) {
LAB_04213384:
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__DeselectTarget_4110c48
              (lVar3);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
    lVar3 = lStack_58;
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_04213448;
      uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(lVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_04213448;
      uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsTarget_4110cd8
                        (*(long *)(param_4 + 0x20),lStack_58);
      if ((*(long *)(param_4 + 0x20) == 0) || (*(long *)(*(long *)(param_4 + 0x20) + 0x18) == 0))
      goto LAB_04213448;
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__StopMergeableHoverAnim_410ea44
                ();
      lVar3 = *(long *)(param_4 + 0x20);
      if ((uVar2 & 1) == 0) {
        if (lVar3 == 0) goto LAB_04213448;
        goto LAB_04213384;
      }
      if (lVar3 == 0) goto LAB_04213448;
      *(long *)(lVar3 + 0x18) = lStack_58;
      FUN_012d0d74();
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_04213448;
      uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge_41108b4
                        ();
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_04213448;
      lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 0x18);
    }
    else {
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_04213448;
      uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsTarget_4110cd8
                        (*(long *)(param_4 + 0x20),lStack_58);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_04213448;
      *(long *)(*(long *)(param_4 + 0x20) + 0x18) = lStack_58;
      FUN_012d0d74();
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_04213448;
      uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanMerge_41108b4
                        ();
      lVar3 = lStack_58;
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    if (lVar3 == 0) {
LAB_04213448:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__PlayMergeableHover_410e91c();
  }
  return;
}

