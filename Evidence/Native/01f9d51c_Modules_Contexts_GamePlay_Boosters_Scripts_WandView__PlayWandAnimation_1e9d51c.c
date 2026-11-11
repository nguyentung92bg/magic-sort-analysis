/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$PlayWandAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Boosters_Scripts_WandView__PlayWandAnimation (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, UnityEngine_Vector3_o hitPosition, System_Action_o* revealAction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$PlayWandAnimation
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Boosters_Scripts_WandView__PlayWandAnimation
   (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, UnityEngine_Vector3_o
   hitPosition, System_Action_o* revealAction, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Boosters_Scripts_WandView__PlayWandAnimation_1e9d51c
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  
  if ((bRam0000000005c2818f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580e4b0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0577c338);
    FUN_012d0dc8(PTR_DAT_05766250);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05811d88);
    FUN_012d0dc8(PTR_DAT_05772458);
    FUN_012d0dc8(PTR_DAT_057fecd8);
    FUN_012d0dc8(PTR_DAT_057ea400);
    FUN_012d0dc8(PTR_DAT_058059f0);
    FUN_012d0dc8(PTR_DAT_057fd468);
    bRam0000000005c2818f = 1;
  }
  *(bool *)(param_4 + 0x5c) = (float)param_2 < 0.0;
  if ((*(long *)(param_4 + 0x40) != 0) &&
     (lVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x40),0),
     puVar3 = PTR_DAT_057b8520, puVar2 = PTR_DAT_057815e0, lVar4 != 0)) {
    UnityEngine_Transform__set_position_4092ba8(param_1,param_2,param_3,lVar4,0);
    Modules_Contexts_GamePlay_Boosters_Scripts_WandView__ResetAnimationState_1e9d9d8(param_4);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar2 = PTR_DAT_05766250;
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar3);
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
      if (*(long *)(param_4 + 0x18) != 0) {
        UnityEngine_Animation__Play_1f7a100
                  (*(long *)(param_4 + 0x18),*(undefined8 *)PTR_DAT_057fd468,0);
        puVar2 = PTR_DAT_057606c8;
        if (*(long *)(param_4 + 0x20) != 0) {
          uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x20) + 0x20);
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
          if (lVar4 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar4,param_4,*(undefined8 *)PTR_DAT_057fecd8,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar12,uVar5,lVar4,0);
            if (*(long *)(param_4 + 0x20) != 0) {
              uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x20) + 0x20);
              uVar6 = Modules_Contexts_GamePlay_Boosters_Scripts_WandView__PlayParticleMoveToTargetAnimation_1e9daf8
                                (param_1,param_2,param_3,param_4);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar12,uVar5,uVar6,0);
              if (*(long *)(param_4 + 0x20) != 0) {
                uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x20) + 0x54);
                uVar6 = *(undefined8 *)(param_4 + 0x48);
                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                puVar3 = PTR_DAT_0577c338;
                if (lVar4 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar4,uVar6,*(undefined8 *)PTR_DAT_0577c338,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar12,uVar5,lVar4,0);
                  lVar4 = *(long *)(param_4 + 0x20);
                  if (lVar4 != 0) {
                    lVar1 = 0x24;
                    if (*(char *)(param_4 + 0x5c) != '\0') {
                      lVar1 = 0x28;
                    }
                    fVar9 = *(float *)(lVar4 + 0x20);
                    fVar10 = *(float *)(lVar4 + 0x50);
                    uVar6 = *(undefined8 *)(param_4 + 0x40);
                    fVar11 = *(float *)(lVar4 + lVar1);
                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if (lVar4 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,uVar6,*(undefined8 *)puVar3,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (fVar9 + fVar11 + fVar10,uVar5,lVar4,0);
                      lVar4 = *(long *)(param_4 + 0x20);
                      if (lVar4 != 0) {
                        lVar1 = 0x24;
                        if (*(char *)(param_4 + 0x5c) != '\0') {
                          lVar1 = 0x28;
                        }
                        fVar9 = *(float *)(lVar4 + 0x20);
                        fVar10 = *(float *)(lVar4 + 0x48);
                        fVar11 = *(float *)(lVar4 + lVar1);
                        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                        if (lVar4 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar4,param_5,*(undefined8 *)PTR_DAT_0580e4b0,0);
                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                    (fVar9 + fVar11 + fVar10,uVar5,lVar4,0);
                          puVar3 = PTR_DAT_05772458;
                          lVar4 = *(long *)(param_4 + 0x20);
                          if (lVar4 != 0) {
                            lVar7 = *(long *)PTR_DAT_05772458;
                            lVar1 = 0x24;
                            if (*(char *)(param_4 + 0x5c) != '\0') {
                              lVar1 = 0x28;
                            }
                            fVar9 = *(float *)(lVar4 + 0x20);
                            fVar11 = *(float *)(lVar4 + lVar1);
                            fVar10 = *(float *)(lVar4 + 0x4c);
                            if (*(int *)(lVar7 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                              lVar7 = *(long *)puVar3;
                            }
                            lVar4 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                            if (lVar4 == 0) {
                              if (*(int *)(lVar7 + 0xe0) == 0) {
                                thunk_FUN_0130472c();
                                lVar7 = *(long *)puVar3;
                              }
                              uVar6 = **(undefined8 **)(lVar7 + 0xb8);
                              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                              if (lVar4 == 0) goto LAB_01f9d9d4;
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar4,uVar6,*(undefined8 *)PTR_DAT_05811d88,0);
                              plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                              *plVar8 = lVar4;
                              FUN_012d0d74(plVar8,lVar4);
                            }
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (fVar9 + fVar11 + fVar10,uVar5,lVar4,0);
                            lVar4 = *(long *)(param_4 + 0x20);
                            if (lVar4 != 0) {
                              lVar1 = 0x24;
                              if (*(char *)(param_4 + 0x5c) != '\0') {
                                lVar1 = 0x28;
                              }
                              fVar9 = *(float *)(lVar4 + 0x20);
                              fVar10 = *(float *)(lVar4 + 0x34);
                              fVar11 = *(float *)(lVar4 + lVar1);
                              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                              if (lVar4 != 0) {
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar4,param_4,*(undefined8 *)PTR_DAT_057ea400,0);
                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                          (fVar9 + fVar11 + fVar10,uVar5,lVar4,0);
                                uVar6 = Modules_Contexts_GamePlay_Boosters_Scripts_WandView__GetGameObjectHideTime_1e9d4d4
                                                  (param_4);
                                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                if (lVar4 != 0) {
                                  DG_Tweening_TweenCallback___ctor_1ed6da8
                                            (lVar4,param_4,*(undefined8 *)PTR_DAT_058059f0,0);
                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                            (uVar6,uVar5,lVar4,0);
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
            }
          }
        }
      }
    }
  }
LAB_01f9d9d4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

