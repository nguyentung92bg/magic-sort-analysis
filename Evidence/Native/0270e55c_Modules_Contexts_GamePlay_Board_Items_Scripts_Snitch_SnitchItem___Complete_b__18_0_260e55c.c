/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$<Complete>b__18_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem___Complete_b__18_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$<Complete>b__18_0
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem___Complete_b__18_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem___Complete_b__18_0_260e55c
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  
  lVar10 = *(long *)(param_4 + 0x90);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(lVar10,0,0);
  }
  uVar7 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__GetSnitchType_260e0e0
                    (param_4,0);
  puVar3 = PTR_DAT_057beb70;
  puVar2 = PTR_DAT_057b9138;
  if ((int)uVar7 == 1) {
    if ((bRam0000000005c29b03 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048);
      FUN_012d0dc8(PTR_DAT_057dcd58);
      FUN_012d0dc8(PTR_DAT_057b9138);
      bRam0000000005c29b03 = 1;
    }
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar8 == 0) {
LAB_02241cc8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Object___ctor_23dfe5c(lVar8,0);
    *(long *)(lVar8 + 0x10) = lVar10;
    FUN_012d0d74((long *)(lVar8 + 0x10),lVar10);
    plVar17 = (long *)(lVar8 + 0x20);
    *plVar17 = param_4;
    FUN_012d0d74(plVar17,param_4);
    if (*(long *)(lVar10 + 0x28) == 0) goto LAB_02241cc8;
    uVar7 = Modules_Contexts_GamePlay_Snitch_Scripts_SnitchTargetFinder__GetRedSnitchTargetItem_2140a84
                      (*(long *)(lVar10 + 0x28),*(undefined8 *)(lVar8 + 0x20));
    puVar18 = (undefined8 *)(lVar8 + 0x18);
    *puVar18 = uVar7;
    FUN_012d0d74(puVar18,uVar7);
    Modules_Contexts_GamePlay_Snitch_Scripts_SnitchInGameManager__MarkTargetItemAsSelected_2141434
              (lVar10,*puVar18);
    Modules_Contexts_GamePlay_Snitch_Scripts_SnitchInGameManager__AnimationLockTargetBottle_21422c4
              (lVar10,*puVar18);
    plVar16 = *(long **)(lVar8 + 0x20);
    if (plVar16 == (long *)0x0) goto LAB_02241cc8;
    lVar9 = (**(code **)(*plVar16 + 0x458))(plVar16,*(undefined8 *)(*plVar16 + 0x460));
    puVar2 = PTR_DAT_0578b048;
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x40) == 0)) goto LAB_02241cc8;
    Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00
              (*(long *)(lVar9 + 0x40),lVar10,0);
    plVar17 = (long *)*plVar17;
    uVar7 = *puVar18;
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_02241cc8;
    System_Action___ctor_21239bc(lVar9,lVar8,*(undefined8 *)PTR_DAT_057dcd58,0);
  }
  else {
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if ((bRam0000000005c29b02 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048);
      FUN_012d0dc8(PTR_DAT_057efcf8);
      FUN_012d0dc8(PTR_DAT_057beb70);
      bRam0000000005c29b02 = 1;
    }
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar8 == 0) {
LAB_02241b70:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Object___ctor_23dfe5c(lVar8,0);
    *(long *)(lVar8 + 0x10) = lVar10;
    FUN_012d0d74((long *)(lVar8 + 0x10),lVar10);
    plVar17 = (long *)(lVar8 + 0x20);
    *plVar17 = param_4;
    FUN_012d0d74(plVar17,param_4);
    if (*(long *)(lVar10 + 0x28) == 0) goto LAB_02241b70;
    lVar9 = Modules_Contexts_GamePlay_Snitch_Scripts_SnitchTargetFinder__GetNormalSnitchTarget_2141910
                      (*(long *)(lVar10 + 0x28),*(undefined8 *)(lVar8 + 0x20));
    plVar16 = (long *)(lVar8 + 0x18);
    *plVar16 = lVar9;
    uVar7 = FUN_012d0d74(plVar16,lVar9);
    if (*plVar16 == 0) {
      return uVar7;
    }
    lVar9 = *(long *)(*plVar16 + 0x10);
    if (lVar9 == 0) goto LAB_02241b70;
    plVar17 = (long *)*plVar17;
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
    if (lVar9 == 0) goto LAB_02241b70;
    System_Action___ctor_21239bc(lVar9,lVar8,*(undefined8 *)PTR_DAT_057efcf8,0);
  }
  puVar2 = PTR_DAT_057b8f48;
  if ((bRam0000000005c29b04 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05766d68);
    FUN_012d0dc8(PTR_DAT_057b8f48);
    FUN_012d0dc8(PTR_DAT_057d91a8);
    bRam0000000005c29b04 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar8 != 0) {
    System_Object___ctor_23dfe5c(lVar8,0);
    *(long *)(lVar8 + 0x10) = lVar9;
    FUN_012d0d74((long *)(lVar8 + 0x10),lVar9);
    *(long *)(lVar8 + 0x18) = lVar10;
    FUN_012d0d74((long *)(lVar8 + 0x18),lVar10);
    puVar18 = (undefined8 *)(lVar8 + 0x20);
    *puVar18 = uVar7;
    FUN_012d0d74(puVar18,uVar7);
    if (*(long *)(lVar10 + 0x28) != 0) {
      Modules_Contexts_GamePlay_Snitch_Scripts_SnitchTargetFinder__LockItem_214289c
                (*(long *)(lVar10 + 0x28),*puVar18);
      plVar16 = (long *)*puVar18;
      if (plVar16 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_057d91a8 + 300);
        if ((bVar1 <= *(byte *)(*plVar16 + 300)) &&
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)PTR_DAT_057d91a8)) {
          plVar16 = (long *)plVar16[10];
        }
      }
      if (plVar17 != (long *)0x0) {
        plVar19 = (long *)plVar17[9];
        lVar9 = (**(code **)(*plVar17 + 0x458))(plVar17,*(undefined8 *)(*plVar17 + 0x460));
        uVar5 = Modules_Contexts_GamePlay_Snitch_Scripts_SnitchInGameManager__GetTargetItemRowIndex_2142474
                          (lVar9,*puVar18);
        puVar2 = PTR_DAT_0578b048;
        if (*(long *)(lVar10 + 0x18) != 0) {
          uVar7 = Modules_Contexts_GamePlay_Snitch_Scripts_SnitchBoxView__TryGetTargetSnitchTargetHitPosition_20fc0a4
                            (*(long *)(lVar10 + 0x18),*puVar18,0);
          lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar10 != 0) &&
             (System_Action___ctor_21239bc(lVar10,lVar8,*(undefined8 *)PTR_DAT_05766d68,0),
             puVar2 = PTR_DAT_05794808, plVar19 != (long *)0x0)) {
            uVar11 = param_2;
            if ((bRam0000000005c2ba00 & 1) == 0) {
              FUN_012d0dc8(uVar7,param_2,param_3,PTR_DAT_057e4648,plVar16,lVar9,uVar5,lVar10,0);
              FUN_012d0dc8(PTR_DAT_0575c3c8);
              FUN_012d0dc8(PTR_DAT_0576aae0);
              FUN_012d0dc8(PTR_DAT_057815e0);
              FUN_012d0dc8(PTR_DAT_0575a2d8);
              FUN_012d0dc8(PTR_DAT_057606c8);
              FUN_012d0dc8(PTR_DAT_05818d48);
              FUN_012d0dc8(PTR_DAT_057874c0);
              FUN_012d0dc8(PTR_DAT_057fc1d0);
              FUN_012d0dc8(PTR_DAT_057952a8);
              FUN_012d0dc8(PTR_DAT_05758a70);
              FUN_012d0dc8(PTR_DAT_05782340);
              FUN_012d0dc8(PTR_DAT_057cf7e8);
              FUN_012d0dc8(PTR_DAT_05794808);
              bRam0000000005c2ba00 = 1;
            }
            fVar24 = (float)uVar11;
            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar8 != 0) {
              System_Object___ctor_23dfe5c(lVar8,0);
              *(undefined8 *)(lVar8 + 0x10) = plVar19;
              FUN_012d0d74((undefined8 *)(lVar8 + 0x10),plVar19);
              plVar17 = (long *)(lVar8 + 0x28);
              *plVar17 = (long)plVar16;
              FUN_012d0d74(plVar17,plVar16);
              *(long *)(lVar8 + 0x30) = lVar10;
              FUN_012d0d74((long *)(lVar8 + 0x30),lVar10);
              puVar3 = PTR_DAT_057fc1d0;
              puVar2 = PTR_DAT_057815e0;
              if (plVar19[0xc] != 0) {
                UnityEngine_Behaviour__set_enabled_408d778(plVar19[0xc],1,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                uVar11 = DG_Tweening_DOTween__Sequence_1eda154(0);
                uVar12 = UnityEngine_Component__get_gameObject_408b480(plVar19,0);
                uVar11 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                                   (uVar11,uVar12,*(undefined8 *)puVar3);
                if ((*plVar17 != 0) && (plVar19[7] != 0)) {
                  fVar20 = (float)Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchTargetOffsetForItemType_20fa198
                                            (plVar19[7],*(undefined4 *)(*plVar17 + 0x18),0);
                  plVar17 = *(long **)(lVar8 + 0x28);
                  fVar22 = (float)param_2 + fVar24;
                  *(float *)(lVar8 + 0x20) = (float)uVar7 + fVar20;
                  *(float *)(lVar8 + 0x24) = fVar22;
                  if (plVar17 != (long *)0x0) {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_057e4648 + 300);
                    if ((bVar1 <= *(byte *)(*plVar17 + 300)) &&
                       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) ==
                        *(long *)PTR_DAT_057e4648)) {
                      iVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetBelongingBottleCount_2f5b130
                                        (plVar17,0);
                      if (0 < iVar6) {
                        fVar21 = (float)Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetCenterPositionOfBelongingBottles_2f5c728
                                                  (plVar17,0);
                        fVar22 = fVar24 + fVar22;
                        *(float *)(lVar8 + 0x20) = fVar20 + fVar21;
                        *(float *)(lVar8 + 0x24) = fVar22;
                      }
                    }
                  }
                  if ((lVar9 != 0) &&
                     (plVar17 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                                  (lVar9,0), plVar17 != (long *)0x0)) {
                    lVar10 = *plVar17;
                    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
                    if (uVar13 != 0) {
                      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0575a2d8) {
                          puVar18 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_02710f44;
                        }
                        uVar13 = uVar13 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar18 = (undefined8 *)FUN_0131971c(plVar17,*(long *)PTR_DAT_0575a2d8,0);
LAB_02710f44:
                    (*(code *)*puVar18)(plVar17,puVar18[1]);
                    if (((plVar19[7] != 0) && (**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0))
                       && (lVar10 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18),
                          lVar10 != 0)) {
                      fVar24 = *(float *)(plVar19[7] + 0x308);
                      uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                        (lVar10,*(undefined8 *)PTR_DAT_0575c3c8);
                      *(undefined8 *)(lVar8 + 0x18) = uVar7;
                      FUN_012d0d74((undefined8 *)(lVar8 + 0x18),uVar7);
                      uVar7 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetDynamicDurationRequiredForSequence_2611338
                                        (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24)
                                         ,0,plVar19,lVar9,uVar5);
                      puVar2 = PTR_DAT_057606c8;
                      if (plVar19[7] != 0) {
                        fVar20 = *(float *)(plVar19[7] + 0x2fc);
                        lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                        puVar3 = PTR_DAT_05818d48;
                        if (lVar10 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar10,lVar8,*(undefined8 *)PTR_DAT_057952a8,0);
                          DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                                    (uVar11,lVar10,*(undefined8 *)puVar3);
                          uVar12 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                             (0x3f800000,_UNK_04339be4,plVar19[0xf],0);
                          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar11,uVar12,0);
                          uVar12 = UnityEngine_Component__get_transform_408b444(plVar19,0);
                          if (plVar19[7] != 0) {
                            uVar12 = DG_Tweening_ShortcutExtensions__DOMoveY_1ee533c
                                               (fVar22 + fVar24,*(undefined4 *)(plVar19[7] + 0x2fc),
                                                uVar12,0,0);
                            puVar3 = PTR_DAT_057874c0;
                            if (plVar19[7] != 0) {
                              uVar12 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                 (uVar12,*(undefined8 *)(plVar19[7] + 0x300),
                                                  *(undefined8 *)PTR_DAT_057874c0);
                              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar11,uVar12,0)
                              ;
                              lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                              if (lVar10 != 0) {
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar10,lVar8,*(undefined8 *)PTR_DAT_05758a70,0);
                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                          (0,uVar11,lVar10,0);
                                uVar12 = UnityEngine_Component__get_transform_408b444(plVar19,0);
                                lVar10 = plVar19[7];
                                if (lVar10 != 0) {
                                  fVar24 = *(float *)(lVar10 + 800);
                                  if (cRam0000000005c230a9 == '\0') {
                                    FUN_012d0dc8(PTR_DAT_05805c10);
                                    cRam0000000005c230a9 = '\x01';
                                    lVar10 = plVar19[7];
                                    if (lVar10 == 0) goto LAB_0271132c;
                                  }
                                  puVar4 = PTR_DAT_05805c10;
                                  lVar14 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                                  uVar12 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                     (fVar24 * *(float *)(lVar14 + 0xc),
                                                      fVar24 * *(float *)(lVar14 + 0x10),
                                                      fVar24 * *(float *)(lVar14 + 0x14),
                                                      *(undefined4 *)(lVar10 + 0x324),uVar12,0);
                                  if (plVar19[7] != 0) {
                                    uVar12 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                       (uVar12,*(undefined8 *)(plVar19[7] + 0x328),
                                                        *(undefined8 *)puVar3);
                                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                              (0,uVar11,uVar12,0);
                                    if (plVar19[7] != 0) {
                                      uVar23 = *(undefined4 *)(plVar19[7] + 0x334);
                                      uVar12 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayOutOfBottleHitPath_2611524
                                                         (*(undefined4 *)(lVar8 + 0x20),
                                                          *(undefined4 *)(lVar8 + 0x24),0,plVar19,
                                                          lVar9,uVar5);
                                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                (uVar23,uVar11,uVar12,0);
                                      if (plVar19[7] != 0) {
                                        uVar5 = *(undefined4 *)(plVar19[7] + 0x334);
                                        uVar12 = UnityEngine_Component__get_transform_408b444
                                                           (plVar19,0);
                                        if (plVar19[7] != 0) {
                                          fVar24 = *(float *)(plVar19[7] + 0x338);
                                          if (cRam0000000005c230a9 == '\0') {
                                            FUN_012d0dc8(PTR_DAT_05805c10);
                                            cRam0000000005c230a9 = '\x01';
                                          }
                                          lVar10 = *(long *)(*(long *)puVar4 + 0xb8);
                                          uVar12 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                             (fVar24 * *(float *)(lVar10 + 0xc),
                                                              fVar24 * *(float *)(lVar10 + 0x10),
                                                              fVar24 * *(float *)(lVar10 + 0x14),
                                                              uVar7,uVar12,0);
                                          if (plVar19[7] != 0) {
                                            uVar12 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar12,*(undefined8 *)
                                                                     (plVar19[7] + 0x340),
                                                             *(undefined8 *)puVar3);
                                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                      (uVar5,uVar11,uVar12,0);
                                            if (plVar19[7] != 0) {
                                              uVar5 = *(undefined4 *)(plVar19[7] + 0x334);
                                              lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                              if (lVar10 != 0) {
                                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                                          (lVar10,lVar8,
                                                           *(undefined8 *)PTR_DAT_05782340,0);
                                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                          (uVar5,uVar11,lVar10,0);
                                                lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                                if (lVar10 != 0) {
                                                  DG_Tweening_TweenCallback___ctor_1ed6da8
                                                            (lVar10,lVar8,
                                                             *(undefined8 *)PTR_DAT_057cf7e8,0);
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            ((float)uVar7 + fVar20,uVar11,lVar10,0);
                                                  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar10,plVar19,
                                                               *(undefined8 *)(*plVar19 + 0x1d0),0);
                                                                                                        
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (0x40400000,uVar11,lVar10,0);
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
            }
LAB_0271132c:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

