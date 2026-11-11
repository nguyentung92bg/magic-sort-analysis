/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardView$$BuildRowViewModels
System_Collections_Generic_List_IStrikeShowLeaderboardRowViewModel__o* Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardView__BuildRowViewModels (System_Collections_Generic_List_StrikeShowLeaderboardPlayerViewModel__o* players, bool isLeagueEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardView$$BuildRowViewModels
   System_Collections_Generic_List_IStrikeShowLeaderboardRowViewModel__o*
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardView__BuildRowViewModels
   (System_Collections_Generic_List_StrikeShowLeaderboardPlayerViewModel__o* players, bool
   isLeagueEnabled, const MethodInfo* method); */

long Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardView__BuildRowViewModels_2afb62c
               (long param_1,byte param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
                    /* try { // try from 02bfb62c to 02cfb643 has its CatchHandler @ 02bfb6e8 */
  puVar2 = PTR_DAT_057993c8;
                    /* try { // try from 02bfb644 to 02cfb653 has its CatchHandler @ 02bfb430 */
                    /* try { // try from 02bfb654 to 02cfb66b has its CatchHandler @ 02bfb6e8 */
  if ((bRam0000000005c2ec05 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05794858);
                    /* try { // try from 02bfb66c to 02cfb6d7 has its CatchHandler @ 02bfb430 */
    FUN_012d0dc8(PTR_DAT_05782dd8);
    FUN_012d0dc8(PTR_DAT_057cf028);
    FUN_012d0dc8(PTR_DAT_057c3208);
    FUN_012d0dc8(PTR_DAT_057993c8);
    FUN_012d0dc8(PTR_DAT_057cd3b8);
    bRam0000000005c2ec05 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar6 == 0) goto LAB_02bfb9e0;
  System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_05782dd8);
  puVar4 = PTR_DAT_057cd3b8;
  puVar3 = PTR_DAT_057c3208;
  puVar2 = PTR_DAT_05794858;
  if (param_1 == 0) {
    return lVar6;
  }
                    /* try { // try from 02bfb6d8 to 02cfb6e7 has its CatchHandler @ 02bfb6e8 */
                    /* catch() { ... } // from try @ 02bfb62c with catch @ 02bfb6e8
                       catch() { ... } // from try @ 02bfb654 with catch @ 02bfb6e8
                       catch() { ... } // from try @ 02bfb6d8 with catch @ 02bfb6e8 */
                    /* try { // try from 02bfb6ec to 02cfb6ef has its CatchHandler @ 02bfb6f8 */
  if (*(int *)(param_1 + 0x18) < 1) {
    bVar5 = false;
    iVar13 = -1;
  }
  else {
                    /* try { // try from 02bfb6f0 to 02cfb6fb has its CatchHandler @ 02bfb430 */
                    /* catch() { ... } // from try @ 02bfb6ec with catch @ 02bfb6f8 */
    iVar12 = 0;
    iVar14 = -1;
    iVar13 = -1;
    do {
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_1,iVar12,*(undefined8 *)puVar3);
      if (lVar7 == 0) goto LAB_02bfb9e0;
      if (*(char *)(lVar7 + 0x52) != '\0') {
        iVar14 = iVar12;
      }
      if (iVar13 == -1) {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_1,iVar12,*(undefined8 *)puVar3);
        if (lVar7 == 0) goto LAB_02bfb9e0;
        iVar13 = iVar12;
        if (*(char *)(lVar7 + 0x53) == '\0') {
          iVar13 = -1;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x18));
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar12 = 0;
      do {
        if ((iVar13 == iVar12) && ((param_2 & 1) != 0)) {
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if (lVar7 == 0) goto LAB_02bfb9e0;
          System_Object___ctor_23dfe5c(lVar7,0);
          *(undefined1 *)(lVar7 + 0x10) = 0;
          lVar10 = *(long *)(lVar6 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_02bfb9e0;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lVar7;
            FUN_012d0d74(plVar8,lVar7);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar6,lVar7);
          }
        }
        uVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_1,iVar12,*(undefined8 *)puVar3);
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_02bfb9e0;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))(lVar6);
        }
        if ((iVar14 == iVar12) && ((param_2 & 1) != 0)) {
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if (lVar7 == 0) goto LAB_02bfb9e0;
          System_Object___ctor_23dfe5c(lVar7,0);
          *(undefined1 *)(lVar7 + 0x10) = 1;
          lVar10 = *(long *)(lVar6 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_02bfb9e0;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lVar7;
            FUN_012d0d74(plVar8,lVar7);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar6,lVar7);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x18));
      if (0 < *(int *)(param_1 + 0x18)) {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_1,0,*(undefined8 *)puVar3);
        if (lVar7 == 0) goto LAB_02bfb9e0;
        bVar5 = *(int *)(lVar7 + 0x60) != 0;
        goto LAB_02bfb934;
      }
    }
    bVar5 = false;
  }
LAB_02bfb934:
  if ((iVar13 != -1) || ((param_2 & bVar5) == 0)) {
    return lVar6;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar7 != 0) {
    System_Object___ctor_23dfe5c(lVar7,0);
    *(undefined1 *)(lVar7 + 0x10) = 0;
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar11 = *(long *)puVar2;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = lVar7;
        FUN_012d0d74(plVar8,lVar7);
        return lVar6;
      }
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,lVar7);
      return lVar6;
    }
  }
LAB_02bfb9e0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

