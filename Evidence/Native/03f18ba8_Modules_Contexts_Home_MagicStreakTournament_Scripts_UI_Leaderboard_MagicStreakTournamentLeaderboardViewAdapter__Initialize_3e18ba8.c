/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$Initialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__Initialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardViewAdapter$$Initialize
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__Initialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardViewAdapter__Initialize_3e18ba8
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar2 = PTR_DAT_057e3fe8;
  if ((bRam0000000005c380c6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0576b680);
    FUN_012d0dc8(PTR_DAT_05800460);
    FUN_012d0dc8(PTR_DAT_057b79e8);
    FUN_012d0dc8(PTR_DAT_057e5040);
    FUN_012d0dc8(PTR_DAT_0577abf0);
    FUN_012d0dc8(PTR_DAT_0575d9f0);
    FUN_012d0dc8(PTR_DAT_057e3fe8);
    bRam0000000005c380c6 = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_0575d9f0);
    plVar10 = (long *)(param_1 + 0x28);
    *plVar10 = lVar5;
    FUN_012d0d74(plVar10,lVar5);
    if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) &&
        (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar5,*(undefined8 *)PTR_DAT_058030e0), lVar5 != 0)) &&
       (lVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLeaderboard_411ed90
                          (lVar5,0), puVar4 = PTR_DAT_05800460, puVar3 = PTR_DAT_057e5040,
       puVar2 = PTR_DAT_0576b680, lVar5 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_68,lVar5,*(undefined8 *)PTR_DAT_0577abf0);
      uStack_48 = uStack_60;
      uStack_50 = uStack_68;
      lStack_40 = lStack_58;
      while( true ) {
        uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_50,*(undefined8 *)puVar4);
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_50,*(undefined8 *)puVar2);
          return;
        }
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar5 = *plVar10;
        uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardPlayerViewModel__Clone_3e16fb0
                          ();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) break;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))(lVar5);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

