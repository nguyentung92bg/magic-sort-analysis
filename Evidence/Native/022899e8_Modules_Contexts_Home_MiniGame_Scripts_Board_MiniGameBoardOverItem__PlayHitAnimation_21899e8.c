/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$PlayHitAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__PlayHitAnimation (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$PlayHitAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__PlayHitAnimation
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__PlayHitAnimation_21899e8
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000005c29d63 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057dba88);
    FUN_012d0dc8(PTR_DAT_05814ec8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057a2e90);
    FUN_012d0dc8(PTR_DAT_057ac278);
    FUN_012d0dc8(PTR_DAT_057f9520);
    bRam0000000005c29d63 = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(long *)(param_1 + 0x70) != 0) {
    fVar8 = *(float *)(*(long *)(param_1 + 0x70) + 200);
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_057f9520;
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057dba88,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar8,uVar3,lVar4,0);
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar4 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar4 = *(long *)puVar2;
        }
        uVar7 = **(undefined8 **)(lVar4 + 0xb8);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar6 == 0) goto LAB_02289c60;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,uVar7,*(undefined8 *)PTR_DAT_057a2e90,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar5 = lVar6;
        FUN_012d0d74(plVar5,lVar6);
      }
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar8,uVar3,lVar6,0);
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar4 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar6 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar4 = *(long *)puVar2;
        }
        uVar7 = **(undefined8 **)(lVar4 + 0xb8);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar6 == 0) goto LAB_02289c60;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,uVar7,*(undefined8 *)PTR_DAT_057ac278,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar5 = lVar6;
        FUN_012d0d74(plVar5,lVar6);
      }
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar8,uVar3,lVar6,0);
      if (*(long *)(param_1 + 0x70) != 0) {
        fVar9 = *(float *)(*(long *)(param_1 + 0x70) + 0xcc);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_05814ec8,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar8 + fVar9,uVar3,lVar4,0);
          return uVar3;
        }
      }
    }
  }
LAB_02289c60:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

