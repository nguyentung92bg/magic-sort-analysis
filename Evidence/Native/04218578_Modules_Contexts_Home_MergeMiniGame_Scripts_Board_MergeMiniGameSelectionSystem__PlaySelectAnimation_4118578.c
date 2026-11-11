/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$PlaySelectAnimation
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__PlaySelectAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$PlaySelectAnimation
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__PlaySelectAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* item, const MethodInfo* method);
    */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__PlaySelectAnimation_4118578
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c3ac27 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    bRam0000000005c3ac27 = 1;
  }
  puVar1 = PTR_DAT_05777ce8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                    (uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
  if (param_2 != 0) {
    uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlaySelectAnimation_410b300
                      (param_2);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
    if (*(long *)(param_2 + 0x88) != 0) {
      uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__PlayCursorAppearAnimation_410e6b8
                        ();
      uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar4,uVar5,0);
      if ((uVar3 & 1) != 0) {
        DG_Tweening_Sequence__DoInsert_1edfca4(0,uVar4,uVar5);
      }
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

