/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlot$$MoveSlotItemStageCompletedParticlesToTarget
DG_Tweening_Tween_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__MoveSlotItemStageCompletedParticlesToTarget (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* __this, UnityEngine_Transform_o* targetTransform, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlot$$MoveSlotItemStageCompletedParticlesToTarget
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__MoveSlotItemStageCompletedParticlesToTarget
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* __this,
   UnityEngine_Transform_o* targetTransform, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__MoveSlotItemStageCompletedParticlesToTarget_218adf4
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_057815e0;
  lVar6 = *(long *)(param_4 + 0x28);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c29d3e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057782c8);
    FUN_012d0dc8(PTR_DAT_057c2de8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c29d3e = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar6,*(undefined8 *)PTR_DAT_057782c8,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar3,lVar4,0);
    if ((*(long *)(lVar6 + 0x50) != 0) &&
       (uVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar6 + 0x50),0),
       param_5 != 0)) {
      fVar7 = (float)UnityEngine_Transform__get_position_4092b08(param_5,0);
      lVar4 = *(long *)(lVar6 + 0x58);
      if (lVar4 != 0) {
        uVar5 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                          (fVar7 - *(float *)(lVar4 + 0x174),param_2 - *(float *)(lVar4 + 0x178),
                           param_3 - *(float *)(lVar4 + 0x17c),*(undefined4 *)(lVar4 + 0x16c),uVar5,
                           0,0);
        if (*(long *)(lVar6 + 0x58) != 0) {
          uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar5,*(undefined8 *)(*(long *)(lVar6 + 0x58) + 0x180),
                             *(undefined8 *)PTR_DAT_057874c0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar5,0);
          if ((*(long *)(lVar6 + 0x58) != 0) && (*(long *)(lVar6 + 0x50) != 0)) {
            fVar7 = *(float *)(*(long *)(lVar6 + 0x58) + 0x16c);
            uVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar6 + 0x50),0);
            UnityEngine_Transform__get_position_4092b08(param_5,0);
            if (*(long *)(lVar6 + 0x58) != 0) {
              fVar7 = fVar7 + 0.0;
              uVar5 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(uVar5,0,0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar7,uVar3,uVar5,0);
              if (*(long *)(lVar6 + 0x58) != 0) {
                fVar8 = *(float *)(*(long *)(lVar6 + 0x58) + 0x170);
                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar4,lVar6,*(undefined8 *)PTR_DAT_057c2de8,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                            (fVar7 + fVar8,uVar3,lVar4,0);
                  return uVar3;
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

