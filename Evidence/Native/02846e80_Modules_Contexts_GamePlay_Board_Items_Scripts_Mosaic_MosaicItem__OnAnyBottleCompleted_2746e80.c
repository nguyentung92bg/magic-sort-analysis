/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicItem$$OnAnyBottleCompleted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__OnAnyBottleCompleted (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x028473f8) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicItem$$OnAnyBottleCompleted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__OnAnyBottleCompleted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__OnAnyBottleCompleted_2746e80
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  if ((bRam0000000005c2c6a3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057ec5e8);
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2c6a3 = 1;
  }
  puVar3 = PTR_DAT_057ec5e8;
  if (*(long *)(param_1 + 0x58) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x58) + 0x18) < 1) {
      return;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      uVar10 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                         (*(long *)(param_1 + 0x68),param_3,*(undefined8 *)PTR_DAT_057ec5e8);
      if ((uVar10 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar10 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                           (*(long *)(param_1 + 0x70),param_3,*(undefined8 *)puVar3);
        if ((uVar10 & 1) != 0) {
          return;
        }
        lVar11 = *(long *)(param_1 + 0x70);
        if (lVar11 != 0) {
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar15 = *(long *)PTR_DAT_05814878;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = param_3;
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar11,param_3);
            }
            if ((bRam0000000005c2c6a4 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0575c3c8);
              FUN_012d0dc8(PTR_DAT_0576aae0);
              FUN_012d0dc8(PTR_DAT_057d0ba8);
              FUN_012d0dc8(PTR_DAT_057605b8);
              FUN_012d0dc8(PTR_DAT_057a7f80);
              FUN_012d0dc8(PTR_DAT_057b41c8);
              FUN_012d0dc8(PTR_DAT_058093f0);
              FUN_012d0dc8(PTR_DAT_05817b98);
              FUN_012d0dc8(PTR_DAT_05768d80);
              FUN_012d0dc8(PTR_DAT_057b7918);
              FUN_012d0dc8(PTR_DAT_05813f90);
              FUN_012d0dc8(PTR_DAT_05777bc8);
              FUN_012d0dc8(PTR_DAT_057e3888);
              FUN_012d0dc8(PTR_DAT_057ec4b8);
              FUN_012d0dc8(PTR_DAT_057b8520);
              FUN_012d0dc8(PTR_DAT_057606c8);
              bRam0000000005c2c6a4 = 1;
            }
            uStack_88 = 0;
            plStack_80 = (long *)0x0;
            uStack_90 = 0;
            uStack_a8 = 0;
            plStack_a0 = (long *)0x0;
            uStack_b0 = 0;
            if (*(char *)(param_1 + 0x40) != '\0') {
              return;
            }
            iVar2 = *(int *)(param_1 + 0x60) + -1;
            *(int *)(param_1 + 0x60) = iVar2;
            puVar3 = PTR_DAT_057ec4b8;
            if (iVar2 < 1) {
              if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar11 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                 (*(undefined8 *)puVar3);
              puVar3 = PTR_DAT_0576aae0;
              if (lVar11 != 0) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar11,0);
                *(undefined1 *)(param_1 + 0x40) = 1;
                if (((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
                    (lVar11 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar11 != 0))
                   && (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                          (lVar11,*(undefined8 *)PTR_DAT_0575c3c8), lVar11 != 0)) {
                  lVar13 = *(long *)(param_1 + 0x48);
                  auVar17 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSafeAnimationSorting_40032cc
                                      (lVar11,0);
                  if (lVar13 != 0) {
                    Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__SetSorting_27475c8
                              (lVar13,auVar17._0_8_,auVar17._8_8_);
                    if (((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
                       (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar11 != 0)) {
                      lVar11 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetMosaicConfigsForSize_2745f48
                                         (lVar11,*(int *)(*(long *)(param_1 + 0x58) + 0x18) + -1);
                      if ((*(long *)(param_1 + 0x48) != 0) &&
                         (uVar12 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayCompleteAnimation_2747624
                                             (*(long *)(param_1 + 0x48),
                                              *(undefined8 *)(param_1 + 0x58),param_3,param_2),
                         puVar3 = PTR_DAT_057606c8, lVar11 != 0)) {
                        uVar16 = *(undefined4 *)(lVar11 + 0x1c);
                        lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                        if (lVar13 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar13,param_1,*(undefined8 *)PTR_DAT_057e3888,0);
                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                    (uVar16,uVar12,lVar13,0);
                          uVar16 = *(undefined4 *)(lVar11 + 0x20);
                          lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                          if (lVar11 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar11,param_1,*(undefined8 *)PTR_DAT_05777bc8,0);
                            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                      (uVar16,uVar12,lVar11,0);
                            if (*(long *)(param_1 + 0x50) != 0) {
                              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
                                        (*(long *)(param_1 + 0x50),param_1,0);
                              puVar7 = PTR_DAT_057d0ba8;
                              puVar6 = PTR_DAT_057b7918;
                              puVar5 = PTR_DAT_057b41c8;
                              puVar4 = PTR_DAT_057a7f80;
                              puVar3 = PTR_DAT_057605b8;
                              if (*(long *)(param_1 + 0x58) != 0) {
                                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                          (&uStack_c8,*(long *)(param_1 + 0x58),
                                           *(undefined8 *)PTR_DAT_05768d80);
                                puVar8 = PTR_DAT_05805c10;
                                uStack_88 = uStack_c0;
                                uStack_90 = uStack_c8;
                                plStack_80 = plStack_b8;
                                while( true ) {
                                  uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                     (&uStack_90,*(undefined8 *)puVar5);
                                  plVar9 = plStack_80;
                                  if ((uVar10 & 1) == 0) {
                                    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                              (&uStack_90,*(undefined8 *)puVar7);
                                    return;
                                  }
                                  if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                                            (plStack_80,param_1,0);
                                  if (plVar9[8] == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                                            (plVar9[8],param_1,0);
                                  (**(code **)(*plVar9 + 0x278))
                                            (plVar9,*(undefined8 *)(*plVar9 + 0x280));
                                  if (cRam0000000005c230aa == '\0') {
                                    FUN_012d0dc8(puVar8);
                                    cRam0000000005c230aa = '\x01';
                                  }
                                  puVar14 = *(undefined4 **)(*(long *)puVar8 + 0xb8);
                                  (**(code **)(*plVar9 + 0x1d8))
                                            (*puVar14,puVar14[1],puVar14[2],plVar9,
                                             *(undefined8 *)(*plVar9 + 0x1e0));
                                  if (plVar9[0x11] == 0) break;
                                  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                            (&uStack_c8,plVar9[0x11],*(undefined8 *)puVar6);
                                  uStack_a8 = uStack_c0;
                                  uStack_b0 = uStack_c8;
                                  plStack_a0 = plStack_b8;
                                  while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                            (&uStack_b0,*(undefined8 *)puVar4),
                                        plVar9 = plStack_a0, (uVar10 & 1) != 0) {
                                    if (plStack_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_012d0ef0();
                                    }
                                    (**(code **)(*plStack_a0 + 0x278))
                                              (plStack_a0,*(undefined8 *)(*plStack_a0 + 0x280));
                                    if (cRam0000000005c230aa == '\0') {
                                      FUN_012d0dc8(puVar8);
                                      cRam0000000005c230aa = '\x01';
                                    }
                                    lVar11 = *plVar9;
                                    puVar14 = *(undefined4 **)(*(long *)puVar8 + 0xb8);
                                    (**(code **)(lVar11 + 0x1d8))
                                              (*puVar14,puVar14[1],puVar14[2],plVar9,
                                               *(undefined8 *)(lVar11 + 0x1e0));
                                  }
                                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                            (&uStack_b0,*(undefined8 *)puVar3);
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
            }
            else if (*(long *)(param_1 + 0x48) != 0) {
              Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayProgressAnimation_274753c
                        (*(long *)(param_1 + 0x48),param_3,param_2);
              return;
            }
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

