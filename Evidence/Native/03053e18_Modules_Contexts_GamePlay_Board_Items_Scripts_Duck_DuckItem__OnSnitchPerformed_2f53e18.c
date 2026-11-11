/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckItem$$OnSnitchPerformed
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnSnitchPerformed (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02857ee8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckItem$$OnSnitchPerformed
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnSnitchPerformed
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnSnitchPerformed_2f53e18
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2c72c & 1) == 0) {
    FUN_012d0dc8(_UNK_04321764,PTR_DAT_0575c3c8,param_1,*(undefined1 *)(param_1 + 0x84),1,0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057911b0);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_057d5e38);
    FUN_012d0dc8(PTR_DAT_057cdfb8);
    FUN_012d0dc8(PTR_DAT_057eb630);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    bRam0000000005c2c72c = 1;
  }
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_90 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_b0 = 0;
  if (*(char *)(lVar11 + 0x40) == '\0') {
    if (*(long *)(lVar11 + 0x60) != 0) {
      System_Collections_Generic_List_object___Remove_21fe044
                (*(long *)(lVar11 + 0x60),param_1,*(undefined8 *)PTR_DAT_057d5e38);
      lVar8 = *(long *)(lVar11 + 0x48);
      if (lVar8 != 0) {
        *(int *)(lVar8 + 0xbc) = *(int *)(lVar8 + 0xbc) + 1;
        puVar1 = PTR_DAT_057eb630;
        if (*(long *)(lVar11 + 0x60) != 0) {
          if (*(int *)(*(long *)(lVar11 + 0x60) + 0x18) < 1) {
            if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar1);
            if (lVar8 != 0) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
              *(undefined1 *)(lVar11 + 0x40) = 1;
              if (*(long *)(lVar11 + 0x50) != 0) {
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
                          (*(long *)(lVar11 + 0x50),lVar11,0);
                puVar5 = PTR_DAT_057d0ba8;
                puVar4 = PTR_DAT_057b7918;
                puVar3 = PTR_DAT_057b41c8;
                puVar2 = PTR_DAT_057a7f80;
                puVar1 = PTR_DAT_057605b8;
                if (*(long *)(lVar11 + 0x58) != 0) {
                  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                            (&uStack_c8,*(long *)(lVar11 + 0x58),*(undefined8 *)PTR_DAT_05768d80);
                  puVar6 = PTR_DAT_05805c10;
                  uStack_88 = uStack_c0;
                  uStack_90 = uStack_c8;
                  plStack_80 = plStack_b8;
                  while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                            (&uStack_90,*(undefined8 *)puVar3), plVar7 = plStack_80,
                        (uVar10 & 1) != 0) {
                    if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                              (plStack_80,lVar11,0);
                    if (plVar7[8] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                              (plVar7[8],lVar11,0);
                    (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
                    if (cRam0000000005c230aa == '\0') {
                      FUN_012d0dc8(puVar6);
                      cRam0000000005c230aa = '\x01';
                    }
                    puVar12 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
                    (**(code **)(*plVar7 + 0x1d8))
                              (*puVar12,puVar12[1],puVar12[2],plVar7,
                               *(undefined8 *)(*plVar7 + 0x1e0));
                    if (plVar7[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                              (&uStack_c8,plVar7[0x11],*(undefined8 *)puVar4);
                    uStack_a8 = uStack_c0;
                    uStack_b0 = uStack_c8;
                    plStack_a0 = plStack_b8;
                    while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                              (&uStack_b0,*(undefined8 *)puVar2),
                          plVar7 = plStack_a0, (uVar10 & 1) != 0) {
                      if (plStack_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      (**(code **)(*plStack_a0 + 0x278))
                                (plStack_a0,*(undefined8 *)(*plStack_a0 + 0x280));
                      if (cRam0000000005c230aa == '\0') {
                        FUN_012d0dc8(puVar6);
                        cRam0000000005c230aa = '\x01';
                      }
                      lVar8 = *plVar7;
                      puVar12 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
                      (**(code **)(lVar8 + 0x1d8))
                                (*puVar12,puVar12[1],puVar12[2],plVar7,
                                 *(undefined8 *)(lVar8 + 0x1e0));
                    }
                    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                              (&uStack_b0,*(undefined8 *)puVar1);
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_90,*(undefined8 *)puVar5);
                  if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
                      (lVar8 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18),
                      lVar8 != 0)) &&
                     (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                        (lVar8,*(undefined8 *)PTR_DAT_0575c3c8), lVar8 != 0)) {
                    lVar13 = *(long *)(lVar11 + 0x48);
                    auVar16 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxAnimationSorting_4002c00
                                        (lVar8,0);
                    if (lVar13 != 0) {
                      Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetSorting_27582d0
                                (lVar13,auVar16._0_8_,auVar16._8_8_);
                      Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__PlayCompleteAnimation_2758314
                                (0,lVar11,1);
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__PlayCoverAnim_27580a4
                              ();
            if ((*(long *)(lVar11 + 0x48) != 0) &&
               (lVar8 = *(long *)(*(long *)(lVar11 + 0x48) + 0x28), lVar8 != 0)) {
              DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                        (*(undefined4 *)(lVar8 + 0x18),uVar9,*(undefined8 *)PTR_DAT_057f03e0);
              if ((*(long *)(lVar11 + 0x48) != 0) &&
                 (lVar8 = *(long *)(*(long *)(lVar11 + 0x48) + 0x28), lVar8 != 0)) {
                fVar14 = *(float *)(lVar8 + 0x18);
                fVar15 = *(float *)(lVar8 + 0x48);
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                if (lVar8 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar8,lVar11,*(undefined8 *)PTR_DAT_057911b0,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                            (fVar14 + fVar15,uVar9,lVar8,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

