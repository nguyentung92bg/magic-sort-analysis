/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayScatterMoveSequence
DG_Tweening_Tween_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayScatterMoveSequence (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* target, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayScatterMoveSequence
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayScatterMoveSequence
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Transform_o*
   from, UnityEngine_Transform_o* target, int32_t i, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayScatterMoveSequence_410b6ec
          (long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  puVar2 = PTR_DAT_05794950;
  if ((bRam0000000005c3abc8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05761d78);
    FUN_012d0dc8(PTR_DAT_0576c508);
    FUN_012d0dc8(PTR_DAT_057e6c78);
    FUN_012d0dc8(PTR_DAT_057eaba8);
    FUN_012d0dc8(PTR_DAT_057f1dd8);
    FUN_012d0dc8(PTR_DAT_05794950);
    FUN_012d0dc8(PTR_DAT_05817b18);
    bRam0000000005c3abc8 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_057815e0;
  puVar2 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x18) = param_1;
    FUN_012d0d74((long *)(lVar4 + 0x18),param_1);
    *(undefined8 *)(lVar4 + 0x20) = param_2;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x20),param_2);
    *(undefined4 *)(lVar4 + 0x28) = param_4;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x88);
    FUN_012d0d74();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_05817b18;
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_0576c508,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar6,0);
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar6 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar8 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar6 = *(long *)puVar3;
        }
        uVar9 = **(undefined8 **)(lVar6 + 0xb8);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar8 == 0) goto LAB_0420ba90;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,uVar9,*(undefined8 *)PTR_DAT_05761d78,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar7 = lVar8;
        FUN_012d0d74(plVar7,lVar8);
      }
      fVar1 = _UNK_04321df8;
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(_UNK_04321df8,uVar5,lVar8,0);
      uVar9 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (param_3 != 0) {
        UnityEngine_Transform__get_position_4092b08(param_3,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar9 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(uVar9,0,0);
          if (*(long *)(param_1 + 0x50) != 0) {
            uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar9,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x108),
                               *(undefined8 *)PTR_DAT_057874c0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar1,uVar5,uVar9,0);
            if (*(long *)(param_1 + 0x50) != 0) {
              uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x11c);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
              if (lVar6 != 0) {
                DG_Tweening_TweenCallback_float____ctor_341f244
                          (lVar6,lVar4,*(undefined8 *)PTR_DAT_057e6c78,0);
                uVar9 = DG_Tweening_DOVirtual__Float_1edbb8c(0,uVar10,uVar10,lVar6,0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar1,uVar5,uVar9,0);
                if (*(long *)(param_1 + 0x50) != 0) {
                  fVar11 = *(float *)(*(long *)(param_1 + 0x50) + 0x11c);
                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if (lVar6 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar6,lVar4,*(undefined8 *)PTR_DAT_057eaba8,0);
                    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                              (fVar11 + fVar1,uVar5,lVar6,0);
                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    puVar2 = PTR_DAT_0579e470;
                    if (lVar6 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar6,lVar4,*(undefined8 *)PTR_DAT_057f1dd8,0);
                      DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                (uVar5,lVar6,*(undefined8 *)puVar2);
                      return uVar5;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0420ba90:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

