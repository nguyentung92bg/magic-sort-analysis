/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$PlaySlotCollectAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__PlaySlotCollectAnimation (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* targetSlot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$PlaySlotCollectAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__PlaySlotCollectAnimation
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* targetSlot, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__PlaySlotCollectAnimation_2187854
          (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
                    /* try { // try from 0228785c to 02387cbf has its CatchHandler @ 022875f0 */
  if ((bRam0000000005c29d3d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057d9b20);
    FUN_012d0dc8(PTR_DAT_057718a0);
    FUN_012d0dc8(PTR_DAT_0576dd40);
    FUN_012d0dc8(PTR_DAT_057fef70);
    FUN_012d0dc8(PTR_DAT_058057f8);
    FUN_012d0dc8(PTR_DAT_057a08e8);
    FUN_012d0dc8(PTR_DAT_057c2078);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05808f78);
    FUN_012d0dc8(PTR_DAT_0579fea8);
    FUN_012d0dc8(PTR_DAT_057c1b80);
    FUN_012d0dc8(PTR_DAT_057dbb90);
    FUN_012d0dc8(PTR_DAT_058030a8);
    bRam0000000005c29d3d = 1;
  }
  if (param_5 != 0) {
    Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__SetItem_2188150
              (param_5,param_4);
    lVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar4 != 0) {
      uVar12 = UnityEngine_Transform__get_localPosition_4092c40(lVar4,0);
      lVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
      if (lVar4 != 0) {
        UnityEngine_Transform__get_localPosition_4092c40(lVar4,0);
        puVar1 = PTR_DAT_058030a8;
        if (*(long *)(param_4 + 0x58) != 0) {
          fVar15 = *(float *)(*(long *)(param_4 + 0x58) + 0x34);
          fVar14 = param_2;
          lVar4 = FUN_012d0e38(*(undefined8 *)PTR_DAT_058030a8,3);
          lVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
          if ((lVar5 != 0) &&
             (uVar13 = UnityEngine_Transform__get_localPosition_4092c40(lVar5,0), lVar4 != 0)) {
            if (*(int *)(lVar4 + 0x18) != 0) {
              *(undefined4 *)(lVar4 + 0x20) = uVar13;
              *(float *)(lVar4 + 0x24) = fVar14;
              *(undefined4 *)(lVar4 + 0x28) = param_3;
              if (*(int *)(lVar4 + 0x18) != 1) {
                *(undefined4 *)(lVar4 + 0x2c) = uVar12;
                *(float *)(lVar4 + 0x30) = param_2 - fVar15;
                *(undefined4 *)(lVar4 + 0x34) = 0;
                lVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
                if (lVar5 != 0) {
                  uVar12 = UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
                  if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_0228814c;
                  *(undefined4 *)(lVar4 + 0x38) = uVar12;
                  *(float *)(lVar4 + 0x3c) = fVar14;
                  *(undefined4 *)(lVar4 + 0x40) = param_3;
                  lVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
                  if (lVar5 != 0) {
                    fVar15 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
                    lVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
                    if (lVar5 != 0) {
                      UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
                      if (*(long *)(param_4 + 0x58) != 0) {
                        fVar16 = *(float *)(*(long *)(param_4 + 0x58) + 100);
                        fVar17 = fVar14;
                        lVar5 = FUN_012d0e38(*(undefined8 *)puVar1,3);
                        lVar6 = UnityEngine_Component__get_transform_408b444(param_4,0);
                        if ((lVar6 != 0) &&
                           (uVar12 = UnityEngine_Transform__get_localPosition_4092c40(lVar6,0),
                           lVar5 != 0)) {
                          uVar9 = *(uint *)(lVar5 + 0x18);
                          if (uVar9 != 0) {
                            *(undefined4 *)(lVar5 + 0x20) = uVar12;
                            *(float *)(lVar5 + 0x24) = fVar17;
                            *(undefined4 *)(lVar5 + 0x28) = param_3;
                            if (uVar9 != 1) {
                              *(undefined4 *)(lVar5 + 0x34) = 0;
                              *(float *)(lVar5 + 0x2c) = fVar15 * 0.5;
                              *(float *)(lVar5 + 0x30) = fVar14 + fVar16;
                              if (cRam0000000005c230aa == '\0') {
                                FUN_012d0dc8(PTR_DAT_05805c10);
                                cRam0000000005c230aa = '\x01';
                                uVar9 = *(uint *)(lVar5 + 0x18);
                              }
                              if (2 < uVar9) {
                                uVar12 = *(undefined4 *)
                                          (*(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8) + 1);
                                *(undefined8 *)(lVar5 + 0x38) =
                                     **(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                                *(undefined4 *)(lVar5 + 0x40) = uVar12;
                                puVar1 = PTR_DAT_057606c8;
                                if (*(long *)(param_4 + 0x58) != 0) {
                                  fVar14 = *(float *)(*(long *)(param_4 + 0x58) + 0x18);
                                  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
                                    thunk_FUN_0130472c();
                                  }
                                  uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
                                  puVar10 = (undefined8 *)(param_4 + 0x60);
                                  *puVar10 = uVar7;
                                  FUN_012d0d74(puVar10,uVar7);
                                  uVar7 = *puVar10;
                                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                  if (lVar6 != 0) {
                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                              (lVar6,param_4,*(undefined8 *)PTR_DAT_057d9b20,0);
                                    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                              (fVar14,uVar7,lVar6,0);
                                    uVar11 = *(undefined8 *)(param_4 + 0x60);
                                    uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                                      (0,0,*(undefined8 *)(param_4 + 0x40),0);
                                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                              (fVar14,uVar11,uVar7,0);
                                    if (*(long *)(param_4 + 0x58) != 0) {
                                      uVar11 = *(undefined8 *)(param_4 + 0x60);
                                      uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                                        (0x3f800000,
                                                         *(undefined4 *)
                                                          (*(long *)(param_4 + 0x58) + 0x1c),
                                                         *(undefined8 *)(param_4 + 0x40),0);
                                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                (fVar14,uVar11,uVar7,0);
                                      uVar7 = *(undefined8 *)(param_4 + 0x60);
                                      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                      if (lVar6 != 0) {
                                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                                  (lVar6,param_4,*(undefined8 *)PTR_DAT_057718a0,0);
                                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                  (fVar14,uVar7,lVar6,0);
                                        uVar7 = *(undefined8 *)(param_4 + 0x60);
                                        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                        if (lVar6 != 0) {
                                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                                    (lVar6,param_4,*(undefined8 *)PTR_DAT_0576dd40,0
                                                    );
                                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                    (fVar14,uVar7,lVar6,0);
                                          uVar7 = *(undefined8 *)(param_4 + 0x60);
                                          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                          if (lVar6 != 0) {
                                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                                      (lVar6,param_4,*(undefined8 *)PTR_DAT_057fef70
                                                       ,0);
                                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                      (fVar14,uVar7,lVar6,0);
                                            uVar11 = *(undefined8 *)(param_4 + 0x60);
                    /* try { // try from 02287cc0 to 02387ccb has its CatchHandler @ 02288298 */
                                            uVar7 = UnityEngine_Component__get_transform_408b444
                                                              (param_4,0);
                                            lVar6 = *(long *)(param_4 + 0x58);
                    /* try { // try from 02287ccc to 023882b3 has its CatchHandler @ 022875f0 */
                                            if (lVar6 != 0) {
                                              uVar7 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*(undefined4 *)(lVar6 + 0x28),
                                                             *(undefined4 *)(lVar6 + 0x2c),
                                                             *(undefined4 *)(lVar6 + 0x30),
                                                             *(undefined4 *)(lVar6 + 0x1c),uVar7,0);
                                              puVar2 = PTR_DAT_057874c0;
                                              if (*(long *)(param_4 + 0x58) != 0) {
                                                uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar7,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x58) +
                                                                    0x20),
                                                             *(undefined8 *)PTR_DAT_057874c0);
                                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                          (fVar14,uVar11,uVar7,0);
                                                uVar11 = *(undefined8 *)(param_4 + 0x60);
                                                uVar7 = UnityEngine_Component__get_transform_408b444
                                                                  (param_4,0);
                                                if (*(long *)(param_4 + 0x58) != 0) {
                                                  uStack_88 = 0;
                                                  uStack_80 = 0;
                                                  uStack_78 = 0;
                                                  uVar7 = 
                                                  DG_Tweening_ShortcutExtensions__DOLocalPath_1ee937c
                                                            (*(undefined4 *)
                                                              (*(long *)(param_4 + 0x58) + 0x1c),
                                                             uVar7,lVar4,1,1,10,&uStack_88,0);
                                                  puVar3 = PTR_DAT_057ccae0;
                                                  if (*(long *)(param_4 + 0x58) != 0) {
                                                    uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar7,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x58) +
                                                                    0x20),
                                                             *(undefined8 *)PTR_DAT_057ccae0);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar14,uVar11,uVar7,0);
                                                  lVar4 = *(long *)(param_4 + 0x58);
                                                  if (lVar4 != 0) {
                                                    fVar15 = *(float *)(lVar4 + 0x1c);
                                                    fVar17 = *(float *)(lVar4 + 0x38);
                                                    uVar11 = *(undefined8 *)(param_4 + 0x60);
                                                    uVar7 = 
                                                  UnityEngine_Component__get_transform_408b444
                                                            (param_4,0);
                                                  if (*(long *)(param_4 + 0x58) != 0) {
                                                    uStack_a0 = 0;
                                                    uStack_98 = 0;
                                                    uStack_90 = 0;
                                                    uVar7 = 
                                                  DG_Tweening_ShortcutExtensions__DOLocalPath_1ee937c
                                                            (*(undefined4 *)
                                                              (*(long *)(param_4 + 0x58) + 0x3c),
                                                             uVar7,lVar5,1,1,10,&uStack_a0,0);
                                                  if (*(long *)(param_4 + 0x58) != 0) {
                                                    fVar14 = fVar14 + fVar15 + fVar17;
                                                    uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar7,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x58) +
                                                                    0x50),*(undefined8 *)puVar3);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar14,uVar11,uVar7,0);
                                                  uVar11 = *(undefined8 *)(param_4 + 0x60);
                                                  uVar7 = 
                                                  UnityEngine_Component__get_transform_408b444
                                                            (param_4,0);
                                                  if ((*(long *)(param_4 + 0x20) != 0) &&
                                                     (lVar4 = *(long *)(param_4 + 0x58), lVar4 != 0)
                                                     ) {
                                                    uVar7 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                                                            (*(undefined4 *)
                                                              (*(long *)(param_4 + 0x20) + 0x24),
                                                             *(float *)(lVar4 + 0x3c) +
                                                             *(float *)(lVar4 + 0x48),uVar7,0);
                                                  puVar3 = PTR_DAT_057dbb90;
                                                  if (*(long *)(param_4 + 0x58) != 0) {
                                                    uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar7,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x58) +
                                                                    0x58),*(undefined8 *)puVar2);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar14,uVar11,uVar7,0);
                                                  lVar4 = *(long *)puVar3;
                                                  uVar7 = *puVar10;
                                                  if (*(int *)(lVar4 + 0xe0) == 0) {
                                                    thunk_FUN_0130472c();
                                                    lVar4 = *(long *)puVar3;
                                                  }
                                                  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                                                  if (lVar5 == 0) {
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_0130472c();
                                                      lVar4 = *(long *)puVar3;
                                                    }
                                                    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
                                                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar5 == 0) goto LAB_02288148;
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar5,uVar11,
                                                               *(undefined8 *)PTR_DAT_05808f78,0);
                                                    plVar8 = (long *)(*(long *)(*(long *)puVar3 +
                                                                               0xb8) + 8);
                                                    *plVar8 = lVar5;
                                                    FUN_012d0d74(plVar8,lVar5);
                                                  }
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (fVar14,uVar7,lVar5,0);
                                                  lVar4 = *(long *)(param_4 + 0x58);
                                                  if (lVar4 != 0) {
                                                    fVar17 = *(float *)(lVar4 + 0x3c);
                                                    fVar16 = *(float *)(lVar4 + 0x44);
                                                    fVar15 = *(float *)(lVar4 + 0x48);
                                                    uVar7 = *puVar10;
                                                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar4 != 0) {
                                                      fVar15 = fVar15 + fVar14 + fVar17 + fVar16;
                                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                                (lVar4,param_4,
                                                                 *(undefined8 *)PTR_DAT_058057f8,0);
                                                                                                            
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (fVar15,uVar7,lVar4,0);
                                                  lVar4 = *(long *)puVar3;
                                                  uVar7 = *(undefined8 *)(param_4 + 0x60);
                                                  if (*(int *)(lVar4 + 0xe0) == 0) {
                                                    thunk_FUN_0130472c();
                                                    lVar4 = *(long *)puVar3;
                                                  }
                                                  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
                                                  if (lVar5 == 0) {
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_0130472c();
                                                      lVar4 = *(long *)puVar3;
                                                    }
                                                    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
                                                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar5 == 0) goto LAB_02288148;
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar5,uVar11,
                                                               *(undefined8 *)PTR_DAT_0579fea8,0);
                                                    plVar8 = (long *)(*(long *)(*(long *)puVar3 +
                                                                               0xb8) + 0x10);
                                                    *plVar8 = lVar5;
                                                    FUN_012d0d74(plVar8,lVar5);
                                                  }
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (fVar15,uVar7,lVar5,0);
                                                  lVar4 = *(long *)puVar3;
                                                  uVar7 = *puVar10;
                                                  if (*(int *)(lVar4 + 0xe0) == 0) {
                                                    thunk_FUN_0130472c();
                                                    lVar4 = *(long *)puVar3;
                                                  }
                                                  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
                                                  if (lVar5 == 0) {
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_0130472c();
                                                      lVar4 = *(long *)puVar3;
                                                    }
                                                    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
                                                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar5 == 0) goto LAB_02288148;
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar5,uVar11,
                                                               *(undefined8 *)PTR_DAT_057c1b80,0);
                                                    plVar8 = (long *)(*(long *)(*(long *)puVar3 +
                                                                               0xb8) + 0x18);
                                                    *plVar8 = lVar5;
                                                    FUN_012d0d74(plVar8,lVar5);
                                                  }
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (fVar15,uVar7,lVar5,0);
                                                  uVar7 = *puVar10;
                                                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                                  if (lVar4 != 0) {
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar4,param_4,
                                                               *(undefined8 *)PTR_DAT_057a08e8,0);
                                                                                                        
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (fVar15,uVar7,lVar4,0);
                                                  uVar7 = *(undefined8 *)(param_4 + 0x60);
                                                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                                  if (lVar4 != 0) {
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar4,param_4,
                                                               *(undefined8 *)PTR_DAT_057c2078,0);
                                                                                                        
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (fVar15,uVar7,lVar4,0);
                                                  if (*(long *)(param_4 + 0x58) != 0) {
                                                    uVar11 = *(undefined8 *)(param_4 + 0x60);
                                                    uVar7 = 
                                                  DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                                            (0,*(undefined4 *)
                                                                (*(long *)(param_4 + 0x58) + 0x74),
                                                             *(undefined8 *)(param_4 + 0x40),0);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar15,uVar11,uVar7,0);
                                                  return *(undefined8 *)(param_4 + 0x60);
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
                                }
                                goto LAB_02288148;
                              }
                            }
                          }
                          goto LAB_0228814c;
                        }
                      }
                    }
                  }
                }
                goto LAB_02288148;
              }
            }
LAB_0228814c:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
        }
      }
    }
  }
LAB_02288148:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

