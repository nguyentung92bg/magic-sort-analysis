/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardClaimViewState$$Awake
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__Awake (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardClaimViewState$$Awake
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__Awake
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__Awake_38c9358
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
  if ((bRam0000000005c34b5c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05810938);
                    /* try { // try from 039c9398 to 03ac93a7 has its CatchHandler @ 039c93a8 */
    FUN_012d0dc8(PTR_DAT_057b8da0);
    bRam0000000005c34b5c = 1;
  }
                    /* catch() { ... } // from try @ 039c92e8 with catch @ 039c93a8
                       catch() { ... } // from try @ 039c9314 with catch @ 039c93a8
                       catch() { ... } // from try @ 039c9398 with catch @ 039c93a8 */
                    /* try { // try from 039c93ac to 03ac93af has its CatchHandler @ 039c93b8 */
  lVar6 = *(long *)(param_1 + 0x30);
                    /* try { // try from 039c93b0 to 03ac93bb has its CatchHandler @ 039c921c */
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039c93ac with catch @ 039c93b8
                        */
                    /* catch() { ... } // from try @ 039c9468 with catch @ 039c93bc
                       catch() { ... } // from try @ 039c94a8 with catch @ 039c93bc
                       catch() { ... } // from try @ 039c94e0 with catch @ 039c93bc
                       catch() { ... } // from try @ 039c950c with catch @ 039c93bc
                       catch() { ... } // from try @ 039c9590 with catch @ 039c93bc */
  if ((lVar3 != 0) &&
     (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_05810938,0), lVar6 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar6,lVar3,0);
                    /* try { // try from 039c93e8 to 03ac9467 has its CatchHandler @ 039c9478 */
    lVar6 = *(long *)(param_1 + 0x38);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar3 != 0) &&
       (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_057b8da0,0), lVar6 != 0))
    {
      if ((bRam0000000005c3941f & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar3,0);
        bRam0000000005c3941f = 1;
      }
      puVar1 = PTR_DAT_0578b048;
      plVar7 = (long *)(lVar6 + 0x38);
      lVar6 = *plVar7;
      while ((plVar4 = (long *)System_Delegate__Combine_23e3964(lVar6,lVar3,0),
             plVar4 == (long *)0x0 || (*plVar4 == *(long *)puVar1))) {
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

