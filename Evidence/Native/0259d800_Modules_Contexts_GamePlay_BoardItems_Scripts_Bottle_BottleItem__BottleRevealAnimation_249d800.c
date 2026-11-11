/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleRevealAnimation
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleRevealAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleRevealAnimation
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleRevealAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float delay, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleRevealAnimation_249d800
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined4 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar1 = PTR_DAT_057888d0;
  lVar9 = *(long *)(param_5 + 0x50);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar14 = *(undefined4 *)(param_5 + 0x48);
  if ((bRam0000000005c2a5fc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,uVar14,0);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0577fe10);
    FUN_012d0dc8(PTR_DAT_057bc190);
    FUN_012d0dc8(PTR_DAT_057f65b8);
    FUN_012d0dc8(PTR_DAT_057c38c0);
    FUN_012d0dc8(PTR_DAT_057c1ef8);
    FUN_012d0dc8(PTR_DAT_057afbd0);
    FUN_012d0dc8(PTR_DAT_057888d0);
    FUN_012d0dc8(PTR_DAT_0576d0f0);
    FUN_012d0dc8(PTR_DAT_05798828);
    bRam0000000005c2a5fc = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057606c8;
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(lVar5 + 0x18) = lVar9;
    *(undefined4 *)(lVar5 + 0x10) = uVar14;
    FUN_012d0d74((long *)(lVar5 + 0x18),lVar9);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar5,*(undefined8 *)PTR_DAT_057c38c0,0);
      DG_Tweening_DOVirtual__DelayedCall_1edcb38(param_1,lVar6,1,0);
      if ((*(long *)(lVar9 + 0x100) != 0) && (*(long *)(lVar9 + 0x30) != 0)) {
        UnityEngine_Renderer__set_material_4082930
                  (*(long *)(lVar9 + 0x30),*(undefined8 *)(*(long *)(lVar9 + 0x100) + 0x40),0);
        if ((*(long *)(lVar9 + 0x100) != 0) && (*(long *)(lVar9 + 0x38) != 0)) {
          UnityEngine_Renderer__set_material_4082930
                    (*(long *)(lVar9 + 0x38),*(undefined8 *)(*(long *)(lVar9 + 0x100) + 0x40),0);
          if (*(long *)(lVar9 + 0x38) != 0) {
            lVar6 = UnityEngine_Renderer__get_material_40828f4(*(long *)(lVar9 + 0x38),0);
            lVar10 = *(long *)(lVar9 + 0x100);
            if ((lVar10 != 0) && (lVar6 != 0)) {
              UnityEngine_Material__SetFloat_383f1c0
                        (*(undefined4 *)(lVar10 + 0x28),lVar6,*(undefined4 *)(lVar10 + 0x18),0);
              if (*(long *)(lVar9 + 0x30) != 0) {
                lVar6 = UnityEngine_Renderer__get_material_40828f4(*(long *)(lVar9 + 0x30),0);
                lVar10 = *(long *)(lVar9 + 0x100);
                if ((lVar10 != 0) && (lVar6 != 0)) {
                  UnityEngine_Material__SetFloat_383f1c0
                            (*(undefined4 *)(lVar10 + 0x28),lVar6,*(undefined4 *)(lVar10 + 0x18),0);
                  lVar6 = *(long *)(lVar9 + 0x100);
                  if (lVar6 != 0) {
                    uVar14 = *(undefined4 *)(lVar6 + 0x24);
                    uVar11 = *(undefined4 *)(lVar6 + 0x28);
                    uVar13 = *(undefined4 *)(lVar6 + 0x20);
                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
                    puVar2 = PTR_DAT_057bc190;
                    if (lVar6 != 0) {
                      DG_Tweening_TweenCallback_float____ctor_341f244
                                (lVar6,lVar5,*(undefined8 *)PTR_DAT_057c1ef8,0);
                      uVar7 = DG_Tweening_DOVirtual__Float_1edbb8c(uVar11,lVar6,0);
                      uVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                        (param_1,uVar7,*(undefined8 *)puVar2);
                      if (*(long *)(lVar9 + 0x100) != 0) {
                        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                          (uVar7,*(undefined4 *)(*(long *)(lVar9 + 0x100) + 0x1c),
                                           *(undefined8 *)PTR_DAT_057f65b8);
                        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                        puVar3 = PTR_DAT_0577fe10;
                        puVar2 = PTR_DAT_0576c200;
                        if (lVar6 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar6,lVar5,*(undefined8 *)PTR_DAT_057afbd0,0);
                          DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                    (uVar7,lVar6,*(undefined8 *)puVar3);
                          uVar7 = *(undefined8 *)(lVar9 + 0x40);
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                          }
                          uVar8 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
                          if ((uVar8 & 1) != 0) {
                            uVar7 = *(undefined8 *)(lVar9 + 0x48);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                            }
                            uVar8 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
                            if ((uVar8 & 1) != 0) {
                              lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05798828);
                              if (lVar6 != 0) {
                                System_Object___ctor_23dfe5c(lVar6,0);
                                *(long *)(lVar6 + 0x30) = lVar5;
                                FUN_012d0d74((long *)(lVar6 + 0x30),lVar5);
                                if (*(long *)(lVar9 + 0x40) != 0) {
                                  uVar11 = UnityEngine_SpriteRenderer__get_color_4095d44
                                                     (*(long *)(lVar9 + 0x40),0);
                                  *(undefined4 *)(lVar6 + 0x10) = uVar11;
                                  *(undefined4 *)(lVar6 + 0x14) = uVar14;
                                  *(undefined4 *)(lVar6 + 0x18) = uVar13;
                                  *(undefined4 *)(lVar6 + 0x1c) = param_4;
                                  if (*(long *)(lVar9 + 0x48) != 0) {
                                    uVar11 = UnityEngine_SpriteRenderer__get_color_4095d44
                                                       (*(long *)(lVar9 + 0x48),0);
                                    *(undefined4 *)(lVar6 + 0x20) = uVar11;
                                    *(undefined4 *)(lVar6 + 0x24) = uVar14;
                                    *(undefined4 *)(lVar6 + 0x28) = uVar13;
                                    *(undefined4 *)(lVar6 + 0x2c) = param_4;
                                    if (*(long *)(lVar9 + 0x40) != 0) {
                                      UnityEngine_SpriteRenderer__set_color_4095de0
                                                (*(undefined4 *)(lVar6 + 0x10),
                                                 *(undefined4 *)(lVar6 + 0x14),
                                                 *(undefined4 *)(lVar6 + 0x18),0,
                                                 *(long *)(lVar9 + 0x40),0);
                                      if (*(long *)(lVar9 + 0x48) != 0) {
                                        UnityEngine_SpriteRenderer__set_color_4095de0
                                                  (*(undefined4 *)(lVar6 + 0x20),
                                                   *(undefined4 *)(lVar6 + 0x24),
                                                   *(undefined4 *)(lVar6 + 0x28),0,
                                                   *(long *)(lVar9 + 0x48),0);
                                        if (*(long *)(lVar9 + 0x100) != 0) {
                                          fVar12 = *(float *)(*(long *)(lVar9 + 0x100) + 0x2c);
                                          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                          if (lVar9 != 0) {
                                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                                      (lVar9,lVar6,*(undefined8 *)PTR_DAT_0576d0f0,0
                                                      );
                                            puVar1 = PTR_DAT_057815e0;
                                            if ((bRam0000000005c28460 & 1) == 0) {
                                              FUN_012d0dc8(PTR_DAT_057815e0,1,0);
                                              FUN_012d0dc8(PTR_DAT_057d6890);
                                              FUN_012d0dc8(PTR_DAT_057ca968);
                                              FUN_012d0dc8(PTR_DAT_057f1100);
                                              bRam0000000005c28460 = 1;
                                            }
                                            puVar4 = PTR_DAT_057f1100;
                                            puVar3 = PTR_DAT_057d6890;
                                            puVar2 = PTR_DAT_057ca968;
                                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                              thunk_FUN_0130472c();
                                            }
                                            DG_Tweening_DOTween__Sequence_1eda154();
                                            uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                                                            (fVar12 + (float)param_1);
                                            uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                                                            (uVar7,lVar9,*(undefined8 *)puVar3);
                                            lVar9 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                                                            (uVar7,0,1,*(undefined8 *)puVar4);
                                            uVar7 = *(undefined8 *)puVar2;
                                            if (((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0'))
                                               && (*(char *)(lVar9 + 0x100) == '\0')) {
                                              *(undefined1 *)(lVar9 + 0x9c) = 1;
                                              return;
                                            }
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_023fce28;
                            }
                          }
                          return;
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
LAB_023fce28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

