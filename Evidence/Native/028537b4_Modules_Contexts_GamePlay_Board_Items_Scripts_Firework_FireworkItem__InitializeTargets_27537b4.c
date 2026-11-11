/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$InitializeTargets
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__InitializeTargets (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02853c54) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$InitializeTargets
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__InitializeTargets
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__InitializeTargets_27537b4
               (long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  int iStack_ac;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar3 = PTR_DAT_05776e08;
  if ((bRam0000000005c2c712 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dd7d8);
    FUN_012d0dc8(PTR_DAT_057699e8);
    FUN_012d0dc8(PTR_DAT_057f7e50);
    FUN_012d0dc8(PTR_DAT_057c8060);
    FUN_012d0dc8(PTR_DAT_057adb80);
    FUN_012d0dc8(PTR_DAT_05771960);
    FUN_012d0dc8(PTR_DAT_057b96b8);
    FUN_012d0dc8(PTR_DAT_057d5b00);
    FUN_012d0dc8(PTR_DAT_057b0e38);
    FUN_012d0dc8(PTR_DAT_05801f70);
    FUN_012d0dc8(PTR_DAT_0578d108);
    FUN_012d0dc8(PTR_DAT_057945a0);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057a2960);
    FUN_012d0dc8(PTR_DAT_058066c8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_057be708);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05790498);
    FUN_012d0dc8(PTR_DAT_05789d80);
    FUN_012d0dc8(PTR_DAT_057c9fa8);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057db558);
    FUN_012d0dc8(PTR_DAT_0577c0f0);
    FUN_012d0dc8(PTR_DAT_057a1cf0);
    FUN_012d0dc8(PTR_DAT_057b37b8);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f8be0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_05776e08);
    FUN_012d0dc8(PTR_DAT_057c6be8);
    FUN_012d0dc8(PTR_DAT_0575bdd8);
    FUN_012d0dc8(PTR_DAT_05815f68);
    FUN_012d0dc8(PTR_DAT_05791040);
    FUN_012d0dc8(PTR_DAT_0577fee0);
    FUN_012d0dc8(PTR_DAT_057b2ee0);
    bRam0000000005c2c712 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  iStack_ac = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_05801f70;
  if (lVar7 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_057b37b8);
    plVar17 = (long *)(param_1 + 0x68);
    *plVar17 = lVar7;
    FUN_012d0d74(plVar17,lVar7);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar7 != 0) {
      System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                (lVar7,*(undefined8 *)PTR_DAT_057adb80);
      puVar6 = PTR_DAT_057f2468;
      puVar5 = PTR_DAT_057c9fa8;
      puVar4 = PTR_DAT_057c8060;
      puVar3 = PTR_DAT_057b41c8;
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0x18), lVar8 != 0)) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_c8,lVar8,*(undefined8 *)PTR_DAT_057db558);
        uStack_78 = uStack_c0;
        uStack_80 = uStack_c8;
        lStack_70 = lStack_b8;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_80,*(undefined8 *)PTR_DAT_058066c8), (uVar9 & 1) != 0) {
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_c8,lStack_70,*(undefined8 *)PTR_DAT_05768d80);
          uStack_98 = uStack_c0;
          uStack_a0 = uStack_c8;
          lStack_90 = lStack_b8;
          while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_a0,*(undefined8 *)puVar3), lVar8 = lStack_90,
                (uVar9 & 1) != 0) {
            if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if ((*(char *)(lStack_90 + 0x4c) == '\0') &&
               (uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelected_2497284
                                  (lStack_90,0), (uVar9 & 1) == 0)) {
              if (*(long *)(lVar8 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uVar9 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                                (*(long *)(lVar8 + 0x40),0);
              if (((uVar9 & 1) == 0) &&
                 (uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__IsBottleUnderBlocker_2754314
                                    (uVar9,lVar8), (uVar9 & 1) == 0)) {
                lVar18 = *(long *)(lVar8 + 0x80);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (0 < *(int *)(lVar18 + 0x18)) {
                  iVar19 = 0;
                  do {
                    lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar18,iVar19,*(undefined8 *)puVar6);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    if (((*(long *)(lVar10 + 0x20) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
                       (*(char *)(*(long *)(lVar10 + 0x28) + 0x40) == '\0')) {
                      if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__IsTargetedCell_2752cac
                                        (*(long *)(param_1 + 0x70),lVar10);
                      if ((uVar9 & 1) == 0) {
                        uVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                                          (lVar7,lVar8,&lStack_a8,*(undefined8 *)puVar4);
                        if ((uVar9 & 1) == 0) {
                          lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c6be8);
                          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          System_Collections_Generic_List_object____ctor_21fc1fc
                                    (lVar11,*(undefined8 *)PTR_DAT_057a1cf0);
                          lStack_a8 = lVar11;
                          System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                                    (lVar7,lVar8,lVar11,*(undefined8 *)PTR_DAT_057699e8);
                        }
                        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        lVar11 = *(long *)(lStack_a8 + 0x10);
                        lVar15 = *(long *)puVar5;
                        *(int *)(lStack_a8 + 0x1c) = *(int *)(lStack_a8 + 0x1c) + 1;
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        uVar1 = *(uint *)(lStack_a8 + 0x18);
                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lStack_a8 + 0x18) = uVar1 + 1;
                          plVar13 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar13 = lVar10;
                          FUN_012d0d74(plVar13,lVar10);
                        }
                        else {
                          (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58)
                                      + 8))(lStack_a8,lVar10);
                        }
                      }
                    }
                    iVar19 = iVar19 + 1;
                  } while (iVar19 < *(int *)(lVar18 + 0x18));
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_a0,*(undefined8 *)PTR_DAT_057d0ba8);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)PTR_DAT_057a2960);
        puVar20 = (undefined8 *)PTR_DAT_057b96b8;
        uVar12 = System_Collections_Generic_Dictionary_object__object___get_Keys_3ecff04
                           (lVar7,*(undefined8 *)PTR_DAT_057d5b00);
        lVar8 = System_Linq_Enumerable__ToList_object__242f814
                          (uVar12,*(undefined8 *)PTR_DAT_057945a0);
        if (*(int *)(*(long *)PTR_DAT_05791040 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)PTR_DAT_05791040);
        }
        Modules_Infrastructure_Common_Scripts_RandomUtil__Shuffle_object__2677cf8
                  (lVar8,*(undefined8 *)PTR_DAT_0575bdd8);
        if (lVar8 != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_c8,lVar8,*(undefined8 *)PTR_DAT_05768d80);
          uStack_98 = uStack_c0;
          uStack_a0 = uStack_c8;
          lStack_90 = lStack_b8;
          while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_a0,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
            uVar12 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                               (lVar7,lStack_90,*puVar20);
            if (*(int *)(*(long *)PTR_DAT_05791040 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            Modules_Infrastructure_Common_Scripts_RandomUtil__Shuffle_object__2677cf8
                      (uVar12,*(undefined8 *)PTR_DAT_05815f68);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_a0,*(undefined8 *)PTR_DAT_057d0ba8);
          lVar18 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578d108);
          if (lVar18 != 0) {
            System_Collections_Generic_Dictionary_object__int____ctor_3b9da64
                      (lVar18,*(undefined8 *)PTR_DAT_05771960);
            do {
              lVar10 = *plVar17;
              if (lVar10 == 0) goto LAB_028541cc;
              if (*(int *)(param_1 + 0x60) <= *(int *)(lVar10 + 0x18)) goto LAB_028540d0;
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_c8,lVar8,*(undefined8 *)PTR_DAT_05768d80);
              bVar2 = false;
              uStack_98 = uStack_c0;
              uStack_a0 = uStack_c8;
              lStack_90 = lStack_b8;
              while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                       (&uStack_a0,*(undefined8 *)puVar3), lVar10 = lStack_90,
                    (uVar9 & 1) != 0) {
                if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (*(int *)(param_1 + 0x60) <= *(int *)(*plVar17 + 0x18)) break;
                lVar11 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                                   (lVar7,lStack_90,*puVar20);
                uVar9 = System_Collections_Generic_Dictionary_object__int___TryGetValue_3b9fcc0
                                  (lVar18,lVar10,&iStack_ac,*(undefined8 *)PTR_DAT_057f7e50);
                iVar19 = iStack_ac;
                if ((uVar9 & 1) == 0) {
                  iVar19 = 0;
                }
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (iVar19 < *(int *)(lVar11 + 0x18)) {
                  uVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar11,iVar19,*(undefined8 *)puVar6);
                  lVar15 = *plVar17;
                  lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05790498);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  System_Object___ctor_23dfe5c(lVar11,0);
                  *(undefined8 *)(lVar11 + 0x18) = uVar12;
                  FUN_012d0d74((undefined8 *)(lVar11 + 0x18),uVar12);
                  *(long *)(lVar11 + 0x10) = lVar10;
                  FUN_012d0d74((long *)(lVar11 + 0x10),lVar10);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar14 = *(long *)(lVar15 + 0x10);
                  lVar16 = *(long *)PTR_DAT_05789d80;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  uVar1 = *(uint *)(lVar15 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                    plVar13 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar13 = lVar11;
                    FUN_012d0d74(plVar13,lVar11);
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar15,lVar11);
                  }
                  puVar20 = (undefined8 *)PTR_DAT_057b96b8;
                  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__TryAddTargetedCell_2752be0
                            (*(long *)(param_1 + 0x70),uVar12);
                  bVar2 = true;
                  System_Collections_Generic_Dictionary_object__int___set_Item_3b9e4a0
                            (lVar18,lVar10,iVar19 + 1,*(undefined8 *)PTR_DAT_057b0e38);
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_a0,*(undefined8 *)PTR_DAT_057d0ba8);
            } while (bVar2);
            lVar10 = *plVar17;
LAB_028540d0:
            puVar3 = PTR_DAT_057b2ee0;
            lVar7 = *(long *)PTR_DAT_057b2ee0;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar7 = *(long *)puVar3;
            }
            lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (lVar8 == 0) {
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar7 = *(long *)puVar3;
              }
              uVar12 = **(undefined8 **)(lVar7 + 0xb8);
              lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057dd7d8);
              if (lVar8 == 0) goto LAB_028541cc;
              System_Comparison_object____ctor_14ec6c0
                        (lVar8,uVar12,*(undefined8 *)PTR_DAT_0577fee0,0);
              plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
              *plVar17 = lVar8;
              FUN_012d0d74(plVar17,lVar8);
            }
            if (lVar10 != 0) {
              System_Collections_Generic_List_object___Sort_21fe6b8
                        (lVar10,lVar8,*(undefined8 *)PTR_DAT_0577c0f0);
              return;
            }
          }
        }
      }
    }
  }
LAB_028541cc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

