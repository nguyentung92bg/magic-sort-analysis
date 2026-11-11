/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$Initialize
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__Initialize_2ae8864
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
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb8a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
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
    bRam0000000005c2eb8a = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
    uVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar9,*(undefined8 *)PTR_DAT_057ee3f0);
    *(undefined8 *)(param_1 + 0x90) = uVar10;
    FUN_012d0d74((undefined8 *)(param_1 + 0x90),uVar10);
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Initialize_2aed54c();
      if (*(long *)(param_1 + 0x28) != 0) {
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__Initialize_2aecc98();
        puVar8 = PTR_DAT_05803870;
        puVar7 = PTR_DAT_057ff728;
        puVar6 = PTR_DAT_057fcc38;
        puVar5 = PTR_DAT_057d2d78;
        puVar4 = PTR_DAT_057ca298;
        puVar3 = PTR_DAT_057b8520;
        puVar2 = PTR_DAT_0578b048;
        puVar1 = PTR_DAT_0576f438;
        if (*(long *)(param_1 + 0x18) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_98,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
          uStack_78 = uStack_90;
          uStack_80 = uStack_98;
          lStack_70 = lStack_88;
          while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_80,*(undefined8 *)puVar7), lVar9 = lStack_70,
                (uVar11 & 1) != 0) {
            lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            System_Action_object____ctor_1647468(lVar12,param_1,*(undefined8 *)puVar1,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__add_OnSelectSuccessEvent_2ae8530
                      (lVar9,lVar12);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)puVar6);
          lVar12 = *(long *)(param_1 + 0x50);
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar9 != 0) &&
             (System_Action___ctor_21239bc(lVar9,param_1,*(undefined8 *)puVar8,0), lVar12 != 0)) {
            Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                      (lVar12,lVar9,0);
            Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__InitializeRewardContainer_2aed844
                      (param_1);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar4);
            lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if ((lVar12 != 0) &&
               (System_Action___ctor_21239bc(lVar12,param_1,*(undefined8 *)PTR_DAT_05790818,0),
               lVar9 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                        (lVar9,lVar12,0);
                    /* catch() { ... } // from try @ 02be8b34 with catch @ 02be8b14
                       catch() { ... } // from try @ 02be8b64 with catch @ 02be8b14
                       catch() { ... } // from try @ 02be8ba0 with catch @ 02be8b14 */
              lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)PTR_DAT_0575bac8);
                    /* try { // try from 02be8b2c to 02ce8b33 has its CatchHandler @ 02be8b48 */
              lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 02be8b34 to 02ce8b5f has its CatchHandler @ 02be8b14 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be8b2c with catch @ 02be8b48
                        */
              if ((lVar12 != 0) &&
                 (System_Action___ctor_21239bc(lVar12,param_1,*(undefined8 *)PTR_DAT_0575c450,0),
                 lVar9 != 0)) {
                    /* try { // try from 02be8b60 to 02ce8b63 has its CatchHandler @ 02be8b90 */
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                          (lVar9,lVar12,0);
                    /* try { // try from 02be8b64 to 02ce8b93 has its CatchHandler @ 02be8b14 */
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

