/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$Dispose
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Dispose (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$Dispose
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Dispose
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Dispose_2ae925c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c2eb8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057fcc38);
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_0575c450);
    FUN_012d0dc8(PTR_DAT_05790818);
    FUN_012d0dc8(PTR_DAT_05803870);
    FUN_012d0dc8(PTR_DAT_0576f438);
    FUN_012d0dc8(PTR_DAT_05796750);
    FUN_012d0dc8(PTR_DAT_0575bac8);
    FUN_012d0dc8(PTR_DAT_057ca298);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2eb8b = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Dispose_2aed9f4();
    if (*(long *)(param_1 + 0x28) != 0) {
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__Dispose_2aecf28();
      puVar2 = PTR_DAT_0578b048;
      if (*(long *)(param_1 + 0x60) != 0) {
        Modules_Contexts_Home_Friends_Scripts_UI_FacebookSignInRewardView__Dispose_1b8d318
                  (*(long *)(param_1 + 0x60),0);
        lVar11 = *(long *)(param_1 + 0x50);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar9 != 0) &&
           (System_Action___ctor_21239bc(lVar9,param_1,*(undefined8 *)PTR_DAT_05803870,0),
           lVar11 != 0)) {
          Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
                    (lVar11,lVar9,0);
          puVar8 = PTR_DAT_057ff728;
          puVar7 = PTR_DAT_057fcc38;
          puVar6 = PTR_DAT_057d2d78;
          puVar5 = PTR_DAT_057ca298;
          puVar4 = PTR_DAT_057b8520;
          puVar3 = PTR_DAT_05790818;
          puVar1 = PTR_DAT_0576f438;
          if (*(long *)(param_1 + 0x18) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_98,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
            uStack_78 = uStack_90;
            uStack_80 = uStack_98;
            lStack_70 = lStack_88;
            while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_80,*(undefined8 *)puVar8), lVar9 = lStack_70,
                  (uVar10 & 1) != 0) {
              lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              System_Action_object____ctor_1647468(lVar11,param_1,*(undefined8 *)puVar1,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__remove_OnSelectSuccessEvent_2ae8f84
                        (lVar9,lVar11);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_80,*(undefined8 *)puVar7);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar5);
            lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if ((lVar11 != 0) &&
               (System_Action___ctor_21239bc(lVar11,param_1,*(undefined8 *)puVar3,0), lVar9 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                        (lVar9,lVar11,0);
              lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)PTR_DAT_0575bac8);
              lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if ((lVar11 != 0) &&
                 (System_Action___ctor_21239bc(lVar11,param_1,*(undefined8 *)PTR_DAT_0575c450,0),
                 lVar9 != 0)) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                          (lVar9,lVar11,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

