/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemTap
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemTap (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemTap
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemTap
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* item, const MethodInfo* method);
    */

ulong Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemTap_41129e0
                (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c3ac26 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3ac26 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__ResumeHint_4117ab0();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Equality_407f288(param_2,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_2 == (long *)0x0) goto LAB_04212b28;
      lVar5 = param_2[0x11];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = UnityEngine_Object__op_Equality_407f288(lVar5,0,0);
      if ((uVar4 & 1) == 0) {
        if ((param_2[0x11] == 0) || (lVar5 = *(long *)(param_2[0x11] + 0x60), lVar5 == 0))
        goto LAB_04212b28;
        uVar4 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78(lVar5,0);
        if ((uVar4 & 1) == 0) {
          if (*(char *)(param_1 + 0x3c) != '\0') {
            uVar4 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
            if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x04212ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
              return uVar4;
            }
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          lVar5 = param_2[0x11];
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar4 = UnityEngine_Object__op_Equality_407f288(uVar6,lVar5,0);
          puVar1 = PTR_DAT_057815e0;
          if ((uVar4 & 1) != 0) {
            if ((bRam0000000005c3ac27 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057815e0);
              FUN_012d0dc8(PTR_DAT_05777ce8);
              bRam0000000005c3ac27 = 1;
            }
            puVar2 = PTR_DAT_05777ce8;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
            uVar4 = DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                              (uVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar2);
            if (param_2 != (long *)0x0) {
              uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlaySelectAnimation_410b300
                                (param_2);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar6,0);
              if (param_2[0x11] != 0) {
                uVar6 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__PlayCursorAppearAnimation_410e6b8
                                  ();
                uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                  (uVar4,uVar6,0);
                if ((uVar3 & 1) != 0) {
                  DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar4,uVar6);
                }
                return uVar4;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
    return uVar4;
  }
LAB_04212b28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

