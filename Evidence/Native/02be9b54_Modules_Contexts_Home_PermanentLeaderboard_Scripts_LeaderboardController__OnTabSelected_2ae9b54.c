/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$OnTabSelected
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnTabSelected (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$OnTabSelected
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnTabSelected
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this,
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__OnTabSelected_2ae9b54
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2eb70 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fcc38);
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_05796750);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057ec6e8);
    FUN_012d0dc8(PTR_DAT_0578e6f8);
    FUN_012d0dc8(PTR_DAT_057da400);
    bRam0000000005c2eb70 = 1;
  }
  puVar6 = PTR_DAT_057ff728;
  puVar5 = PTR_DAT_057fcc38;
  puVar4 = PTR_DAT_057ec6e8;
  puVar3 = PTR_DAT_057da400;
  puVar2 = PTR_DAT_0578e6f8;
  puVar1 = PTR_DAT_0576c200;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_02be9ddc:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_70,*(undefined8 *)puVar6), lVar8 = lStack_60, (uVar7 & 1) != 0)
  {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = UnityEngine_Object__op_Inequality_408e110(param_2,lVar8,0);
    if ((uVar7 & 1) == 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Select_2ae9f48(lVar8);
    }
    else {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Deselect_2ae989c(lVar8);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_70,*(undefined8 *)puVar5);
  *(long *)(param_1 + 0x40) = param_2;
  FUN_012d0d74((long *)(param_1 + 0x40),param_2);
  if (param_2 == 0) goto LAB_02be9ddc;
  uVar7 = System_String__op_Equality_1ec12e0
                    (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)puVar2,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = System_String__op_Equality_1ec12e0
                      (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)puVar4,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = System_String__op_Equality_1ec12e0
                        (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)puVar3,0);
      lVar8 = *(long *)(param_1 + 0x30);
      if ((uVar7 & 1) == 0) {
        if (lVar8 != 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Hide_2ae9904
                    (lVar8);
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Hide_2ae98bc
                    ();
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Hide_32de4fc
                    (*(long *)(param_1 + 0x20),0);
        }
        if (*(long *)(param_1 + 0x38) == 0) {
          return;
        }
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Show_2aea0d0
                  ();
        return;
      }
      if (lVar8 != 0) {
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Hide_2ae9904
                  (lVar8);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Hide_2ae98bc
                  ();
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Show_32de2c0
                  (*(long *)(param_1 + 0x20),0);
      }
      goto LAB_02be9d30;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Show_2aea00c
                ();
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Hide_2ae98bc
                ();
    }
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Hide_2ae9904
                ();
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Show_2ae9f68
                ();
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Hide_32de4fc
              (*(long *)(param_1 + 0x20),0);
  }
LAB_02be9d30:
  if (*(long *)(param_1 + 0x38) != 0) {
    Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Hide_2ae9fe4
              ();
  }
  return;
}

