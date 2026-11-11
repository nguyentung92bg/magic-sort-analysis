/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayGeneratorItemMove
DG_Tweening_Sequence_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayGeneratorItemMove (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayGeneratorItemMove
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayGeneratorItemMove
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Transform_o*
   from, UnityEngine_Transform_o* target, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayGeneratorItemMove_410b3ec
          (long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  puVar2 = PTR_DAT_05804140;
  if ((bRam0000000005c3abc7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_0577d760);
    FUN_012d0dc8(PTR_DAT_0579e830);
    FUN_012d0dc8(PTR_DAT_057a3980);
    FUN_012d0dc8(PTR_DAT_0577cd00);
    FUN_012d0dc8(PTR_DAT_05804140);
    bRam0000000005c3abc7 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_057815e0;
  puVar2 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar4 + 0x10),param_1);
    *(undefined8 *)(lVar4 + 0x20) = param_2;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x20),param_2);
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x88);
    FUN_012d0d74();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_0577d760,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar6,0);
      uVar7 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (param_3 != 0) {
        UnityEngine_Transform__get_position_4092b08(param_3,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar7 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(uVar7,0,0);
          if (*(long *)(param_1 + 0x50) != 0) {
            uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar7,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x108),
                               *(undefined8 *)PTR_DAT_057874c0);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            puVar3 = PTR_DAT_057984e0;
            if (lVar6 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,lVar4,*(undefined8 *)PTR_DAT_0579e830,0);
              uVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                (uVar7,lVar6,*(undefined8 *)puVar3);
              fVar1 = _UNK_04321df8;
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(_UNK_04321df8,uVar5,uVar7,0);
              if (*(long *)(param_1 + 0x50) != 0) {
                uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x11c);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
                if (lVar6 != 0) {
                  DG_Tweening_TweenCallback_float____ctor_341f244
                            (lVar6,lVar4,*(undefined8 *)PTR_DAT_057a3980,0);
                  uVar7 = DG_Tweening_DOVirtual__Float_1edbb8c(0,0x3f800000,uVar8,lVar6,0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar1,uVar5,uVar7,0);
                  if (*(long *)(param_1 + 0x50) != 0) {
                    fVar9 = *(float *)(*(long *)(param_1 + 0x50) + 0x11c);
                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if (lVar6 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar6,lVar4,*(undefined8 *)PTR_DAT_0577cd00,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (fVar9 + fVar1,uVar5,lVar6,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

