/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$PlayUnlockAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__PlayUnlockAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, UnityEngine_Vector3_o targetPosition, UnityEngine_Vector3_o keyPosition, float lockPositionY, UnityEngine_Vector3_o bottleRootPosition, bool isOnQuestionMark, float revealDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$PlayUnlockAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__PlayUnlockAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this,
   UnityEngine_Vector3_o targetPosition, UnityEngine_Vector3_o keyPosition, float lockPositionY,
   UnityEngine_Vector3_o bottleRootPosition, bool isOnQuestionMark, float revealDelay, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__PlayUnlockAnimation_230cda8
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,long *param_8,ulong param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  float in_stack_00000010;
  
  puVar2 = PTR_DAT_05780808;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240cd64 with catch @ 0240cdac
                       catch(type#2 @ 00000000) { ... } // from try @ 0240cd98 with catch @ 0240cdac
                        */
  if ((bRam0000000005c2a680 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_058034a8);
    FUN_012d0dc8(PTR_DAT_057c14c0);
    FUN_012d0dc8(PTR_DAT_057b61b8);
    FUN_012d0dc8(PTR_DAT_057dbce8);
    FUN_012d0dc8(PTR_DAT_05794cb8);
    FUN_012d0dc8(PTR_DAT_057bfba0);
    FUN_012d0dc8(PTR_DAT_057acce8);
    FUN_012d0dc8(PTR_DAT_05780808);
    FUN_012d0dc8(PTR_DAT_057a09d8);
    FUN_012d0dc8(PTR_DAT_057c42c8);
    bRam0000000005c2a680 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView___c__DisplayClass19_0___ctor_2607350
              (lVar3,0);
    *(long *)(lVar3 + 0x10) = (long)param_8;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_8);
    *(undefined4 *)(lVar3 + 0x18) = param_4;
    *(undefined4 *)(lVar3 + 0x1c) = param_5;
    *(undefined4 *)(lVar3 + 0x20) = param_6;
    *(undefined4 *)(lVar3 + 0x24) = param_7;
    *(undefined4 *)(lVar3 + 0x28) = param_1;
    *(undefined4 *)(lVar3 + 0x2c) = param_2;
    *(undefined4 *)(lVar3 + 0x30) = param_3;
    if ((param_9 & 1) != 0) {
      DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0(0,0,param_8[5],0);
    }
    puVar1 = PTR_DAT_057606c8;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_05818d48;
    if (lVar5 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_057b61b8,0);
      DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                (uVar4,lVar5,*(undefined8 *)puVar2);
      fVar9 = 0.0;
      if ((param_9 & 1) != 0) {
        uVar6 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (0x3f800000,_UNK_0434ccf4,param_8[5],0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar6,0);
        fVar9 = in_stack_00000010 + 0.0;
      }
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_057dbce8,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar9,uVar4,lVar5,0);
        if ((param_8[10] != 0) && (lVar5 = *(long *)(param_8[10] + 0x18), lVar5 != 0)) {
          fVar10 = *(float *)(lVar5 + 0x48);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar5,param_8,*(undefined8 *)PTR_DAT_057c42c8,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                      (fVar9 + fVar10,uVar4,lVar5,0);
            if ((param_8[10] != 0) && (lVar5 = *(long *)(param_8[10] + 0x18), lVar5 != 0)) {
              fVar10 = *(float *)(lVar5 + 0x48);
              uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__MovePrepareAnim_230dae8
                                (uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                                 param_8);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar9 + fVar10,uVar4,uVar6,0);
              puVar2 = PTR_DAT_057a09d8;
              if ((param_8[10] != 0) && (lVar5 = *(long *)(param_8[10] + 0x18), lVar5 != 0)) {
                fVar10 = *(float *)(lVar5 + 0x78);
                lVar5 = *(long *)PTR_DAT_057a09d8;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar5 = *(long *)puVar2;
                }
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                    lVar5 = *(long *)puVar2;
                  }
                  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar8 == 0) goto LAB_0240d370;
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar8,uVar6,*(undefined8 *)PTR_DAT_058034a8,0);
                  plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                  *plVar7 = lVar8;
                  FUN_012d0d74(plVar7,lVar8);
                }
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                          (fVar9 + fVar10,uVar4,lVar8,0);
                if ((param_8[10] != 0) && (lVar5 = *(long *)(param_8[10] + 0x18), lVar5 != 0)) {
                  fVar10 = *(float *)(lVar5 + 0x2c);
                  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar5 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar5,lVar3,*(undefined8 *)PTR_DAT_05794cb8,0);
                    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                              (fVar9 + fVar10,uVar4,lVar5,0);
                    if ((param_8[10] != 0) && (lVar5 = *(long *)(param_8[10] + 0x18), lVar5 != 0)) {
                      fVar10 = *(float *)(lVar5 + 0x1c);
                      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      if (lVar5 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar5,lVar3,*(undefined8 *)PTR_DAT_057bfba0,0);
                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                  (fVar9 + fVar10,uVar4,lVar5,0);
                        if ((param_8[10] != 0) &&
                           (lVar5 = *(long *)(param_8[10] + 0x18), lVar5 != 0)) {
                          fVar10 = *(float *)(lVar5 + 0x68);
                          uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__RotateAnim_230db90
                                            (param_8);
                          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                    (fVar9 + fVar10,uVar4,uVar6,0);
                          if ((param_8[10] != 0) &&
                             (lVar5 = *(long *)(param_8[10] + 0x18), lVar5 != 0)) {
                            lVar8 = *(long *)puVar2;
                            fVar10 = *(float *)(lVar5 + 0x74);
                            if (*(int *)(lVar8 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                              lVar8 = *(long *)puVar2;
                            }
                            lVar5 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                            if (lVar5 == 0) {
                              if (*(int *)(lVar8 + 0xe0) == 0) {
                                thunk_FUN_0130472c();
                                lVar8 = *(long *)puVar2;
                              }
                              uVar6 = **(undefined8 **)(lVar8 + 0xb8);
                              lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                              if (lVar5 == 0) goto LAB_0240d370;
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar5,uVar6,*(undefined8 *)PTR_DAT_057c14c0,0);
                              plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                              *plVar7 = lVar5;
                              FUN_012d0d74(plVar7,lVar5);
                            }
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (fVar9 + fVar10,uVar4,lVar5,0);
                            if ((param_8[10] != 0) &&
                               (lVar5 = *(long *)(param_8[10] + 0x18), lVar5 != 0)) {
                              fVar10 = *(float *)(lVar5 + 0x70);
                              lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                              if (lVar5 != 0) {
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar5,lVar3,*(undefined8 *)PTR_DAT_057acce8,0);
                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                          (fVar9 + fVar10,uVar4,lVar5,0);
                                if ((param_8[10] != 0) &&
                                   (lVar3 = *(long *)(param_8[10] + 0x18), lVar3 != 0)) {
                                  fVar10 = *(float *)(lVar3 + 0x6c);
                                  uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__ScaleAnim_230dc1c
                                                    (param_8);
                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                            (fVar9 + fVar10,uVar4,uVar6,0);
                                  if ((param_8[10] != 0) &&
                                     (lVar3 = *(long *)(param_8[10] + 0x18), lVar3 != 0)) {
                                    fVar10 = *(float *)(lVar3 + 0x4c);
                                    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                    if (lVar3 != 0) {
                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                (lVar3,param_8,*(undefined8 *)(*param_8 + 0x1d0),0);
                                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                (fVar9 + fVar10,uVar4,lVar3,0);
                                      return uVar4;
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0240d370:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

