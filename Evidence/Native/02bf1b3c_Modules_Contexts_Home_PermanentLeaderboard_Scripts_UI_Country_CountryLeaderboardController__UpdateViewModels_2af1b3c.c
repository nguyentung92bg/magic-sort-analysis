/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Country.CountryLeaderboardController$$UpdateViewModels
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__UpdateViewModels (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Country.CountryLeaderboardController$$UpdateViewModels
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__UpdateViewModels
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__UpdateViewModels_2af1b3c
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
  
  if ((bRam0000000005c2ebb8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9318);
    FUN_012d0dc8(PTR_DAT_05764190);
    FUN_012d0dc8(PTR_DAT_057d8428);
    FUN_012d0dc8(PTR_DAT_05804ff8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_0578ffe8);
    FUN_012d0dc8(PTR_DAT_05813f30);
    FUN_012d0dc8(PTR_DAT_057faa00);
                    /* try { // try from 02bf1bd0 to 02cf1c47 has its CatchHandler @ 02bf1bd0
                       catch() { ... } // from try @ 02bf1bd0 with catch @ 02bf1bd0
                       catch() { ... } // from try @ 02bf1ce8 with catch @ 02bf1bd0
                       catch() { ... } // from try @ 02bf1d4c with catch @ 02bf1bd0
                       catch() { ... } // from try @ 02bf1da4 with catch @ 02bf1bd0 */
    FUN_012d0dc8(PTR_DAT_05806ae8);
    FUN_012d0dc8(PTR_DAT_0576f990);
    FUN_012d0dc8(PTR_DAT_057a4dd8);
    FUN_012d0dc8(PTR_DAT_05806718);
    FUN_012d0dc8(PTR_DAT_05760820);
    FUN_012d0dc8(PTR_DAT_057c26f8);
    FUN_012d0dc8(PTR_DAT_057f6190);
    bRam0000000005c2ebb8 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__ClearViewModels_2af2484
            (param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar11 = Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardService__GetCountryLeaderboard_2aec570
                       ();
    puVar4 = PTR_DAT_05806718;
    puVar6 = PTR_DAT_0578ffe8;
    puVar3 = PTR_DAT_05760820;
                    /* try { // try from 02bf1c48 to 02cf1c67 has its CatchHandler @ 02bf1d60 */
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) == 0)) {
      return;
    }
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar21 = 0;
      do {
                    /* try { // try from 02bf1c80 to 02cf1c83 has its CatchHandler @ 02bf1d58 */
        uVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar11,iVar21,*(undefined8 *)puVar4);
        if ((*(long *)(param_1 + 0x58) == 0) ||
           (lVar13 = Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Get_30ea998
                               (*(long *)(param_1 + 0x58),*(undefined8 *)puVar3), lVar13 == 0))
        goto LAB_02bf2290;
                    /* try { // try from 02bf1ca0 to 02cf1caf has its CatchHandler @ 02bf1d5c */
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData_2aef004
                  (lVar13,uVar12);
        lVar14 = *(long *)(param_1 + 0x50);
        if (lVar14 == 0) goto LAB_02bf2290;
        lVar19 = *(long *)(lVar14 + 0x10);
        lVar22 = *(long *)puVar6;
                    /* try { // try from 02bf1cc0 to 02cf1cc3 has its CatchHandler @ 02bf1d58 */
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar19 == 0) goto LAB_02bf2290;
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                    /* try { // try from 02bf1ce0 to 02cf1ce7 has its CatchHandler @ 02bf1d54 */
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                    /* try { // try from 02bf1ce8 to 02cf1d43 has its CatchHandler @ 02bf1bd0 */
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
                    /* try { // try from 02bf1d44 to 02cf1d47 has its CatchHandler @ 02bf1d50 */
                    /* try { // try from 02bf1d48 to 02cf1d4b has its CatchHandler @ 02bf1d4c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf1d48 with catch @ 02bf1d4c
                       try { // try from 02bf1d4c to 02cf1d77 has its CatchHandler @ 02bf1bd0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf1d44 with catch @ 02bf1d50
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf1ce0 with catch @ 02bf1d54
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf1c80 with catch @ 02bf1d58
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02bf1cc0 with catch @ 02bf1d58
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf1ca0 with catch @ 02bf1d5c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf1c48 with catch @ 02bf1d60
                        */
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_98,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_05813f30);
      bVar2 = false;
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
                    /* try { // try from 02bf1d78 to 02cf1d7b has its CatchHandler @ 02bf1d8c */
      lStack_70 = lStack_88;
      while (uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_80,*(undefined8 *)puVar8), lVar11 = lStack_70,
            (uVar15 & 1) != 0) {
                    /* catch() { ... } // from try @ 02bf1d78 with catch @ 02bf1d8c */
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
                    /* try { // try from 02bf1d98 to 02cf1da3 has its CatchHandler @ 02bf1db8 */
        if (*(char *)(lStack_70 + 0x28) != '\0') {
          plVar20 = *(long **)(param_1 + 0x20);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
                    /* try { // try from 02bf1da4 to 02cf1daf has its CatchHandler @ 02bf1bd0 */
          lVar13 = *plVar20;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    /* try { // try from 02bf1db0 to 02cf1db7 has its CatchHandler @ 02bf1db8 */
          if (uVar15 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bf1d98 with catch @ 02bf1db8
                       catch(type#2 @ 00000000) { ... } // from try @ 02bf1db0 with catch @ 02bf1db8
                        */
            piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                puVar16 = (undefined8 *)(lVar13 + (long)(*piVar23 + 0xe) * 0x10 + 0x138);
                goto LAB_02bf1df4;
              }
              uVar15 = uVar15 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar15 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,0xe);
LAB_02bf1df4:
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
                goto LAB_02bf1e5c;
              }
              uVar15 = uVar15 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar15 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,1);
LAB_02bf1e5c:
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
        if (plVar20 == (long *)0x0) goto LAB_02bf2290;
        lVar11 = *plVar20;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 != 0) {
          piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar11 + (long)(*piVar23 + 0xe) * 0x10 + 0x138);
              goto LAB_02bf1f48;
            }
            uVar15 = uVar15 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar15 != 0);
        }
        puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,0xe);
LAB_02bf1f48:
        lVar11 = (*(code *)*puVar16)(plVar20,puVar16[1]);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_02bf2290;
        lVar13 = Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Get_30ea998
                           (*(long *)(param_1 + 0x58),*(undefined8 *)puVar3);
        plVar20 = *(long **)(param_1 + 0x20);
        if (plVar20 == (long *)0x0) goto LAB_02bf2290;
        lVar14 = *plVar20;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar14 + (long)(*piVar23 + 0x32) * 0x10 + 0x138);
              goto LAB_02bf1fc8;
            }
            uVar15 = uVar15 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar15 != 0);
        }
        puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,0x32);
LAB_02bf1fc8:
        uVar12 = (*(code *)*puVar16)(plVar20,puVar16[1]);
        if ((lVar11 == 0) || (plVar20 = *(long **)(param_1 + 0x20), plVar20 == (long *)0x0))
        goto LAB_02bf2290;
        lVar14 = *plVar20;
        uVar25 = *(undefined8 *)(lVar11 + 0x18);
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar14 + (long)(*piVar23 + 1) * 0x10 + 0x138);
              goto LAB_02bf2044;
            }
            uVar15 = uVar15 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar15 != 0);
        }
        puVar16 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar4,1);
LAB_02bf2044:
        uVar10 = (*(code *)*puVar16)(plVar20,puVar16[1]);
        uVar26 = *(undefined8 *)(lVar11 + 0x10);
        uVar27 = *(undefined8 *)(lVar11 + 0x20);
        uVar17 = Modules_Contexts_Application_Player_Scripts_ProfileInfo__get_frameId_3ced6f0
                           (lVar11,0);
        uVar18 = Modules_Contexts_Application_Player_Scripts_ProfileInfo__get_nameStyleId_3ced730
                           (lVar11,0);
                    /* try { // try from 02bf2078 to 02cf20fb has its CatchHandler @ 02bf2078
                       catch() { ... } // from try @ 02bf2078 with catch @ 02bf2078
                       catch() { ... } // from try @ 02bf21dc with catch @ 02bf2078
                       catch() { ... } // from try @ 02bf226c with catch @ 02bf2078 */
        if (lVar13 == 0) goto LAB_02bf2290;
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData_2aef0b0
                  (lVar13,uVar12,uVar25,uVar10,0,1,uVar26,uVar26,uVar27,uVar17,uVar18);
        lVar11 = *(long *)(param_1 + 0x50);
        if (lVar11 == 0) goto LAB_02bf2290;
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar19 = *(long *)puVar6;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_02bf2290;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          plVar20 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *plVar20 = lVar13;
          FUN_012d0d74(plVar20,lVar13);
                    /* try { // try from 02bf20fc to 02cf210b has its CatchHandler @ 02bf2228 */
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar11,lVar13);
        }
      }
      puVar3 = PTR_DAT_057f6190;
      lVar13 = *(long *)(param_1 + 0x50);
                    /* try { // try from 02bf2124 to 02cf212b has its CatchHandler @ 02bf2224 */
      lVar11 = *(long *)PTR_DAT_057f6190;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar11 = *(long *)puVar3;
      }
                    /* try { // try from 02bf213c to 02cf2143 has its CatchHandler @ 02bf2218 */
      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar11 = *(long *)puVar3;
        }
        uVar12 = **(undefined8 **)(lVar11 + 0xb8);
                    /* try { // try from 02bf2168 to 02cf2177 has its CatchHandler @ 02bf2214 */
        lVar14 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f9318);
        if (lVar14 == 0) goto LAB_02bf2290;
                    /* try { // try from 02bf2188 to 02cf21ab has its CatchHandler @ 02bf2220 */
        System_Comparison_object____ctor_14ec6c0(lVar14,uVar12,*(undefined8 *)PTR_DAT_057c26f8,0);
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
                    /* try { // try from 02bf21c0 to 02cf21cf has its CatchHandler @ 02bf222c */
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
                goto LAB_02bf220c;
              }
              break;
            }
                    /* try { // try from 02bf21d0 to 02cf21db has its CatchHandler @ 02bf221c */
            lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar11,iVar21,*(undefined8 *)puVar7);
            if (lVar11 == 0) break;
                    /* try { // try from 02bf21dc to 02cf2243 has its CatchHandler @ 02bf2078 */
            iVar21 = iVar21 + 1;
            *(int *)(lVar11 + 0x24) = iVar21;
            lVar11 = *(long *)(param_1 + 0x50);
          } while (lVar11 != 0);
        }
      }
    }
  }
  goto LAB_02bf2290;
  while( true ) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf2188 with catch @ 02bf2220
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf2124 with catch @ 02bf2224
                        */
    lVar11 = *(long *)(lVar13 + 0x10);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf20fc with catch @ 02bf2228
                        */
    lVar14 = *(long *)puVar6;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf21c0 with catch @ 02bf222c
                        */
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(lVar13 + 0x18);
                    /* try { // try from 02bf2244 to 02cf2247 has its CatchHandler @ 02bf2254 */
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    /* catch() { ... } // from try @ 02bf2244 with catch @ 02bf2254 */
      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
      FUN_012d0d74();
                    /* try { // try from 02bf2260 to 02cf226b has its CatchHandler @ 02bf2280 */
    }
    else {
                    /* try { // try from 02bf226c to 02cf2277 has its CatchHandler @ 02bf2078 */
                    /* try { // try from 02bf2278 to 02cf227f has its CatchHandler @ 02bf2280 */
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))(lVar13);
    }
    iVar24 = iVar24 + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bf2260 with catch @ 02bf2280
                       catch(type#2 @ 00000000) { ... } // from try @ 02bf2278 with catch @ 02bf2280
                        */
                    /* try { // try from 02bf2284 to 02cf22fb has its CatchHandler @ 02bf2284
                       catch() { ... } // from try @ 02bf2284 with catch @ 02bf2284
                       catch() { ... } // from try @ 02bf2374 with catch @ 02bf2284
                       catch() { ... } // from try @ 02bf23f8 with catch @ 02bf2284 */
    if (iVar21 <= iVar24) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x50);
    if (lVar11 == 0) break;
LAB_02bf220c:
    lVar13 = *(long *)(param_1 + 0x48);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf2168 with catch @ 02bf2214
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf213c with catch @ 02bf2218
                        */
    uVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar11,iVar24,*(undefined8 *)puVar7);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf21d0 with catch @ 02bf221c
                        */
    if (lVar13 == 0) break;
  }
LAB_02bf2290:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

