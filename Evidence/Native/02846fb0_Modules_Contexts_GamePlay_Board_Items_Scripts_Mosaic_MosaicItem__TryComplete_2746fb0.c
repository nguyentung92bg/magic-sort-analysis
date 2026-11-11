/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicItem$$TryComplete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__TryComplete (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem_o* __this, int32_t waterColorId, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x028473f8) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicItem$$TryComplete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__TryComplete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem_o* __this, int32_t waterColorId,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__TryComplete_2746fb0
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
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
  iVar1 = *(int *)(param_1 + 0x60) + -1;
  *(int *)(param_1 + 0x60) = iVar1;
  puVar2 = PTR_DAT_057ec4b8;
  if (iVar1 < 1) {
    if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_0576aae0;
    if (lVar9 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar9,0);
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) &&
         (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar9,*(undefined8 *)PTR_DAT_0575c3c8), lVar9 != 0)) {
        lVar13 = *(long *)(param_1 + 0x48);
        auVar15 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSafeAnimationSorting_40032cc
                            (lVar9,0);
        if (lVar13 != 0) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__SetSorting_27475c8
                    (lVar13,auVar15._0_8_,auVar15._8_8_);
          if (((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
             (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar9 != 0)) {
            lVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetMosaicConfigsForSize_2745f48
                              (lVar9,*(int *)(*(long *)(param_1 + 0x58) + 0x18) + -1);
            if ((*(long *)(param_1 + 0x48) != 0) &&
               (uVar10 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__PlayCompleteAnimation_2747624
                                   (*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                                    param_2,param_3), puVar2 = PTR_DAT_057606c8, lVar9 != 0)) {
              uVar14 = *(undefined4 *)(lVar9 + 0x1c);
              lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
              if (lVar13 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar13,param_1,*(undefined8 *)PTR_DAT_057e3888,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar14,uVar10,lVar13,0);
                uVar14 = *(undefined4 *)(lVar9 + 0x20);
                lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if (lVar9 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar9,param_1,*(undefined8 *)PTR_DAT_05777bc8,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar14,uVar10,lVar9,0)
                  ;
                  if (*(long *)(param_1 + 0x50) != 0) {
                    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
                              (*(long *)(param_1 + 0x50),param_1,0);
                    puVar6 = PTR_DAT_057d0ba8;
                    puVar5 = PTR_DAT_057b7918;
                    puVar4 = PTR_DAT_057b41c8;
                    puVar3 = PTR_DAT_057a7f80;
                    puVar2 = PTR_DAT_057605b8;
                    if (*(long *)(param_1 + 0x58) != 0) {
                      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                (&uStack_c8,*(long *)(param_1 + 0x58),
                                 *(undefined8 *)PTR_DAT_05768d80);
                      puVar7 = PTR_DAT_05805c10;
                      uStack_88 = uStack_c0;
                      uStack_90 = uStack_c8;
                      plStack_80 = plStack_b8;
                      while( true ) {
                        uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                           (&uStack_90,*(undefined8 *)puVar4);
                        plVar8 = plStack_80;
                        if ((uVar11 & 1) == 0) {
                          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                    (&uStack_90,*(undefined8 *)puVar6);
                          return;
                        }
                        if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                                  (plStack_80,param_1,0);
                        if (plVar8[8] == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                                  (plVar8[8],param_1,0);
                        (**(code **)(*plVar8 + 0x278))(plVar8,*(undefined8 *)(*plVar8 + 0x280));
                        if (cRam0000000005c230aa == '\0') {
                          FUN_012d0dc8(puVar7);
                          cRam0000000005c230aa = '\x01';
                        }
                        puVar12 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                        (**(code **)(*plVar8 + 0x1d8))
                                  (*puVar12,puVar12[1],puVar12[2],plVar8,
                                   *(undefined8 *)(*plVar8 + 0x1e0));
                        if (plVar8[0x11] == 0) break;
                        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                  (&uStack_c8,plVar8[0x11],*(undefined8 *)puVar5);
                        uStack_a8 = uStack_c0;
                        uStack_b0 = uStack_c8;
                        plStack_a0 = plStack_b8;
                        while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                                  (&uStack_b0,*(undefined8 *)puVar3),
                              plVar8 = plStack_a0, (uVar11 & 1) != 0) {
                          if (plStack_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          (**(code **)(*plStack_a0 + 0x278))
                                    (plStack_a0,*(undefined8 *)(*plStack_a0 + 0x280));
                          if (cRam0000000005c230aa == '\0') {
                            FUN_012d0dc8(puVar7);
                            cRam0000000005c230aa = '\x01';
                          }
                          lVar9 = *plVar8;
                          puVar12 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                          (**(code **)(lVar9 + 0x1d8))
                                    (*puVar12,puVar12[1],puVar12[2],plVar8,
                                     *(undefined8 *)(lVar9 + 0x1e0));
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                  (&uStack_b0,*(undefined8 *)puVar2);
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
              (*(long *)(param_1 + 0x48),param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

