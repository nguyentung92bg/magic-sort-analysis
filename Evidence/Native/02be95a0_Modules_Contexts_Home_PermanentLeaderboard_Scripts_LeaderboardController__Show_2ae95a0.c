/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$Show
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Show (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$Show
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Show
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Show_2ae95a0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  lVar8 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb6d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d69c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2eb6d = 1;
  }
  if ((((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 == 0)) ||
      (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar8,*(undefined8 *)PTR_DAT_05790e10), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x18) == 0)) {
LAB_02be9728:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsUnlocked_32dbac8
                    (*(long *)(lVar8 + 0x18),0);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x48),1,0);
      lVar8 = *(long *)(param_1 + 0x50);
      if (lVar8 != 0) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar8,0);
        return;
      }
    }
    goto LAB_02be9728;
  }
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_02be9728;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x50),1,0);
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_02be9728;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x48),0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar9 = UnityEngine_Object__op_Equality_407f288(uVar10,0,0);
  if ((uVar9 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x40);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_02be9728;
    lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x18),0,*(undefined8 *)PTR_DAT_057d69c8);
  }
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
  while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_70,*(undefined8 *)puVar6), lVar7 = lStack_60, (uVar9 & 1) != 0)
  {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar9 = UnityEngine_Object__op_Inequality_408e110(lVar8,lVar7,0);
    if ((uVar9 & 1) == 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Select_2ae9f48(lVar7);
    }
    else {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Deselect_2ae989c(lVar7);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_70,*(undefined8 *)puVar5);
  *(long *)(param_1 + 0x40) = lVar8;
  FUN_012d0d74((long *)(param_1 + 0x40),lVar8);
  if (lVar8 == 0) goto LAB_02be9ddc;
  uVar9 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lVar8 + 0x50),*(undefined8 *)puVar2,0);
  if ((uVar9 & 1) == 0) {
    uVar9 = System_String__op_Equality_1ec12e0
                      (*(undefined8 *)(lVar8 + 0x50),*(undefined8 *)puVar4,0);
    if ((uVar9 & 1) == 0) {
      uVar9 = System_String__op_Equality_1ec12e0
                        (*(undefined8 *)(lVar8 + 0x50),*(undefined8 *)puVar3,0);
      lVar8 = *(long *)(param_1 + 0x30);
      if ((uVar9 & 1) == 0) {
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

