/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$UpdateAllViewElementRanks
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__UpdateAllViewElementRanks (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$UpdateAllViewElementRanks
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__UpdateAllViewElementRanks
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__UpdateAllViewElementRanks_3a74f90
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000005c35ac5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f31b8);
    FUN_012d0dc8(PTR_DAT_057b2bb8);
    FUN_012d0dc8(PTR_DAT_0580bac0);
    FUN_012d0dc8(PTR_DAT_057eac28);
    FUN_012d0dc8(PTR_DAT_0576cfb8);
    FUN_012d0dc8(PTR_DAT_057ed188);
    FUN_012d0dc8(PTR_DAT_05771b08);
    bRam0000000005c35ac5 = 1;
  }
  puVar6 = PTR_DAT_0580bac0;
  puVar5 = PTR_DAT_057f31b8;
  puVar4 = PTR_DAT_057b2bb8;
  puVar3 = PTR_DAT_05771b08;
  puVar2 = PTR_DAT_0576cfb8;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_98,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_057ed188);
  iVar13 = 0;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  plStack_70 = plStack_88;
LAB_03b7507c:
  do {
    uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_80,*(undefined8 *)puVar6);
    plVar7 = plStack_70;
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)puVar4);
      return;
    }
    if (plStack_70 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 300);
      if ((bVar1 <= *(byte *)(*plStack_70 + 300)) &&
         (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5))
      break;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    iVar8 = System_Collections_Generic_List_object___IndexOf_21fd78c
                      (*(long *)(param_1 + 0x28),plStack_70,*(undefined8 *)puVar3);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar11 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_03b75130;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,2);
LAB_03b75130:
    (*(code *)*puVar10)(plVar7,(1 - iVar13) + iVar8,puVar10[1]);
  } while( true );
  iVar13 = iVar13 + 1;
  goto LAB_03b7507c;
}

