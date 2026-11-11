/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$Dispose
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Dispose (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$Dispose
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Dispose
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Dispose_2ae905c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c2eba2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057fcc38);
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_05796750);
    FUN_012d0dc8(PTR_DAT_0578f7f0);
    FUN_012d0dc8(PTR_DAT_057fe700);
    bRam0000000005c2eba2 = 1;
  }
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  lVar7 = *(long *)(param_1 + 0x58);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057fe700,0), lVar7 != 0)) {
    Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__remove_OnUserTeamDataUpdated_35a2f68
              (lVar7,lVar5,0);
    puVar4 = PTR_DAT_057ff728;
    puVar3 = PTR_DAT_057fcc38;
    puVar2 = PTR_DAT_057d2d78;
    puVar1 = PTR_DAT_0578f7f0;
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_58,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
      while( true ) {
        uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_58,*(undefined8 *)puVar4);
        lVar5 = lStack_48;
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_58,*(undefined8 *)puVar3);
          return;
        }
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar7 == 0) break;
        System_Action_object____ctor_1647468(lVar7,param_1,*(undefined8 *)puVar1,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__remove_OnSelectSuccessEvent_2ae8f84
                  (lVar5,lVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

