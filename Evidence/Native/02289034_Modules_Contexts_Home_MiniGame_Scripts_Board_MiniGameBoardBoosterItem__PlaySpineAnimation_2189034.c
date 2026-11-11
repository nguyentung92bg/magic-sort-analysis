/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$PlaySpineAnimation
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlaySpineAnimation (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$PlaySpineAnimation
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlaySpineAnimation
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlaySpineAnimation_2189034
          (long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  
  if ((*(long *)(param_1 + 0x50) == 0) || (lVar5 = *(long *)(param_1 + 0x40), lVar5 == 0)) {
LAB_02289098:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(undefined4 *)(lVar5 + 0x154) = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0xa0);
  lVar5 = Spine_Unity_SkeletonAnimation__get_AnimationState_2cb8a28(lVar5,0);
  if ((*(long *)(param_1 + 0x50) == 0) ||
     ((lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x78), lVar6 == 0 ||
      (uVar7 = UnityEngine_Object__get_name_4078cb0(lVar6,0), lVar5 == 0)))) goto LAB_02289098;
  if ((*(long *)(lVar5 + 0x10) == 0) ||
     (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = Spine_SkeletonData__FindAnimation_36adfec(lVar6,uVar7,0);
  if (lVar6 == 0) {
    uVar3 = thunk_FUN_0136d790(PTR_DAT_057d51f0);
    uVar7 = System_String__Concat_1ec3580(uVar3,uVar7,0);
    thunk_FUN_0136d790(PTR_DAT_057a2cc8);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar4 = thunk_FUN_0136d790(PTR_DAT_05785ec0);
    System_ArgumentException___ctor_211d60c(uVar3,uVar7,uVar4,0);
    uVar7 = thunk_FUN_0136d790(PTR_DAT_057ddf10);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar3,uVar7);
  }
  if (lVar6 == 0) {
    thunk_FUN_0136d790(PTR_DAT_057c1ad0);
    uVar7 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar3 = thunk_FUN_0136d790(PTR_DAT_0577a320);
    uVar4 = thunk_FUN_0136d790(PTR_DAT_057dbec8);
    System_ArgumentNullException___ctor_212572c(uVar7,uVar3,uVar4,0);
    uVar3 = thunk_FUN_0136d790(PTR_DAT_0579f360);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar7,uVar3);
  }
  lVar1 = Spine_AnimationState__ExpandToIndex_16a3270();
  if (lVar1 == 0) {
LAB_017a34a0:
    uVar8 = 1;
  }
  else {
    if (*(float *)(lVar1 + 0x9c) != -1.0) {
      Spine_AnimationState__ClearNext_16a1614(lVar5,lVar1);
      goto LAB_017a34a0;
    }
    if ((*(long *)(lVar5 + 0x18) == 0) ||
       (plVar10 = *(long **)(*(long *)(lVar5 + 0x18) + 0x10), plVar10 == (long *)0x0))
    goto LAB_017a34fc;
    lVar9 = *(long *)(lVar1 + 0x28);
    if ((lVar9 != 0) &&
       (lVar2 = thunk_FUN_01320d5c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar2 == 0)) {
      uVar7 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar7,0);
    }
    if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    plVar10[4] = lVar9;
    FUN_012d0d74(plVar10 + 4,lVar9);
    if (*(long *)(lVar5 + 0x58) == 0) goto LAB_017a34fc;
    Spine_EventQueue__Interrupt_39c60f0(*(long *)(lVar5 + 0x58),lVar1,0);
    if (*(long *)(lVar5 + 0x58) == 0) goto LAB_017a34fc;
    Spine_EventQueue__End_39c6210(*(long *)(lVar5 + 0x58),lVar1,0);
    Spine_AnimationState__ClearNext_16a1614(lVar5,lVar1);
    lVar1 = *(long *)(lVar1 + 0x28);
    uVar8 = 0;
  }
  uVar7 = Spine_AnimationState__NewTrackEntry_16a3570(lVar5,0,lVar6,0,lVar1);
  Spine_AnimationState__SetCurrent_16a146c(lVar5,0,uVar7,uVar8);
  if (*(long *)(lVar5 + 0x58) != 0) {
    Spine_EventQueue__Drain_39c66bc(*(long *)(lVar5 + 0x58),0);
    return uVar7;
  }
LAB_017a34fc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

