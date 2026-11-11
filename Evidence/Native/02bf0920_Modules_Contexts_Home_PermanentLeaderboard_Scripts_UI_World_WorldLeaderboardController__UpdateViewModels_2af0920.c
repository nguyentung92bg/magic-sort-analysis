/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardController$$UpdateViewModels
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__UpdateViewModels (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardController$$UpdateViewModels
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__UpdateViewModels
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__UpdateViewModels_2af0920
               (long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  long lVar22;
  int *piVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c2ebad & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9318);
    FUN_012d0dc8(PTR_DAT_05764190);
    FUN_012d0dc8(PTR_DAT_057d8428);
    FUN_012d0dc8(PTR_DAT_05804ff8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_0578ffe8);
    FUN_012d0dc8(PTR_DAT_05813f30);
    FUN_012d0dc8(PTR_DAT_057faa00);
    FUN_012d0dc8(PTR_DAT_05806ae8);
    FUN_012d0dc8(PTR_DAT_0576f990);
    FUN_012d0dc8(PTR_DAT_057a4dd8);
    FUN_012d0dc8(PTR_DAT_05806718);
    FUN_012d0dc8(PTR_DAT_05760820);
    FUN_012d0dc8(PTR_DAT_057af508);
    FUN_012d0dc8(PTR_DAT_057a0d78);
    bRam0000000005c2ebad = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__ClearViewModels_2af1268
            (param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar11 = Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardService__GetWorldLeaderboard_2aec54c
                       ();
    puVar4 = PTR_DAT_05806718;
    puVar6 = PTR_DAT_0578ffe8;
    puVar3 = PTR_DAT_05760820;
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) == 0)) {
      return;
    }
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar21 = 0;
      do {
        uVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar11,iVar21,*(undefined8 *)puVar4);
        if ((*(long *)(param_1 + 0x58) == 0) ||
           (lVar13 = Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Get_30ea998
                               (*(long *)(param_1 + 0x58),*(undefined8 *)puVar3), lVar13 == 0))
        goto LAB_02bf1074;
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData_2aef004
                  (lVar13,uVar12);
        lVar14 = *(long *)(param_1 + 0x50);
        if (lVar14 == 0) goto LAB_02bf1074;
        lVar19 = *(long *)(lVar14 + 0x10);
        lVar22 = *(long *)puVar6;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar19 == 0) goto LAB_02bf1074;
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar19 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          plVar20 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
          *plVar20 = lVar13;
          FUN_012d0d74(plVar20,lVar13);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar14,lVar13);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < *(int *)(lVar11 + 0x18));
    }
    puVar9 = PTR_DAT_057faa00;
    puVar8 = PTR_DAT_057d8428;
    puVar7 = PTR_DAT_057a4dd8;
    puVar5 = PTR_DAT_05764190;
    puVar4 = PTR_DAT_057636d0;
    if (*(long *)(param_1 + 0x50) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_98,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_05813f30);
      bVar2 = false;
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      while (uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_80,*(undefined8 *)puVar8), lVar11 = lStack_70,
            (uVar15 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(char *)(lStack_70 + 0x28) != '\0') {
          plVar20 = *(long **)(param_1 + 0x20);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar13 = *plVar20;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar15 != 0) {
            piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                puVar16 = (undefined8 *)(lVar13 + (long)(*piVar23 + 0xe) * 0x10 + 0x138);
                goto LAB_02bf0bd8;
              }
              uVar15 = uVar15 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar15 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,0xe);
LAB_02bf0bd8:
          lVar13 = (*(code *)*puVar16)(plVar20,puVar16[1]);
          plVar20 = *(long **)(param_1 + 0x20);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar14 = *plVar20;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                puVar16 = (undefined8 *)(lVar14 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_02bf0c40;
              }
              uVar15 = uVar15 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar15 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,1);
LAB_02bf0c40:
          uVar10 = (*(code *)*puVar16)(plVar20,puVar16[1]);
          *(undefined4 *)(lVar11 + 0x20) = uVar10;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar13 + 0x10);
          FUN_012d0d74();
          *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
          FUN_012d0d74();
          *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(lVar13 + 0x20);
          FUN_012d0d74();
          uVar12 = Modules_Contexts_Application_Player_Scripts_ProfileInfo__get_frameId_3ced6f0
                             (lVar13,0);
          *(undefined8 *)(lVar11 + 0x48) = uVar12;
          FUN_012d0d74();
          uVar12 = Modules_Contexts_Application_Player_Scripts_ProfileInfo__get_nameStyleId_3ced730
                             (lVar13,0);
          bVar2 = true;
          *(undefined8 *)(lVar11 + 0x50) = uVar12;
          FUN_012d0d74((undefined8 *)(lVar11 + 0x50));
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)puVar5);
      if (!bVar2) {
        plVar20 = *(long **)(param_1 + 0x20);
        if (plVar20 == (long *)0x0) goto LAB_02bf1074;
        lVar11 = *plVar20;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 != 0) {
          piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar11 + (long)(*piVar23 + 0xe) * 0x10 + 0x138);
              goto LAB_02bf0d2c;
            }
            uVar15 = uVar15 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar15 != 0);
        }
        puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,0xe);
LAB_02bf0d2c:
        lVar11 = (*(code *)*puVar16)(plVar20,puVar16[1]);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_02bf1074;
        lVar13 = Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Get_30ea998
                           (*(long *)(param_1 + 0x58),*(undefined8 *)puVar3);
        plVar20 = *(long **)(param_1 + 0x20);
        if (plVar20 == (long *)0x0) goto LAB_02bf1074;
        lVar14 = *plVar20;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar14 + (long)(*piVar23 + 0x32) * 0x10 + 0x138);
              goto LAB_02bf0dac;
            }
            uVar15 = uVar15 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar15 != 0);
        }
        puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,0x32);
LAB_02bf0dac:
        uVar12 = (*(code *)*puVar16)(plVar20,puVar16[1]);
        if ((lVar11 == 0) || (plVar20 = *(long **)(param_1 + 0x20), plVar20 == (long *)0x0))
        goto LAB_02bf1074;
        lVar14 = *plVar20;
        uVar25 = *(undefined8 *)(lVar11 + 0x18);
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar14 + (long)(*piVar23 + 1) * 0x10 + 0x138);
              goto LAB_02bf0e28;
            }
            uVar15 = uVar15 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar15 != 0);
        }
        puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,1);
LAB_02bf0e28:
        uVar10 = (*(code *)*puVar16)(plVar20,puVar16[1]);
        uVar26 = *(undefined8 *)(lVar11 + 0x10);
        uVar27 = *(undefined8 *)(lVar11 + 0x20);
        uVar17 = Modules_Contexts_Application_Player_Scripts_ProfileInfo__get_frameId_3ced6f0
                           (lVar11,0);
        uVar18 = Modules_Contexts_Application_Player_Scripts_ProfileInfo__get_nameStyleId_3ced730
                           (lVar11,0);
        if (lVar13 == 0) goto LAB_02bf1074;
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData_2aef0b0
                  (lVar13,uVar12,uVar25,uVar10,0,1,uVar26,uVar26,uVar27,uVar17,uVar18);
        lVar11 = *(long *)(param_1 + 0x50);
        if (lVar11 == 0) goto LAB_02bf1074;
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar19 = *(long *)puVar6;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_02bf1074;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          plVar20 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *plVar20 = lVar13;
          FUN_012d0d74(plVar20,lVar13);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar11,lVar13);
        }
      }
      puVar3 = PTR_DAT_057a0d78;
      lVar13 = *(long *)(param_1 + 0x50);
      lVar11 = *(long *)PTR_DAT_057a0d78;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar11 = *(long *)puVar3;
      }
      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar11 = *(long *)puVar3;
        }
        uVar12 = **(undefined8 **)(lVar11 + 0xb8);
        lVar14 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f9318);
        if (lVar14 == 0) goto LAB_02bf1074;
        System_Comparison_object____ctor_14ec6c0(lVar14,uVar12,*(undefined8 *)PTR_DAT_057af508,0);
        plVar20 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        *plVar20 = lVar14;
        FUN_012d0d74(plVar20,lVar14);
      }
      if (lVar13 != 0) {
        System_Collections_Generic_List_object___Sort_21fe6b8(lVar13,lVar14,*(undefined8 *)puVar9);
        lVar11 = *(long *)(param_1 + 0x50);
        if (lVar11 != 0) {
          iVar21 = 0;
          do {
            iVar24 = *(int *)(lVar11 + 0x18);
            if (iVar24 <= iVar21) {
              iVar21 = iVar24;
              if (2 < iVar24) {
                iVar21 = 3;
              }
              if (iVar24 < 1) {
                return;
              }
              if (lVar11 != 0) {
                iVar24 = 0;
                goto LAB_02bf0ff0;
              }
              break;
            }
            lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar11,iVar21,*(undefined8 *)puVar7);
            if (lVar11 == 0) break;
            iVar21 = iVar21 + 1;
            *(int *)(lVar11 + 0x24) = iVar21;
            lVar11 = *(long *)(param_1 + 0x50);
          } while (lVar11 != 0);
        }
      }
    }
  }
  goto LAB_02bf1074;
  while( true ) {
    lVar11 = *(long *)(lVar13 + 0x10);
    lVar14 = *(long *)puVar6;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(lVar13 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
      FUN_012d0d74();
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))(lVar13);
    }
    iVar24 = iVar24 + 1;
    if (iVar21 <= iVar24) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x50);
    if (lVar11 == 0) break;
LAB_02bf0ff0:
    lVar13 = *(long *)(param_1 + 0x48);
    uVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar11,iVar24,*(undefined8 *)puVar7);
    if (lVar13 == 0) break;
  }
LAB_02bf1074:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

