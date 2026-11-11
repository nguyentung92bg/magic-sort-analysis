/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$FollowBezierPath
DG_Tweening_Sequence_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__FollowBezierPath (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Vector3_o fromPosition, UnityEngine_Vector3_o targetPosition, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$FollowBezierPath
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__FollowBezierPath
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Vector3_o
   fromPosition, UnityEngine_Vector3_o targetPosition,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__FollowBezierPath_410b0dc
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x7;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_0577cd90;
  if ((bRam0000000005c3abc9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_058147f0);
    FUN_012d0dc8(PTR_DAT_0577cd90);
    bRam0000000005c3abc9 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_8;
    FUN_012d0d74((undefined8 *)(lVar2 + 0x10),param_8);
    *(long *)(lVar2 + 0x18) = param_7;
    FUN_012d0d74((long *)(lVar2 + 0x18),param_7);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar6 = *(long *)(param_7 + 0x50);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x178);
      uVar9 = *(undefined4 *)(lVar6 + 0x180);
      uVar10 = *(undefined4 *)(lVar6 + 0x18c);
      uVar8 = *(undefined8 *)(lVar6 + 0x184);
      uVar4 = Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierControlPointsXYConfigurable_3de0b30
                        (param_1,param_2,param_3,param_4,param_5,param_6,0);
      uVar5 = UnityEngine_Component__get_transform_408b444(param_7,0);
      if (*(long *)(param_7 + 0x50) != 0) {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uVar4 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                          (*(undefined4 *)(*(long *)(param_7 + 0x50) + 0x160),uVar5,uVar4,2,1,10,
                           &uStack_78,0,in_x7,uVar7,uVar9,uVar8,uVar10);
        if (*(long *)(param_7 + 0x50) != 0) {
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(*(long *)(param_7 + 0x50) + 0x168),
                             *(undefined8 *)PTR_DAT_057ccae0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar4,0);
          if (*(long *)(param_7 + 0x50) != 0) {
            uVar9 = *(undefined4 *)(*(long *)(param_7 + 0x50) + 0x160);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
            if (lVar6 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,lVar2,*(undefined8 *)PTR_DAT_058147f0,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar9,uVar3,lVar6,0);
              return uVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

