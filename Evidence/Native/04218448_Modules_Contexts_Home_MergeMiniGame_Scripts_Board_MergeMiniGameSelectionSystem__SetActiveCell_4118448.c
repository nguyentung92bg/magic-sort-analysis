/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$SetActiveCell
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__SetActiveCell (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$SetActiveCell
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__SetActiveCell
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__SetActiveCell_4118448
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3ac25 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    bRam0000000005c3ac25 = 1;
  }
  plVar6 = (long *)(param_1 + 0x28);
  lVar7 = *plVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    lVar7 = *plVar6;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(lVar7,param_2,0);
    if ((uVar3 & 1) != 0) {
      if (*plVar6 == 0) goto LAB_04218574;
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HideCursor_4109a88();
    }
  }
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_05777ce8;
  *plVar6 = param_2;
  FUN_012d0d74(plVar6,param_2);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                    (uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__PlayCursorAppearAnimation_410e6b8
                      (*(long *)(param_1 + 0x28));
    uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar4,uVar5,0);
    if ((uVar3 & 1) != 0) {
      DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar4,uVar5);
    }
    return uVar4;
  }
LAB_04218574:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

