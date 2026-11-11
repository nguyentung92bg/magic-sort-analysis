/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PlayersLeaderboardController$$OnTabSelected
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__OnTabSelected (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController_o* __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PlayersLeaderboardController$$OnTabSelected
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__OnTabSelected
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController_o* __this,
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__OnTabSelected_2aef740
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2eb9c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fcc38);
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_05796750);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0580b7f8);
    FUN_012d0dc8(PTR_DAT_057fff60);
    bRam0000000005c2eb9c = 1;
  }
  puVar5 = PTR_DAT_0580b7f8;
  puVar4 = PTR_DAT_057fff60;
  puVar3 = PTR_DAT_057ff728;
  puVar2 = PTR_DAT_057fcc38;
  puVar1 = PTR_DAT_0576c200;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_70,*(undefined8 *)puVar3), lVar6 = lStack_60, (uVar7 & 1) != 0
          ) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = UnityEngine_Object__op_Inequality_408e110(param_2,lVar6,0);
      if ((uVar7 & 1) == 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Select_2ae9f48(lVar6);
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Deselect_2ae989c(lVar6);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar2);
    if (param_2 != 0) {
      uVar7 = System_String__op_Equality_1ec12e0
                        (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)puVar4,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) != 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__Show_2aefd20
                    ();
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__Hide_2aef9bc
                    ();
        }
      }
      uVar7 = System_String__op_Equality_1ec12e0
                        (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)puVar5,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) != 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__Hide_2aef998
                    ();
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__Show_2aefd64
                    ();
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

