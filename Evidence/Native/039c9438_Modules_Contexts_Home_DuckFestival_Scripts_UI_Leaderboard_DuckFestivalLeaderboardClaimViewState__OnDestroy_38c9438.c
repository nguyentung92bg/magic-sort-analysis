/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardClaimViewState$$OnDestroy
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__OnDestroy (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardClaimViewState$$OnDestroy
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__OnDestroy
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__OnDestroy_38c9438
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c34b5d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
                    /* try { // try from 039c9468 to 03ac948f has its CatchHandler @ 039c93bc */
    FUN_012d0dc8(PTR_DAT_05810938);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039c93e8 with catch @ 039c9478
                        */
    FUN_012d0dc8(PTR_DAT_057b8da0);
    bRam0000000005c34b5d = 1;
  }
  lVar6 = *(long *)(param_1 + 0x30);
                    /* try { // try from 039c9490 to 03ac94a7 has its CatchHandler @ 039c9588 */
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 039c94a8 to 03ac94c7 has its CatchHandler @ 039c93bc */
  if ((lVar3 != 0) &&
     (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_05810938,0), lVar6 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar6,lVar3,0);
                    /* try { // try from 039c94c8 to 03ac94df has its CatchHandler @ 039c9588 */
    lVar6 = *(long *)(param_1 + 0x38);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 039c94e0 to 03ac94f3 has its CatchHandler @ 039c93bc */
                    /* try { // try from 039c94f4 to 03ac950b has its CatchHandler @ 039c9588 */
    if ((lVar3 != 0) &&
       (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_057b8da0,0), lVar6 != 0))
    {
      if ((bRam0000000005c39420 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar3,0);
        bRam0000000005c39420 = 1;
      }
      puVar1 = PTR_DAT_0578b048;
      plVar7 = (long *)(lVar6 + 0x38);
      lVar6 = *plVar7;
      while ((plVar4 = (long *)System_Delegate__Remove_23e3b70(lVar6,lVar3,0), plVar4 == (long *)0x0
             || (*plVar4 == *(long *)puVar1))) {
        lVar5 = FUN_01351224(plVar7,plVar4,lVar6);
        bVar2 = lVar6 == lVar5;
        lVar6 = lVar5;
        if (bVar2) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

