/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$OnTabSelected
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__OnTabSelected (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$OnTabSelected
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__OnTabSelected
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__OnTabSelected_2af003c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2eba4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fcc38);
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_05796750);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057fff60);
    bRam0000000005c2eba4 = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  plVar7 = (long *)(param_1 + 0x60);
  *plVar7 = param_2;
  FUN_012d0d74(plVar7,param_2);
  puVar4 = PTR_DAT_057fff60;
  puVar3 = PTR_DAT_057ff728;
  puVar2 = PTR_DAT_057fcc38;
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_70,*(undefined8 *)puVar3), lVar6 = lStack_60, (uVar5 & 1) != 0
          ) {
      lVar8 = *plVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = UnityEngine_Object__op_Equality_407f288(lVar6,lVar8,0);
      if ((uVar5 & 1) == 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Deselect_2ae989c(lVar6);
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Select_2ae9f48(lVar6);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar5 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__IsEnabled_35b1d64
                        (*(long *)(param_1 + 0x58),0);
      lVar6 = *(long *)(param_1 + 0x50);
      if (lVar6 != 0) {
        if ((uVar5 & 1) == 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
        }
        else {
          UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
          if (*plVar7 == 0) goto LAB_02bf021c;
          uVar5 = System_String__op_Equality_1ec12e0
                            (*(undefined8 *)(*plVar7 + 0x50),*(undefined8 *)puVar4,0);
          if ((uVar5 & 1) == 0) {
            Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__ShowCountryLeaderboard_2af035c
                      (param_1);
          }
          else {
            Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__ShowWorldLeaderboard_2af029c
                      (param_1);
          }
        }
        return;
      }
    }
  }
LAB_02bf021c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

