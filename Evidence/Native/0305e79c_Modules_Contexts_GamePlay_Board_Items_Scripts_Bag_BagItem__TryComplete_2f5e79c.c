/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$TryComplete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__TryComplete (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$TryComplete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__TryComplete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const
   MethodInfo* method); */

ulong Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__TryComplete_2f5e79c
                (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  
  if ((bRam0000000005c308e9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05806490);
    FUN_012d0dc8(PTR_DAT_057ce538);
                    /* try { // try from 0305e7d8 to 0315e99b has its CatchHandler @ 0305e7d8
                       catch() { ... } // from try @ 0305e7d8 with catch @ 0305e7d8
                       catch() { ... } // from try @ 0305ef64 with catch @ 0305e7d8
                       catch() { ... } // from try @ 0305f03c with catch @ 0305e7d8
                       catch() { ... } // from try @ 0305f0dc with catch @ 0305e7d8 */
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c308e9 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasOverlayBlocker_248d97c
                      (*(long *)(param_1 + 0x50),0);
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
    iVar2 = *(int *)(param_1 + 0x58) + -1;
    *(int *)(param_1 + 0x58) = iVar2;
    puVar4 = PTR_DAT_057ce538;
    puVar3 = PTR_DAT_057ac6b8;
    if (iVar2 < 1) {
      if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar4);
      if (lVar7 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar7,0);
        *(undefined1 *)(param_1 + 0x40) = 1;
        if (*(long *)(param_1 + 0x50) != 0) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                    (*(long *)(param_1 + 0x50),param_1,0);
          if (*(long *)(param_1 + 0x48) != 0) {
            uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayCompleteAnimation_2f5ef04
                              (*(long *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x50));
            if ((*(long *)(param_1 + 0x50) != 0) &&
               (lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), lVar7 != 0)) {
              Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar7,param_1,0);
              if ((*(long *)(param_1 + 0x48) != 0) &&
                 (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x40), lVar7 != 0)) {
                uVar20 = *(undefined4 *)(lVar7 + 0x50);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                if (lVar7 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar7,param_1,*(undefined8 *)PTR_DAT_05806490,0);
                  uVar5 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                    (uVar6,0,1);
                  if ((lVar7 != 0) && ((uVar5 & 1) != 0)) {
                    DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar20,uVar6,lVar7);
                  }
                  return uVar6;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x48);
      if (lVar7 != 0) {
        lVar11 = *(long *)(param_1 + 0x50);
        if ((bRam0000000005c308ef & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05811dd0);
          FUN_012d0dc8(PTR_DAT_057815e0);
          FUN_012d0dc8(PTR_DAT_0575a2d8);
          FUN_012d0dc8(PTR_DAT_057606c8);
          FUN_012d0dc8(PTR_DAT_057efb20);
          FUN_012d0dc8(PTR_DAT_057f37e0);
          FUN_012d0dc8(PTR_DAT_057ac6b8);
          bRam0000000005c308ef = 1;
        }
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if (lVar8 != 0) {
          System_Object___ctor_23dfe5c(lVar8,0);
          *(long *)(lVar8 + 0x10) = lVar7;
          FUN_012d0d74((long *)(lVar8 + 0x10),lVar7);
          iVar1 = *(int *)(lVar7 + 0x88);
          if (iVar2 <= *(int *)(lVar7 + 0x88)) {
            iVar1 = iVar2;
          }
          *(int *)(lVar7 + 0x88) = iVar1;
          if ((lVar11 != 0) &&
             (plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                         (lVar11,0), puVar3 = PTR_DAT_0575a2d8,
             plVar9 != (long *)0x0)) {
            lVar13 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar6 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0575a2d8) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0305ea80;
                }
                uVar6 = uVar6 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar6 != 0);
            }
            puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0575a2d8,0);
LAB_0305ea80:
            fVar15 = (float)(*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((param_2 != 0) &&
               (plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                           (param_2,0), plVar9 != (long *)0x0)) {
              lVar13 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar6 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0305eaf4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar6 != 0);
              }
              puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar3,0);
LAB_0305eaf4:
              fVar16 = (float)(*(code *)*puVar10)(plVar9,puVar10[1]);
              if (cRam0000000005c23465 == '\0') {
                FUN_012d0dc8(PTR_DAT_05764ae0);
                cRam0000000005c23465 = '\x01';
              }
              fVar17 = ABS(fVar15);
              if (ABS(fVar15) <= ABS(fVar16)) {
                fVar17 = ABS(fVar16);
              }
              fVar19 = **(float **)(*(long *)PTR_DAT_05764ae0 + 0xb8) * 8.0;
              fVar21 = fVar17 * _LAB_04321df0;
              if (fVar17 * _LAB_04321df0 <= fVar19) {
                fVar21 = fVar19;
              }
              plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                         (lVar11,0);
              if (plVar9 != (long *)0x0) {
                lVar13 = *plVar9;
                uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar6 != 0) {
                  piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                      puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_0305ebc4;
                    }
                    uVar6 = uVar6 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar6 != 0);
                }
                puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar3,0);
LAB_0305ebc4:
                (*(code *)*puVar10)(plVar9,puVar10[1]);
                plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                           (param_2,0);
                if (plVar9 != (long *)0x0) {
                  lVar13 = *plVar9;
                  uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar6 != 0) {
                    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                        puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_0305ec34;
                      }
                      uVar6 = uVar6 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar3,0);
LAB_0305ec34:
                  (*(code *)*puVar10)(plVar9,puVar10[1]);
                  if (cRam0000000005c23465 == '\0') {
                    FUN_012d0dc8(PTR_DAT_05764ae0);
                    cRam0000000005c23465 = '\x01';
                  }
                  if (fVar21 <= ABS(fVar16 - fVar15)) {
                    plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                               (lVar11,0);
                    if (plVar9 == (long *)0x0) goto LAB_0305ef00;
                    lVar13 = *plVar9;
                    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    if (uVar6 != 0) {
                      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_0305ed10;
                        }
                        uVar6 = uVar6 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar3,0);
LAB_0305ed10:
                    fVar15 = (float)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                               (param_2,0);
                    if (plVar9 == (long *)0x0) goto LAB_0305ef00;
                    lVar13 = *plVar9;
                    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    if (uVar6 != 0) {
                      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_0305ed80;
                        }
                        uVar6 = uVar6 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar3,0);
LAB_0305ed80:
                    fVar16 = (float)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    bVar12 = fVar16 < fVar15;
                  }
                  else {
                    fVar15 = (float)UnityEngine_Random__get_value_383a5ac(0);
                    bVar12 = fVar15 < 0.5;
                  }
                  *(bool *)(lVar8 + 0x18) = bVar12;
                  puVar4 = PTR_DAT_057815e0;
                  puVar3 = PTR_DAT_057606c8;
                  if (*(long *)(lVar7 + 0x40) != 0) {
                    uVar18 = UnityEngine_Random__Range_383a610
                                       (0,*(undefined4 *)(*(long *)(lVar7 + 0x40) + 0x44),0);
                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar18,uVar6,0);
                    uVar18 = Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__StartTrailMove_2f5fe38
                                       (lVar7,param_2);
                    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar18,0);
                    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    if (lVar13 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar13,lVar7,*(undefined8 *)PTR_DAT_05811dd0,0);
                      DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar6,lVar13,0);
                      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                      if (lVar7 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar7,lVar8,*(undefined8 *)PTR_DAT_057efb20,0);
                        DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar6,lVar7,0);
                        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                        if (lVar7 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar7,lVar8,*(undefined8 *)PTR_DAT_057f37e0,0);
                          DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar6,lVar7,0)
                          ;
                          puVar3 = PTR_DAT_0575c420;
                          if ((bRam0000000005c308f3 & 1) == 0) {
                            FUN_012d0dc8(PTR_DAT_057606c8);
                            FUN_012d0dc8(PTR_DAT_057b83c8);
                            FUN_012d0dc8(PTR_DAT_0575c420);
                            bRam0000000005c308f3 = 1;
                          }
                          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                          puVar3 = PTR_DAT_057606c8;
                          if (lVar7 != 0) {
                            System_Object___ctor_23dfe5c(lVar7,0);
                            *(long *)(lVar7 + 0x10) = lVar11;
                            FUN_012d0d74((long *)(lVar7 + 0x10),lVar11);
                            lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                            if (lVar11 != 0) {
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar11,lVar7,*(undefined8 *)PTR_DAT_057b83c8,0);
                              uVar5 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                                (uVar6,0,1);
                              if ((lVar11 != 0) && ((uVar5 & 1) != 0)) {
                                if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                DG_Tweening_Sequence__DoInsertCallback_1edffe8
                                          (*(undefined4 *)(uVar6 + 0xa0),uVar6,lVar11);
                              }
                              return uVar6;
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0305ef00:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

