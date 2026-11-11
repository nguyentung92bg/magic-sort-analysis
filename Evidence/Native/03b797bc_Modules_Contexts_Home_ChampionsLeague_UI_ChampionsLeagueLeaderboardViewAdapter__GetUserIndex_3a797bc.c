/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$GetUserIndex
int32_t Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetUserIndex (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$GetUserIndex
   int32_t
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetUserIndex
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, const
   MethodInfo* method); */

int Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetUserIndex_3a797bc
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  if ((bRam0000000005c35ac4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576cfb8);
    FUN_012d0dc8(PTR_DAT_05765300);
    FUN_012d0dc8(PTR_DAT_057a6d70);
    bRam0000000005c35ac4 = 1;
  }
  puVar2 = PTR_DAT_057a6d70;
  puVar1 = PTR_DAT_0576cfb8;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar8) {
        return -1;
      }
      plVar4 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar3,iVar8,*(undefined8 *)puVar2);
      if (plVar4 == (long *)0x0) break;
      lVar3 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03b7988c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,0);
LAB_03b7988c:
      uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar6 & 1) != 0) {
        return iVar8;
      }
      lVar3 = *(long *)(param_1 + 0x28);
      iVar8 = iVar8 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

