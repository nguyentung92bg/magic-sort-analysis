/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetView$$PlayCarpetAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__PlayCarpetAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView_o* __this, int32_t hiddenBottleCount, int32_t initialBottleCount, float delay, UnityEngine_Vector3_o targetBottleWorldPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetView$$PlayCarpetAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__PlayCarpetAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView_o* __this, int32_t
   hiddenBottleCount, int32_t initialBottleCount, float delay, UnityEngine_Vector3_o
   targetBottleWorldPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__PlayCarpetAnimation_2f5ba98
          (undefined8 param_1,float param_2,float param_3,long param_4,uint param_5,
          undefined4 param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  puVar6 = PTR_DAT_057fe0d8;
  fVar19 = param_2;
  if ((bRam0000000005c308db & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057c2030);
    FUN_012d0dc8(PTR_DAT_05793f20);
    FUN_012d0dc8(PTR_DAT_057d8f98);
    FUN_012d0dc8(PTR_DAT_057c2298);
    FUN_012d0dc8(PTR_DAT_0576d090);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057f4ef0);
    FUN_012d0dc8(PTR_DAT_05805d28);
    FUN_012d0dc8(PTR_DAT_057d25f8);
    FUN_012d0dc8(PTR_DAT_0575c648);
    FUN_012d0dc8(PTR_DAT_057fe0d8);
    FUN_012d0dc8(PTR_DAT_057ed088);
    bRam0000000005c308db = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
  puVar4 = PTR_DAT_057fc1d0;
  puVar6 = PTR_DAT_057815e0;
  if (lVar9 != 0) {
    System_Object___ctor_23dfe5c(lVar9,0);
    *(long *)(lVar9 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar9 + 0x18),param_4);
    *(undefined4 *)(lVar9 + 0x2c) = param_6;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar10 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar11 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
    uVar10 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                       (uVar10,uVar11,*(undefined8 *)puVar4);
    iVar3 = *(int *)(lVar9 + 0x2c) - param_5;
    *(int *)(lVar9 + 0x28) = iVar3;
    puVar6 = PTR_DAT_057c2298;
    plVar16 = (long *)(param_4 + 0x28);
    if ((*plVar16 != 0) && (lVar12 = *(long *)(*plVar16 + 0x80), lVar12 != 0)) {
      lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar12,iVar3 + -1,*(undefined8 *)PTR_DAT_057c2298);
      if (lVar12 != 0) {
        uVar11 = UnityEngine_Component__get_transform_408b444(lVar12,0);
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
        FUN_012d0d74();
        if ((*plVar16 != 0) && (lVar12 = *(long *)(*plVar16 + 0x88), lVar12 != 0)) {
          uVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar12,*(int *)(lVar9 + 0x28) + -1,*(undefined8 *)PTR_DAT_057d8f98);
          *(undefined8 *)(lVar9 + 0x20) = uVar11;
          FUN_012d0d74();
          puVar5 = PTR_DAT_0576d090;
          puVar4 = PTR_DAT_057606c8;
          if ((*plVar16 != 0) &&
             ((lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0 &&
              (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)))) {
            uVar11 = System_Collections_Generic_List_float___get_Item_1d70b20
                               (lVar12,*(undefined4 *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_0576d090
                               );
            lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            puVar7 = PTR_DAT_057ed088;
            if (lVar12 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar12,lVar9,*(undefined8 *)PTR_DAT_057d25f8,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(param_1,uVar10,lVar12,0);
              fVar18 = (float)param_1;
              if (param_5 == 0) {
                if (((*plVar16 != 0) && (lVar12 = *(long *)(*plVar16 + 0x48), lVar12 != 0)) &&
                   (lVar12 = UnityEngine_Component__get_transform_408b444(lVar12,0), lVar12 != 0)) {
                  fVar17 = (float)UnityEngine_Transform__get_localScale_4093230(lVar12,0);
                  if (*plVar16 != 0) {
                    lVar12 = *(long *)(*plVar16 + 0x28);
                    if (lVar12 != 0) {
                      lVar13 = *(long *)puVar7;
                      fVar23 = *(float *)(lVar12 + 0x74);
                      fVar21 = *(float *)(lVar12 + 0x78);
                      fVar22 = *(float *)(lVar12 + 0x7c);
                      iVar3 = *(int *)(lVar9 + 0x2c);
                      fVar20 = *(float *)(lVar12 + 0x174);
                      if (*(int *)(lVar13 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                        lVar13 = *(long *)puVar7;
                      }
                      lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                      if (lVar12 == 0) {
                        if (*(int *)(lVar13 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                          lVar13 = *(long *)puVar7;
                        }
                        uVar11 = **(undefined8 **)(lVar13 + 0xb8);
                        lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                        if (lVar12 == 0) goto LAB_0305c53c;
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar12,uVar11,*(undefined8 *)PTR_DAT_057f4ef0,0);
                        plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                        *plVar14 = lVar12;
                        FUN_012d0d74(plVar14,lVar12);
                      }
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (fVar20 + fVar18,uVar10,lVar12,0);
                      puVar5 = PTR_DAT_057874c0;
                      if (*plVar16 != 0) {
                        lVar12 = *(long *)(*plVar16 + 0x28);
                        if (lVar12 != 0) {
                          uVar11 = Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__SpiralRotationTween_2f5d688
                                             (*(undefined4 *)(lVar12 + 0x40),param_4,
                                              *(undefined4 *)(lVar12 + 0xd4),
                                              *(undefined8 *)(lVar12 + 200));
                          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                    (param_1,uVar10,uVar11,0);
                          if (*(long *)(param_4 + 0x28) != 0) {
                            uVar11 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                               (0,_UNK_04339be4,
                                                *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x50),0)
                            ;
                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                      (param_1,uVar10,uVar11,0);
                            if ((*plVar16 != 0) &&
                               (lVar12 = *(long *)(*plVar16 + 0x48), lVar12 != 0)) {
                              uVar11 = UnityEngine_Component__get_transform_408b444(lVar12,0);
                              if ((*plVar16 != 0) &&
                                 (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                                uVar11 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                   (fVar17 + fVar23,fVar19 + fVar21,param_3 + fVar22
                                                    ,*(undefined4 *)(lVar12 + 0x8c),uVar11,0);
                                if (*plVar16 != 0) {
                                  lVar12 = *(long *)(*plVar16 + 0x28);
                                  if (lVar12 != 0) {
                                    uVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                       (uVar11,*(undefined8 *)(lVar12 + 0x90),
                                                        *(undefined8 *)puVar5);
                                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                              (param_1,uVar10,uVar11,0);
                                    if (((*plVar16 != 0) &&
                                        (lVar12 = *(long *)(*plVar16 + 0x78), lVar12 != 0)) &&
                                       (lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                           (lVar12,iVar3 + -1,*(undefined8 *)puVar6)
                                       , lVar12 != 0)) {
                                      uVar11 = UnityEngine_Component__get_transform_408b444
                                                         (lVar12,0);
                                      if ((*plVar16 != 0) &&
                                         (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                                        uVar11 = DG_Tweening_ShortcutExtensions__DOScaleX_1ee67cc
                                                           (0,*(undefined4 *)(lVar12 + 0xf0),uVar11,
                                                            0);
                                        if ((*plVar16 != 0) &&
                                           (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                                          uVar11 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar11,*(undefined8 *)(lVar12 + 0xf8),
                                                             *(undefined8 *)puVar5);
                                          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                    (param_1,uVar10,uVar11,0);
                                          lVar12 = *plVar16;
                                          if ((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) {
                                            uVar11 = DG_Tweening_ShortcutExtensions__DOMoveX_1ee516c
                                                               (param_2,*(undefined4 *)
                                                                         (*(long *)(lVar12 + 0x28) +
                                                                         0x3c),
                                                                *(undefined8 *)(lVar12 + 0x38),0,0);
                                            if ((*plVar16 != 0) &&
                                               (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                                              uVar11 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar11,*(undefined8 *)(lVar12 + 0x60),
                                                             *(undefined8 *)puVar5);
                                              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                        (param_1,uVar10,uVar11,0);
                                              lVar12 = *plVar16;
                                              if ((lVar12 != 0) &&
                                                 (lVar13 = *(long *)(lVar12 + 0x28), lVar13 != 0)) {
                                                fVar19 = *(float *)(lVar13 + 0x130);
                                                uVar11 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*(undefined4 *)(lVar13 + 0x114),
                                                             *(undefined4 *)(lVar13 + 0x118),
                                                             *(undefined4 *)(lVar13 + 0x11c),
                                                             *(undefined4 *)(lVar13 + 0x120),
                                                             *(undefined8 *)(lVar12 + 0x38),0);
                                                if ((*plVar16 != 0) &&
                                                   (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0
                                                   )) {
                                                  uVar11 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar11,*(undefined8 *)(lVar12 + 0x128),
                                                             *(undefined8 *)puVar5);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar19 + fVar18,uVar10,uVar11,0);
                                                  lVar12 = *plVar16;
                                                  if ((lVar12 != 0) &&
                                                     (lVar13 = *(long *)(lVar12 + 0x28), lVar13 != 0
                                                     )) {
                                                    fVar19 = *(float *)(lVar13 + 0x130);
                                                    fVar17 = *(float *)(lVar13 + 0x120);
                                                    uVar11 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*(undefined4 *)(lVar13 + 0x134),
                                                             *(undefined4 *)(lVar13 + 0x138),
                                                             *(undefined4 *)(lVar13 + 0x13c),
                                                             *(undefined4 *)(lVar13 + 0x140),
                                                             *(undefined8 *)(lVar12 + 0x38),0);
                                                  if ((*plVar16 != 0) &&
                                                     (lVar12 = *(long *)(*plVar16 + 0x28),
                                                     lVar12 != 0)) {
                                                    uVar11 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar11,*(undefined8 *)(lVar12 + 0x148),
                                                             *(undefined8 *)puVar5);
                                                  lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4)
                                                  ;
                                                  puVar6 = PTR_DAT_057984e0;
                                                  if (lVar12 != 0) {
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar12,lVar9,
                                                               *(undefined8 *)PTR_DAT_0575c648,0);
                                                    uVar11 = 
                                                  DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                                            (uVar11,lVar12,*(undefined8 *)puVar6);
                                                  fVar18 = fVar19 + fVar18 + fVar17;
LAB_0305c4f8:
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar18,uVar10,uVar11,0);
                                                  return uVar10;
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
              }
              else if ((*plVar16 != 0) && (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                lVar13 = *(long *)puVar7;
                iVar3 = *(int *)(lVar9 + 0x2c);
                fVar19 = *(float *)(lVar12 + 0x170);
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar13 = *(long *)puVar7;
                }
                lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
                if (lVar12 == 0) {
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                    lVar13 = *(long *)puVar7;
                  }
                  uVar15 = **(undefined8 **)(lVar13 + 0xb8);
                  lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                  if (lVar12 == 0) goto LAB_0305c53c;
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar12,uVar15,*(undefined8 *)PTR_DAT_05805d28,0);
                  plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
                  *plVar14 = lVar12;
                  FUN_012d0d74(plVar14,lVar12);
                }
                fVar18 = fVar18 + _UNK_0438e368;
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                          (fVar18 + fVar19,uVar10,lVar12,0);
                puVar6 = PTR_DAT_057874c0;
                lVar12 = *plVar16;
                if (lVar12 != 0) {
                  if (*(long *)(lVar12 + 0x28) != 0) {
                    uVar11 = DG_Tweening_ShortcutExtensions__DOScaleX_1ee67cc
                                       (uVar11,*(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x28),
                                        *(undefined8 *)(lVar12 + 0x38),0);
                    if ((*plVar16 != 0) && (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                      uVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                         (uVar11,*(undefined8 *)(lVar12 + 0x30),
                                          *(undefined8 *)puVar6);
                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar18,uVar10,uVar11,0);
                      if ((*plVar16 != 0) && (lVar12 = *(long *)(*plVar16 + 0x70), lVar12 != 0)) {
                        uVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                           (lVar12,iVar3 + ~param_5,*(undefined8 *)PTR_DAT_057c2030)
                        ;
                        if ((*plVar16 != 0) && (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                          uVar11 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                             (*(undefined4 *)(lVar12 + 0xd8),
                                              *(undefined4 *)(lVar12 + 0xdc),
                                              *(undefined4 *)(lVar12 + 0xe0),
                                              *(undefined4 *)(lVar12 + 0xe4),uVar11,0);
                          if ((*plVar16 != 0) && (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0))
                          {
                            uVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                               (uVar11,*(undefined8 *)(lVar12 + 0xe8),
                                                *(undefined8 *)puVar6);
                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                      (fVar18,uVar10,uVar11,0);
                            if ((*plVar16 != 0) &&
                               (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                              uVar11 = Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__SpiralRotationTween_2f5d688
                                                 (*(undefined4 *)(lVar12 + 0x38),param_4,
                                                  *(undefined4 *)(lVar12 + 0xd0),
                                                  *(undefined8 *)(lVar12 + 0xc0));
                              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                        (fVar18,uVar10,uVar11,0);
                              if ((*(long *)(param_4 + 0x28) != 0) &&
                                 (lVar12 = *(long *)(*(long *)(param_4 + 0x28) + 0x50), lVar12 != 0)
                                 ) {
                                uVar11 = UnityEngine_Component__get_transform_408b444(lVar12,0);
                                if ((*plVar16 != 0) &&
                                   (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                                  bVar8 = param_5 != 1;
                                  lVar13 = 0x18c;
                                  if (bVar8) {
                                    lVar13 = 0x180;
                                  }
                                  lVar1 = 0x188;
                                  if (bVar8) {
                                    lVar1 = 0x17c;
                                  }
                                  lVar2 = 0x184;
                                  if (bVar8) {
                                    lVar2 = 0x178;
                                  }
                                  uVar11 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                     (*(undefined4 *)(lVar12 + lVar2),
                                                      *(undefined4 *)(lVar12 + lVar1),
                                                      *(undefined4 *)(lVar12 + lVar13),
                                                      *(undefined4 *)(lVar12 + 0x38),uVar11,0);
                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                            (fVar18,uVar10,uVar11,0);
                                  if ((*plVar16 != 0) &&
                                     (lVar12 = *(long *)(*plVar16 + 0x50), lVar12 != 0)) {
                                    uVar11 = UnityEngine_Component__get_transform_408b444(lVar12,0);
                                    if ((*plVar16 != 0) &&
                                       (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                                      lVar13 = 0x1a0;
                                      if (param_5 != 1) {
                                        lVar13 = 0x194;
                                      }
                                      uVar11 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                                                         (*(undefined4 *)(lVar12 + lVar13),
                                                          *(undefined4 *)(lVar12 + 0x38),uVar11,0,0)
                                      ;
                                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                (fVar18,uVar10,uVar11,0);
                                      lVar12 = *plVar16;
                                      if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
                                         (lVar13 = *(long *)(*(long *)(lVar12 + 0x28) + 0x20),
                                         lVar13 != 0)) {
                                        uVar11 = *(undefined8 *)(lVar12 + 0x38);
                                        uVar15 = System_Collections_Generic_List_Vector3___get_Item_2275a94
                                                           (lVar13,*(undefined4 *)(lVar9 + 0x28),
                                                            *(undefined8 *)PTR_DAT_05793f20);
                                        if ((*plVar16 != 0) &&
                                           (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                                          uVar11 = 
                                                  DG_Tweening_ShortcutExtensions__DOLocalMoveX_1ee5860
                                                            (uVar15,*(undefined4 *)(lVar12 + 0x38),
                                                             uVar11,0,0);
                                          if ((*plVar16 != 0) &&
                                             (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0)) {
                                            uVar11 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar11,*(undefined8 *)(lVar12 + 0x48),
                                                             *(undefined8 *)puVar6);
                                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                      (fVar18,uVar10,uVar11,0);
                                            lVar12 = *plVar16;
                                            if ((lVar12 != 0) &&
                                               (lVar13 = *(long *)(lVar12 + 0x28), lVar13 != 0)) {
                                              uVar11 = 
                                                  DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                                                            (*(undefined4 *)(lVar13 + 0x50),
                                                             *(undefined4 *)(lVar13 + 0x38),
                                                             *(undefined8 *)(lVar12 + 0x38),0,0);
                                              if ((*plVar16 != 0) &&
                                                 (lVar12 = *(long *)(*plVar16 + 0x28), lVar12 != 0))
                                              {
                                                uVar11 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar11,*(undefined8 *)(lVar12 + 0x58),
                                                             *(undefined8 *)puVar6);
                                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                          (fVar18,uVar10,uVar11,0);
                                                if ((*plVar16 != 0) &&
                                                   (lVar12 = *(long *)(*plVar16 + 0x48), lVar12 != 0
                                                   )) {
                                                  uVar11 = 
                                                  UnityEngine_Component__get_transform_408b444
                                                            (lVar12,0);
                                                  if ((*plVar16 != 0) &&
                                                     ((lVar12 = *(long *)(*plVar16 + 0x28),
                                                      lVar12 != 0 &&
                                                      (lVar12 = *(long *)(lVar12 + 0x80),
                                                      lVar12 != 0)))) {
                                                    uVar15 = 
                                                  System_Collections_Generic_List_float___get_Item_1d70b20
                                                            (lVar12,*(undefined4 *)(lVar9 + 0x28),
                                                             *(undefined8 *)puVar5);
                                                  if ((*plVar16 != 0) &&
                                                     ((lVar9 = *(long *)(*plVar16 + 0x48),
                                                      lVar9 != 0 &&
                                                      (lVar9 = 
                                                  UnityEngine_Component__get_transform_408b444
                                                            (lVar9,0), lVar9 != 0)))) {
                                                    UnityEngine_Transform__get_localScale_4093230
                                                              (lVar9,0);
                                                    if ((*plVar16 != 0) &&
                                                       (*(long *)(*plVar16 + 0x28) != 0)) {
                                                      uVar11 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (uVar15,uVar11,0);
                                                  if ((*plVar16 != 0) &&
                                                     (lVar9 = *(long *)(*plVar16 + 0x28), lVar9 != 0
                                                     )) {
                                                    uVar11 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar11,*(undefined8 *)(lVar9 + 0x90),
                                                             *(undefined8 *)puVar6);
                                                  goto LAB_0305c4f8;
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0305c53c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

