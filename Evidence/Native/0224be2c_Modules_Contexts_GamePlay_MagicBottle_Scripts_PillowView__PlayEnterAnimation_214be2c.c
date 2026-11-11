/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.PillowView$$PlayEnterAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowView__PlayEnterAnimation (Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleComponent, int32_t bottleRowCount, int32_t highestBottleCountInOneRow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.PillowView$$PlayEnterAnimation
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowView__PlayEnterAnimation
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleComponent, int32_t
   bottleRowCount, int32_t highestBottleCountInOneRow, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowView__PlayEnterAnimation_214be2c
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,long param_5,
          undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auStack_70 [4];
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar1 = PTR_DAT_057720b8;
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
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 == 0) goto LAB_0224c3cc;
  System_Object___ctor_23dfe5c(lVar4,0);
  plVar11 = (long *)(lVar4 + 0x10);
  *plVar11 = param_5;
  FUN_012d0d74(plVar11,param_5);
  *(long *)(lVar4 + 0x18) = param_4;
  FUN_012d0d74((long *)(lVar4 + 0x18),param_4);
  *(undefined4 *)(lVar4 + 0x44) = param_6;
  if ((*plVar11 == 0) ||
     (plVar11 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (*plVar11,0), plVar11 == (long *)0x0)) goto LAB_0224c3cc;
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_0224bfb4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0575a2d8,4);
LAB_0224bfb4:
  uVar12 = (*(code *)*puVar5)(plVar11,puVar5[1]);
  *(undefined4 *)(lVar4 + 0x38) = uVar12;
  *(undefined4 *)(lVar4 + 0x3c) = param_2;
  *(undefined4 *)(lVar4 + 0x40) = param_3;
  if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224c3cc;
  Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowViewAnimationConfig__GetPillowOffsetForBottleCountInRow_214c3ec
            (auStack_70,*(long *)(param_4 + 0x18),param_7);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  lVar8 = *(long *)PTR_DAT_05805c10;
  puVar5 = *(undefined8 **)(lVar8 + 0xb8);
  uVar12 = *(undefined4 *)(puVar5 + 1);
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined4 *)(lVar4 + 0x28) = uVar12;
  puVar5 = *(undefined8 **)(lVar8 + 0xb8);
  uVar12 = *(undefined4 *)(puVar5 + 1);
  *(undefined8 *)(lVar4 + 0x2c) = *puVar5;
  *(undefined4 *)(lVar4 + 0x34) = uVar12;
  if (*(int *)(lVar4 + 0x44) == 3) {
    lVar8 = *(long *)(param_4 + 0x18);
    if (lVar8 == 0) goto LAB_0224c3cc;
    uVar12 = *(undefined4 *)(lVar8 + 0x8c);
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar8 + 0x84);
    *(undefined4 *)(lVar4 + 0x28) = uVar12;
    lVar8 = *(long *)(param_4 + 0x18);
    if (lVar8 == 0) goto LAB_0224c3cc;
    uStack_60 = *(undefined8 *)(lVar8 + 0x90);
    uStack_58 = *(undefined4 *)(lVar8 + 0x98);
LAB_0224c088:
    *(undefined8 *)(lVar4 + 0x2c) = uStack_60;
    *(undefined4 *)(lVar4 + 0x34) = uStack_58;
  }
  else if (*(int *)(lVar4 + 0x44) == 2) {
    *(undefined8 *)(lVar4 + 0x20) = uStack_6c;
    *(undefined4 *)(lVar4 + 0x28) = uStack_64;
    goto LAB_0224c088;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_05818d48;
  if (lVar8 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,lVar4,*(undefined8 *)PTR_DAT_05814158,0);
    DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0(uVar6,lVar8,*(undefined8 *)puVar2);
    uVar7 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (*(long *)(param_4 + 0x18) != 0) {
      uVar7 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                        (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                         *(undefined4 *)(lVar4 + 0x28),
                         *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x40),uVar7,0,0);
      puVar2 = PTR_DAT_057874c0;
      if (*(long *)(param_4 + 0x18) != 0) {
        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar7,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x48),
                           *(undefined8 *)PTR_DAT_057874c0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
        lVar8 = *(long *)(param_4 + 0x18);
        if (lVar8 != 0) {
          uVar7 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                            (*(undefined4 *)(lVar8 + 0x24),*(undefined4 *)(lVar8 + 0x28),
                             *(undefined4 *)(lVar8 + 0x2c),*(undefined4 *)(lVar8 + 0x30),
                             *(undefined8 *)(param_4 + 0x28),0,0);
          puVar3 = PTR_DAT_057bcc80;
          if (*(long *)(param_4 + 0x18) != 0) {
            uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar7,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x38),
                               *(undefined8 *)PTR_DAT_057bcc80);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
            if (*(long *)(param_4 + 0x20) != 0) {
              uVar7 = Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayEnterAnimation_214a504
                                ();
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
              if (*(long *)(param_4 + 0x18) != 0) {
                uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x80);
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar8 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar8,lVar4,*(undefined8 *)PTR_DAT_0575ec10,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar12,uVar6,lVar8,0);
                  if (*(long *)(param_4 + 0x18) != 0) {
                    uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x78);
                    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar8 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar8,lVar4,*(undefined8 *)PTR_DAT_057b5ef8,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar12,uVar6,lVar8,0);
                      if (*(long *)(param_4 + 0x18) != 0) {
                        uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x7c);
                        uVar7 = UnityEngine_Component__get_transform_408b444(param_4,0);
                        if (*(long *)(param_4 + 0x18) != 0) {
                          fVar13 = (float)((ulong)*(undefined8 *)(lVar4 + 0x20) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar4 + 0x2c) >> 0x20);
                          uVar7 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                                            (CONCAT44(fVar13,(float)*(undefined8 *)(lVar4 + 0x20) +
                                                             (float)*(undefined8 *)(lVar4 + 0x2c)),
                                             fVar13,*(float *)(lVar4 + 0x28) +
                                                    *(float *)(lVar4 + 0x34),
                                             *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x50),uVar7
                                             ,0,0);
                          if (*(long *)(param_4 + 0x18) != 0) {
                            uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                              (uVar7,*(undefined8 *)
                                                      (*(long *)(param_4 + 0x18) + 0x58),
                                               *(undefined8 *)puVar2);
                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                      (uVar12,uVar6,uVar7,0);
                            if (*(long *)(param_4 + 0x18) != 0) {
                              uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x7c);
                              lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                              if (lVar8 != 0) {
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar8,lVar4,*(undefined8 *)PTR_DAT_05772298,0);
                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                          (uVar12,uVar6,lVar8,0);
                                lVar8 = *(long *)(param_4 + 0x18);
                                if (lVar8 != 0) {
                                  uVar12 = *(undefined4 *)(lVar8 + 0x7c);
                                  uVar7 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                                                    (*(undefined4 *)(lVar8 + 0x60),
                                                     *(undefined4 *)(lVar8 + 100),
                                                     *(undefined4 *)(lVar8 + 0x68),
                                                     *(undefined4 *)(lVar8 + 0x6c),
                                                     *(undefined8 *)(param_4 + 0x28),0,0);
                                  if (*(long *)(param_4 + 0x18) != 0) {
                                    uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                      (uVar7,*(undefined8 *)
                                                              (*(long *)(param_4 + 0x18) + 0x70),
                                                       *(undefined8 *)puVar3);
                                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                              (uVar12,uVar6,uVar7,0);
                                    if (*(long *)(param_4 + 0x18) != 0) {
                                      uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x80);
                                      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                      if (lVar8 != 0) {
                                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                                  (lVar8,lVar4,*(undefined8 *)PTR_DAT_057cca00,0);
                                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                  (uVar12,uVar6,lVar8,0);
                                        return uVar6;
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

