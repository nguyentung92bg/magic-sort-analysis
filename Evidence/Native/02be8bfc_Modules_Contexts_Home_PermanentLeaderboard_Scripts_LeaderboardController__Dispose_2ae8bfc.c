/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$Dispose
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Dispose (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$Dispose
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Dispose
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Dispose_2ae8bfc
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2eb69 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793350);
                    /* try { // try from 02be8c3c to 02ce8c4b has its CatchHandler @ 02be8d40 */
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057fcc38);
    FUN_012d0dc8(PTR_DAT_057ff728);
                    /* try { // try from 02be8c64 to 02ce8c6b has its CatchHandler @ 02be8d3c */
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_057f2768);
    FUN_012d0dc8(PTR_DAT_057db3d0);
    FUN_012d0dc8(PTR_DAT_057b9db0);
                    /* try { // try from 02be8c94 to 02ce8ca3 has its CatchHandler @ 02be8d34 */
    FUN_012d0dc8(PTR_DAT_057fee20);
    FUN_012d0dc8(PTR_DAT_05796750);
                    /* try { // try from 02be8cb4 to 02ce8cd7 has its CatchHandler @ 02be8d38 */
    FUN_012d0dc8(PTR_DAT_057df630);
    FUN_012d0dc8(PTR_DAT_057ee200);
    FUN_012d0dc8(PTR_DAT_057cec90);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057da1e8);
                    /* try { // try from 02be8cec to 02ce8cfb has its CatchHandler @ 02be8d44 */
    bRam0000000005c2eb69 = 1;
  }
  puVar3 = PTR_DAT_057df630;
  puVar1 = PTR_DAT_0578b048;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
                    /* try { // try from 02be8cfc to 02ce8d5b has its CatchHandler @ 02be8bb8 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be8c94 with catch @ 02be8d34
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be8cb4 with catch @ 02be8d38
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be8c64 with catch @ 02be8d3c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be8c3c with catch @ 02be8d40
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be8cec with catch @ 02be8d44
                        */
  if ((lVar6 != 0) &&
     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057fee20,0),
     puVar2 = PTR_DAT_057cec90, lVar5 != 0)) {
                    /* try { // try from 02be8d5c to 02ce8d5f has its CatchHandler @ 02be8d6c */
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar5,lVar6,0);
                    /* catch() { ... } // from try @ 02be8d5c with catch @ 02be8d6c */
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
                    /* try { // try from 02be8d78 to 02ce8d83 has its CatchHandler @ 02be8d98 */
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 02be8d84 to 02ce8d8f has its CatchHandler @ 02be8bb8 */
                    /* try { // try from 02be8d90 to 02ce8d97 has its CatchHandler @ 02be8d98 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02be8d78 with catch @ 02be8d98
                       catch(type#2 @ 00000000) { ... } // from try @ 02be8d90 with catch @ 02be8d98
                        */
    if ((lVar6 != 0) &&
       (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057b9db0,0),
       puVar1 = PTR_DAT_057ee200, puVar2 = PTR_DAT_05793350, lVar5 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar5,lVar6,0);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar6 != 0) &&
         (System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)PTR_DAT_057f2768,0),
         lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Unsubscribe_333d1cc
                  (lVar5,lVar6,*(undefined8 *)PTR_DAT_057da1e8);
        puVar4 = PTR_DAT_057ff728;
        puVar3 = PTR_DAT_057fcc38;
        puVar1 = PTR_DAT_057db3d0;
        puVar2 = PTR_DAT_057d2d78;
        if (*(long *)(param_1 + 0x18) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_78,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
          uStack_58 = uStack_70;
          uStack_60 = uStack_78;
          lStack_50 = lStack_68;
          while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_60,*(undefined8 *)puVar4), lVar5 = lStack_50,
                (uVar7 & 1) != 0) {
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)puVar1,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__remove_OnSelectSuccessEvent_2ae8f84
                      (lVar5,lVar6);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_60,*(undefined8 *)puVar3);
          if (*(long *)(param_1 + 0x28) != 0) {
            Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Dispose_2ae9034
                      ();
            if (*(long *)(param_1 + 0x30) != 0) {
              Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Dispose_2ae905c
                        ();
              if (*(long *)(param_1 + 0x20) != 0) {
                Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Dispose_32de290
                          (*(long *)(param_1 + 0x20),0);
                if (*(long *)(param_1 + 0x38) != 0) {
                  Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Dispose_2ae925c
                            ();
                  return;
                }
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

