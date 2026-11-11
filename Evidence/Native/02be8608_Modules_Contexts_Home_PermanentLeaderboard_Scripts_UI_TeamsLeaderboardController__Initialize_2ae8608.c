/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$Initialize
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Initialize_2ae8608
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eba1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057c94c0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057fcc38);
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_05796750);
    FUN_012d0dc8(PTR_DAT_0578f7f0);
    FUN_012d0dc8(PTR_DAT_057fe700);
    bRam0000000005c2eba1 = 1;
  }
  puVar2 = PTR_DAT_0578b048;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_057c94c0);
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar6;
    FUN_012d0d74(plVar7,lVar6);
    lVar8 = *plVar7;
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar6 != 0) &&
       (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057fe700,0), lVar8 != 0))
    {
      Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__add_OnUserTeamDataUpdated_35a2c84
                (lVar8,lVar6,0);
      puVar4 = PTR_DAT_057ff728;
      puVar3 = PTR_DAT_057fcc38;
      puVar2 = PTR_DAT_057d2d78;
      puVar1 = PTR_DAT_0578f7f0;
      if (*(long *)(param_1 + 0x18) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_58,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
        while( true ) {
          uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_58,*(undefined8 *)puVar4);
          lVar6 = lStack_48;
          if ((uVar5 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_58,*(undefined8 *)puVar3);
            return;
          }
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar8 == 0) break;
          System_Action_object____ctor_1647468(lVar8,param_1,*(undefined8 *)puVar1,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__add_OnSelectSuccessEvent_2ae8530
                    (lVar6,lVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

