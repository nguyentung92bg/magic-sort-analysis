/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$PlayUnlockAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__PlayUnlockAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, UnityEngine_Vector3_o targetPosition, UnityEngine_Vector3_o keyPosition, float lockPositionY, UnityEngine_Vector3_o bottleRootPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o hideSorting, float revealDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$PlayUnlockAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__PlayUnlockAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, UnityEngine_Vector3_o
   targetPosition, UnityEngine_Vector3_o keyPosition, float lockPositionY, UnityEngine_Vector3_o
   bottleRootPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o hideSorting, float
   revealDelay, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__PlayUnlockAnimation_2f53658
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,long *param_8,undefined8 param_9,
          undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  puVar1 = PTR_DAT_057cc768;
  if ((bRam0000000005c30893 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_057a4e50);
    FUN_012d0dc8(PTR_DAT_05799720);
    FUN_012d0dc8(PTR_DAT_057e2b10);
    FUN_012d0dc8(PTR_DAT_0579ee30);
    FUN_012d0dc8(PTR_DAT_057bd3b8);
    FUN_012d0dc8(PTR_DAT_057cc768);
    FUN_012d0dc8(PTR_DAT_05771810);
    bRam0000000005c30893 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = (long)param_8;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_8);
    *(undefined8 *)(lVar3 + 0x18) = param_9;
    *(undefined8 *)(lVar3 + 0x20) = param_10;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x18),0);
    *(undefined4 *)(lVar3 + 0x28) = param_4;
    *(undefined4 *)(lVar3 + 0x2c) = param_5;
    *(undefined4 *)(lVar3 + 0x30) = param_6;
    *(undefined4 *)(lVar3 + 0x34) = param_7;
    *(undefined4 *)(lVar3 + 0x38) = param_1;
    *(undefined4 *)(lVar3 + 0x3c) = param_2;
    *(undefined4 *)(lVar3 + 0x40) = param_3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_05818d48;
    if (lVar5 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_0579ee30,0);
      DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                (uVar4,lVar5,*(undefined8 *)puVar2);
      if (param_8[4] != 0) {
        fVar10 = *(float *)(param_8[4] + 0xd4);
        uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__MovePrepareAnim_2f5425c
                          (uStack0000000000000000,uStack0000000000000004,in_stack_00000008,param_8);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10 + 0.0,uVar4,uVar6,0);
        lVar5 = param_8[4];
        if (lVar5 != 0) {
          fVar10 = *(float *)(lVar5 + 0x68);
          uVar6 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                            (0x3f800000,0x3f800000,0x3f800000,0,*(undefined4 *)(lVar5 + 0x6c),
                             param_8[7],0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10 + 0.0,uVar4,uVar6,0);
          lVar5 = param_8[4];
          if (lVar5 != 0) {
            fVar10 = *(float *)(lVar5 + 0x68);
            uVar6 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                               *(undefined4 *)(lVar5 + 0x6c),param_8[6],0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10 + 0.0,uVar4,uVar6,0);
            if (param_8[4] != 0) {
              fVar10 = *(float *)(param_8[4] + 0x48);
              uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SqueezePrepareAnim_2f542f8
                                (param_8);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10 + 0.0,uVar4,uVar6,0);
              if (param_8[4] != 0) {
                fVar10 = *(float *)(param_8[4] + 0x74);
                uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SlowDownAnim_2f54368
                                  (param_8);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10 + 0.0,uVar4,uVar6,0);
                if (param_8[4] != 0) {
                  fVar10 = *(float *)(param_8[4] + 0x90);
                  uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__StretchBackAnim_2f543d8
                                    (param_8);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10 + 0.0,uVar4,uVar6,0);
                  if (param_8[4] != 0) {
                    fVar10 = *(float *)(param_8[4] + 0xb0);
                    uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__RotationAnim_2f54448
                                      (param_8);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10 + 0.0,uVar4,uVar6,0);
                    puVar2 = PTR_DAT_05771810;
                    if (param_8[4] != 0) {
                      uVar9 = *(undefined4 *)(param_8[4] + 0xd0);
                      lVar5 = *(long *)PTR_DAT_05771810;
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
                        if (lVar8 == 0) goto LAB_03053c60;
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar8,uVar6,*(undefined8 *)PTR_DAT_057a4e50,0);
                        plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                        *plVar7 = lVar8;
                        FUN_012d0d74(plVar7,lVar8);
                      }
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar9,uVar4,lVar8,0);
                      if (param_8[4] != 0) {
                        lVar5 = *(long *)puVar2;
                        fVar10 = *(float *)(param_8[4] + 0x104);
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                            lVar5 = *(long *)puVar2;
                          }
                          uVar6 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                          if (lVar8 == 0) goto LAB_03053c60;
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar8,uVar6,*(undefined8 *)PTR_DAT_05799720,0);
                          plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                          *plVar7 = lVar8;
                          FUN_012d0d74(plVar7,lVar8);
                        }
                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                  (fVar10 + 0.0,uVar4,lVar8,0);
                        if (param_8[4] != 0) {
                          fVar10 = *(float *)(param_8[4] + 0x1c);
                          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                          if (lVar5 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar5,lVar3,*(undefined8 *)PTR_DAT_057bd3b8,0);
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (fVar10 + 0.0,uVar4,lVar5,0);
                            if (param_8[4] != 0) {
                              fVar10 = *(float *)(param_8[4] + 0x108);
                              uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__HideAnim_2f546c8
                                                (param_8);
                              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                        (fVar10 + 0.0,uVar4,uVar6,0);
                              lVar3 = param_8[4];
                              if (lVar3 != 0) {
                                fVar10 = *(float *)(lVar3 + 0x128);
                                uVar6 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                                  (0,*(undefined4 *)(lVar3 + 300),param_8[6],0);
                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                          (fVar10 + 0.0,uVar4,uVar6,0);
                                if (param_8[4] != 0) {
                                  lVar3 = *(long *)puVar2;
                                  fVar10 = *(float *)(param_8[4] + 0x100);
                                  if (*(int *)(lVar3 + 0xe0) == 0) {
                                    thunk_FUN_0130472c();
                                    lVar3 = *(long *)puVar2;
                                  }
                                  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
                                  if (lVar5 == 0) {
                                    if (*(int *)(lVar3 + 0xe0) == 0) {
                                      thunk_FUN_0130472c();
                                      lVar3 = *(long *)puVar2;
                                    }
                                    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
                                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                    if (lVar5 == 0) goto LAB_03053c60;
                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                              (lVar5,uVar6,*(undefined8 *)PTR_DAT_057e2b10,0);
                                    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
                                    *plVar7 = lVar5;
                                    FUN_012d0d74(plVar7,lVar5);
                                  }
                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                            (fVar10 + 0.0,uVar4,lVar5,0);
                                  if (param_8[4] != 0) {
                                    fVar10 = *(float *)(param_8[4] + 0xf8);
                                    uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__ScaleAnim_2f54740
                                                      (param_8);
                                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                              (fVar10 + 0.0,uVar4,uVar6,0);
                                    if (param_8[4] != 0) {
                                      fVar10 = *(float *)(param_8[4] + 0xd8);
                                      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                      if (lVar3 != 0) {
                                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                                  (lVar3,param_8,*(undefined8 *)(*param_8 + 0x1d0),0
                                                  );
                                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                  (fVar10 + 0.0,uVar4,lVar3,0);
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
  }
LAB_03053c60:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

