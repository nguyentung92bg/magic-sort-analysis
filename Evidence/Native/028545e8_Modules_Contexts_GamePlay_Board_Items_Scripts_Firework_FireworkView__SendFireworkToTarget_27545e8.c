/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$SendFireworkToTarget
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SendFireworkToTarget (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$SendFireworkToTarget
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SendFireworkToTarget
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this,
   UnityEngine_Vector3_o targetPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SendFireworkToTarget_27545e8
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  float fVar17;
  undefined8 uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  puVar2 = PTR_DAT_057f3140;
  uVar23 = param_2;
  uVar18 = param_3;
  if ((bRam0000000005c2c71b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791030);
    FUN_012d0dc8(PTR_DAT_057a1538);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05769fb8);
    FUN_012d0dc8(PTR_DAT_057db908);
    FUN_012d0dc8(PTR_DAT_0580d4c8);
    FUN_012d0dc8(PTR_DAT_0578df98);
    FUN_012d0dc8(PTR_DAT_05791040);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057e5928);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    FUN_012d0dc8(PTR_DAT_057959d0);
    FUN_012d0dc8(PTR_DAT_0575bb28);
    FUN_012d0dc8(PTR_DAT_057ceb38);
    FUN_012d0dc8(PTR_DAT_0578c170);
    FUN_012d0dc8(PTR_DAT_05803218);
    FUN_012d0dc8(PTR_DAT_057f3140);
    bRam0000000005c2c71b = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_057815e0;
  puVar2 = PTR_DAT_05777ce8;
  if (lVar7 != 0) {
    System_Object___ctor_23dfe5c(lVar7,0);
    *(long *)(lVar7 + 0x30) = param_4;
    FUN_012d0d74((long *)(lVar7 + 0x30),param_4);
    *(undefined4 *)(lVar7 + 0x50) = param_1;
    *(int *)(lVar7 + 0x54) = (int)param_2;
    *(int *)(lVar7 + 0x58) = (int)param_3;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
    DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60(uVar8,param_4,*(undefined8 *)puVar2);
    plVar15 = (long *)(lVar7 + 0x10);
    *plVar15 = 0;
    FUN_012d0d74(plVar15,0);
    puVar6 = PTR_DAT_057db908;
    puVar5 = PTR_DAT_05791040;
    puVar4 = PTR_DAT_0578df98;
    puVar2 = PTR_DAT_05769fb8;
    lVar9 = *(long *)(param_4 + 0x50);
    if (lVar9 != 0) {
      iVar16 = 0;
      while( true ) {
        fVar21 = (float)uVar18;
        fVar20 = (float)uVar23;
        if (*(int *)(lVar9 + 0x18) <= iVar16) break;
        lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar9,iVar16,*(undefined8 *)puVar4);
        if (*(long *)(param_4 + 0x58) == 0) goto LAB_02854d98;
        uVar10 = System_Collections_Generic_List_object___Contains_21fce6c
                           (*(long *)(param_4 + 0x58),lVar9,*(undefined8 *)puVar6);
        fVar21 = (float)uVar18;
        fVar20 = (float)uVar23;
        if ((uVar10 & 1) == 0) {
          lVar11 = *(long *)(param_4 + 0x58);
          if (lVar11 != 0) {
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar14 = *(long *)puVar2;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar9;
                FUN_012d0d74(plVar13,lVar9);
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar11,lVar9);
              }
              *plVar15 = lVar9;
              FUN_012d0d74(plVar15,lVar9);
              break;
            }
          }
          goto LAB_02854d98;
        }
        lVar9 = *(long *)(param_4 + 0x50);
        iVar16 = iVar16 + 1;
        if (lVar9 == 0) goto LAB_02854d98;
      }
      if (*plVar15 == 0) {
        return uVar8;
      }
      plVar13 = (long *)(lVar7 + 0x28);
      *plVar13 = *(long *)(*plVar15 + 0x10);
      FUN_012d0d74(plVar13);
      if (*plVar13 != 0) {
        fVar17 = (float)UnityEngine_Transform__get_position_4092b08(*plVar13,0);
        *(float *)(lVar7 + 0x18) = fVar17;
        *(float *)(lVar7 + 0x1c) = fVar20;
        *(float *)(lVar7 + 0x20) = fVar21;
        fVar25 = *(float *)(lVar7 + 0x50);
        fVar26 = *(float *)(lVar7 + 0x54);
        fVar27 = *(float *)(lVar7 + 0x58);
        if (cRam0000000005c25e4a == '\0') {
          FUN_012d0dc8(PTR_DAT_057d6f00);
          cRam0000000005c25e4a = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar9 = *(long *)(param_4 + 0x20);
        if (lVar9 != 0) {
          fVar17 = fVar17 - fVar25;
          fVar20 = fVar20 - fVar26;
          fVar21 = fVar21 - fVar27;
          fVar21 = SQRT(fVar21 * fVar21 + fVar17 * fVar17 + fVar20 * fVar20);
          fVar17 = fVar21 * *(float *)(lVar9 + 0x84);
          fVar21 = fVar21 * *(float *)(lVar9 + 0x90);
          fVar20 = *(float *)(lVar9 + 0x8c);
          if (fVar17 <= *(float *)(lVar9 + 0x8c)) {
            fVar20 = fVar17;
          }
          uVar23 = *(undefined8 *)(lVar7 + 0x18);
          fVar25 = *(float *)(lVar7 + 0x20);
          if (fVar17 < *(float *)(lVar9 + 0x88)) {
            fVar20 = *(float *)(lVar9 + 0x88);
          }
          fVar17 = *(float *)(lVar9 + 0x98);
          if (fVar21 <= *(float *)(lVar9 + 0x98)) {
            fVar17 = fVar21;
          }
          if (fVar21 < *(float *)(lVar9 + 0x94)) {
            fVar17 = *(float *)(lVar9 + 0x94);
          }
          if (cRam0000000005c230ac == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230ac = '\x01';
          }
          lVar9 = *(long *)PTR_DAT_05805c10;
          lVar11 = *(long *)(lVar9 + 0xb8);
          uVar18 = *(undefined8 *)(lVar11 + 0x18);
          fVar21 = *(float *)(lVar11 + 0x20);
          *(ulong *)(lVar7 + 0x38) =
               CONCAT44((float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar18 >> 0x20) * fVar20,
                        (float)uVar23 + (float)uVar18 * fVar20);
          *(float *)(lVar7 + 0x40) = fVar25 + fVar20 * fVar21;
          lVar9 = *(long *)(lVar9 + 0xb8);
          uVar23 = *(undefined8 *)(lVar9 + 0x18);
          fVar20 = *(float *)(lVar9 + 0x20);
          *(ulong *)(lVar7 + 0x44) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x50) >> 0x20) +
                        (float)((ulong)uVar23 >> 0x20) * fVar17,
                        (float)*(undefined8 *)(lVar7 + 0x50) + (float)uVar23 * fVar17);
          *(float *)(lVar7 + 0x4c) = *(float *)(lVar7 + 0x58) + fVar17 * fVar20;
          lVar9 = *(long *)(param_4 + 0x20);
          if (lVar9 != 0) {
            uVar22 = *(undefined4 *)(lVar9 + 0xa0);
            uVar24 = *(undefined4 *)(lVar9 + 0xa4);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            dVar19 = (double)Modules_Infrastructure_Common_Scripts_RandomUtil__GetRandomFromTo_40e4b30
                                       (uVar24,uVar22,0);
            if (*(long *)(param_4 + 0x20) != 0) {
              fVar20 = *(float *)(lVar7 + 0x1c);
              if (*(float *)(lVar7 + 0x1c) <= *(float *)(lVar7 + 0x54)) {
                fVar20 = *(float *)(lVar7 + 0x54);
              }
              fVar21 = fVar20 + *(float *)(*(long *)(param_4 + 0x20) + 0x9c) + (float)dVar19;
              fVar20 = *(float *)(lVar7 + 0x3c);
              if (*(float *)(lVar7 + 0x3c) <= fVar21) {
                fVar20 = fVar21;
              }
              fVar17 = *(float *)(lVar7 + 0x48);
              if (*(float *)(lVar7 + 0x48) <= fVar21) {
                fVar17 = fVar21;
              }
              *(float *)(lVar7 + 0x3c) = fVar20;
              *(float *)(lVar7 + 0x48) = fVar17;
              if (*(long *)(lVar7 + 0x28) != 0) {
                fVar21 = *(float *)(lVar7 + 0x50);
                fVar20 = (float)UnityEngine_Transform__get_position_4092b08
                                          (*(long *)(lVar7 + 0x28),0);
                lVar9 = *(long *)(param_4 + 0x20);
                if (lVar9 != 0) {
                  fVar17 = *(float *)(lVar9 + 0xac);
                  if ((0.0 < fVar17) && (fVar25 = ABS(fVar21 - fVar20), fVar25 < fVar17)) {
                    fVar26 = -1.0;
                    if (iVar16 != 0) {
                      fVar26 = 1.0;
                    }
                    fVar27 = 1.0;
                    if (fVar21 - fVar20 < 0.0) {
                      fVar27 = -1.0;
                    }
                    if (iVar16 != 1) {
                      fVar27 = fVar26;
                    }
                    fVar20 = (1.0 - fVar25 / fVar17) * fVar27 * *(float *)(lVar9 + 0xb0);
                    if (*(float *)(lVar7 + 0x1c) <= *(float *)(lVar7 + 0x54)) {
                      if (iVar16 == 1) {
                        fVar20 = *(float *)(lVar7 + 0x38) - fVar20;
                      }
                      else {
                        fVar20 = fVar20 + *(float *)(lVar7 + 0x38);
                      }
                      *(float *)(lVar7 + 0x38) = fVar20;
                    }
                    else {
                      *(float *)(lVar7 + 0x44) = fVar20 + *(float *)(lVar7 + 0x44);
                    }
                  }
                  fVar20 = *(float *)(lVar9 + 0x28);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  dVar19 = (double)Modules_Infrastructure_Common_Scripts_RandomUtil__GetRandomFromTo_40e4b30
                                             (-fVar20,fVar20,0);
                  puVar2 = PTR_DAT_057606c8;
                  if (*(long *)(param_4 + 0x20) != 0) {
                    fVar20 = *(float *)(*(long *)(param_4 + 0x20) + 0x70);
                    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                    if (lVar9 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar9,lVar7,*(undefined8 *)PTR_DAT_057959d0,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar8,lVar9,0);
                      *(undefined4 *)(lVar7 + 0x24) = 0;
                      lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05791030);
                      if (lVar9 != 0) {
                        DG_Tweening_Core_DOGetter_float____ctor_156d324
                                  (lVar9,lVar7,*(undefined8 *)PTR_DAT_0575bb28,0);
                        lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057a1538);
                        if (lVar11 != 0) {
                          fVar20 = fVar20 + (float)dVar19;
                          DG_Tweening_Core_DOSetter_float____ctor_156e614
                                    (lVar11,lVar7,*(undefined8 *)PTR_DAT_057ceb38,0);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                          }
                          uVar23 = DG_Tweening_DOTween__To_1ed84a4(0x3f800000,fVar20,lVar9,lVar11,0)
                          ;
                          if (*(long *)(param_4 + 0x20) != 0) {
                            uVar23 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                               (uVar23,*(undefined8 *)
                                                        (*(long *)(param_4 + 0x20) + 0x78),
                                                *(undefined8 *)PTR_DAT_057e5928);
                            DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar23,0);
                            puVar3 = PTR_DAT_057874c0;
                            lVar9 = *(long *)(param_4 + 0x20);
                            if (lVar9 != 0) {
                              uVar22 = *(undefined4 *)(lVar9 + 0x30);
                              uVar23 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                 (*(undefined4 *)(lVar9 + 0x34),
                                                  *(undefined4 *)(lVar9 + 0x38),
                                                  *(undefined4 *)(lVar9 + 0x3c),
                                                  *(undefined4 *)(lVar9 + 0x40),*plVar13,0);
                              if (*(long *)(param_4 + 0x20) != 0) {
                                uVar23 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                   (uVar23,*(undefined8 *)
                                                            (*(long *)(param_4 + 0x20) + 0x48),
                                                    *(undefined8 *)puVar3);
                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                          (uVar22,uVar8,uVar23,0);
                                lVar9 = *(long *)(param_4 + 0x20);
                                if (lVar9 != 0) {
                                  uVar22 = *(undefined4 *)(lVar9 + 0x50);
                                  uVar23 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                     (*(undefined4 *)(lVar9 + 0x54),
                                                      *(undefined4 *)(lVar9 + 0x58),
                                                      *(undefined4 *)(lVar9 + 0x5c),
                                                      *(undefined4 *)(lVar9 + 0x60),*plVar13,0);
                                  if (*(long *)(param_4 + 0x20) != 0) {
                                    uVar23 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                       (uVar23,*(undefined8 *)
                                                                (*(long *)(param_4 + 0x20) + 0x68),
                                                        *(undefined8 *)puVar3);
                                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                              (uVar22,uVar8,uVar23,0);
                                    if (*(long *)(param_4 + 0x20) != 0) {
                                      fVar21 = *(float *)(*(long *)(param_4 + 0x20) + 0xb4);
                                      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                      if (lVar9 != 0) {
                                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                                  (lVar9,lVar7,*(undefined8 *)PTR_DAT_0578c170,0);
                                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                  (fVar20 + fVar21,uVar8,lVar9,0);
                                        if (*(long *)(param_4 + 0x20) != 0) {
                                          fVar21 = *(float *)(*(long *)(param_4 + 0x20) + 0x2c);
                                          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                          if (lVar9 != 0) {
                                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                                      (lVar9,lVar7,*(undefined8 *)PTR_DAT_05803218,0
                                                      );
                                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                      (fVar20 - fVar21,uVar8,lVar9,0);
                                            return uVar8;
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
LAB_02854d98:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

