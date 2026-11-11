/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PlayersLeaderboardController$$Awake
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Awake (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PlayersLeaderboardController$$Awake
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Awake
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Awake_2aef9e0
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
  
  if ((bRam0000000005c2eb9a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2d78);
    FUN_012d0dc8(PTR_DAT_057fcc38);
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_05796750);
    FUN_012d0dc8(PTR_DAT_05789388);
    bRam0000000005c2eb9a = 1;
  }
  puVar4 = PTR_DAT_057ff728;
  puVar3 = PTR_DAT_057fcc38;
  puVar2 = PTR_DAT_057d2d78;
  puVar1 = PTR_DAT_05789388;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
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
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__add_OnSelectSuccessEvent_2ae8530
                (lVar5,lVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

