/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$PlayMagicBottleAnimations
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlayMagicBottleAnimations (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, int32_t bottleRowCount, int32_t highestBottleCountInOneRow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$PlayMagicBottleAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlayMagicBottleAnimations
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, int32_t bottleRowCount,
   int32_t highestBottleCountInOneRow, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlayMagicBottleAnimations_1f17c78
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_70 [4];
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar1 = PTR_DAT_057720b8;
  lVar4 = *(long *)(param_4 + 0x28);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar9 = *(long *)(lVar4 + 0x20);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *(long *)(lVar4 + 0x28);
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
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 == 0) goto LAB_0224c3cc;
  System_Object___ctor_23dfe5c(lVar5,0);
  plVar12 = (long *)(lVar5 + 0x10);
  *plVar12 = lVar4;
  FUN_012d0d74(plVar12,lVar4);
  *(long *)(lVar5 + 0x18) = lVar9;
  FUN_012d0d74((long *)(lVar5 + 0x18),lVar9);
  *(undefined4 *)(lVar5 + 0x44) = param_5;
  if ((*plVar12 == 0) ||
     (plVar12 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (*plVar12,0), plVar12 == (long *)0x0)) goto LAB_0224c3cc;
  lVar4 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 4) * 0x10 + 0x138);
        goto LAB_0224bfb4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_0575a2d8,4);
LAB_0224bfb4:
  uVar13 = (*(code *)*puVar6)(plVar12,puVar6[1]);
  *(undefined4 *)(lVar5 + 0x38) = uVar13;
  *(undefined4 *)(lVar5 + 0x3c) = param_2;
  *(undefined4 *)(lVar5 + 0x40) = param_3;
  if (*(long *)(lVar9 + 0x18) == 0) goto LAB_0224c3cc;
  Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowViewAnimationConfig__GetPillowOffsetForBottleCountInRow_214c3ec
            (auStack_70,*(long *)(lVar9 + 0x18),param_6);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  lVar4 = *(long *)PTR_DAT_05805c10;
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  uVar13 = *(undefined4 *)(puVar6 + 1);
  *(undefined8 *)(lVar5 + 0x20) = *puVar6;
  *(undefined4 *)(lVar5 + 0x28) = uVar13;
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  uVar13 = *(undefined4 *)(puVar6 + 1);
  *(undefined8 *)(lVar5 + 0x2c) = *puVar6;
  *(undefined4 *)(lVar5 + 0x34) = uVar13;
  if (*(int *)(lVar5 + 0x44) == 3) {
    lVar4 = *(long *)(lVar9 + 0x18);
    if (lVar4 == 0) goto LAB_0224c3cc;
    uVar13 = *(undefined4 *)(lVar4 + 0x8c);
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar4 + 0x84);
    *(undefined4 *)(lVar5 + 0x28) = uVar13;
    lVar4 = *(long *)(lVar9 + 0x18);
    if (lVar4 == 0) goto LAB_0224c3cc;
    uStack_60 = *(undefined8 *)(lVar4 + 0x90);
    uStack_58 = *(undefined4 *)(lVar4 + 0x98);
LAB_0224c088:
    *(undefined8 *)(lVar5 + 0x2c) = uStack_60;
    *(undefined4 *)(lVar5 + 0x34) = uStack_58;
  }
  else if (*(int *)(lVar5 + 0x44) == 2) {
    *(undefined8 *)(lVar5 + 0x20) = uStack_6c;
    *(undefined4 *)(lVar5 + 0x28) = uStack_64;
    goto LAB_0224c088;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_05818d48;
  if (lVar4 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar5,*(undefined8 *)PTR_DAT_05814158,0);
    DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0(uVar7,lVar4,*(undefined8 *)puVar2);
    uVar8 = UnityEngine_Component__get_transform_408b444(lVar9,0);
    if (*(long *)(lVar9 + 0x18) != 0) {
      uVar8 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                        (*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                         *(undefined4 *)(lVar5 + 0x28),
                         *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x40),uVar8,0,0);
      puVar2 = PTR_DAT_057874c0;
      if (*(long *)(lVar9 + 0x18) != 0) {
        uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar8,*(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x48),
                           *(undefined8 *)PTR_DAT_057874c0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar8,0);
        lVar4 = *(long *)(lVar9 + 0x18);
        if (lVar4 != 0) {
          uVar8 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                            (*(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x28),
                             *(undefined4 *)(lVar4 + 0x2c),*(undefined4 *)(lVar4 + 0x30),
                             *(undefined8 *)(lVar9 + 0x28),0,0);
          puVar3 = PTR_DAT_057bcc80;
          if (*(long *)(lVar9 + 0x18) != 0) {
            uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar8,*(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x38),
                               *(undefined8 *)PTR_DAT_057bcc80);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar8,0);
            if (*(long *)(lVar9 + 0x20) != 0) {
              uVar8 = Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayEnterAnimation_214a504
                                ();
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar8,0);
              if (*(long *)(lVar9 + 0x18) != 0) {
                uVar13 = *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x80);
                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar4,lVar5,*(undefined8 *)PTR_DAT_0575ec10,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar13,uVar7,lVar4,0);
                  if (*(long *)(lVar9 + 0x18) != 0) {
                    uVar13 = *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x78);
                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar4 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar4,lVar5,*(undefined8 *)PTR_DAT_057b5ef8,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar13,uVar7,lVar4,0);
                      if (*(long *)(lVar9 + 0x18) != 0) {
                        uVar13 = *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x7c);
                        uVar8 = UnityEngine_Component__get_transform_408b444(lVar9,0);
                        if (*(long *)(lVar9 + 0x18) != 0) {
                          fVar14 = (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar5 + 0x2c) >> 0x20);
                          uVar8 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                                            (CONCAT44(fVar14,(float)*(undefined8 *)(lVar5 + 0x20) +
                                                             (float)*(undefined8 *)(lVar5 + 0x2c)),
                                             fVar14,*(float *)(lVar5 + 0x28) +
                                                    *(float *)(lVar5 + 0x34),
                                             *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x50),uVar8,0
                                             ,0);
                          if (*(long *)(lVar9 + 0x18) != 0) {
                            uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                              (uVar8,*(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x58)
                                               ,*(undefined8 *)puVar2);
                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                      (uVar13,uVar7,uVar8,0);
                            if (*(long *)(lVar9 + 0x18) != 0) {
                              uVar13 = *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x7c);
                              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                              if (lVar4 != 0) {
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar4,lVar5,*(undefined8 *)PTR_DAT_05772298,0);
                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                          (uVar13,uVar7,lVar4,0);
                                lVar4 = *(long *)(lVar9 + 0x18);
                                if (lVar4 != 0) {
                                  uVar13 = *(undefined4 *)(lVar4 + 0x7c);
                                  uVar8 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                                                    (*(undefined4 *)(lVar4 + 0x60),
                                                     *(undefined4 *)(lVar4 + 100),
                                                     *(undefined4 *)(lVar4 + 0x68),
                                                     *(undefined4 *)(lVar4 + 0x6c),
                                                     *(undefined8 *)(lVar9 + 0x28),0,0);
                                  if (*(long *)(lVar9 + 0x18) != 0) {
                                    uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                      (uVar8,*(undefined8 *)
                                                              (*(long *)(lVar9 + 0x18) + 0x70),
                                                       *(undefined8 *)puVar3);
                                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                              (uVar13,uVar7,uVar8,0);
                                    if (*(long *)(lVar9 + 0x18) != 0) {
                                      uVar13 = *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x80);
                                      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                      if (lVar4 != 0) {
                                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                                  (lVar4,lVar5,*(undefined8 *)PTR_DAT_057cca00,0);
                                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                  (uVar13,uVar7,lVar4,0);
                                        return uVar7;
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

