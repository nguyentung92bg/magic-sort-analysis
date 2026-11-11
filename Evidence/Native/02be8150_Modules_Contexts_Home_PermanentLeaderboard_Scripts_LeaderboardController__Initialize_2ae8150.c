/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$Initialize
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Initialize_2ae8150
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb68 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793350);
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_0578b048);
                    /* try { // try from 02be81a8 to 02ce81c7 has its CatchHandler @ 02be8218 */
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057fcc38);
                    /* try { // try from 02be81c8 to 02ce822f has its CatchHandler @ 02be80e8 */
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_057f2768);
    FUN_012d0dc8(PTR_DAT_057db3d0);
    FUN_012d0dc8(PTR_DAT_057b9db0);
    FUN_012d0dc8(PTR_DAT_057fee20);
    FUN_012d0dc8(PTR_DAT_05796750);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be81a8 with catch @ 02be8218
                        */
    FUN_012d0dc8(PTR_DAT_057df630);
    FUN_012d0dc8(PTR_DAT_057ee200);
                    /* try { // try from 02be8230 to 02ce8233 has its CatchHandler @ 02be8240 */
    FUN_012d0dc8(PTR_DAT_057cec90);
                    /* catch() { ... } // from try @ 02be8230 with catch @ 02be8240 */
    FUN_012d0dc8(PTR_DAT_057b8520);
                    /* try { // try from 02be824c to 02ce8257 has its CatchHandler @ 02be826c */
    FUN_012d0dc8(PTR_DAT_0580bcb0);
                    /* try { // try from 02be8258 to 02ce8263 has its CatchHandler @ 02be80e8 */
    bRam0000000005c2eb68 = 1;
  }
  puVar4 = PTR_DAT_057df630;
  puVar3 = PTR_DAT_057b8520;
  puVar2 = PTR_DAT_0578b048;
  uStack_58 = 0;
  lStack_50 = 0;
                    /* try { // try from 02be8264 to 02ce826b has its CatchHandler @ 02be826c */
  uStack_60 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02be824c with catch @ 02be826c
                       catch(type#2 @ 00000000) { ... } // from try @ 02be8264 with catch @ 02be826c
                        */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_05790e10);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    FUN_012d0d74();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar4);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar7 != 0) &&
       (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_057fee20,0),
       puVar1 = PTR_DAT_057cec90, lVar5 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar7,0);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar7 != 0) &&
         (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_057b9db0,0),
         puVar2 = PTR_DAT_057ee200, puVar1 = PTR_DAT_05793350, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar7,0);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar7 != 0) &&
           (System_Action_Int32Enum____ctor_1646b94(lVar7,param_1,*(undefined8 *)PTR_DAT_057f2768,0)
           , lVar5 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Subscribe_333d1b8
                    (lVar5,lVar7,*(undefined8 *)PTR_DAT_0580bcb0);
          puVar4 = PTR_DAT_057ff728;
          puVar3 = PTR_DAT_057fcc38;
          puVar2 = PTR_DAT_057db3d0;
          puVar1 = PTR_DAT_057d2d78;
          if (*(long *)(param_1 + 0x18) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_78,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
            uStack_58 = uStack_70;
            uStack_60 = uStack_78;
            lStack_50 = lStack_68;
            while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&uStack_60,*(undefined8 *)puVar4), lVar5 = lStack_50,
                  (uVar8 & 1) != 0) {
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              System_Action_object____ctor_1647468(lVar7,param_1,*(undefined8 *)puVar2,0);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__add_OnSelectSuccessEvent_2ae8530
                        (lVar5,lVar7);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_60,*(undefined8 *)puVar3);
            if (*(long *)(param_1 + 0x28) != 0) {
              Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Initialize_2ae85e0
                        ();
              if (*(long *)(param_1 + 0x30) != 0) {
                Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Initialize_2ae8608
                          ();
                if (*(long *)(param_1 + 0x20) != 0) {
                  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Initialize_32de1bc
                            (*(long *)(param_1 + 0x20),0);
                  if (*(long *)(param_1 + 0x38) != 0) {
                    Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Initialize_2ae8864
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

