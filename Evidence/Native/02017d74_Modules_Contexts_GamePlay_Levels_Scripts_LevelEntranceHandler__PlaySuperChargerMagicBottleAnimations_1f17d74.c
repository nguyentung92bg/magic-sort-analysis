/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$PlaySuperChargerMagicBottleAnimations
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlaySuperChargerMagicBottleAnimations (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, int32_t bottleRowCount, int32_t highestBottleCountInOneRow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$PlaySuperChargerMagicBottleAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlaySuperChargerMagicBottleAnimations
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, int32_t bottleRowCount,
   int32_t highestBottleCountInOneRow, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlaySuperChargerMagicBottleAnimations_1f17d74
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_70 [4];
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar1 = PTR_DAT_0576c200;
  if ((*(long *)(param_4 + 0x40) == 0) || (lVar4 = *(long *)(param_4 + 0x38), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar9 = *(long *)(*(long *)(param_4 + 0x40) + 0x68);
  if ((bRam0000000005c2970a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2970a = 1;
  }
  uVar11 = *(undefined8 *)(lVar4 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Equality_407f288(uVar11,0,0);
  puVar1 = PTR_DAT_057720b8;
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  lVar4 = *(long *)(lVar4 + 0x40);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c29b56 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05814158);
    FUN_012d0dc8(PTR_DAT_0575ec10);
    FUN_012d0dc8(PTR_DAT_057b5ef8);
    FUN_012d0dc8(PTR_DAT_05772298);
    FUN_012d0dc8(PTR_DAT_057cca00);
    FUN_012d0dc8(PTR_DAT_057720b8);
    bRam0000000005c29b56 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar6 == 0) goto LAB_0224c3cc;
  System_Object___ctor_23dfe5c(lVar6,0);
  plVar12 = (long *)(lVar6 + 0x10);
  *plVar12 = lVar9;
  FUN_012d0d74(plVar12,lVar9);
  *(long *)(lVar6 + 0x18) = lVar4;
  FUN_012d0d74((long *)(lVar6 + 0x18),lVar4);
  *(undefined4 *)(lVar6 + 0x44) = param_5;
  if ((*plVar12 == 0) ||
     (plVar12 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (*plVar12,0), plVar12 == (long *)0x0)) goto LAB_0224c3cc;
  lVar9 = *plVar12;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_0224bfb4;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_0575a2d8,4);
LAB_0224bfb4:
  uVar13 = (*(code *)*puVar7)(plVar12,puVar7[1]);
  *(undefined4 *)(lVar6 + 0x38) = uVar13;
  *(undefined4 *)(lVar6 + 0x3c) = param_2;
  *(undefined4 *)(lVar6 + 0x40) = param_3;
  if (*(long *)(lVar4 + 0x18) == 0) goto LAB_0224c3cc;
  Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowViewAnimationConfig__GetPillowOffsetForBottleCountInRow_214c3ec
            (auStack_70,*(long *)(lVar4 + 0x18),param_6);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  lVar9 = *(long *)PTR_DAT_05805c10;
  puVar7 = *(undefined8 **)(lVar9 + 0xb8);
  uVar13 = *(undefined4 *)(puVar7 + 1);
  *(undefined8 *)(lVar6 + 0x20) = *puVar7;
  *(undefined4 *)(lVar6 + 0x28) = uVar13;
  puVar7 = *(undefined8 **)(lVar9 + 0xb8);
  uVar13 = *(undefined4 *)(puVar7 + 1);
  *(undefined8 *)(lVar6 + 0x2c) = *puVar7;
  *(undefined4 *)(lVar6 + 0x34) = uVar13;
  if (*(int *)(lVar6 + 0x44) == 3) {
    lVar9 = *(long *)(lVar4 + 0x18);
    if (lVar9 == 0) goto LAB_0224c3cc;
    uVar13 = *(undefined4 *)(lVar9 + 0x8c);
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar9 + 0x84);
    *(undefined4 *)(lVar6 + 0x28) = uVar13;
    lVar9 = *(long *)(lVar4 + 0x18);
    if (lVar9 == 0) goto LAB_0224c3cc;
    uStack_60 = *(undefined8 *)(lVar9 + 0x90);
    uStack_58 = *(undefined4 *)(lVar9 + 0x98);
LAB_0224c088:
    *(undefined8 *)(lVar6 + 0x2c) = uStack_60;
    *(undefined4 *)(lVar6 + 0x34) = uStack_58;
  }
  else if (*(int *)(lVar6 + 0x44) == 2) {
    *(undefined8 *)(lVar6 + 0x20) = uStack_6c;
    *(undefined4 *)(lVar6 + 0x28) = uStack_64;
    goto LAB_0224c088;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar11 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_05818d48;
  if (lVar9 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar6,*(undefined8 *)PTR_DAT_05814158,0);
    DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0(uVar11,lVar9,*(undefined8 *)puVar2)
    ;
    uVar8 = UnityEngine_Component__get_transform_408b444(lVar4,0);
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar8 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                        (*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                         *(undefined4 *)(lVar6 + 0x28),
                         *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x40),uVar8,0,0);
      puVar2 = PTR_DAT_057874c0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar8,*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x48),
                           *(undefined8 *)PTR_DAT_057874c0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar11,uVar8,0);
        lVar9 = *(long *)(lVar4 + 0x18);
        if (lVar9 != 0) {
          uVar8 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                            (*(undefined4 *)(lVar9 + 0x24),*(undefined4 *)(lVar9 + 0x28),
                             *(undefined4 *)(lVar9 + 0x2c),*(undefined4 *)(lVar9 + 0x30),
                             *(undefined8 *)(lVar4 + 0x28),0,0);
          puVar3 = PTR_DAT_057bcc80;
          if (*(long *)(lVar4 + 0x18) != 0) {
            uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar8,*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x38),
                               *(undefined8 *)PTR_DAT_057bcc80);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar11,uVar8,0);
            if (*(long *)(lVar4 + 0x20) != 0) {
              uVar8 = Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayEnterAnimation_214a504
                                ();
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar11,uVar8,0);
              if (*(long *)(lVar4 + 0x18) != 0) {
                uVar13 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x80);
                lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar9 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar9,lVar6,*(undefined8 *)PTR_DAT_0575ec10,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar13,uVar11,lVar9,0)
                  ;
                  if (*(long *)(lVar4 + 0x18) != 0) {
                    uVar13 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x78);
                    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar9 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar9,lVar6,*(undefined8 *)PTR_DAT_057b5ef8,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar13,uVar11,lVar9,0);
                      if (*(long *)(lVar4 + 0x18) != 0) {
                        uVar13 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x7c);
                        uVar8 = UnityEngine_Component__get_transform_408b444(lVar4,0);
                        if (*(long *)(lVar4 + 0x18) != 0) {
                          fVar14 = (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar6 + 0x2c) >> 0x20);
                          uVar8 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                                            (CONCAT44(fVar14,(float)*(undefined8 *)(lVar6 + 0x20) +
                                                             (float)*(undefined8 *)(lVar6 + 0x2c)),
                                             fVar14,*(float *)(lVar6 + 0x28) +
                                                    *(float *)(lVar6 + 0x34),
                                             *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x50),uVar8,0
                                             ,0);
                          if (*(long *)(lVar4 + 0x18) != 0) {
                            uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                              (uVar8,*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x58)
                                               ,*(undefined8 *)puVar2);
                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                      (uVar13,uVar11,uVar8,0);
                            if (*(long *)(lVar4 + 0x18) != 0) {
                              uVar13 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x7c);
                              lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                              if (lVar9 != 0) {
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar9,lVar6,*(undefined8 *)PTR_DAT_05772298,0);
                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                          (uVar13,uVar11,lVar9,0);
                                lVar9 = *(long *)(lVar4 + 0x18);
                                if (lVar9 != 0) {
                                  uVar13 = *(undefined4 *)(lVar9 + 0x7c);
                                  uVar8 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                                                    (*(undefined4 *)(lVar9 + 0x60),
                                                     *(undefined4 *)(lVar9 + 100),
                                                     *(undefined4 *)(lVar9 + 0x68),
                                                     *(undefined4 *)(lVar9 + 0x6c),
                                                     *(undefined8 *)(lVar4 + 0x28),0,0);
                                  if (*(long *)(lVar4 + 0x18) != 0) {
                                    uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                      (uVar8,*(undefined8 *)
                                                              (*(long *)(lVar4 + 0x18) + 0x70),
                                                       *(undefined8 *)puVar3);
                                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                              (uVar13,uVar11,uVar8,0);
                                    if (*(long *)(lVar4 + 0x18) != 0) {
                                      uVar13 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x80);
                                      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                      if (lVar4 != 0) {
                                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                                  (lVar4,lVar6,*(undefined8 *)PTR_DAT_057cca00,0);
                                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                  (uVar13,uVar11,lVar4,0);
                                        return uVar11;
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
LAB_0224c3cc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

